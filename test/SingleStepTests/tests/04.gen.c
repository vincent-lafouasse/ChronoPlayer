#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_04, _04_0000) {
    const struct CPU_State initial_cpu = {.pc=0x3e6b, .a=0x7a, .x=0xc5, .y=0x3a, .sp=0x92, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x28}, {.addr=0x3e6b, .value=0x04}, {.addr=0x3e6c, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x3e6d, .a=0x7a, .x=0xc5, .y=0x3a, .sp=0x92, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x28}, {.addr=0x3e6b, .value=0x04}, {.addr=0x3e6c, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e6b, .value=0x04, .type=IO_READ},
        {.addr=0x3e6c, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0001) {
    const struct CPU_State initial_cpu = {.pc=0x9369, .a=0x32, .x=0x51, .y=0xe4, .sp=0xaa, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0x0f}, {.addr=0x9369, .value=0x04}, {.addr=0x936a, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x936b, .a=0x3f, .x=0x51, .y=0xe4, .sp=0xaa, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0x0f}, {.addr=0x9369, .value=0x04}, {.addr=0x936a, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x9369, .value=0x04, .type=IO_READ},
        {.addr=0x936a, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0002) {
    const struct CPU_State initial_cpu = {.pc=0xc8d8, .a=0xac, .x=0x69, .y=0x06, .sp=0x5b, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x21}, {.addr=0xc8d8, .value=0x04}, {.addr=0xc8d9, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xc8da, .a=0xad, .x=0x69, .y=0x06, .sp=0x5b, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x21}, {.addr=0xc8d8, .value=0x04}, {.addr=0xc8d9, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xc8d8, .value=0x04, .type=IO_READ},
        {.addr=0xc8d9, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0003) {
    const struct CPU_State initial_cpu = {.pc=0x11d0, .a=0x16, .x=0x94, .y=0xe7, .sp=0x61, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0xd2}, {.addr=0x11d0, .value=0x04}, {.addr=0x11d1, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x11d2, .a=0xd6, .x=0x94, .y=0xe7, .sp=0x61, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0xd2}, {.addr=0x11d0, .value=0x04}, {.addr=0x11d1, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x11d0, .value=0x04, .type=IO_READ},
        {.addr=0x11d1, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0004) {
    const struct CPU_State initial_cpu = {.pc=0xb36d, .a=0xe9, .x=0x84, .y=0xab, .sp=0x27, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0x15}, {.addr=0xb36d, .value=0x04}, {.addr=0xb36e, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0xb36f, .a=0xfd, .x=0x84, .y=0xab, .sp=0x27, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0x15}, {.addr=0xb36d, .value=0x04}, {.addr=0xb36e, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb36d, .value=0x04, .type=IO_READ},
        {.addr=0xb36e, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0005) {
    const struct CPU_State initial_cpu = {.pc=0x06ae, .a=0x01, .x=0x56, .y=0x96, .sp=0x22, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0002, .value=0x9e}, {.addr=0x06ae, .value=0x04}, {.addr=0x06af, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x06b0, .a=0x9f, .x=0x56, .y=0x96, .sp=0x22, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0002, .value=0x9e}, {.addr=0x06ae, .value=0x04}, {.addr=0x06af, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x06ae, .value=0x04, .type=IO_READ},
        {.addr=0x06af, .value=0x02, .type=IO_READ},
        {.addr=0x0002, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0006) {
    const struct CPU_State initial_cpu = {.pc=0x273e, .a=0xcb, .x=0x03, .y=0xc0, .sp=0x9c, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0x71}, {.addr=0x273e, .value=0x04}, {.addr=0x273f, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x2740, .a=0xfb, .x=0x03, .y=0xc0, .sp=0x9c, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0x71}, {.addr=0x273e, .value=0x04}, {.addr=0x273f, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x273e, .value=0x04, .type=IO_READ},
        {.addr=0x273f, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0007) {
    const struct CPU_State initial_cpu = {.pc=0xc26e, .a=0xd7, .x=0x98, .y=0xe5, .sp=0x13, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0x47}, {.addr=0xc26e, .value=0x04}, {.addr=0xc26f, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0xc270, .a=0xd7, .x=0x98, .y=0xe5, .sp=0x13, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0x47}, {.addr=0xc26e, .value=0x04}, {.addr=0xc26f, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc26e, .value=0x04, .type=IO_READ},
        {.addr=0xc26f, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0008) {
    const struct CPU_State initial_cpu = {.pc=0xe4cd, .a=0xa2, .x=0xd3, .y=0x9f, .sp=0x42, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0xf5}, {.addr=0xe4cd, .value=0x04}, {.addr=0xe4ce, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xe4cf, .a=0xf7, .x=0xd3, .y=0x9f, .sp=0x42, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0xf5}, {.addr=0xe4cd, .value=0x04}, {.addr=0xe4ce, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xe4cd, .value=0x04, .type=IO_READ},
        {.addr=0xe4ce, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0009) {
    const struct CPU_State initial_cpu = {.pc=0x08bb, .a=0xc6, .x=0x5f, .y=0x6e, .sp=0x8e, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0x88}, {.addr=0x08bb, .value=0x04}, {.addr=0x08bc, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x08bd, .a=0xce, .x=0x5f, .y=0x6e, .sp=0x8e, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0x88}, {.addr=0x08bb, .value=0x04}, {.addr=0x08bc, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x08bb, .value=0x04, .type=IO_READ},
        {.addr=0x08bc, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_000A) {
    const struct CPU_State initial_cpu = {.pc=0x3642, .a=0xe8, .x=0x9e, .y=0xa1, .sp=0x3f, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0022, .value=0x08}, {.addr=0x3642, .value=0x04}, {.addr=0x3643, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x3644, .a=0xe8, .x=0x9e, .y=0xa1, .sp=0x3f, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0022, .value=0x08}, {.addr=0x3642, .value=0x04}, {.addr=0x3643, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x3642, .value=0x04, .type=IO_READ},
        {.addr=0x3643, .value=0x22, .type=IO_READ},
        {.addr=0x0022, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_000B) {
    const struct CPU_State initial_cpu = {.pc=0xf07a, .a=0x83, .x=0x15, .y=0x2c, .sp=0x10, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0xb0}, {.addr=0xf07a, .value=0x04}, {.addr=0xf07b, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xf07c, .a=0xb3, .x=0x15, .y=0x2c, .sp=0x10, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0xb0}, {.addr=0xf07a, .value=0x04}, {.addr=0xf07b, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xf07a, .value=0x04, .type=IO_READ},
        {.addr=0xf07b, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_000C) {
    const struct CPU_State initial_cpu = {.pc=0xe7c8, .a=0x26, .x=0x1e, .y=0xea, .sp=0xc8, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0xd4}, {.addr=0xe7c8, .value=0x04}, {.addr=0xe7c9, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0xe7ca, .a=0xf6, .x=0x1e, .y=0xea, .sp=0xc8, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0xd4}, {.addr=0xe7c8, .value=0x04}, {.addr=0xe7c9, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0xe7c8, .value=0x04, .type=IO_READ},
        {.addr=0xe7c9, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_000D) {
    const struct CPU_State initial_cpu = {.pc=0x4ea3, .a=0xdf, .x=0x57, .y=0x54, .sp=0xcd, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0xf1}, {.addr=0x4ea3, .value=0x04}, {.addr=0x4ea4, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x4ea5, .a=0xff, .x=0x57, .y=0x54, .sp=0xcd, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0xf1}, {.addr=0x4ea3, .value=0x04}, {.addr=0x4ea4, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ea3, .value=0x04, .type=IO_READ},
        {.addr=0x4ea4, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_000E) {
    const struct CPU_State initial_cpu = {.pc=0xd199, .a=0xdc, .x=0x12, .y=0x87, .sp=0xaa, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0x29}, {.addr=0xd199, .value=0x04}, {.addr=0xd19a, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0xd19b, .a=0xfd, .x=0x12, .y=0x87, .sp=0xaa, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0x29}, {.addr=0xd199, .value=0x04}, {.addr=0xd19a, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0xd199, .value=0x04, .type=IO_READ},
        {.addr=0xd19a, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_000F) {
    const struct CPU_State initial_cpu = {.pc=0x90a1, .a=0x6a, .x=0x41, .y=0x35, .sp=0x03, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0x1f}, {.addr=0x90a1, .value=0x04}, {.addr=0x90a2, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x90a3, .a=0x7f, .x=0x41, .y=0x35, .sp=0x03, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0x1f}, {.addr=0x90a1, .value=0x04}, {.addr=0x90a2, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x90a1, .value=0x04, .type=IO_READ},
        {.addr=0x90a2, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0010) {
    const struct CPU_State initial_cpu = {.pc=0x30c0, .a=0x83, .x=0xcb, .y=0x9a, .sp=0x77, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c1, .value=0x2b}, {.addr=0x30c0, .value=0x04}, {.addr=0x30c1, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x30c2, .a=0xab, .x=0xcb, .y=0x9a, .sp=0x77, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c1, .value=0x2b}, {.addr=0x30c0, .value=0x04}, {.addr=0x30c1, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x30c0, .value=0x04, .type=IO_READ},
        {.addr=0x30c1, .value=0xc1, .type=IO_READ},
        {.addr=0x01c1, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0011) {
    const struct CPU_State initial_cpu = {.pc=0x7ecd, .a=0x51, .x=0xe7, .y=0x1c, .sp=0x3a, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0x1d}, {.addr=0x7ecd, .value=0x04}, {.addr=0x7ece, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x7ecf, .a=0x5d, .x=0xe7, .y=0x1c, .sp=0x3a, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0x1d}, {.addr=0x7ecd, .value=0x04}, {.addr=0x7ece, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ecd, .value=0x04, .type=IO_READ},
        {.addr=0x7ece, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0012) {
    const struct CPU_State initial_cpu = {.pc=0x6073, .a=0xe6, .x=0x2b, .y=0x59, .sp=0xf8, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0xd8}, {.addr=0x6073, .value=0x04}, {.addr=0x6074, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x6075, .a=0xfe, .x=0x2b, .y=0x59, .sp=0xf8, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0xd8}, {.addr=0x6073, .value=0x04}, {.addr=0x6074, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6073, .value=0x04, .type=IO_READ},
        {.addr=0x6074, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0013) {
    const struct CPU_State initial_cpu = {.pc=0x3acd, .a=0xcc, .x=0xd4, .y=0xd7, .sp=0xa1, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0x51}, {.addr=0x3acd, .value=0x04}, {.addr=0x3ace, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x3acf, .a=0xdd, .x=0xd4, .y=0xd7, .sp=0xa1, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0x51}, {.addr=0x3acd, .value=0x04}, {.addr=0x3ace, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x3acd, .value=0x04, .type=IO_READ},
        {.addr=0x3ace, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0014) {
    const struct CPU_State initial_cpu = {.pc=0x7e64, .a=0x4a, .x=0x67, .y=0x2c, .sp=0x70, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0x51}, {.addr=0x7e64, .value=0x04}, {.addr=0x7e65, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x7e66, .a=0x5b, .x=0x67, .y=0x2c, .sp=0x70, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0x51}, {.addr=0x7e64, .value=0x04}, {.addr=0x7e65, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e64, .value=0x04, .type=IO_READ},
        {.addr=0x7e65, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0015) {
    const struct CPU_State initial_cpu = {.pc=0x3598, .a=0xd6, .x=0x6d, .y=0xee, .sp=0x9e, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0x11}, {.addr=0x3598, .value=0x04}, {.addr=0x3599, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x359a, .a=0xd7, .x=0x6d, .y=0xee, .sp=0x9e, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0x11}, {.addr=0x3598, .value=0x04}, {.addr=0x3599, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x3598, .value=0x04, .type=IO_READ},
        {.addr=0x3599, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0016) {
    const struct CPU_State initial_cpu = {.pc=0x6a72, .a=0xb1, .x=0xef, .y=0x0c, .sp=0x15, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0xbd}, {.addr=0x6a72, .value=0x04}, {.addr=0x6a73, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x6a74, .a=0xbd, .x=0xef, .y=0x0c, .sp=0x15, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0xbd}, {.addr=0x6a72, .value=0x04}, {.addr=0x6a73, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a72, .value=0x04, .type=IO_READ},
        {.addr=0x6a73, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0017) {
    const struct CPU_State initial_cpu = {.pc=0xb84e, .a=0xbe, .x=0x07, .y=0x82, .sp=0x69, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x4f}, {.addr=0xb84e, .value=0x04}, {.addr=0xb84f, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xb850, .a=0xff, .x=0x07, .y=0x82, .sp=0x69, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x4f}, {.addr=0xb84e, .value=0x04}, {.addr=0xb84f, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xb84e, .value=0x04, .type=IO_READ},
        {.addr=0xb84f, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0018) {
    const struct CPU_State initial_cpu = {.pc=0x4e90, .a=0x47, .x=0xbb, .y=0x7a, .sp=0x9e, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0xf4}, {.addr=0x4e90, .value=0x04}, {.addr=0x4e91, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x4e92, .a=0xf7, .x=0xbb, .y=0x7a, .sp=0x9e, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0xf4}, {.addr=0x4e90, .value=0x04}, {.addr=0x4e91, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e90, .value=0x04, .type=IO_READ},
        {.addr=0x4e91, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0019) {
    const struct CPU_State initial_cpu = {.pc=0x7e1c, .a=0x83, .x=0x1e, .y=0x4c, .sp=0x74, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0x29}, {.addr=0x7e1c, .value=0x04}, {.addr=0x7e1d, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x7e1e, .a=0xab, .x=0x1e, .y=0x4c, .sp=0x74, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0x29}, {.addr=0x7e1c, .value=0x04}, {.addr=0x7e1d, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e1c, .value=0x04, .type=IO_READ},
        {.addr=0x7e1d, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_001A) {
    const struct CPU_State initial_cpu = {.pc=0x7f56, .a=0xaa, .x=0x11, .y=0x2b, .sp=0x64, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0x70}, {.addr=0x7f56, .value=0x04}, {.addr=0x7f57, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x7f58, .a=0xfa, .x=0x11, .y=0x2b, .sp=0x64, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0x70}, {.addr=0x7f56, .value=0x04}, {.addr=0x7f57, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f56, .value=0x04, .type=IO_READ},
        {.addr=0x7f57, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_001B) {
    const struct CPU_State initial_cpu = {.pc=0x489f, .a=0xc0, .x=0x52, .y=0x30, .sp=0xb6, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0x1b}, {.addr=0x489f, .value=0x04}, {.addr=0x48a0, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x48a1, .a=0xdb, .x=0x52, .y=0x30, .sp=0xb6, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0x1b}, {.addr=0x489f, .value=0x04}, {.addr=0x48a0, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x489f, .value=0x04, .type=IO_READ},
        {.addr=0x48a0, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_001C) {
    const struct CPU_State initial_cpu = {.pc=0x5143, .a=0x18, .x=0x2a, .y=0xbe, .sp=0x5e, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0xeb}, {.addr=0x5143, .value=0x04}, {.addr=0x5144, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x5145, .a=0xfb, .x=0x2a, .y=0xbe, .sp=0x5e, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0xeb}, {.addr=0x5143, .value=0x04}, {.addr=0x5144, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x5143, .value=0x04, .type=IO_READ},
        {.addr=0x5144, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_001D) {
    const struct CPU_State initial_cpu = {.pc=0x5f96, .a=0x20, .x=0x57, .y=0xd7, .sp=0x2d, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0xc0}, {.addr=0x5f96, .value=0x04}, {.addr=0x5f97, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x5f98, .a=0xe0, .x=0x57, .y=0xd7, .sp=0x2d, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0xc0}, {.addr=0x5f96, .value=0x04}, {.addr=0x5f97, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f96, .value=0x04, .type=IO_READ},
        {.addr=0x5f97, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_001E) {
    const struct CPU_State initial_cpu = {.pc=0xb07b, .a=0xa7, .x=0x47, .y=0xab, .sp=0x02, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0169, .value=0xa3}, {.addr=0xb07b, .value=0x04}, {.addr=0xb07c, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xb07d, .a=0xa7, .x=0x47, .y=0xab, .sp=0x02, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0169, .value=0xa3}, {.addr=0xb07b, .value=0x04}, {.addr=0xb07c, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xb07b, .value=0x04, .type=IO_READ},
        {.addr=0xb07c, .value=0x69, .type=IO_READ},
        {.addr=0x0169, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_001F) {
    const struct CPU_State initial_cpu = {.pc=0xde35, .a=0xdb, .x=0x9a, .y=0x99, .sp=0xc6, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0x6c}, {.addr=0xde35, .value=0x04}, {.addr=0xde36, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0xde37, .a=0xff, .x=0x9a, .y=0x99, .sp=0xc6, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0x6c}, {.addr=0xde35, .value=0x04}, {.addr=0xde36, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0xde35, .value=0x04, .type=IO_READ},
        {.addr=0xde36, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0020) {
    const struct CPU_State initial_cpu = {.pc=0x52d6, .a=0x88, .x=0x8f, .y=0x08, .sp=0x13, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0x2d}, {.addr=0x52d6, .value=0x04}, {.addr=0x52d7, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x52d8, .a=0xad, .x=0x8f, .y=0x08, .sp=0x13, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0x2d}, {.addr=0x52d6, .value=0x04}, {.addr=0x52d7, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x52d6, .value=0x04, .type=IO_READ},
        {.addr=0x52d7, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0021) {
    const struct CPU_State initial_cpu = {.pc=0x4ad5, .a=0xc2, .x=0x61, .y=0xcb, .sp=0xa4, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0x2e}, {.addr=0x4ad5, .value=0x04}, {.addr=0x4ad6, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x4ad7, .a=0xee, .x=0x61, .y=0xcb, .sp=0xa4, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0x2e}, {.addr=0x4ad5, .value=0x04}, {.addr=0x4ad6, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ad5, .value=0x04, .type=IO_READ},
        {.addr=0x4ad6, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0022) {
    const struct CPU_State initial_cpu = {.pc=0x0001, .a=0x59, .x=0x76, .y=0x40, .sp=0x83, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0001, .value=0x04}, {.addr=0x0002, .value=0x9b}, {.addr=0x009b, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x0003, .a=0xdd, .x=0x76, .y=0x40, .sp=0x83, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0001, .value=0x04}, {.addr=0x0002, .value=0x9b}, {.addr=0x009b, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x0001, .value=0x04, .type=IO_READ},
        {.addr=0x0002, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0023) {
    const struct CPU_State initial_cpu = {.pc=0xf9ea, .a=0x54, .x=0x83, .y=0x8c, .sp=0x82, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0xa0}, {.addr=0xf9ea, .value=0x04}, {.addr=0xf9eb, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xf9ec, .a=0xf4, .x=0x83, .y=0x8c, .sp=0x82, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0xa0}, {.addr=0xf9ea, .value=0x04}, {.addr=0xf9eb, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9ea, .value=0x04, .type=IO_READ},
        {.addr=0xf9eb, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0024) {
    const struct CPU_State initial_cpu = {.pc=0x6a4c, .a=0xdf, .x=0x38, .y=0x30, .sp=0xe6, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0x27}, {.addr=0x6a4c, .value=0x04}, {.addr=0x6a4d, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x6a4e, .a=0xff, .x=0x38, .y=0x30, .sp=0xe6, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0x27}, {.addr=0x6a4c, .value=0x04}, {.addr=0x6a4d, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a4c, .value=0x04, .type=IO_READ},
        {.addr=0x6a4d, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0025) {
    const struct CPU_State initial_cpu = {.pc=0xd284, .a=0x30, .x=0xaf, .y=0x49, .sp=0xb6, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0x7c}, {.addr=0xd284, .value=0x04}, {.addr=0xd285, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0xd286, .a=0x7c, .x=0xaf, .y=0x49, .sp=0xb6, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0x7c}, {.addr=0xd284, .value=0x04}, {.addr=0xd285, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0xd284, .value=0x04, .type=IO_READ},
        {.addr=0xd285, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0026) {
    const struct CPU_State initial_cpu = {.pc=0x3b35, .a=0x77, .x=0xe4, .y=0x83, .sp=0x8e, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0xbd}, {.addr=0x3b35, .value=0x04}, {.addr=0x3b36, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x3b37, .a=0xff, .x=0xe4, .y=0x83, .sp=0x8e, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0xbd}, {.addr=0x3b35, .value=0x04}, {.addr=0x3b36, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b35, .value=0x04, .type=IO_READ},
        {.addr=0x3b36, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0028) {
    const struct CPU_State initial_cpu = {.pc=0xca14, .a=0xd6, .x=0xd1, .y=0x07, .sp=0x63, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0x52}, {.addr=0xca14, .value=0x04}, {.addr=0xca15, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0xca16, .a=0xd6, .x=0xd1, .y=0x07, .sp=0x63, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0x52}, {.addr=0xca14, .value=0x04}, {.addr=0xca15, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0xca14, .value=0x04, .type=IO_READ},
        {.addr=0xca15, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0029) {
    const struct CPU_State initial_cpu = {.pc=0x2a72, .a=0x93, .x=0x12, .y=0xc7, .sp=0x20, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0xd0}, {.addr=0x2a72, .value=0x04}, {.addr=0x2a73, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x2a74, .a=0xd3, .x=0x12, .y=0xc7, .sp=0x20, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0xd0}, {.addr=0x2a72, .value=0x04}, {.addr=0x2a73, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a72, .value=0x04, .type=IO_READ},
        {.addr=0x2a73, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_002A) {
    const struct CPU_State initial_cpu = {.pc=0x06ba, .a=0x46, .x=0x48, .y=0x28, .sp=0xe9, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0x57}, {.addr=0x06ba, .value=0x04}, {.addr=0x06bb, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x06bc, .a=0x57, .x=0x48, .y=0x28, .sp=0xe9, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0x57}, {.addr=0x06ba, .value=0x04}, {.addr=0x06bb, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x06ba, .value=0x04, .type=IO_READ},
        {.addr=0x06bb, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_002B) {
    const struct CPU_State initial_cpu = {.pc=0x6aa2, .a=0x00, .x=0x80, .y=0xf1, .sp=0xa4, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0xc6}, {.addr=0x6aa2, .value=0x04}, {.addr=0x6aa3, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x6aa4, .a=0xc6, .x=0x80, .y=0xf1, .sp=0xa4, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0xc6}, {.addr=0x6aa2, .value=0x04}, {.addr=0x6aa3, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6aa2, .value=0x04, .type=IO_READ},
        {.addr=0x6aa3, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_002C) {
    const struct CPU_State initial_cpu = {.pc=0x77b2, .a=0x9a, .x=0x62, .y=0xfe, .sp=0xec, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0xa7}, {.addr=0x77b2, .value=0x04}, {.addr=0x77b3, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x77b4, .a=0xbf, .x=0x62, .y=0xfe, .sp=0xec, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0xa7}, {.addr=0x77b2, .value=0x04}, {.addr=0x77b3, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x77b2, .value=0x04, .type=IO_READ},
        {.addr=0x77b3, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_002D) {
    const struct CPU_State initial_cpu = {.pc=0x9203, .a=0x42, .x=0xa8, .y=0x21, .sp=0xc3, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0xe0}, {.addr=0x9203, .value=0x04}, {.addr=0x9204, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x9205, .a=0xe2, .x=0xa8, .y=0x21, .sp=0xc3, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0xe0}, {.addr=0x9203, .value=0x04}, {.addr=0x9204, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x9203, .value=0x04, .type=IO_READ},
        {.addr=0x9204, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_002E) {
    const struct CPU_State initial_cpu = {.pc=0xabf4, .a=0xf3, .x=0x9a, .y=0xc7, .sp=0x03, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0x5a}, {.addr=0xabf4, .value=0x04}, {.addr=0xabf5, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0xabf6, .a=0xfb, .x=0x9a, .y=0xc7, .sp=0x03, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0x5a}, {.addr=0xabf4, .value=0x04}, {.addr=0xabf5, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0xabf4, .value=0x04, .type=IO_READ},
        {.addr=0xabf5, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_002F) {
    const struct CPU_State initial_cpu = {.pc=0x09b3, .a=0x48, .x=0xc4, .y=0x94, .sp=0xca, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x33}, {.addr=0x09b3, .value=0x04}, {.addr=0x09b4, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x09b5, .a=0x7b, .x=0xc4, .y=0x94, .sp=0xca, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x33}, {.addr=0x09b3, .value=0x04}, {.addr=0x09b4, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x09b3, .value=0x04, .type=IO_READ},
        {.addr=0x09b4, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0030) {
    const struct CPU_State initial_cpu = {.pc=0x1c8e, .a=0x1e, .x=0x86, .y=0x3d, .sp=0x72, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0xf6}, {.addr=0x1c8e, .value=0x04}, {.addr=0x1c8f, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x1c90, .a=0xfe, .x=0x86, .y=0x3d, .sp=0x72, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0xf6}, {.addr=0x1c8e, .value=0x04}, {.addr=0x1c8f, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c8e, .value=0x04, .type=IO_READ},
        {.addr=0x1c8f, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0031) {
    const struct CPU_State initial_cpu = {.pc=0x0000, .a=0x45, .x=0x52, .y=0xf9, .sp=0xf8, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x04}, {.addr=0x0001, .value=0x0c}, {.addr=0x010c, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x0002, .a=0x57, .x=0x52, .y=0xf9, .sp=0xf8, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x04}, {.addr=0x0001, .value=0x0c}, {.addr=0x010c, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x0000, .value=0x04, .type=IO_READ},
        {.addr=0x0001, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0032) {
    const struct CPU_State initial_cpu = {.pc=0x38c4, .a=0x85, .x=0xe7, .y=0x8b, .sp=0xb2, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0168, .value=0xcd}, {.addr=0x38c4, .value=0x04}, {.addr=0x38c5, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x38c6, .a=0xcd, .x=0xe7, .y=0x8b, .sp=0xb2, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0168, .value=0xcd}, {.addr=0x38c4, .value=0x04}, {.addr=0x38c5, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x38c4, .value=0x04, .type=IO_READ},
        {.addr=0x38c5, .value=0x68, .type=IO_READ},
        {.addr=0x0168, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0034) {
    const struct CPU_State initial_cpu = {.pc=0xe9d1, .a=0x09, .x=0xfb, .y=0xd1, .sp=0x4f, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ee, .value=0xee}, {.addr=0xe9d1, .value=0x04}, {.addr=0xe9d2, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xe9d3, .a=0xef, .x=0xfb, .y=0xd1, .sp=0x4f, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ee, .value=0xee}, {.addr=0xe9d1, .value=0x04}, {.addr=0xe9d2, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xe9d1, .value=0x04, .type=IO_READ},
        {.addr=0xe9d2, .value=0xee, .type=IO_READ},
        {.addr=0x01ee, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0035) {
    const struct CPU_State initial_cpu = {.pc=0x3e78, .a=0xbe, .x=0x2b, .y=0x38, .sp=0x44, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0xc9}, {.addr=0x3e78, .value=0x04}, {.addr=0x3e79, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x3e7a, .a=0xff, .x=0x2b, .y=0x38, .sp=0x44, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0xc9}, {.addr=0x3e78, .value=0x04}, {.addr=0x3e79, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e78, .value=0x04, .type=IO_READ},
        {.addr=0x3e79, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0036) {
    const struct CPU_State initial_cpu = {.pc=0x4c5c, .a=0x41, .x=0x95, .y=0x61, .sp=0x8d, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0x6f}, {.addr=0x4c5c, .value=0x04}, {.addr=0x4c5d, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x4c5e, .a=0x6f, .x=0x95, .y=0x61, .sp=0x8d, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0x6f}, {.addr=0x4c5c, .value=0x04}, {.addr=0x4c5d, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c5c, .value=0x04, .type=IO_READ},
        {.addr=0x4c5d, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0038) {
    const struct CPU_State initial_cpu = {.pc=0x5271, .a=0x98, .x=0xae, .y=0x8a, .sp=0x1f, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0x7d}, {.addr=0x5271, .value=0x04}, {.addr=0x5272, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x5273, .a=0xfd, .x=0xae, .y=0x8a, .sp=0x1f, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0x7d}, {.addr=0x5271, .value=0x04}, {.addr=0x5272, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5271, .value=0x04, .type=IO_READ},
        {.addr=0x5272, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0039) {
    const struct CPU_State initial_cpu = {.pc=0x7b55, .a=0x14, .x=0x6f, .y=0x17, .sp=0x01, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0xb5}, {.addr=0x7b55, .value=0x04}, {.addr=0x7b56, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x7b57, .a=0xb5, .x=0x6f, .y=0x17, .sp=0x01, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0xb5}, {.addr=0x7b55, .value=0x04}, {.addr=0x7b56, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b55, .value=0x04, .type=IO_READ},
        {.addr=0x7b56, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_003A) {
    const struct CPU_State initial_cpu = {.pc=0x821e, .a=0xd1, .x=0xae, .y=0x2e, .sp=0x61, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x7f}, {.addr=0x821e, .value=0x04}, {.addr=0x821f, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x8220, .a=0xff, .x=0xae, .y=0x2e, .sp=0x61, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x7f}, {.addr=0x821e, .value=0x04}, {.addr=0x821f, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x821e, .value=0x04, .type=IO_READ},
        {.addr=0x821f, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_003B) {
    const struct CPU_State initial_cpu = {.pc=0x6486, .a=0xbb, .x=0x69, .y=0x18, .sp=0xf4, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0xc0}, {.addr=0x6486, .value=0x04}, {.addr=0x6487, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x6488, .a=0xfb, .x=0x69, .y=0x18, .sp=0xf4, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0xc0}, {.addr=0x6486, .value=0x04}, {.addr=0x6487, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x6486, .value=0x04, .type=IO_READ},
        {.addr=0x6487, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_003C) {
    const struct CPU_State initial_cpu = {.pc=0x6218, .a=0x69, .x=0x05, .y=0xc0, .sp=0x73, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0xdc}, {.addr=0x6218, .value=0x04}, {.addr=0x6219, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x621a, .a=0xfd, .x=0x05, .y=0xc0, .sp=0x73, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0xdc}, {.addr=0x6218, .value=0x04}, {.addr=0x6219, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x6218, .value=0x04, .type=IO_READ},
        {.addr=0x6219, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_003D) {
    const struct CPU_State initial_cpu = {.pc=0xa481, .a=0x48, .x=0xd0, .y=0xcf, .sp=0x1f, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0x26}, {.addr=0xa481, .value=0x04}, {.addr=0xa482, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0xa483, .a=0x6e, .x=0xd0, .y=0xcf, .sp=0x1f, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0x26}, {.addr=0xa481, .value=0x04}, {.addr=0xa482, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0xa481, .value=0x04, .type=IO_READ},
        {.addr=0xa482, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_003E) {
    const struct CPU_State initial_cpu = {.pc=0xd083, .a=0xfe, .x=0x3f, .y=0x7a, .sp=0x3f, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x8e}, {.addr=0xd083, .value=0x04}, {.addr=0xd084, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0xd085, .a=0xfe, .x=0x3f, .y=0x7a, .sp=0x3f, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x8e}, {.addr=0xd083, .value=0x04}, {.addr=0xd084, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xd083, .value=0x04, .type=IO_READ},
        {.addr=0xd084, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_003F) {
    const struct CPU_State initial_cpu = {.pc=0xdaee, .a=0xee, .x=0x8a, .y=0x05, .sp=0x87, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ea, .value=0x43}, {.addr=0xdaee, .value=0x04}, {.addr=0xdaef, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0xdaf0, .a=0xef, .x=0x8a, .y=0x05, .sp=0x87, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ea, .value=0x43}, {.addr=0xdaee, .value=0x04}, {.addr=0xdaef, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0xdaee, .value=0x04, .type=IO_READ},
        {.addr=0xdaef, .value=0xea, .type=IO_READ},
        {.addr=0x00ea, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0040) {
    const struct CPU_State initial_cpu = {.pc=0x485d, .a=0x16, .x=0x79, .y=0x5f, .sp=0x7f, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x1a}, {.addr=0x485d, .value=0x04}, {.addr=0x485e, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x485f, .a=0x1e, .x=0x79, .y=0x5f, .sp=0x7f, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x1a}, {.addr=0x485d, .value=0x04}, {.addr=0x485e, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x485d, .value=0x04, .type=IO_READ},
        {.addr=0x485e, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0041) {
    const struct CPU_State initial_cpu = {.pc=0xf37e, .a=0xb9, .x=0xf7, .y=0x80, .sp=0xe7, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0xc2}, {.addr=0xf37e, .value=0x04}, {.addr=0xf37f, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0xf380, .a=0xfb, .x=0xf7, .y=0x80, .sp=0xe7, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0xc2}, {.addr=0xf37e, .value=0x04}, {.addr=0xf37f, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0xf37e, .value=0x04, .type=IO_READ},
        {.addr=0xf37f, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0042) {
    const struct CPU_State initial_cpu = {.pc=0x0711, .a=0x72, .x=0x68, .y=0xcd, .sp=0xa3, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0xcb}, {.addr=0x0711, .value=0x04}, {.addr=0x0712, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x0713, .a=0xfb, .x=0x68, .y=0xcd, .sp=0xa3, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0xcb}, {.addr=0x0711, .value=0x04}, {.addr=0x0712, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x0711, .value=0x04, .type=IO_READ},
        {.addr=0x0712, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0043) {
    const struct CPU_State initial_cpu = {.pc=0xe381, .a=0xd4, .x=0x3e, .y=0x54, .sp=0xc4, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0x4c}, {.addr=0xe381, .value=0x04}, {.addr=0xe382, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0xe383, .a=0xdc, .x=0x3e, .y=0x54, .sp=0xc4, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0x4c}, {.addr=0xe381, .value=0x04}, {.addr=0xe382, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0xe381, .value=0x04, .type=IO_READ},
        {.addr=0xe382, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0044) {
    const struct CPU_State initial_cpu = {.pc=0xc929, .a=0xee, .x=0x6f, .y=0xfc, .sp=0xd3, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x50}, {.addr=0xc929, .value=0x04}, {.addr=0xc92a, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xc92b, .a=0xfe, .x=0x6f, .y=0xfc, .sp=0xd3, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x50}, {.addr=0xc929, .value=0x04}, {.addr=0xc92a, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xc929, .value=0x04, .type=IO_READ},
        {.addr=0xc92a, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0045) {
    const struct CPU_State initial_cpu = {.pc=0xc535, .a=0x57, .x=0x0d, .y=0x0d, .sp=0x8e, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0xa3}, {.addr=0xc535, .value=0x04}, {.addr=0xc536, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0xc537, .a=0xf7, .x=0x0d, .y=0x0d, .sp=0x8e, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0xa3}, {.addr=0xc535, .value=0x04}, {.addr=0xc536, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc535, .value=0x04, .type=IO_READ},
        {.addr=0xc536, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0046) {
    const struct CPU_State initial_cpu = {.pc=0xe8ca, .a=0xd4, .x=0x49, .y=0x9b, .sp=0xc2, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0xab}, {.addr=0xe8ca, .value=0x04}, {.addr=0xe8cb, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xe8cc, .a=0xff, .x=0x49, .y=0x9b, .sp=0xc2, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0xab}, {.addr=0xe8ca, .value=0x04}, {.addr=0xe8cb, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8ca, .value=0x04, .type=IO_READ},
        {.addr=0xe8cb, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0047) {
    const struct CPU_State initial_cpu = {.pc=0x3612, .a=0x26, .x=0xc7, .y=0x14, .sp=0x9f, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0x9f}, {.addr=0x3612, .value=0x04}, {.addr=0x3613, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x3614, .a=0xbf, .x=0xc7, .y=0x14, .sp=0x9f, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0x9f}, {.addr=0x3612, .value=0x04}, {.addr=0x3613, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x3612, .value=0x04, .type=IO_READ},
        {.addr=0x3613, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0048) {
    const struct CPU_State initial_cpu = {.pc=0x558f, .a=0xf9, .x=0x1e, .y=0xc2, .sp=0xe2, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001b, .value=0x37}, {.addr=0x558f, .value=0x04}, {.addr=0x5590, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x5591, .a=0xff, .x=0x1e, .y=0xc2, .sp=0xe2, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x001b, .value=0x37}, {.addr=0x558f, .value=0x04}, {.addr=0x5590, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x558f, .value=0x04, .type=IO_READ},
        {.addr=0x5590, .value=0x1b, .type=IO_READ},
        {.addr=0x001b, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0049) {
    const struct CPU_State initial_cpu = {.pc=0xc099, .a=0xd8, .x=0x99, .y=0xd6, .sp=0xb5, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0x37}, {.addr=0xc099, .value=0x04}, {.addr=0xc09a, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xc09b, .a=0xff, .x=0x99, .y=0xd6, .sp=0xb5, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0x37}, {.addr=0xc099, .value=0x04}, {.addr=0xc09a, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xc099, .value=0x04, .type=IO_READ},
        {.addr=0xc09a, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_004A) {
    const struct CPU_State initial_cpu = {.pc=0x1712, .a=0x1e, .x=0x1f, .y=0xb3, .sp=0xb2, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0x4d}, {.addr=0x1712, .value=0x04}, {.addr=0x1713, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x1714, .a=0x5f, .x=0x1f, .y=0xb3, .sp=0xb2, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0x4d}, {.addr=0x1712, .value=0x04}, {.addr=0x1713, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x1712, .value=0x04, .type=IO_READ},
        {.addr=0x1713, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_004B) {
    const struct CPU_State initial_cpu = {.pc=0x4a54, .a=0xe0, .x=0x5d, .y=0x1b, .sp=0xc4, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x1a}, {.addr=0x4a54, .value=0x04}, {.addr=0x4a55, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x4a56, .a=0xfa, .x=0x5d, .y=0x1b, .sp=0xc4, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x1a}, {.addr=0x4a54, .value=0x04}, {.addr=0x4a55, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a54, .value=0x04, .type=IO_READ},
        {.addr=0x4a55, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_004C) {
    const struct CPU_State initial_cpu = {.pc=0xa0f2, .a=0x29, .x=0x0e, .y=0x85, .sp=0xc6, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0xba}, {.addr=0xa0f2, .value=0x04}, {.addr=0xa0f3, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0xa0f4, .a=0xbb, .x=0x0e, .y=0x85, .sp=0xc6, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0xba}, {.addr=0xa0f2, .value=0x04}, {.addr=0xa0f3, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0xa0f2, .value=0x04, .type=IO_READ},
        {.addr=0xa0f3, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_004D) {
    const struct CPU_State initial_cpu = {.pc=0xc9a3, .a=0xfa, .x=0x0c, .y=0x4a, .sp=0xc0, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0xe6}, {.addr=0xc9a3, .value=0x04}, {.addr=0xc9a4, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xc9a5, .a=0xfe, .x=0x0c, .y=0x4a, .sp=0xc0, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0xe6}, {.addr=0xc9a3, .value=0x04}, {.addr=0xc9a4, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xc9a3, .value=0x04, .type=IO_READ},
        {.addr=0xc9a4, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_004E) {
    const struct CPU_State initial_cpu = {.pc=0x9cf3, .a=0x44, .x=0xf8, .y=0xfe, .sp=0x53, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0xad}, {.addr=0x9cf3, .value=0x04}, {.addr=0x9cf4, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x9cf5, .a=0xed, .x=0xf8, .y=0xfe, .sp=0x53, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0xad}, {.addr=0x9cf3, .value=0x04}, {.addr=0x9cf4, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9cf3, .value=0x04, .type=IO_READ},
        {.addr=0x9cf4, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_004F) {
    const struct CPU_State initial_cpu = {.pc=0x16cc, .a=0xa3, .x=0x93, .y=0x7e, .sp=0xda, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0xed}, {.addr=0x16cc, .value=0x04}, {.addr=0x16cd, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x16ce, .a=0xef, .x=0x93, .y=0x7e, .sp=0xda, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0xed}, {.addr=0x16cc, .value=0x04}, {.addr=0x16cd, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x16cc, .value=0x04, .type=IO_READ},
        {.addr=0x16cd, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0050) {
    const struct CPU_State initial_cpu = {.pc=0x13ec, .a=0x53, .x=0xbc, .y=0xb4, .sp=0x87, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0x2d}, {.addr=0x13ec, .value=0x04}, {.addr=0x13ed, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x13ee, .a=0x7f, .x=0xbc, .y=0xb4, .sp=0x87, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0x2d}, {.addr=0x13ec, .value=0x04}, {.addr=0x13ed, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x13ec, .value=0x04, .type=IO_READ},
        {.addr=0x13ed, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0051) {
    const struct CPU_State initial_cpu = {.pc=0x364b, .a=0x0a, .x=0xc6, .y=0x80, .sp=0x0e, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x92}, {.addr=0x364b, .value=0x04}, {.addr=0x364c, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x364d, .a=0x9a, .x=0xc6, .y=0x80, .sp=0x0e, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x92}, {.addr=0x364b, .value=0x04}, {.addr=0x364c, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x364b, .value=0x04, .type=IO_READ},
        {.addr=0x364c, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0052) {
    const struct CPU_State initial_cpu = {.pc=0x4ad6, .a=0x56, .x=0x8d, .y=0x6b, .sp=0xcb, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x6c}, {.addr=0x4ad6, .value=0x04}, {.addr=0x4ad7, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x4ad8, .a=0x7e, .x=0x8d, .y=0x6b, .sp=0xcb, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x6c}, {.addr=0x4ad6, .value=0x04}, {.addr=0x4ad7, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ad6, .value=0x04, .type=IO_READ},
        {.addr=0x4ad7, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0053) {
    const struct CPU_State initial_cpu = {.pc=0x3a30, .a=0xdd, .x=0x2c, .y=0x69, .sp=0x55, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0x03}, {.addr=0x3a30, .value=0x04}, {.addr=0x3a31, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x3a32, .a=0xdf, .x=0x2c, .y=0x69, .sp=0x55, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0x03}, {.addr=0x3a30, .value=0x04}, {.addr=0x3a31, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a30, .value=0x04, .type=IO_READ},
        {.addr=0x3a31, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0054) {
    const struct CPU_State initial_cpu = {.pc=0xb089, .a=0xe9, .x=0xcc, .y=0x6c, .sp=0x6f, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0x93}, {.addr=0xb089, .value=0x04}, {.addr=0xb08a, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0xb08b, .a=0xfb, .x=0xcc, .y=0x6c, .sp=0x6f, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0x93}, {.addr=0xb089, .value=0x04}, {.addr=0xb08a, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0xb089, .value=0x04, .type=IO_READ},
        {.addr=0xb08a, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0055) {
    const struct CPU_State initial_cpu = {.pc=0x6425, .a=0x0a, .x=0x5f, .y=0xaf, .sp=0x95, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0xef}, {.addr=0x6425, .value=0x04}, {.addr=0x6426, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x6427, .a=0xef, .x=0x5f, .y=0xaf, .sp=0x95, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0xef}, {.addr=0x6425, .value=0x04}, {.addr=0x6426, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x6425, .value=0x04, .type=IO_READ},
        {.addr=0x6426, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0056) {
    const struct CPU_State initial_cpu = {.pc=0x39cc, .a=0x14, .x=0x83, .y=0x34, .sp=0x82, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0xea}, {.addr=0x39cc, .value=0x04}, {.addr=0x39cd, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x39ce, .a=0xfe, .x=0x83, .y=0x34, .sp=0x82, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0xea}, {.addr=0x39cc, .value=0x04}, {.addr=0x39cd, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x39cc, .value=0x04, .type=IO_READ},
        {.addr=0x39cd, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0057) {
    const struct CPU_State initial_cpu = {.pc=0x4046, .a=0xd1, .x=0xd9, .y=0x19, .sp=0xec, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0xd9}, {.addr=0x4046, .value=0x04}, {.addr=0x4047, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x4048, .a=0xd9, .x=0xd9, .y=0x19, .sp=0xec, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0xd9}, {.addr=0x4046, .value=0x04}, {.addr=0x4047, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x4046, .value=0x04, .type=IO_READ},
        {.addr=0x4047, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0058) {
    const struct CPU_State initial_cpu = {.pc=0xc90e, .a=0x2d, .x=0xe6, .y=0x4f, .sp=0x4f, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0xaa}, {.addr=0xc90e, .value=0x04}, {.addr=0xc90f, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xc910, .a=0xaf, .x=0xe6, .y=0x4f, .sp=0x4f, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0xaa}, {.addr=0xc90e, .value=0x04}, {.addr=0xc90f, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xc90e, .value=0x04, .type=IO_READ},
        {.addr=0xc90f, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0059) {
    const struct CPU_State initial_cpu = {.pc=0x90df, .a=0xd7, .x=0x91, .y=0x72, .sp=0x74, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0xce}, {.addr=0x90df, .value=0x04}, {.addr=0x90e0, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x90e1, .a=0xdf, .x=0x91, .y=0x72, .sp=0x74, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0xce}, {.addr=0x90df, .value=0x04}, {.addr=0x90e0, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x90df, .value=0x04, .type=IO_READ},
        {.addr=0x90e0, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_005A) {
    const struct CPU_State initial_cpu = {.pc=0x1e36, .a=0xf4, .x=0xd4, .y=0x8a, .sp=0x44, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0x2c}, {.addr=0x1e36, .value=0x04}, {.addr=0x1e37, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x1e38, .a=0xfc, .x=0xd4, .y=0x8a, .sp=0x44, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0x2c}, {.addr=0x1e36, .value=0x04}, {.addr=0x1e37, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e36, .value=0x04, .type=IO_READ},
        {.addr=0x1e37, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_005B) {
    const struct CPU_State initial_cpu = {.pc=0xbf48, .a=0xda, .x=0x07, .y=0xfa, .sp=0x12, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0xa1}, {.addr=0xbf48, .value=0x04}, {.addr=0xbf49, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0xbf4a, .a=0xfb, .x=0x07, .y=0xfa, .sp=0x12, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0xa1}, {.addr=0xbf48, .value=0x04}, {.addr=0xbf49, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf48, .value=0x04, .type=IO_READ},
        {.addr=0xbf49, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_005C) {
    const struct CPU_State initial_cpu = {.pc=0xb8e4, .a=0xfb, .x=0x8d, .y=0xc2, .sp=0xe1, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0xb2}, {.addr=0xb8e4, .value=0x04}, {.addr=0xb8e5, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0xb8e6, .a=0xfb, .x=0x8d, .y=0xc2, .sp=0xe1, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0xb2}, {.addr=0xb8e4, .value=0x04}, {.addr=0xb8e5, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8e4, .value=0x04, .type=IO_READ},
        {.addr=0xb8e5, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_005D) {
    const struct CPU_State initial_cpu = {.pc=0x2a3d, .a=0xb5, .x=0x93, .y=0x22, .sp=0x75, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0xc1}, {.addr=0x2a3d, .value=0x04}, {.addr=0x2a3e, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x2a3f, .a=0xf5, .x=0x93, .y=0x22, .sp=0x75, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0xc1}, {.addr=0x2a3d, .value=0x04}, {.addr=0x2a3e, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a3d, .value=0x04, .type=IO_READ},
        {.addr=0x2a3e, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_005E) {
    const struct CPU_State initial_cpu = {.pc=0xb194, .a=0xff, .x=0xdf, .y=0xff, .sp=0x3e, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d7, .value=0x33}, {.addr=0xb194, .value=0x04}, {.addr=0xb195, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0xb196, .a=0xff, .x=0xdf, .y=0xff, .sp=0x3e, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d7, .value=0x33}, {.addr=0xb194, .value=0x04}, {.addr=0xb195, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0xb194, .value=0x04, .type=IO_READ},
        {.addr=0xb195, .value=0xd7, .type=IO_READ},
        {.addr=0x01d7, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_005F) {
    const struct CPU_State initial_cpu = {.pc=0x099b, .a=0x0e, .x=0x88, .y=0x8d, .sp=0x54, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0x3e}, {.addr=0x099b, .value=0x04}, {.addr=0x099c, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x099d, .a=0x3e, .x=0x88, .y=0x8d, .sp=0x54, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0x3e}, {.addr=0x099b, .value=0x04}, {.addr=0x099c, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x099b, .value=0x04, .type=IO_READ},
        {.addr=0x099c, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0060) {
    const struct CPU_State initial_cpu = {.pc=0xd61d, .a=0x46, .x=0x9b, .y=0xa1, .sp=0x62, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0x58}, {.addr=0xd61d, .value=0x04}, {.addr=0xd61e, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xd61f, .a=0x5e, .x=0x9b, .y=0xa1, .sp=0x62, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0x58}, {.addr=0xd61d, .value=0x04}, {.addr=0xd61e, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xd61d, .value=0x04, .type=IO_READ},
        {.addr=0xd61e, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0061) {
    const struct CPU_State initial_cpu = {.pc=0xd2a3, .a=0x9c, .x=0x58, .y=0x51, .sp=0x29, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0x80}, {.addr=0xd2a3, .value=0x04}, {.addr=0xd2a4, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0xd2a5, .a=0x9c, .x=0x58, .y=0x51, .sp=0x29, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0x80}, {.addr=0xd2a3, .value=0x04}, {.addr=0xd2a4, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2a3, .value=0x04, .type=IO_READ},
        {.addr=0xd2a4, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0062) {
    const struct CPU_State initial_cpu = {.pc=0x6f4d, .a=0x07, .x=0x85, .y=0x88, .sp=0x37, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0xc2}, {.addr=0x6f4d, .value=0x04}, {.addr=0x6f4e, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x6f4f, .a=0xc7, .x=0x85, .y=0x88, .sp=0x37, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0xc2}, {.addr=0x6f4d, .value=0x04}, {.addr=0x6f4e, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f4d, .value=0x04, .type=IO_READ},
        {.addr=0x6f4e, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0063) {
    const struct CPU_State initial_cpu = {.pc=0x854f, .a=0xae, .x=0x34, .y=0x19, .sp=0xab, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0xd9}, {.addr=0x854f, .value=0x04}, {.addr=0x8550, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x8551, .a=0xff, .x=0x34, .y=0x19, .sp=0xab, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0xd9}, {.addr=0x854f, .value=0x04}, {.addr=0x8550, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x854f, .value=0x04, .type=IO_READ},
        {.addr=0x8550, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0064) {
    const struct CPU_State initial_cpu = {.pc=0x30ab, .a=0x66, .x=0x23, .y=0x2a, .sp=0xea, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0x0b}, {.addr=0x30ab, .value=0x04}, {.addr=0x30ac, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x30ad, .a=0x6f, .x=0x23, .y=0x2a, .sp=0xea, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0x0b}, {.addr=0x30ab, .value=0x04}, {.addr=0x30ac, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x30ab, .value=0x04, .type=IO_READ},
        {.addr=0x30ac, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0065) {
    const struct CPU_State initial_cpu = {.pc=0xe798, .a=0x2c, .x=0xd1, .y=0xb1, .sp=0xfe, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0xb2}, {.addr=0xe798, .value=0x04}, {.addr=0xe799, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xe79a, .a=0xbe, .x=0xd1, .y=0xb1, .sp=0xfe, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0xb2}, {.addr=0xe798, .value=0x04}, {.addr=0xe799, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xe798, .value=0x04, .type=IO_READ},
        {.addr=0xe799, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0066) {
    const struct CPU_State initial_cpu = {.pc=0x6821, .a=0xd3, .x=0xf0, .y=0x8b, .sp=0xf8, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0x11}, {.addr=0x6821, .value=0x04}, {.addr=0x6822, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x6823, .a=0xd3, .x=0xf0, .y=0x8b, .sp=0xf8, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0x11}, {.addr=0x6821, .value=0x04}, {.addr=0x6822, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x6821, .value=0x04, .type=IO_READ},
        {.addr=0x6822, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0067) {
    const struct CPU_State initial_cpu = {.pc=0x0980, .a=0x17, .x=0x18, .y=0x58, .sp=0x09, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0x4f}, {.addr=0x0980, .value=0x04}, {.addr=0x0981, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x0982, .a=0x5f, .x=0x18, .y=0x58, .sp=0x09, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0x4f}, {.addr=0x0980, .value=0x04}, {.addr=0x0981, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x0980, .value=0x04, .type=IO_READ},
        {.addr=0x0981, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0068) {
    const struct CPU_State initial_cpu = {.pc=0xf41d, .a=0x61, .x=0x35, .y=0x54, .sp=0x00, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x3d}, {.addr=0xf41d, .value=0x04}, {.addr=0xf41e, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xf41f, .a=0x7d, .x=0x35, .y=0x54, .sp=0x00, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x3d}, {.addr=0xf41d, .value=0x04}, {.addr=0xf41e, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf41d, .value=0x04, .type=IO_READ},
        {.addr=0xf41e, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0069) {
    const struct CPU_State initial_cpu = {.pc=0xf2a4, .a=0x63, .x=0x41, .y=0xae, .sp=0x87, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0x02}, {.addr=0xf2a4, .value=0x04}, {.addr=0xf2a5, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xf2a6, .a=0x63, .x=0x41, .y=0xae, .sp=0x87, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0x02}, {.addr=0xf2a4, .value=0x04}, {.addr=0xf2a5, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2a4, .value=0x04, .type=IO_READ},
        {.addr=0xf2a5, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_006A) {
    const struct CPU_State initial_cpu = {.pc=0x7fda, .a=0xdc, .x=0x92, .y=0x49, .sp=0x40, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0x41}, {.addr=0x7fda, .value=0x04}, {.addr=0x7fdb, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x7fdc, .a=0xdd, .x=0x92, .y=0x49, .sp=0x40, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0x41}, {.addr=0x7fda, .value=0x04}, {.addr=0x7fdb, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x7fda, .value=0x04, .type=IO_READ},
        {.addr=0x7fdb, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_006B) {
    const struct CPU_State initial_cpu = {.pc=0x23f9, .a=0x37, .x=0x5d, .y=0xbb, .sp=0x14, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0045, .value=0xef}, {.addr=0x23f9, .value=0x04}, {.addr=0x23fa, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x23fb, .a=0xff, .x=0x5d, .y=0xbb, .sp=0x14, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0045, .value=0xef}, {.addr=0x23f9, .value=0x04}, {.addr=0x23fa, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x23f9, .value=0x04, .type=IO_READ},
        {.addr=0x23fa, .value=0x45, .type=IO_READ},
        {.addr=0x0045, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_006C) {
    const struct CPU_State initial_cpu = {.pc=0x77d6, .a=0x20, .x=0x10, .y=0x13, .sp=0x1c, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0x89}, {.addr=0x77d6, .value=0x04}, {.addr=0x77d7, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x77d8, .a=0xa9, .x=0x10, .y=0x13, .sp=0x1c, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0x89}, {.addr=0x77d6, .value=0x04}, {.addr=0x77d7, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x77d6, .value=0x04, .type=IO_READ},
        {.addr=0x77d7, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_006D) {
    const struct CPU_State initial_cpu = {.pc=0x0e17, .a=0x27, .x=0x1c, .y=0x79, .sp=0xab, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0x1c}, {.addr=0x0e17, .value=0x04}, {.addr=0x0e18, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x0e19, .a=0x3f, .x=0x1c, .y=0x79, .sp=0xab, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0x1c}, {.addr=0x0e17, .value=0x04}, {.addr=0x0e18, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e17, .value=0x04, .type=IO_READ},
        {.addr=0x0e18, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_006E) {
    const struct CPU_State initial_cpu = {.pc=0xd76e, .a=0xe3, .x=0xda, .y=0x4d, .sp=0xf8, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0xec}, {.addr=0xd76e, .value=0x04}, {.addr=0xd76f, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xd770, .a=0xef, .x=0xda, .y=0x4d, .sp=0xf8, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0xec}, {.addr=0xd76e, .value=0x04}, {.addr=0xd76f, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xd76e, .value=0x04, .type=IO_READ},
        {.addr=0xd76f, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_006F) {
    const struct CPU_State initial_cpu = {.pc=0x5bac, .a=0x45, .x=0x8e, .y=0x96, .sp=0x26, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0x3a}, {.addr=0x5bac, .value=0x04}, {.addr=0x5bad, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0x5bae, .a=0x7f, .x=0x8e, .y=0x96, .sp=0x26, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0x3a}, {.addr=0x5bac, .value=0x04}, {.addr=0x5bad, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bac, .value=0x04, .type=IO_READ},
        {.addr=0x5bad, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0070) {
    const struct CPU_State initial_cpu = {.pc=0xb2a1, .a=0x80, .x=0x04, .y=0x0b, .sp=0xa1, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0x84}, {.addr=0xb2a1, .value=0x04}, {.addr=0xb2a2, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0xb2a3, .a=0x84, .x=0x04, .y=0x0b, .sp=0xa1, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0x84}, {.addr=0xb2a1, .value=0x04}, {.addr=0xb2a2, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2a1, .value=0x04, .type=IO_READ},
        {.addr=0xb2a2, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0071) {
    const struct CPU_State initial_cpu = {.pc=0x6eca, .a=0x6d, .x=0xab, .y=0x63, .sp=0xd2, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0x53}, {.addr=0x6eca, .value=0x04}, {.addr=0x6ecb, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x6ecc, .a=0x7f, .x=0xab, .y=0x63, .sp=0xd2, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0x53}, {.addr=0x6eca, .value=0x04}, {.addr=0x6ecb, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x6eca, .value=0x04, .type=IO_READ},
        {.addr=0x6ecb, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0072) {
    const struct CPU_State initial_cpu = {.pc=0x215a, .a=0xad, .x=0x17, .y=0x4c, .sp=0x63, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x43}, {.addr=0x215a, .value=0x04}, {.addr=0x215b, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x215c, .a=0xef, .x=0x17, .y=0x4c, .sp=0x63, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x43}, {.addr=0x215a, .value=0x04}, {.addr=0x215b, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x215a, .value=0x04, .type=IO_READ},
        {.addr=0x215b, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0073) {
    const struct CPU_State initial_cpu = {.pc=0xbb60, .a=0xa0, .x=0x89, .y=0x55, .sp=0x75, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0xf6}, {.addr=0xbb60, .value=0x04}, {.addr=0xbb61, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0xbb62, .a=0xf6, .x=0x89, .y=0x55, .sp=0x75, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0xf6}, {.addr=0xbb60, .value=0x04}, {.addr=0xbb61, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0xbb60, .value=0x04, .type=IO_READ},
        {.addr=0xbb61, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0074) {
    const struct CPU_State initial_cpu = {.pc=0x812c, .a=0x74, .x=0x95, .y=0x6e, .sp=0xb9, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a7, .value=0xef}, {.addr=0x812c, .value=0x04}, {.addr=0x812d, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x812e, .a=0xff, .x=0x95, .y=0x6e, .sp=0xb9, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a7, .value=0xef}, {.addr=0x812c, .value=0x04}, {.addr=0x812d, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x812c, .value=0x04, .type=IO_READ},
        {.addr=0x812d, .value=0xa7, .type=IO_READ},
        {.addr=0x00a7, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0075) {
    const struct CPU_State initial_cpu = {.pc=0xa0f3, .a=0xec, .x=0xc2, .y=0x61, .sp=0xf3, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0xca}, {.addr=0xa0f3, .value=0x04}, {.addr=0xa0f4, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0xa0f5, .a=0xee, .x=0xc2, .y=0x61, .sp=0xf3, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0xca}, {.addr=0xa0f3, .value=0x04}, {.addr=0xa0f4, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0xa0f3, .value=0x04, .type=IO_READ},
        {.addr=0xa0f4, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0076) {
    const struct CPU_State initial_cpu = {.pc=0xd1be, .a=0xe3, .x=0x77, .y=0xc9, .sp=0x67, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0x64}, {.addr=0xd1be, .value=0x04}, {.addr=0xd1bf, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xd1c0, .a=0xe7, .x=0x77, .y=0xc9, .sp=0x67, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0x64}, {.addr=0xd1be, .value=0x04}, {.addr=0xd1bf, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1be, .value=0x04, .type=IO_READ},
        {.addr=0xd1bf, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0077) {
    const struct CPU_State initial_cpu = {.pc=0x9da9, .a=0x2b, .x=0xad, .y=0xa0, .sp=0x93, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0116, .value=0x23}, {.addr=0x9da9, .value=0x04}, {.addr=0x9daa, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x9dab, .a=0x2b, .x=0xad, .y=0xa0, .sp=0x93, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0116, .value=0x23}, {.addr=0x9da9, .value=0x04}, {.addr=0x9daa, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x9da9, .value=0x04, .type=IO_READ},
        {.addr=0x9daa, .value=0x16, .type=IO_READ},
        {.addr=0x0116, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0078) {
    const struct CPU_State initial_cpu = {.pc=0x6826, .a=0x5e, .x=0xf5, .y=0x08, .sp=0xfd, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0xaf}, {.addr=0x6826, .value=0x04}, {.addr=0x6827, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x6828, .a=0xff, .x=0xf5, .y=0x08, .sp=0xfd, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0xaf}, {.addr=0x6826, .value=0x04}, {.addr=0x6827, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x6826, .value=0x04, .type=IO_READ},
        {.addr=0x6827, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0079) {
    const struct CPU_State initial_cpu = {.pc=0x03b4, .a=0xdc, .x=0x5d, .y=0x76, .sp=0x3b, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0168, .value=0xd0}, {.addr=0x03b4, .value=0x04}, {.addr=0x03b5, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x03b6, .a=0xdc, .x=0x5d, .y=0x76, .sp=0x3b, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0168, .value=0xd0}, {.addr=0x03b4, .value=0x04}, {.addr=0x03b5, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x03b4, .value=0x04, .type=IO_READ},
        {.addr=0x03b5, .value=0x68, .type=IO_READ},
        {.addr=0x0168, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_007A) {
    const struct CPU_State initial_cpu = {.pc=0x5678, .a=0x1f, .x=0x20, .y=0x37, .sp=0x05, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0105, .value=0xa1}, {.addr=0x5678, .value=0x04}, {.addr=0x5679, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x567a, .a=0xbf, .x=0x20, .y=0x37, .sp=0x05, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0105, .value=0xa1}, {.addr=0x5678, .value=0x04}, {.addr=0x5679, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x5678, .value=0x04, .type=IO_READ},
        {.addr=0x5679, .value=0x05, .type=IO_READ},
        {.addr=0x0105, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_007B) {
    const struct CPU_State initial_cpu = {.pc=0x2f4e, .a=0x2f, .x=0x3c, .y=0xc3, .sp=0x1a, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0xc2}, {.addr=0x2f4e, .value=0x04}, {.addr=0x2f4f, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x2f50, .a=0xef, .x=0x3c, .y=0xc3, .sp=0x1a, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0xc2}, {.addr=0x2f4e, .value=0x04}, {.addr=0x2f4f, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f4e, .value=0x04, .type=IO_READ},
        {.addr=0x2f4f, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_007C) {
    const struct CPU_State initial_cpu = {.pc=0x0eab, .a=0xac, .x=0xe8, .y=0xd0, .sp=0xc3, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0x44}, {.addr=0x0eab, .value=0x04}, {.addr=0x0eac, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x0ead, .a=0xec, .x=0xe8, .y=0xd0, .sp=0xc3, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0x44}, {.addr=0x0eab, .value=0x04}, {.addr=0x0eac, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x0eab, .value=0x04, .type=IO_READ},
        {.addr=0x0eac, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_007D) {
    const struct CPU_State initial_cpu = {.pc=0xd9c2, .a=0xea, .x=0x9c, .y=0xc1, .sp=0xa0, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0x4d}, {.addr=0xd9c2, .value=0x04}, {.addr=0xd9c3, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xd9c4, .a=0xef, .x=0x9c, .y=0xc1, .sp=0xa0, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0x4d}, {.addr=0xd9c2, .value=0x04}, {.addr=0xd9c3, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9c2, .value=0x04, .type=IO_READ},
        {.addr=0xd9c3, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_007E) {
    const struct CPU_State initial_cpu = {.pc=0xf17e, .a=0x43, .x=0x2d, .y=0x0d, .sp=0xdc, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0xc2}, {.addr=0xf17e, .value=0x04}, {.addr=0xf17f, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xf180, .a=0xc3, .x=0x2d, .y=0x0d, .sp=0xdc, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0xc2}, {.addr=0xf17e, .value=0x04}, {.addr=0xf17f, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xf17e, .value=0x04, .type=IO_READ},
        {.addr=0xf17f, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_007F) {
    const struct CPU_State initial_cpu = {.pc=0x2f47, .a=0x18, .x=0xd8, .y=0x3b, .sp=0xe5, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x55}, {.addr=0x2f47, .value=0x04}, {.addr=0x2f48, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x2f49, .a=0x5d, .x=0xd8, .y=0x3b, .sp=0xe5, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x55}, {.addr=0x2f47, .value=0x04}, {.addr=0x2f48, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f47, .value=0x04, .type=IO_READ},
        {.addr=0x2f48, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0080) {
    const struct CPU_State initial_cpu = {.pc=0x32ca, .a=0x05, .x=0xf8, .y=0x9e, .sp=0x13, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b8, .value=0x9a}, {.addr=0x32ca, .value=0x04}, {.addr=0x32cb, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x32cc, .a=0x9f, .x=0xf8, .y=0x9e, .sp=0x13, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b8, .value=0x9a}, {.addr=0x32ca, .value=0x04}, {.addr=0x32cb, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x32ca, .value=0x04, .type=IO_READ},
        {.addr=0x32cb, .value=0xb8, .type=IO_READ},
        {.addr=0x01b8, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0081) {
    const struct CPU_State initial_cpu = {.pc=0xf2b5, .a=0xbe, .x=0x90, .y=0xdd, .sp=0x48, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0x98}, {.addr=0xf2b5, .value=0x04}, {.addr=0xf2b6, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0xf2b7, .a=0xbe, .x=0x90, .y=0xdd, .sp=0x48, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0x98}, {.addr=0xf2b5, .value=0x04}, {.addr=0xf2b6, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2b5, .value=0x04, .type=IO_READ},
        {.addr=0xf2b6, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0082) {
    const struct CPU_State initial_cpu = {.pc=0x4ea1, .a=0x45, .x=0x8d, .y=0x60, .sp=0x92, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0x36}, {.addr=0x4ea1, .value=0x04}, {.addr=0x4ea2, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x4ea3, .a=0x77, .x=0x8d, .y=0x60, .sp=0x92, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0x36}, {.addr=0x4ea1, .value=0x04}, {.addr=0x4ea2, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ea1, .value=0x04, .type=IO_READ},
        {.addr=0x4ea2, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0083) {
    const struct CPU_State initial_cpu = {.pc=0xec7a, .a=0x55, .x=0x9f, .y=0x19, .sp=0x1e, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0xfc}, {.addr=0xec7a, .value=0x04}, {.addr=0xec7b, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xec7c, .a=0xfd, .x=0x9f, .y=0x19, .sp=0x1e, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0xfc}, {.addr=0xec7a, .value=0x04}, {.addr=0xec7b, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xec7a, .value=0x04, .type=IO_READ},
        {.addr=0xec7b, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0084) {
    const struct CPU_State initial_cpu = {.pc=0x5a61, .a=0xb4, .x=0xd9, .y=0x0c, .sp=0xb2, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0x04}, {.addr=0x5a61, .value=0x04}, {.addr=0x5a62, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x5a63, .a=0xb4, .x=0xd9, .y=0x0c, .sp=0xb2, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0x04}, {.addr=0x5a61, .value=0x04}, {.addr=0x5a62, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a61, .value=0x04, .type=IO_READ},
        {.addr=0x5a62, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0085) {
    const struct CPU_State initial_cpu = {.pc=0x7246, .a=0x60, .x=0x2f, .y=0x23, .sp=0x7e, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0xe1}, {.addr=0x7246, .value=0x04}, {.addr=0x7247, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x7248, .a=0xe1, .x=0x2f, .y=0x23, .sp=0x7e, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0xe1}, {.addr=0x7246, .value=0x04}, {.addr=0x7247, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x7246, .value=0x04, .type=IO_READ},
        {.addr=0x7247, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0086) {
    const struct CPU_State initial_cpu = {.pc=0x6940, .a=0x59, .x=0x2f, .y=0x5c, .sp=0x9a, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0x39}, {.addr=0x6940, .value=0x04}, {.addr=0x6941, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0x6942, .a=0x79, .x=0x2f, .y=0x5c, .sp=0x9a, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0x39}, {.addr=0x6940, .value=0x04}, {.addr=0x6941, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0x6940, .value=0x04, .type=IO_READ},
        {.addr=0x6941, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0087) {
    const struct CPU_State initial_cpu = {.pc=0x35e8, .a=0x0e, .x=0x9a, .y=0x5d, .sp=0xd4, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0x70}, {.addr=0x35e8, .value=0x04}, {.addr=0x35e9, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x35ea, .a=0x7e, .x=0x9a, .y=0x5d, .sp=0xd4, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0x70}, {.addr=0x35e8, .value=0x04}, {.addr=0x35e9, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x35e8, .value=0x04, .type=IO_READ},
        {.addr=0x35e9, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0088) {
    const struct CPU_State initial_cpu = {.pc=0x9940, .a=0x5f, .x=0xed, .y=0x0f, .sp=0xb8, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0xd6}, {.addr=0x9940, .value=0x04}, {.addr=0x9941, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x9942, .a=0xdf, .x=0xed, .y=0x0f, .sp=0xb8, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0xd6}, {.addr=0x9940, .value=0x04}, {.addr=0x9941, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x9940, .value=0x04, .type=IO_READ},
        {.addr=0x9941, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0089) {
    const struct CPU_State initial_cpu = {.pc=0xe301, .a=0x86, .x=0x3f, .y=0xf5, .sp=0x28, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0x76}, {.addr=0xe301, .value=0x04}, {.addr=0xe302, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0xe303, .a=0xf6, .x=0x3f, .y=0xf5, .sp=0x28, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0x76}, {.addr=0xe301, .value=0x04}, {.addr=0xe302, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0xe301, .value=0x04, .type=IO_READ},
        {.addr=0xe302, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_008A) {
    const struct CPU_State initial_cpu = {.pc=0x8a39, .a=0x30, .x=0xbd, .y=0xca, .sp=0x80, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0xf8}, {.addr=0x8a39, .value=0x04}, {.addr=0x8a3a, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x8a3b, .a=0xf8, .x=0xbd, .y=0xca, .sp=0x80, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0xf8}, {.addr=0x8a39, .value=0x04}, {.addr=0x8a3a, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a39, .value=0x04, .type=IO_READ},
        {.addr=0x8a3a, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_008B) {
    const struct CPU_State initial_cpu = {.pc=0xa42b, .a=0xc0, .x=0x29, .y=0x8e, .sp=0xaa, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0x92}, {.addr=0xa42b, .value=0x04}, {.addr=0xa42c, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0xa42d, .a=0xd2, .x=0x29, .y=0x8e, .sp=0xaa, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0x92}, {.addr=0xa42b, .value=0x04}, {.addr=0xa42c, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0xa42b, .value=0x04, .type=IO_READ},
        {.addr=0xa42c, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_008C) {
    const struct CPU_State initial_cpu = {.pc=0x1ebf, .a=0x1c, .x=0x4a, .y=0x2e, .sp=0x39, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0xb6}, {.addr=0x1ebf, .value=0x04}, {.addr=0x1ec0, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x1ec1, .a=0xbe, .x=0x4a, .y=0x2e, .sp=0x39, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0xb6}, {.addr=0x1ebf, .value=0x04}, {.addr=0x1ec0, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ebf, .value=0x04, .type=IO_READ},
        {.addr=0x1ec0, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_008D) {
    const struct CPU_State initial_cpu = {.pc=0xbf84, .a=0x29, .x=0x09, .y=0xa1, .sp=0x9f, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0xcc}, {.addr=0xbf84, .value=0x04}, {.addr=0xbf85, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0xbf86, .a=0xed, .x=0x09, .y=0xa1, .sp=0x9f, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0xcc}, {.addr=0xbf84, .value=0x04}, {.addr=0xbf85, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf84, .value=0x04, .type=IO_READ},
        {.addr=0xbf85, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_008E) {
    const struct CPU_State initial_cpu = {.pc=0x702d, .a=0xa9, .x=0xc7, .y=0x3d, .sp=0x57, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0xaf}, {.addr=0x702d, .value=0x04}, {.addr=0x702e, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x702f, .a=0xaf, .x=0xc7, .y=0x3d, .sp=0x57, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0xaf}, {.addr=0x702d, .value=0x04}, {.addr=0x702e, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x702d, .value=0x04, .type=IO_READ},
        {.addr=0x702e, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_008F) {
    const struct CPU_State initial_cpu = {.pc=0x2dc1, .a=0x1e, .x=0x69, .y=0xb5, .sp=0x3d, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0x94}, {.addr=0x2dc1, .value=0x04}, {.addr=0x2dc2, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x2dc3, .a=0x9e, .x=0x69, .y=0xb5, .sp=0x3d, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0x94}, {.addr=0x2dc1, .value=0x04}, {.addr=0x2dc2, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x2dc1, .value=0x04, .type=IO_READ},
        {.addr=0x2dc2, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0090) {
    const struct CPU_State initial_cpu = {.pc=0x69e7, .a=0x95, .x=0xe6, .y=0xcb, .sp=0x0a, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0xa8}, {.addr=0x69e7, .value=0x04}, {.addr=0x69e8, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x69e9, .a=0xbd, .x=0xe6, .y=0xcb, .sp=0x0a, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0xa8}, {.addr=0x69e7, .value=0x04}, {.addr=0x69e8, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x69e7, .value=0x04, .type=IO_READ},
        {.addr=0x69e8, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0091) {
    const struct CPU_State initial_cpu = {.pc=0xb000, .a=0xe7, .x=0x7e, .y=0x81, .sp=0x34, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0x80}, {.addr=0xb000, .value=0x04}, {.addr=0xb001, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xb002, .a=0xe7, .x=0x7e, .y=0x81, .sp=0x34, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0x80}, {.addr=0xb000, .value=0x04}, {.addr=0xb001, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb000, .value=0x04, .type=IO_READ},
        {.addr=0xb001, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0092) {
    const struct CPU_State initial_cpu = {.pc=0x199c, .a=0x37, .x=0x69, .y=0x0d, .sp=0x89, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x03}, {.addr=0x199c, .value=0x04}, {.addr=0x199d, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x199e, .a=0x37, .x=0x69, .y=0x0d, .sp=0x89, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x03}, {.addr=0x199c, .value=0x04}, {.addr=0x199d, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x199c, .value=0x04, .type=IO_READ},
        {.addr=0x199d, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0094) {
    const struct CPU_State initial_cpu = {.pc=0x5210, .a=0xf7, .x=0x50, .y=0x89, .sp=0x75, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0xd6}, {.addr=0x5210, .value=0x04}, {.addr=0x5211, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x5212, .a=0xf7, .x=0x50, .y=0x89, .sp=0x75, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0xd6}, {.addr=0x5210, .value=0x04}, {.addr=0x5211, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5210, .value=0x04, .type=IO_READ},
        {.addr=0x5211, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0095) {
    const struct CPU_State initial_cpu = {.pc=0xa156, .a=0x0a, .x=0xd3, .y=0xe4, .sp=0x02, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00db, .value=0x19}, {.addr=0xa156, .value=0x04}, {.addr=0xa157, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xa158, .a=0x1b, .x=0xd3, .y=0xe4, .sp=0x02, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00db, .value=0x19}, {.addr=0xa156, .value=0x04}, {.addr=0xa157, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xa156, .value=0x04, .type=IO_READ},
        {.addr=0xa157, .value=0xdb, .type=IO_READ},
        {.addr=0x00db, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0096) {
    const struct CPU_State initial_cpu = {.pc=0xaef6, .a=0x3c, .x=0x90, .y=0xa7, .sp=0x19, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0x4f}, {.addr=0xaef6, .value=0x04}, {.addr=0xaef7, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0xaef8, .a=0x7f, .x=0x90, .y=0xa7, .sp=0x19, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0x4f}, {.addr=0xaef6, .value=0x04}, {.addr=0xaef7, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0xaef6, .value=0x04, .type=IO_READ},
        {.addr=0xaef7, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0097) {
    const struct CPU_State initial_cpu = {.pc=0x482b, .a=0x5f, .x=0x2a, .y=0x36, .sp=0x02, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0x5d}, {.addr=0x482b, .value=0x04}, {.addr=0x482c, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x482d, .a=0x5f, .x=0x2a, .y=0x36, .sp=0x02, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0x5d}, {.addr=0x482b, .value=0x04}, {.addr=0x482c, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x482b, .value=0x04, .type=IO_READ},
        {.addr=0x482c, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0098) {
    const struct CPU_State initial_cpu = {.pc=0x55bb, .a=0x90, .x=0x51, .y=0xad, .sp=0xb1, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0x72}, {.addr=0x55bb, .value=0x04}, {.addr=0x55bc, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x55bd, .a=0xf2, .x=0x51, .y=0xad, .sp=0xb1, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0x72}, {.addr=0x55bb, .value=0x04}, {.addr=0x55bc, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x55bb, .value=0x04, .type=IO_READ},
        {.addr=0x55bc, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0099) {
    const struct CPU_State initial_cpu = {.pc=0xeaff, .a=0x76, .x=0xc3, .y=0x39, .sp=0x67, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0199, .value=0xc6}, {.addr=0xeaff, .value=0x04}, {.addr=0xeb00, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0xeb01, .a=0xf6, .x=0xc3, .y=0x39, .sp=0x67, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0199, .value=0xc6}, {.addr=0xeaff, .value=0x04}, {.addr=0xeb00, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0xeaff, .value=0x04, .type=IO_READ},
        {.addr=0xeb00, .value=0x99, .type=IO_READ},
        {.addr=0x0199, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_009A) {
    const struct CPU_State initial_cpu = {.pc=0xcb02, .a=0x33, .x=0xb8, .y=0xf2, .sp=0x24, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0xbc}, {.addr=0xcb02, .value=0x04}, {.addr=0xcb03, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0xcb04, .a=0xbf, .x=0xb8, .y=0xf2, .sp=0x24, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0xbc}, {.addr=0xcb02, .value=0x04}, {.addr=0xcb03, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb02, .value=0x04, .type=IO_READ},
        {.addr=0xcb03, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_009B) {
    const struct CPU_State initial_cpu = {.pc=0x989b, .a=0x13, .x=0x99, .y=0xea, .sp=0xd2, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0xf5}, {.addr=0x989b, .value=0x04}, {.addr=0x989c, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x989d, .a=0xf7, .x=0x99, .y=0xea, .sp=0xd2, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0xf5}, {.addr=0x989b, .value=0x04}, {.addr=0x989c, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x989b, .value=0x04, .type=IO_READ},
        {.addr=0x989c, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_009C) {
    const struct CPU_State initial_cpu = {.pc=0x4c26, .a=0x3a, .x=0x92, .y=0xd0, .sp=0x15, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0xef}, {.addr=0x4c26, .value=0x04}, {.addr=0x4c27, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x4c28, .a=0xff, .x=0x92, .y=0xd0, .sp=0x15, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0xef}, {.addr=0x4c26, .value=0x04}, {.addr=0x4c27, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c26, .value=0x04, .type=IO_READ},
        {.addr=0x4c27, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_009D) {
    const struct CPU_State initial_cpu = {.pc=0x6369, .a=0xa5, .x=0x1a, .y=0x72, .sp=0xf7, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0x49}, {.addr=0x6369, .value=0x04}, {.addr=0x636a, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x636b, .a=0xed, .x=0x1a, .y=0x72, .sp=0xf7, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0x49}, {.addr=0x6369, .value=0x04}, {.addr=0x636a, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x6369, .value=0x04, .type=IO_READ},
        {.addr=0x636a, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_009E) {
    const struct CPU_State initial_cpu = {.pc=0x0813, .a=0x9b, .x=0x1f, .y=0x40, .sp=0x68, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0x79}, {.addr=0x0813, .value=0x04}, {.addr=0x0814, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x0815, .a=0xfb, .x=0x1f, .y=0x40, .sp=0x68, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0x79}, {.addr=0x0813, .value=0x04}, {.addr=0x0814, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x0813, .value=0x04, .type=IO_READ},
        {.addr=0x0814, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_009F) {
    const struct CPU_State initial_cpu = {.pc=0x38e0, .a=0xa2, .x=0xeb, .y=0xca, .sp=0x84, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0xad}, {.addr=0x38e0, .value=0x04}, {.addr=0x38e1, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x38e2, .a=0xaf, .x=0xeb, .y=0xca, .sp=0x84, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0xad}, {.addr=0x38e0, .value=0x04}, {.addr=0x38e1, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x38e0, .value=0x04, .type=IO_READ},
        {.addr=0x38e1, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x39ca, .a=0x4b, .x=0x8f, .y=0xc9, .sp=0xfd, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d6, .value=0x34}, {.addr=0x39ca, .value=0x04}, {.addr=0x39cb, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x39cc, .a=0x7f, .x=0x8f, .y=0xc9, .sp=0xfd, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d6, .value=0x34}, {.addr=0x39ca, .value=0x04}, {.addr=0x39cb, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x39ca, .value=0x04, .type=IO_READ},
        {.addr=0x39cb, .value=0xd6, .type=IO_READ},
        {.addr=0x00d6, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xa4c6, .a=0x50, .x=0x83, .y=0x6a, .sp=0x0f, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0x92}, {.addr=0xa4c6, .value=0x04}, {.addr=0xa4c7, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xa4c8, .a=0xd2, .x=0x83, .y=0x6a, .sp=0x0f, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0x92}, {.addr=0xa4c6, .value=0x04}, {.addr=0xa4c7, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xa4c6, .value=0x04, .type=IO_READ},
        {.addr=0xa4c7, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x1c00, .a=0x45, .x=0x2b, .y=0x61, .sp=0x0f, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0x89}, {.addr=0x1c00, .value=0x04}, {.addr=0x1c01, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x1c02, .a=0xcd, .x=0x2b, .y=0x61, .sp=0x0f, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0x89}, {.addr=0x1c00, .value=0x04}, {.addr=0x1c01, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c00, .value=0x04, .type=IO_READ},
        {.addr=0x1c01, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x5b0a, .a=0x91, .x=0xc6, .y=0xa4, .sp=0xc9, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0x03}, {.addr=0x5b0a, .value=0x04}, {.addr=0x5b0b, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x5b0c, .a=0x93, .x=0xc6, .y=0xa4, .sp=0xc9, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0x03}, {.addr=0x5b0a, .value=0x04}, {.addr=0x5b0b, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b0a, .value=0x04, .type=IO_READ},
        {.addr=0x5b0b, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x6c1c, .a=0x83, .x=0xc0, .y=0xa8, .sp=0xa7, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0x47}, {.addr=0x6c1c, .value=0x04}, {.addr=0x6c1d, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x6c1e, .a=0xc7, .x=0xc0, .y=0xa8, .sp=0xa7, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0x47}, {.addr=0x6c1c, .value=0x04}, {.addr=0x6c1d, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c1c, .value=0x04, .type=IO_READ},
        {.addr=0x6c1d, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x320f, .a=0xeb, .x=0xaa, .y=0xbd, .sp=0x4c, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0x2e}, {.addr=0x320f, .value=0x04}, {.addr=0x3210, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x3211, .a=0xef, .x=0xaa, .y=0xbd, .sp=0x4c, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0x2e}, {.addr=0x320f, .value=0x04}, {.addr=0x3210, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x320f, .value=0x04, .type=IO_READ},
        {.addr=0x3210, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x8341, .a=0xf9, .x=0x3b, .y=0xad, .sp=0xb6, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0x17}, {.addr=0x8341, .value=0x04}, {.addr=0x8342, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x8343, .a=0xff, .x=0x3b, .y=0xad, .sp=0xb6, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0x17}, {.addr=0x8341, .value=0x04}, {.addr=0x8342, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x8341, .value=0x04, .type=IO_READ},
        {.addr=0x8342, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x42f1, .a=0x05, .x=0x77, .y=0x54, .sp=0x7d, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x1d}, {.addr=0x42f1, .value=0x04}, {.addr=0x42f2, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x42f3, .a=0x1d, .x=0x77, .y=0x54, .sp=0x7d, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x1d}, {.addr=0x42f1, .value=0x04}, {.addr=0x42f2, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x42f1, .value=0x04, .type=IO_READ},
        {.addr=0x42f2, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x5274, .a=0x48, .x=0xd4, .y=0x38, .sp=0x92, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0x1f}, {.addr=0x5274, .value=0x04}, {.addr=0x5275, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x5276, .a=0x5f, .x=0xd4, .y=0x38, .sp=0x92, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0x1f}, {.addr=0x5274, .value=0x04}, {.addr=0x5275, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x5274, .value=0x04, .type=IO_READ},
        {.addr=0x5275, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x9676, .a=0x05, .x=0x8a, .y=0x1c, .sp=0xa7, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x49}, {.addr=0x9676, .value=0x04}, {.addr=0x9677, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x9678, .a=0x4d, .x=0x8a, .y=0x1c, .sp=0xa7, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x49}, {.addr=0x9676, .value=0x04}, {.addr=0x9677, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x9676, .value=0x04, .type=IO_READ},
        {.addr=0x9677, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x5e10, .a=0xb1, .x=0x6f, .y=0xc9, .sp=0x5a, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0xc5}, {.addr=0x5e10, .value=0x04}, {.addr=0x5e11, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x5e12, .a=0xf5, .x=0x6f, .y=0xc9, .sp=0x5a, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0xc5}, {.addr=0x5e10, .value=0x04}, {.addr=0x5e11, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e10, .value=0x04, .type=IO_READ},
        {.addr=0x5e11, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x13c6, .a=0x66, .x=0x16, .y=0xae, .sp=0x3a, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0x21}, {.addr=0x13c6, .value=0x04}, {.addr=0x13c7, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x13c8, .a=0x67, .x=0x16, .y=0xae, .sp=0x3a, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0x21}, {.addr=0x13c6, .value=0x04}, {.addr=0x13c7, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x13c6, .value=0x04, .type=IO_READ},
        {.addr=0x13c7, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x760a, .a=0x8b, .x=0x0a, .y=0x7f, .sp=0x67, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0xb1}, {.addr=0x760a, .value=0x04}, {.addr=0x760b, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x760c, .a=0xbb, .x=0x0a, .y=0x7f, .sp=0x67, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0xb1}, {.addr=0x760a, .value=0x04}, {.addr=0x760b, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x760a, .value=0x04, .type=IO_READ},
        {.addr=0x760b, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x88be, .a=0xc8, .x=0xb8, .y=0x29, .sp=0x53, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x12}, {.addr=0x88be, .value=0x04}, {.addr=0x88bf, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x88c0, .a=0xda, .x=0xb8, .y=0x29, .sp=0x53, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x12}, {.addr=0x88be, .value=0x04}, {.addr=0x88bf, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x88be, .value=0x04, .type=IO_READ},
        {.addr=0x88bf, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xdbef, .a=0xac, .x=0x1e, .y=0x87, .sp=0x26, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0x2f}, {.addr=0xdbef, .value=0x04}, {.addr=0xdbf0, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xdbf1, .a=0xaf, .x=0x1e, .y=0x87, .sp=0x26, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0x2f}, {.addr=0xdbef, .value=0x04}, {.addr=0xdbf0, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbef, .value=0x04, .type=IO_READ},
        {.addr=0xdbf0, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xec52, .a=0xaa, .x=0x7d, .y=0xd9, .sp=0x09, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0xa2}, {.addr=0xec52, .value=0x04}, {.addr=0xec53, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xec54, .a=0xaa, .x=0x7d, .y=0xd9, .sp=0x09, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0xa2}, {.addr=0xec52, .value=0x04}, {.addr=0xec53, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xec52, .value=0x04, .type=IO_READ},
        {.addr=0xec53, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x2317, .a=0x99, .x=0xfb, .y=0xed, .sp=0x07, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00de, .value=0x37}, {.addr=0x2317, .value=0x04}, {.addr=0x2318, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x2319, .a=0xbf, .x=0xfb, .y=0xed, .sp=0x07, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00de, .value=0x37}, {.addr=0x2317, .value=0x04}, {.addr=0x2318, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x2317, .value=0x04, .type=IO_READ},
        {.addr=0x2318, .value=0xde, .type=IO_READ},
        {.addr=0x00de, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x0fe2, .a=0x44, .x=0xc3, .y=0xf4, .sp=0x9a, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0x97}, {.addr=0x0fe2, .value=0x04}, {.addr=0x0fe3, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x0fe4, .a=0xd7, .x=0xc3, .y=0xf4, .sp=0x9a, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0x97}, {.addr=0x0fe2, .value=0x04}, {.addr=0x0fe3, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fe2, .value=0x04, .type=IO_READ},
        {.addr=0x0fe3, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x794a, .a=0x83, .x=0x16, .y=0x81, .sp=0x67, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0x2e}, {.addr=0x794a, .value=0x04}, {.addr=0x794b, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x794c, .a=0xaf, .x=0x16, .y=0x81, .sp=0x67, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0x2e}, {.addr=0x794a, .value=0x04}, {.addr=0x794b, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x794a, .value=0x04, .type=IO_READ},
        {.addr=0x794b, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x851a, .a=0xc4, .x=0xa8, .y=0x23, .sp=0xea, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0x2a}, {.addr=0x851a, .value=0x04}, {.addr=0x851b, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x851c, .a=0xee, .x=0xa8, .y=0x23, .sp=0xea, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0x2a}, {.addr=0x851a, .value=0x04}, {.addr=0x851b, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x851a, .value=0x04, .type=IO_READ},
        {.addr=0x851b, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x6bb8, .a=0x4b, .x=0xa0, .y=0x30, .sp=0x70, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0xb4}, {.addr=0x6bb8, .value=0x04}, {.addr=0x6bb9, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x6bba, .a=0xff, .x=0xa0, .y=0x30, .sp=0x70, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0xb4}, {.addr=0x6bb8, .value=0x04}, {.addr=0x6bb9, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x6bb8, .value=0x04, .type=IO_READ},
        {.addr=0x6bb9, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x9e02, .a=0x95, .x=0x90, .y=0x0a, .sp=0x2b, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0x78}, {.addr=0x9e02, .value=0x04}, {.addr=0x9e03, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x9e04, .a=0xfd, .x=0x90, .y=0x0a, .sp=0x2b, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0x78}, {.addr=0x9e02, .value=0x04}, {.addr=0x9e03, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e02, .value=0x04, .type=IO_READ},
        {.addr=0x9e03, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x3e64, .a=0x64, .x=0xd0, .y=0x1f, .sp=0x3e, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0xff}, {.addr=0x3e64, .value=0x04}, {.addr=0x3e65, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x3e66, .a=0xff, .x=0xd0, .y=0x1f, .sp=0x3e, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0xff}, {.addr=0x3e64, .value=0x04}, {.addr=0x3e65, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e64, .value=0x04, .type=IO_READ},
        {.addr=0x3e65, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xc994, .a=0x01, .x=0x21, .y=0xbe, .sp=0xf0, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0xd8}, {.addr=0xc994, .value=0x04}, {.addr=0xc995, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0xc996, .a=0xd9, .x=0x21, .y=0xbe, .sp=0xf0, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0xd8}, {.addr=0xc994, .value=0x04}, {.addr=0xc995, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0xc994, .value=0x04, .type=IO_READ},
        {.addr=0xc995, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x9642, .a=0x7f, .x=0x5d, .y=0x43, .sp=0x86, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0x54}, {.addr=0x9642, .value=0x04}, {.addr=0x9643, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x9644, .a=0x7f, .x=0x5d, .y=0x43, .sp=0x86, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0x54}, {.addr=0x9642, .value=0x04}, {.addr=0x9643, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x9642, .value=0x04, .type=IO_READ},
        {.addr=0x9643, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x8991, .a=0xc0, .x=0xbb, .y=0x34, .sp=0x83, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0112, .value=0x11}, {.addr=0x8991, .value=0x04}, {.addr=0x8992, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x8993, .a=0xd1, .x=0xbb, .y=0x34, .sp=0x83, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0112, .value=0x11}, {.addr=0x8991, .value=0x04}, {.addr=0x8992, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x8991, .value=0x04, .type=IO_READ},
        {.addr=0x8992, .value=0x12, .type=IO_READ},
        {.addr=0x0112, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x2db1, .a=0x9e, .x=0x1e, .y=0xe2, .sp=0x7f, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0xed}, {.addr=0x2db1, .value=0x04}, {.addr=0x2db2, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x2db3, .a=0xff, .x=0x1e, .y=0xe2, .sp=0x7f, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0xed}, {.addr=0x2db1, .value=0x04}, {.addr=0x2db2, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x2db1, .value=0x04, .type=IO_READ},
        {.addr=0x2db2, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x38f8, .a=0x73, .x=0xdf, .y=0x0a, .sp=0x44, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0xb5}, {.addr=0x38f8, .value=0x04}, {.addr=0x38f9, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x38fa, .a=0xf7, .x=0xdf, .y=0x0a, .sp=0x44, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0xb5}, {.addr=0x38f8, .value=0x04}, {.addr=0x38f9, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x38f8, .value=0x04, .type=IO_READ},
        {.addr=0x38f9, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x191c, .a=0xff, .x=0xb0, .y=0xcd, .sp=0x79, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0xd7}, {.addr=0x191c, .value=0x04}, {.addr=0x191d, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x191e, .a=0xff, .x=0xb0, .y=0xcd, .sp=0x79, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0xd7}, {.addr=0x191c, .value=0x04}, {.addr=0x191d, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x191c, .value=0x04, .type=IO_READ},
        {.addr=0x191d, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xe494, .a=0x31, .x=0x90, .y=0xd2, .sp=0xe8, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0xaa}, {.addr=0xe494, .value=0x04}, {.addr=0xe495, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0xe496, .a=0xbb, .x=0x90, .y=0xd2, .sp=0xe8, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0xaa}, {.addr=0xe494, .value=0x04}, {.addr=0xe495, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0xe494, .value=0x04, .type=IO_READ},
        {.addr=0xe495, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xcb6e, .a=0x9b, .x=0x1f, .y=0x41, .sp=0x4a, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005f, .value=0x7b}, {.addr=0xcb6e, .value=0x04}, {.addr=0xcb6f, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0xcb70, .a=0xfb, .x=0x1f, .y=0x41, .sp=0x4a, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x005f, .value=0x7b}, {.addr=0xcb6e, .value=0x04}, {.addr=0xcb6f, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb6e, .value=0x04, .type=IO_READ},
        {.addr=0xcb6f, .value=0x5f, .type=IO_READ},
        {.addr=0x005f, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xbe88, .a=0x56, .x=0x8a, .y=0xd4, .sp=0xfc, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c4, .value=0x43}, {.addr=0xbe88, .value=0x04}, {.addr=0xbe89, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xbe8a, .a=0x57, .x=0x8a, .y=0xd4, .sp=0xfc, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c4, .value=0x43}, {.addr=0xbe88, .value=0x04}, {.addr=0xbe89, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe88, .value=0x04, .type=IO_READ},
        {.addr=0xbe89, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x146b, .a=0xe4, .x=0x02, .y=0x3c, .sp=0x32, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0x5a}, {.addr=0x146b, .value=0x04}, {.addr=0x146c, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x146d, .a=0xfe, .x=0x02, .y=0x3c, .sp=0x32, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0x5a}, {.addr=0x146b, .value=0x04}, {.addr=0x146c, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x146b, .value=0x04, .type=IO_READ},
        {.addr=0x146c, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x4508, .a=0xb8, .x=0xcf, .y=0xe4, .sp=0x58, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0xdd}, {.addr=0x4508, .value=0x04}, {.addr=0x4509, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x450a, .a=0xfd, .x=0xcf, .y=0xe4, .sp=0x58, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0xdd}, {.addr=0x4508, .value=0x04}, {.addr=0x4509, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x4508, .value=0x04, .type=IO_READ},
        {.addr=0x4509, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xd438, .a=0x60, .x=0x4f, .y=0x14, .sp=0xe9, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0x66}, {.addr=0xd438, .value=0x04}, {.addr=0xd439, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xd43a, .a=0x66, .x=0x4f, .y=0x14, .sp=0xe9, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0x66}, {.addr=0xd438, .value=0x04}, {.addr=0xd439, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xd438, .value=0x04, .type=IO_READ},
        {.addr=0xd439, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x8258, .a=0x2b, .x=0x74, .y=0xaf, .sp=0xb1, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0xc8}, {.addr=0x8258, .value=0x04}, {.addr=0x8259, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x825a, .a=0xeb, .x=0x74, .y=0xaf, .sp=0xb1, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0xc8}, {.addr=0x8258, .value=0x04}, {.addr=0x8259, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x8258, .value=0x04, .type=IO_READ},
        {.addr=0x8259, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x121d, .a=0x2b, .x=0x8f, .y=0x69, .sp=0xee, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0xa1}, {.addr=0x121d, .value=0x04}, {.addr=0x121e, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x121f, .a=0xab, .x=0x8f, .y=0x69, .sp=0xee, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0xa1}, {.addr=0x121d, .value=0x04}, {.addr=0x121e, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x121d, .value=0x04, .type=IO_READ},
        {.addr=0x121e, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xba84, .a=0xdd, .x=0x57, .y=0x1e, .sp=0x3b, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0x7f}, {.addr=0xba84, .value=0x04}, {.addr=0xba85, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xba86, .a=0xff, .x=0x57, .y=0x1e, .sp=0x3b, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0x7f}, {.addr=0xba84, .value=0x04}, {.addr=0xba85, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xba84, .value=0x04, .type=IO_READ},
        {.addr=0xba85, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xbaea, .a=0x05, .x=0x1a, .y=0x63, .sp=0x8a, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0xa5}, {.addr=0xbaea, .value=0x04}, {.addr=0xbaeb, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xbaec, .a=0xa5, .x=0x1a, .y=0x63, .sp=0x8a, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0xa5}, {.addr=0xbaea, .value=0x04}, {.addr=0xbaeb, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xbaea, .value=0x04, .type=IO_READ},
        {.addr=0xbaeb, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xaec0, .a=0x15, .x=0x1a, .y=0xf9, .sp=0x79, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0x6e}, {.addr=0xaec0, .value=0x04}, {.addr=0xaec1, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xaec2, .a=0x7f, .x=0x1a, .y=0xf9, .sp=0x79, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0x6e}, {.addr=0xaec0, .value=0x04}, {.addr=0xaec1, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xaec0, .value=0x04, .type=IO_READ},
        {.addr=0xaec1, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xeb7f, .a=0x34, .x=0xc3, .y=0x0e, .sp=0xd2, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x1d}, {.addr=0xeb7f, .value=0x04}, {.addr=0xeb80, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xeb81, .a=0x3d, .x=0xc3, .y=0x0e, .sp=0xd2, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x1d}, {.addr=0xeb7f, .value=0x04}, {.addr=0xeb80, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb7f, .value=0x04, .type=IO_READ},
        {.addr=0xeb80, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xd2a9, .a=0x18, .x=0xf8, .y=0x0a, .sp=0x81, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0xec}, {.addr=0xd2a9, .value=0x04}, {.addr=0xd2aa, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0xd2ab, .a=0xfc, .x=0xf8, .y=0x0a, .sp=0x81, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0xec}, {.addr=0xd2a9, .value=0x04}, {.addr=0xd2aa, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2a9, .value=0x04, .type=IO_READ},
        {.addr=0xd2aa, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x5958, .a=0xc0, .x=0xec, .y=0x12, .sp=0x3b, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e9, .value=0x8b}, {.addr=0x5958, .value=0x04}, {.addr=0x5959, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x595a, .a=0xcb, .x=0xec, .y=0x12, .sp=0x3b, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e9, .value=0x8b}, {.addr=0x5958, .value=0x04}, {.addr=0x5959, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x5958, .value=0x04, .type=IO_READ},
        {.addr=0x5959, .value=0xe9, .type=IO_READ},
        {.addr=0x00e9, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x7ded, .a=0x27, .x=0xe6, .y=0x11, .sp=0xfe, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0xf4}, {.addr=0x7ded, .value=0x04}, {.addr=0x7dee, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x7def, .a=0xf7, .x=0xe6, .y=0x11, .sp=0xfe, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0xf4}, {.addr=0x7ded, .value=0x04}, {.addr=0x7dee, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ded, .value=0x04, .type=IO_READ},
        {.addr=0x7dee, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x413f, .a=0xa4, .x=0xe5, .y=0xb8, .sp=0x63, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0xaa}, {.addr=0x413f, .value=0x04}, {.addr=0x4140, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x4141, .a=0xae, .x=0xe5, .y=0xb8, .sp=0x63, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0xaa}, {.addr=0x413f, .value=0x04}, {.addr=0x4140, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x413f, .value=0x04, .type=IO_READ},
        {.addr=0x4140, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xf6df, .a=0xcc, .x=0x2e, .y=0xfb, .sp=0xf0, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0xc8}, {.addr=0xf6df, .value=0x04}, {.addr=0xf6e0, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xf6e1, .a=0xcc, .x=0x2e, .y=0xfb, .sp=0xf0, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0xc8}, {.addr=0xf6df, .value=0x04}, {.addr=0xf6e0, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf6df, .value=0x04, .type=IO_READ},
        {.addr=0xf6e0, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x6ab6, .a=0xf6, .x=0xf7, .y=0xae, .sp=0x05, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0xaf}, {.addr=0x6ab6, .value=0x04}, {.addr=0x6ab7, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x6ab8, .a=0xff, .x=0xf7, .y=0xae, .sp=0x05, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0xaf}, {.addr=0x6ab6, .value=0x04}, {.addr=0x6ab7, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ab6, .value=0x04, .type=IO_READ},
        {.addr=0x6ab7, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xe76d, .a=0x0c, .x=0xe7, .y=0xf3, .sp=0x3b, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x23}, {.addr=0xe76d, .value=0x04}, {.addr=0xe76e, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0xe76f, .a=0x2f, .x=0xe7, .y=0xf3, .sp=0x3b, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x23}, {.addr=0xe76d, .value=0x04}, {.addr=0xe76e, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0xe76d, .value=0x04, .type=IO_READ},
        {.addr=0xe76e, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x4ffb, .a=0xe1, .x=0x7f, .y=0x42, .sp=0x14, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0x45}, {.addr=0x4ffb, .value=0x04}, {.addr=0x4ffc, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x4ffd, .a=0xe5, .x=0x7f, .y=0x42, .sp=0x14, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0x45}, {.addr=0x4ffb, .value=0x04}, {.addr=0x4ffc, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ffb, .value=0x04, .type=IO_READ},
        {.addr=0x4ffc, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x7749, .a=0xfc, .x=0x32, .y=0x9c, .sp=0x37, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0x48}, {.addr=0x7749, .value=0x04}, {.addr=0x774a, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x774b, .a=0xfc, .x=0x32, .y=0x9c, .sp=0x37, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0x48}, {.addr=0x7749, .value=0x04}, {.addr=0x774a, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x7749, .value=0x04, .type=IO_READ},
        {.addr=0x774a, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xc45f, .a=0x44, .x=0xed, .y=0x1e, .sp=0x12, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0xac}, {.addr=0xc45f, .value=0x04}, {.addr=0xc460, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xc461, .a=0xec, .x=0xed, .y=0x1e, .sp=0x12, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0xac}, {.addr=0xc45f, .value=0x04}, {.addr=0xc460, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xc45f, .value=0x04, .type=IO_READ},
        {.addr=0xc460, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xc298, .a=0x6a, .x=0x88, .y=0x1e, .sp=0x70, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0x61}, {.addr=0xc298, .value=0x04}, {.addr=0xc299, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0xc29a, .a=0x6b, .x=0x88, .y=0x1e, .sp=0x70, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0x61}, {.addr=0xc298, .value=0x04}, {.addr=0xc299, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0xc298, .value=0x04, .type=IO_READ},
        {.addr=0xc299, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xb625, .a=0x66, .x=0xb8, .y=0x82, .sp=0xba, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0xdc}, {.addr=0xb625, .value=0x04}, {.addr=0xb626, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xb627, .a=0xfe, .x=0xb8, .y=0x82, .sp=0xba, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0xdc}, {.addr=0xb625, .value=0x04}, {.addr=0xb626, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xb625, .value=0x04, .type=IO_READ},
        {.addr=0xb626, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x6499, .a=0x75, .x=0x03, .y=0x12, .sp=0x97, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0xa5}, {.addr=0x6499, .value=0x04}, {.addr=0x649a, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x649b, .a=0xf5, .x=0x03, .y=0x12, .sp=0x97, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0xa5}, {.addr=0x6499, .value=0x04}, {.addr=0x649a, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x6499, .value=0x04, .type=IO_READ},
        {.addr=0x649a, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x2b9b, .a=0x4b, .x=0xb2, .y=0x27, .sp=0x2b, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0xea}, {.addr=0x2b9b, .value=0x04}, {.addr=0x2b9c, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x2b9d, .a=0xeb, .x=0xb2, .y=0x27, .sp=0x2b, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0xea}, {.addr=0x2b9b, .value=0x04}, {.addr=0x2b9c, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b9b, .value=0x04, .type=IO_READ},
        {.addr=0x2b9c, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x6885, .a=0x86, .x=0x4e, .y=0xaa, .sp=0xbe, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x13}, {.addr=0x6885, .value=0x04}, {.addr=0x6886, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x6887, .a=0x97, .x=0x4e, .y=0xaa, .sp=0xbe, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x13}, {.addr=0x6885, .value=0x04}, {.addr=0x6886, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x6885, .value=0x04, .type=IO_READ},
        {.addr=0x6886, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x1bc1, .a=0xcd, .x=0x94, .y=0xfc, .sp=0xdb, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0xce}, {.addr=0x1bc1, .value=0x04}, {.addr=0x1bc2, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x1bc3, .a=0xcf, .x=0x94, .y=0xfc, .sp=0xdb, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0xce}, {.addr=0x1bc1, .value=0x04}, {.addr=0x1bc2, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x1bc1, .value=0x04, .type=IO_READ},
        {.addr=0x1bc2, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xd39f, .a=0xe3, .x=0xbb, .y=0x74, .sp=0xcd, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0xe8}, {.addr=0xd39f, .value=0x04}, {.addr=0xd3a0, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0xd3a1, .a=0xeb, .x=0xbb, .y=0x74, .sp=0xcd, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0xe8}, {.addr=0xd39f, .value=0x04}, {.addr=0xd3a0, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0xd39f, .value=0x04, .type=IO_READ},
        {.addr=0xd3a0, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x5ada, .a=0x9f, .x=0x6c, .y=0x82, .sp=0x48, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0x97}, {.addr=0x5ada, .value=0x04}, {.addr=0x5adb, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x5adc, .a=0x9f, .x=0x6c, .y=0x82, .sp=0x48, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0x97}, {.addr=0x5ada, .value=0x04}, {.addr=0x5adb, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ada, .value=0x04, .type=IO_READ},
        {.addr=0x5adb, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x11c3, .a=0x6c, .x=0xee, .y=0x74, .sp=0x46, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0112, .value=0x3a}, {.addr=0x11c3, .value=0x04}, {.addr=0x11c4, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x11c5, .a=0x7e, .x=0xee, .y=0x74, .sp=0x46, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0112, .value=0x3a}, {.addr=0x11c3, .value=0x04}, {.addr=0x11c4, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x11c3, .value=0x04, .type=IO_READ},
        {.addr=0x11c4, .value=0x12, .type=IO_READ},
        {.addr=0x0112, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x777e, .a=0x00, .x=0xa5, .y=0xc4, .sp=0x6b, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x11}, {.addr=0x777e, .value=0x04}, {.addr=0x777f, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x7780, .a=0x11, .x=0xa5, .y=0xc4, .sp=0x6b, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x11}, {.addr=0x777e, .value=0x04}, {.addr=0x777f, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x777e, .value=0x04, .type=IO_READ},
        {.addr=0x777f, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x4796, .a=0x8c, .x=0x7d, .y=0xbd, .sp=0x9e, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0x80}, {.addr=0x4796, .value=0x04}, {.addr=0x4797, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x4798, .a=0x8c, .x=0x7d, .y=0xbd, .sp=0x9e, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0x80}, {.addr=0x4796, .value=0x04}, {.addr=0x4797, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x4796, .value=0x04, .type=IO_READ},
        {.addr=0x4797, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x7f12, .a=0x7a, .x=0xae, .y=0x14, .sp=0x33, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0x43}, {.addr=0x7f12, .value=0x04}, {.addr=0x7f13, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x7f14, .a=0x7b, .x=0xae, .y=0x14, .sp=0x33, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0x43}, {.addr=0x7f12, .value=0x04}, {.addr=0x7f13, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f12, .value=0x04, .type=IO_READ},
        {.addr=0x7f13, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x7f86, .a=0xe6, .x=0x7e, .y=0x94, .sp=0xc3, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0x5d}, {.addr=0x7f86, .value=0x04}, {.addr=0x7f87, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x7f88, .a=0xff, .x=0x7e, .y=0x94, .sp=0xc3, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0x5d}, {.addr=0x7f86, .value=0x04}, {.addr=0x7f87, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f86, .value=0x04, .type=IO_READ},
        {.addr=0x7f87, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x1eda, .a=0x46, .x=0x0d, .y=0x9d, .sp=0xbf, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0x37}, {.addr=0x1eda, .value=0x04}, {.addr=0x1edb, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x1edc, .a=0x77, .x=0x0d, .y=0x9d, .sp=0xbf, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0x37}, {.addr=0x1eda, .value=0x04}, {.addr=0x1edb, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x1eda, .value=0x04, .type=IO_READ},
        {.addr=0x1edb, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x296d, .a=0x5f, .x=0x8b, .y=0x3a, .sp=0xf1, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0x8a}, {.addr=0x296d, .value=0x04}, {.addr=0x296e, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x296f, .a=0xdf, .x=0x8b, .y=0x3a, .sp=0xf1, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0x8a}, {.addr=0x296d, .value=0x04}, {.addr=0x296e, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x296d, .value=0x04, .type=IO_READ},
        {.addr=0x296e, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x0c5f, .a=0x94, .x=0xd7, .y=0xf4, .sp=0x21, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0x90}, {.addr=0x0c5f, .value=0x04}, {.addr=0x0c60, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x0c61, .a=0x94, .x=0xd7, .y=0xf4, .sp=0x21, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0x90}, {.addr=0x0c5f, .value=0x04}, {.addr=0x0c60, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c5f, .value=0x04, .type=IO_READ},
        {.addr=0x0c60, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xfa2b, .a=0x64, .x=0xeb, .y=0x7e, .sp=0xb8, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0x1b}, {.addr=0xfa2b, .value=0x04}, {.addr=0xfa2c, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0xfa2d, .a=0x7f, .x=0xeb, .y=0x7e, .sp=0xb8, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0x1b}, {.addr=0xfa2b, .value=0x04}, {.addr=0xfa2c, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa2b, .value=0x04, .type=IO_READ},
        {.addr=0xfa2c, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x914b, .a=0x30, .x=0x8f, .y=0xaf, .sp=0x27, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0xf3}, {.addr=0x914b, .value=0x04}, {.addr=0x914c, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x914d, .a=0xf3, .x=0x8f, .y=0xaf, .sp=0x27, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0xf3}, {.addr=0x914b, .value=0x04}, {.addr=0x914c, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x914b, .value=0x04, .type=IO_READ},
        {.addr=0x914c, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x86cc, .a=0x18, .x=0x07, .y=0xfe, .sp=0xb2, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0xaf}, {.addr=0x86cc, .value=0x04}, {.addr=0x86cd, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x86ce, .a=0xbf, .x=0x07, .y=0xfe, .sp=0xb2, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0xaf}, {.addr=0x86cc, .value=0x04}, {.addr=0x86cd, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x86cc, .value=0x04, .type=IO_READ},
        {.addr=0x86cd, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x59d5, .a=0x70, .x=0xa4, .y=0x00, .sp=0x4e, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0xe0}, {.addr=0x59d5, .value=0x04}, {.addr=0x59d6, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x59d7, .a=0xf0, .x=0xa4, .y=0x00, .sp=0x4e, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0xe0}, {.addr=0x59d5, .value=0x04}, {.addr=0x59d6, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x59d5, .value=0x04, .type=IO_READ},
        {.addr=0x59d6, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x9586, .a=0x12, .x=0xf7, .y=0x40, .sp=0x7c, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0xc4}, {.addr=0x9586, .value=0x04}, {.addr=0x9587, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x9588, .a=0xd6, .x=0xf7, .y=0x40, .sp=0x7c, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0xc4}, {.addr=0x9586, .value=0x04}, {.addr=0x9587, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x9586, .value=0x04, .type=IO_READ},
        {.addr=0x9587, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xd0aa, .a=0x27, .x=0x63, .y=0x9a, .sp=0x8c, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0x90}, {.addr=0xd0aa, .value=0x04}, {.addr=0xd0ab, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0xd0ac, .a=0xb7, .x=0x63, .y=0x9a, .sp=0x8c, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0x90}, {.addr=0xd0aa, .value=0x04}, {.addr=0xd0ab, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0xd0aa, .value=0x04, .type=IO_READ},
        {.addr=0xd0ab, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xd410, .a=0xdd, .x=0x8c, .y=0xaf, .sp=0x39, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0x48}, {.addr=0xd410, .value=0x04}, {.addr=0xd411, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xd412, .a=0xdd, .x=0x8c, .y=0xaf, .sp=0x39, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0x48}, {.addr=0xd410, .value=0x04}, {.addr=0xd411, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xd410, .value=0x04, .type=IO_READ},
        {.addr=0xd411, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xf39f, .a=0xab, .x=0xcb, .y=0x96, .sp=0x44, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0x3d}, {.addr=0xf39f, .value=0x04}, {.addr=0xf3a0, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xf3a1, .a=0xbf, .x=0xcb, .y=0x96, .sp=0x44, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0x3d}, {.addr=0xf39f, .value=0x04}, {.addr=0xf3a0, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf39f, .value=0x04, .type=IO_READ},
        {.addr=0xf3a0, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x2ef3, .a=0x52, .x=0x84, .y=0xef, .sp=0x1f, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ed, .value=0xd4}, {.addr=0x2ef3, .value=0x04}, {.addr=0x2ef4, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x2ef5, .a=0xd6, .x=0x84, .y=0xef, .sp=0x1f, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ed, .value=0xd4}, {.addr=0x2ef3, .value=0x04}, {.addr=0x2ef4, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ef3, .value=0x04, .type=IO_READ},
        {.addr=0x2ef4, .value=0xed, .type=IO_READ},
        {.addr=0x01ed, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x4524, .a=0xd1, .x=0x31, .y=0x30, .sp=0x41, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008d, .value=0x29}, {.addr=0x4524, .value=0x04}, {.addr=0x4525, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x4526, .a=0xf9, .x=0x31, .y=0x30, .sp=0x41, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x008d, .value=0x29}, {.addr=0x4524, .value=0x04}, {.addr=0x4525, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4524, .value=0x04, .type=IO_READ},
        {.addr=0x4525, .value=0x8d, .type=IO_READ},
        {.addr=0x008d, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xce5b, .a=0x0d, .x=0x09, .y=0xa0, .sp=0xf4, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0x71}, {.addr=0xce5b, .value=0x04}, {.addr=0xce5c, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0xce5d, .a=0x7d, .x=0x09, .y=0xa0, .sp=0xf4, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0x71}, {.addr=0xce5b, .value=0x04}, {.addr=0xce5c, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0xce5b, .value=0x04, .type=IO_READ},
        {.addr=0xce5c, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x8231, .a=0x80, .x=0xce, .y=0xaa, .sp=0xb0, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0x28}, {.addr=0x8231, .value=0x04}, {.addr=0x8232, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x8233, .a=0xa8, .x=0xce, .y=0xaa, .sp=0xb0, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0x28}, {.addr=0x8231, .value=0x04}, {.addr=0x8232, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8231, .value=0x04, .type=IO_READ},
        {.addr=0x8232, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x83b4, .a=0xbc, .x=0xb0, .y=0xb9, .sp=0x54, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0xb1}, {.addr=0x83b4, .value=0x04}, {.addr=0x83b5, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x83b6, .a=0xbd, .x=0xb0, .y=0xb9, .sp=0x54, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0xb1}, {.addr=0x83b4, .value=0x04}, {.addr=0x83b5, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x83b4, .value=0x04, .type=IO_READ},
        {.addr=0x83b5, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x890e, .a=0x5a, .x=0x66, .y=0x6b, .sp=0x77, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0xdc}, {.addr=0x890e, .value=0x04}, {.addr=0x890f, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x8910, .a=0xde, .x=0x66, .y=0x6b, .sp=0x77, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0xdc}, {.addr=0x890e, .value=0x04}, {.addr=0x890f, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x890e, .value=0x04, .type=IO_READ},
        {.addr=0x890f, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xfe06, .a=0x08, .x=0x20, .y=0x6b, .sp=0xe9, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0x52}, {.addr=0xfe06, .value=0x04}, {.addr=0xfe07, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0xfe08, .a=0x5a, .x=0x20, .y=0x6b, .sp=0xe9, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0x52}, {.addr=0xfe06, .value=0x04}, {.addr=0xfe07, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe06, .value=0x04, .type=IO_READ},
        {.addr=0xfe07, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x4aa9, .a=0x5a, .x=0x1a, .y=0xe5, .sp=0x96, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d5, .value=0xae}, {.addr=0x4aa9, .value=0x04}, {.addr=0x4aaa, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x4aab, .a=0xfe, .x=0x1a, .y=0xe5, .sp=0x96, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d5, .value=0xae}, {.addr=0x4aa9, .value=0x04}, {.addr=0x4aaa, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x4aa9, .value=0x04, .type=IO_READ},
        {.addr=0x4aaa, .value=0xd5, .type=IO_READ},
        {.addr=0x00d5, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xcb65, .a=0xbf, .x=0xdd, .y=0x34, .sp=0x75, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0xf6}, {.addr=0xcb65, .value=0x04}, {.addr=0xcb66, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0xcb67, .a=0xff, .x=0xdd, .y=0x34, .sp=0x75, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0xf6}, {.addr=0xcb65, .value=0x04}, {.addr=0xcb66, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb65, .value=0x04, .type=IO_READ},
        {.addr=0xcb66, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xe706, .a=0x33, .x=0xfa, .y=0x4f, .sp=0x21, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0xf2}, {.addr=0xe706, .value=0x04}, {.addr=0xe707, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xe708, .a=0xf3, .x=0xfa, .y=0x4f, .sp=0x21, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0xf2}, {.addr=0xe706, .value=0x04}, {.addr=0xe707, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xe706, .value=0x04, .type=IO_READ},
        {.addr=0xe707, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x2ada, .a=0xcb, .x=0xa8, .y=0x11, .sp=0x68, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0xeb}, {.addr=0x2ada, .value=0x04}, {.addr=0x2adb, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x2adc, .a=0xeb, .x=0xa8, .y=0x11, .sp=0x68, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0xeb}, {.addr=0x2ada, .value=0x04}, {.addr=0x2adb, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ada, .value=0x04, .type=IO_READ},
        {.addr=0x2adb, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x5b08, .a=0x54, .x=0x7d, .y=0x7a, .sp=0x57, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0xa9}, {.addr=0x5b08, .value=0x04}, {.addr=0x5b09, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x5b0a, .a=0xfd, .x=0x7d, .y=0x7a, .sp=0x57, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0xa9}, {.addr=0x5b08, .value=0x04}, {.addr=0x5b09, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b08, .value=0x04, .type=IO_READ},
        {.addr=0x5b09, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x58d3, .a=0xe6, .x=0x2c, .y=0xb5, .sp=0xa1, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0x1f}, {.addr=0x58d3, .value=0x04}, {.addr=0x58d4, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x58d5, .a=0xff, .x=0x2c, .y=0xb5, .sp=0xa1, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0x1f}, {.addr=0x58d3, .value=0x04}, {.addr=0x58d4, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x58d3, .value=0x04, .type=IO_READ},
        {.addr=0x58d4, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x72ba, .a=0x93, .x=0x16, .y=0x00, .sp=0x82, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0112, .value=0x9e}, {.addr=0x72ba, .value=0x04}, {.addr=0x72bb, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x72bc, .a=0x9f, .x=0x16, .y=0x00, .sp=0x82, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0112, .value=0x9e}, {.addr=0x72ba, .value=0x04}, {.addr=0x72bb, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x72ba, .value=0x04, .type=IO_READ},
        {.addr=0x72bb, .value=0x12, .type=IO_READ},
        {.addr=0x0112, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x44fb, .a=0x94, .x=0xfd, .y=0xfd, .sp=0x7f, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0x94}, {.addr=0x44fb, .value=0x04}, {.addr=0x44fc, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x44fd, .a=0x94, .x=0xfd, .y=0xfd, .sp=0x7f, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0x94}, {.addr=0x44fb, .value=0x04}, {.addr=0x44fc, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x44fb, .value=0x04, .type=IO_READ},
        {.addr=0x44fc, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x2251, .a=0x16, .x=0xd0, .y=0x60, .sp=0x02, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0x81}, {.addr=0x2251, .value=0x04}, {.addr=0x2252, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x2253, .a=0x97, .x=0xd0, .y=0x60, .sp=0x02, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0x81}, {.addr=0x2251, .value=0x04}, {.addr=0x2252, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x2251, .value=0x04, .type=IO_READ},
        {.addr=0x2252, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x072e, .a=0xb0, .x=0x39, .y=0x1a, .sp=0x83, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0x1e}, {.addr=0x072e, .value=0x04}, {.addr=0x072f, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x0730, .a=0xbe, .x=0x39, .y=0x1a, .sp=0x83, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0x1e}, {.addr=0x072e, .value=0x04}, {.addr=0x072f, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x072e, .value=0x04, .type=IO_READ},
        {.addr=0x072f, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x7aca, .a=0x88, .x=0x14, .y=0x57, .sp=0xfc, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x82}, {.addr=0x7aca, .value=0x04}, {.addr=0x7acb, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x7acc, .a=0x8a, .x=0x14, .y=0x57, .sp=0xfc, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x82}, {.addr=0x7aca, .value=0x04}, {.addr=0x7acb, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x7aca, .value=0x04, .type=IO_READ},
        {.addr=0x7acb, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x89ef, .a=0x4c, .x=0xa3, .y=0x47, .sp=0xfd, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x34}, {.addr=0x89ef, .value=0x04}, {.addr=0x89f0, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x89f1, .a=0x7c, .x=0xa3, .y=0x47, .sp=0xfd, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x34}, {.addr=0x89ef, .value=0x04}, {.addr=0x89f0, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x89ef, .value=0x04, .type=IO_READ},
        {.addr=0x89f0, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0100) {
    const struct CPU_State initial_cpu = {.pc=0x3da1, .a=0x8e, .x=0xbe, .y=0xc9, .sp=0xb2, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0x18}, {.addr=0x3da1, .value=0x04}, {.addr=0x3da2, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0x3da3, .a=0x9e, .x=0xbe, .y=0xc9, .sp=0xb2, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0x18}, {.addr=0x3da1, .value=0x04}, {.addr=0x3da2, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0x3da1, .value=0x04, .type=IO_READ},
        {.addr=0x3da2, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0101) {
    const struct CPU_State initial_cpu = {.pc=0x78cd, .a=0x43, .x=0xe7, .y=0x89, .sp=0x32, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x17}, {.addr=0x78cd, .value=0x04}, {.addr=0x78ce, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x78cf, .a=0x57, .x=0xe7, .y=0x89, .sp=0x32, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x17}, {.addr=0x78cd, .value=0x04}, {.addr=0x78ce, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x78cd, .value=0x04, .type=IO_READ},
        {.addr=0x78ce, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0102) {
    const struct CPU_State initial_cpu = {.pc=0xf8cf, .a=0x42, .x=0x69, .y=0x33, .sp=0x2a, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0025, .value=0x91}, {.addr=0xf8cf, .value=0x04}, {.addr=0xf8d0, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0xf8d1, .a=0xd3, .x=0x69, .y=0x33, .sp=0x2a, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0025, .value=0x91}, {.addr=0xf8cf, .value=0x04}, {.addr=0xf8d0, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0xf8cf, .value=0x04, .type=IO_READ},
        {.addr=0xf8d0, .value=0x25, .type=IO_READ},
        {.addr=0x0025, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0103) {
    const struct CPU_State initial_cpu = {.pc=0xf757, .a=0x4c, .x=0x83, .y=0x2d, .sp=0x00, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0x63}, {.addr=0xf757, .value=0x04}, {.addr=0xf758, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xf759, .a=0x6f, .x=0x83, .y=0x2d, .sp=0x00, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0x63}, {.addr=0xf757, .value=0x04}, {.addr=0xf758, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xf757, .value=0x04, .type=IO_READ},
        {.addr=0xf758, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0104) {
    const struct CPU_State initial_cpu = {.pc=0x0695, .a=0xf7, .x=0x07, .y=0xb6, .sp=0x8a, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0x89}, {.addr=0x0695, .value=0x04}, {.addr=0x0696, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x0697, .a=0xff, .x=0x07, .y=0xb6, .sp=0x8a, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0x89}, {.addr=0x0695, .value=0x04}, {.addr=0x0696, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x0695, .value=0x04, .type=IO_READ},
        {.addr=0x0696, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0105) {
    const struct CPU_State initial_cpu = {.pc=0xd6d0, .a=0xa2, .x=0xe7, .y=0x06, .sp=0x7b, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004a, .value=0x1d}, {.addr=0xd6d0, .value=0x04}, {.addr=0xd6d1, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0xd6d2, .a=0xbf, .x=0xe7, .y=0x06, .sp=0x7b, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x004a, .value=0x1d}, {.addr=0xd6d0, .value=0x04}, {.addr=0xd6d1, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6d0, .value=0x04, .type=IO_READ},
        {.addr=0xd6d1, .value=0x4a, .type=IO_READ},
        {.addr=0x004a, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0106) {
    const struct CPU_State initial_cpu = {.pc=0xc1f9, .a=0xc9, .x=0xdd, .y=0xe2, .sp=0xdf, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0xc9}, {.addr=0xc1f9, .value=0x04}, {.addr=0xc1fa, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0xc1fb, .a=0xc9, .x=0xdd, .y=0xe2, .sp=0xdf, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0xc9}, {.addr=0xc1f9, .value=0x04}, {.addr=0xc1fa, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1f9, .value=0x04, .type=IO_READ},
        {.addr=0xc1fa, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0107) {
    const struct CPU_State initial_cpu = {.pc=0x7f8c, .a=0x64, .x=0xb5, .y=0xe9, .sp=0xa4, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0x1a}, {.addr=0x7f8c, .value=0x04}, {.addr=0x7f8d, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x7f8e, .a=0x7e, .x=0xb5, .y=0xe9, .sp=0xa4, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0x1a}, {.addr=0x7f8c, .value=0x04}, {.addr=0x7f8d, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f8c, .value=0x04, .type=IO_READ},
        {.addr=0x7f8d, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0108) {
    const struct CPU_State initial_cpu = {.pc=0xed89, .a=0xdc, .x=0x3d, .y=0x14, .sp=0xb8, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x72}, {.addr=0xed89, .value=0x04}, {.addr=0xed8a, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xed8b, .a=0xfe, .x=0x3d, .y=0x14, .sp=0xb8, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x72}, {.addr=0xed89, .value=0x04}, {.addr=0xed8a, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xed89, .value=0x04, .type=IO_READ},
        {.addr=0xed8a, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0109) {
    const struct CPU_State initial_cpu = {.pc=0x0ba8, .a=0x8b, .x=0x3a, .y=0x74, .sp=0x84, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0116, .value=0x50}, {.addr=0x0ba8, .value=0x04}, {.addr=0x0ba9, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x0baa, .a=0xdb, .x=0x3a, .y=0x74, .sp=0x84, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0116, .value=0x50}, {.addr=0x0ba8, .value=0x04}, {.addr=0x0ba9, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ba8, .value=0x04, .type=IO_READ},
        {.addr=0x0ba9, .value=0x16, .type=IO_READ},
        {.addr=0x0116, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_010A) {
    const struct CPU_State initial_cpu = {.pc=0xc2d2, .a=0x44, .x=0x54, .y=0xa9, .sp=0xb2, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0x65}, {.addr=0xc2d2, .value=0x04}, {.addr=0xc2d3, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xc2d4, .a=0x65, .x=0x54, .y=0xa9, .sp=0xb2, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0x65}, {.addr=0xc2d2, .value=0x04}, {.addr=0xc2d3, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2d2, .value=0x04, .type=IO_READ},
        {.addr=0xc2d3, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_010B) {
    const struct CPU_State initial_cpu = {.pc=0x70a7, .a=0x17, .x=0xbe, .y=0x21, .sp=0xe8, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0x9d}, {.addr=0x70a7, .value=0x04}, {.addr=0x70a8, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x70a9, .a=0x9f, .x=0xbe, .y=0x21, .sp=0xe8, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0x9d}, {.addr=0x70a7, .value=0x04}, {.addr=0x70a8, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x70a7, .value=0x04, .type=IO_READ},
        {.addr=0x70a8, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_010C) {
    const struct CPU_State initial_cpu = {.pc=0x5655, .a=0x36, .x=0xed, .y=0xa6, .sp=0x43, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0x1d}, {.addr=0x5655, .value=0x04}, {.addr=0x5656, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x5657, .a=0x3f, .x=0xed, .y=0xa6, .sp=0x43, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0x1d}, {.addr=0x5655, .value=0x04}, {.addr=0x5656, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x5655, .value=0x04, .type=IO_READ},
        {.addr=0x5656, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_010D) {
    const struct CPU_State initial_cpu = {.pc=0x3fb7, .a=0x52, .x=0xaa, .y=0x7a, .sp=0x8e, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0xc9}, {.addr=0x3fb7, .value=0x04}, {.addr=0x3fb8, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x3fb9, .a=0xdb, .x=0xaa, .y=0x7a, .sp=0x8e, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0xc9}, {.addr=0x3fb7, .value=0x04}, {.addr=0x3fb8, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3fb7, .value=0x04, .type=IO_READ},
        {.addr=0x3fb8, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_010E) {
    const struct CPU_State initial_cpu = {.pc=0x4f98, .a=0x80, .x=0xad, .y=0x0d, .sp=0xc4, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00de, .value=0xba}, {.addr=0x4f98, .value=0x04}, {.addr=0x4f99, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x4f9a, .a=0xba, .x=0xad, .y=0x0d, .sp=0xc4, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00de, .value=0xba}, {.addr=0x4f98, .value=0x04}, {.addr=0x4f99, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f98, .value=0x04, .type=IO_READ},
        {.addr=0x4f99, .value=0xde, .type=IO_READ},
        {.addr=0x00de, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_010F) {
    const struct CPU_State initial_cpu = {.pc=0x6011, .a=0x13, .x=0x8d, .y=0xb7, .sp=0xf3, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x9c}, {.addr=0x6011, .value=0x04}, {.addr=0x6012, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x6013, .a=0x9f, .x=0x8d, .y=0xb7, .sp=0xf3, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x9c}, {.addr=0x6011, .value=0x04}, {.addr=0x6012, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x6011, .value=0x04, .type=IO_READ},
        {.addr=0x6012, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0110) {
    const struct CPU_State initial_cpu = {.pc=0x1240, .a=0x58, .x=0x9d, .y=0xe0, .sp=0x63, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d5, .value=0x53}, {.addr=0x1240, .value=0x04}, {.addr=0x1241, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x1242, .a=0x5b, .x=0x9d, .y=0xe0, .sp=0x63, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d5, .value=0x53}, {.addr=0x1240, .value=0x04}, {.addr=0x1241, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x1240, .value=0x04, .type=IO_READ},
        {.addr=0x1241, .value=0xd5, .type=IO_READ},
        {.addr=0x00d5, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0111) {
    const struct CPU_State initial_cpu = {.pc=0xadc6, .a=0xe6, .x=0x05, .y=0x23, .sp=0xcf, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0x77}, {.addr=0xadc6, .value=0x04}, {.addr=0xadc7, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xadc8, .a=0xf7, .x=0x05, .y=0x23, .sp=0xcf, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0x77}, {.addr=0xadc6, .value=0x04}, {.addr=0xadc7, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xadc6, .value=0x04, .type=IO_READ},
        {.addr=0xadc7, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0112) {
    const struct CPU_State initial_cpu = {.pc=0x824e, .a=0xa2, .x=0x1b, .y=0x1c, .sp=0xea, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0x4a}, {.addr=0x824e, .value=0x04}, {.addr=0x824f, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x8250, .a=0xea, .x=0x1b, .y=0x1c, .sp=0xea, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0x4a}, {.addr=0x824e, .value=0x04}, {.addr=0x824f, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x824e, .value=0x04, .type=IO_READ},
        {.addr=0x824f, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0114) {
    const struct CPU_State initial_cpu = {.pc=0xb7e5, .a=0xd4, .x=0x12, .y=0xad, .sp=0xac, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0116, .value=0xed}, {.addr=0xb7e5, .value=0x04}, {.addr=0xb7e6, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0xb7e7, .a=0xfd, .x=0x12, .y=0xad, .sp=0xac, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0116, .value=0xed}, {.addr=0xb7e5, .value=0x04}, {.addr=0xb7e6, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0xb7e5, .value=0x04, .type=IO_READ},
        {.addr=0xb7e6, .value=0x16, .type=IO_READ},
        {.addr=0x0116, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0115) {
    const struct CPU_State initial_cpu = {.pc=0x9831, .a=0x0d, .x=0xad, .y=0x52, .sp=0xa8, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0xfe}, {.addr=0x9831, .value=0x04}, {.addr=0x9832, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x9833, .a=0xff, .x=0xad, .y=0x52, .sp=0xa8, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0xfe}, {.addr=0x9831, .value=0x04}, {.addr=0x9832, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x9831, .value=0x04, .type=IO_READ},
        {.addr=0x9832, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0116) {
    const struct CPU_State initial_cpu = {.pc=0xe0b8, .a=0x57, .x=0xa4, .y=0xd4, .sp=0x19, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0x2b}, {.addr=0xe0b8, .value=0x04}, {.addr=0xe0b9, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0xe0ba, .a=0x7f, .x=0xa4, .y=0xd4, .sp=0x19, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0x2b}, {.addr=0xe0b8, .value=0x04}, {.addr=0xe0b9, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0xe0b8, .value=0x04, .type=IO_READ},
        {.addr=0xe0b9, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0117) {
    const struct CPU_State initial_cpu = {.pc=0xe2c6, .a=0xf3, .x=0x78, .y=0x81, .sp=0x38, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0xd5}, {.addr=0xe2c6, .value=0x04}, {.addr=0xe2c7, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xe2c8, .a=0xf7, .x=0x78, .y=0x81, .sp=0x38, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0xd5}, {.addr=0xe2c6, .value=0x04}, {.addr=0xe2c7, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xe2c6, .value=0x04, .type=IO_READ},
        {.addr=0xe2c7, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0118) {
    const struct CPU_State initial_cpu = {.pc=0x8a6d, .a=0x33, .x=0x12, .y=0x49, .sp=0x7e, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0017, .value=0x59}, {.addr=0x8a6d, .value=0x04}, {.addr=0x8a6e, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0x8a6f, .a=0x7b, .x=0x12, .y=0x49, .sp=0x7e, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0017, .value=0x59}, {.addr=0x8a6d, .value=0x04}, {.addr=0x8a6e, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a6d, .value=0x04, .type=IO_READ},
        {.addr=0x8a6e, .value=0x17, .type=IO_READ},
        {.addr=0x0017, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0119) {
    const struct CPU_State initial_cpu = {.pc=0x4599, .a=0x72, .x=0x6e, .y=0x24, .sp=0x3f, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0x03}, {.addr=0x4599, .value=0x04}, {.addr=0x459a, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x459b, .a=0x73, .x=0x6e, .y=0x24, .sp=0x3f, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0x03}, {.addr=0x4599, .value=0x04}, {.addr=0x459a, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x4599, .value=0x04, .type=IO_READ},
        {.addr=0x459a, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_011A) {
    const struct CPU_State initial_cpu = {.pc=0x6de4, .a=0x9f, .x=0x58, .y=0xe6, .sp=0x56, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0088, .value=0x0d}, {.addr=0x6de4, .value=0x04}, {.addr=0x6de5, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x6de6, .a=0x9f, .x=0x58, .y=0xe6, .sp=0x56, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0088, .value=0x0d}, {.addr=0x6de4, .value=0x04}, {.addr=0x6de5, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x6de4, .value=0x04, .type=IO_READ},
        {.addr=0x6de5, .value=0x88, .type=IO_READ},
        {.addr=0x0088, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_011B) {
    const struct CPU_State initial_cpu = {.pc=0x223a, .a=0x46, .x=0x12, .y=0xe3, .sp=0x22, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0xaf}, {.addr=0x223a, .value=0x04}, {.addr=0x223b, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x223c, .a=0xef, .x=0x12, .y=0xe3, .sp=0x22, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0xaf}, {.addr=0x223a, .value=0x04}, {.addr=0x223b, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x223a, .value=0x04, .type=IO_READ},
        {.addr=0x223b, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_011C) {
    const struct CPU_State initial_cpu = {.pc=0xca4b, .a=0x0b, .x=0xe5, .y=0x66, .sp=0x65, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0xfd}, {.addr=0xca4b, .value=0x04}, {.addr=0xca4c, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0xca4d, .a=0xff, .x=0xe5, .y=0x66, .sp=0x65, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0xfd}, {.addr=0xca4b, .value=0x04}, {.addr=0xca4c, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0xca4b, .value=0x04, .type=IO_READ},
        {.addr=0xca4c, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_011D) {
    const struct CPU_State initial_cpu = {.pc=0x144e, .a=0x68, .x=0xf8, .y=0x06, .sp=0x0c, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0xf2}, {.addr=0x144e, .value=0x04}, {.addr=0x144f, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x1450, .a=0xfa, .x=0xf8, .y=0x06, .sp=0x0c, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0xf2}, {.addr=0x144e, .value=0x04}, {.addr=0x144f, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x144e, .value=0x04, .type=IO_READ},
        {.addr=0x144f, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_011E) {
    const struct CPU_State initial_cpu = {.pc=0x7d1b, .a=0x20, .x=0x80, .y=0x2f, .sp=0x38, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0x25}, {.addr=0x7d1b, .value=0x04}, {.addr=0x7d1c, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x7d1d, .a=0x25, .x=0x80, .y=0x2f, .sp=0x38, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0x25}, {.addr=0x7d1b, .value=0x04}, {.addr=0x7d1c, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d1b, .value=0x04, .type=IO_READ},
        {.addr=0x7d1c, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_011F) {
    const struct CPU_State initial_cpu = {.pc=0x59df, .a=0x8b, .x=0x30, .y=0xb9, .sp=0x0d, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0xf3}, {.addr=0x59df, .value=0x04}, {.addr=0x59e0, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x59e1, .a=0xfb, .x=0x30, .y=0xb9, .sp=0x0d, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0xf3}, {.addr=0x59df, .value=0x04}, {.addr=0x59e0, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x59df, .value=0x04, .type=IO_READ},
        {.addr=0x59e0, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0120) {
    const struct CPU_State initial_cpu = {.pc=0xf694, .a=0x6c, .x=0x13, .y=0x40, .sp=0x4c, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0xfb}, {.addr=0xf694, .value=0x04}, {.addr=0xf695, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xf696, .a=0xff, .x=0x13, .y=0x40, .sp=0x4c, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0xfb}, {.addr=0xf694, .value=0x04}, {.addr=0xf695, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xf694, .value=0x04, .type=IO_READ},
        {.addr=0xf695, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0121) {
    const struct CPU_State initial_cpu = {.pc=0x3685, .a=0xf8, .x=0x6b, .y=0x52, .sp=0xa5, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0x99}, {.addr=0x3685, .value=0x04}, {.addr=0x3686, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x3687, .a=0xf9, .x=0x6b, .y=0x52, .sp=0xa5, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0x99}, {.addr=0x3685, .value=0x04}, {.addr=0x3686, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x3685, .value=0x04, .type=IO_READ},
        {.addr=0x3686, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0122) {
    const struct CPU_State initial_cpu = {.pc=0xccf3, .a=0xae, .x=0x50, .y=0x63, .sp=0x00, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0xca}, {.addr=0xccf3, .value=0x04}, {.addr=0xccf4, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0xccf5, .a=0xee, .x=0x50, .y=0x63, .sp=0x00, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0xca}, {.addr=0xccf3, .value=0x04}, {.addr=0xccf4, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xccf3, .value=0x04, .type=IO_READ},
        {.addr=0xccf4, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0123) {
    const struct CPU_State initial_cpu = {.pc=0x0cb4, .a=0x42, .x=0x9d, .y=0x3d, .sp=0xc0, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0099, .value=0xc5}, {.addr=0x0cb4, .value=0x04}, {.addr=0x0cb5, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x0cb6, .a=0xc7, .x=0x9d, .y=0x3d, .sp=0xc0, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0099, .value=0xc5}, {.addr=0x0cb4, .value=0x04}, {.addr=0x0cb5, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x0cb4, .value=0x04, .type=IO_READ},
        {.addr=0x0cb5, .value=0x99, .type=IO_READ},
        {.addr=0x0099, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0124) {
    const struct CPU_State initial_cpu = {.pc=0xb71e, .a=0x27, .x=0xbf, .y=0xfe, .sp=0x03, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0xa2}, {.addr=0xb71e, .value=0x04}, {.addr=0xb71f, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0xb720, .a=0xa7, .x=0xbf, .y=0xfe, .sp=0x03, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0xa2}, {.addr=0xb71e, .value=0x04}, {.addr=0xb71f, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0xb71e, .value=0x04, .type=IO_READ},
        {.addr=0xb71f, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0125) {
    const struct CPU_State initial_cpu = {.pc=0x8a1c, .a=0xe5, .x=0xda, .y=0x4a, .sp=0x25, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0xa8}, {.addr=0x8a1c, .value=0x04}, {.addr=0x8a1d, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x8a1e, .a=0xed, .x=0xda, .y=0x4a, .sp=0x25, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0xa8}, {.addr=0x8a1c, .value=0x04}, {.addr=0x8a1d, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a1c, .value=0x04, .type=IO_READ},
        {.addr=0x8a1d, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0126) {
    const struct CPU_State initial_cpu = {.pc=0xbef8, .a=0x13, .x=0xd2, .y=0x3a, .sp=0x2a, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0x49}, {.addr=0xbef8, .value=0x04}, {.addr=0xbef9, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0xbefa, .a=0x5b, .x=0xd2, .y=0x3a, .sp=0x2a, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0x49}, {.addr=0xbef8, .value=0x04}, {.addr=0xbef9, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0xbef8, .value=0x04, .type=IO_READ},
        {.addr=0xbef9, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0127) {
    const struct CPU_State initial_cpu = {.pc=0x242d, .a=0xb7, .x=0x21, .y=0xd2, .sp=0x69, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0x72}, {.addr=0x242d, .value=0x04}, {.addr=0x242e, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x242f, .a=0xf7, .x=0x21, .y=0xd2, .sp=0x69, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0x72}, {.addr=0x242d, .value=0x04}, {.addr=0x242e, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x242d, .value=0x04, .type=IO_READ},
        {.addr=0x242e, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0128) {
    const struct CPU_State initial_cpu = {.pc=0x7930, .a=0x2e, .x=0xa0, .y=0x57, .sp=0x3f, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a7, .value=0xdc}, {.addr=0x7930, .value=0x04}, {.addr=0x7931, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x7932, .a=0xfe, .x=0xa0, .y=0x57, .sp=0x3f, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a7, .value=0xdc}, {.addr=0x7930, .value=0x04}, {.addr=0x7931, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x7930, .value=0x04, .type=IO_READ},
        {.addr=0x7931, .value=0xa7, .type=IO_READ},
        {.addr=0x00a7, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_012A) {
    const struct CPU_State initial_cpu = {.pc=0xb033, .a=0xe5, .x=0xc4, .y=0x99, .sp=0x48, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0x1e}, {.addr=0xb033, .value=0x04}, {.addr=0xb034, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0xb035, .a=0xff, .x=0xc4, .y=0x99, .sp=0x48, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0x1e}, {.addr=0xb033, .value=0x04}, {.addr=0xb034, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0xb033, .value=0x04, .type=IO_READ},
        {.addr=0xb034, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_012B) {
    const struct CPU_State initial_cpu = {.pc=0x8dfd, .a=0xe3, .x=0x23, .y=0x47, .sp=0xf0, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0xda}, {.addr=0x8dfd, .value=0x04}, {.addr=0x8dfe, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x8dff, .a=0xfb, .x=0x23, .y=0x47, .sp=0xf0, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0xda}, {.addr=0x8dfd, .value=0x04}, {.addr=0x8dfe, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8dfd, .value=0x04, .type=IO_READ},
        {.addr=0x8dfe, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_012C) {
    const struct CPU_State initial_cpu = {.pc=0x205d, .a=0x66, .x=0xb6, .y=0xa7, .sp=0x14, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0xd4}, {.addr=0x205d, .value=0x04}, {.addr=0x205e, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x205f, .a=0xf6, .x=0xb6, .y=0xa7, .sp=0x14, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0xd4}, {.addr=0x205d, .value=0x04}, {.addr=0x205e, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x205d, .value=0x04, .type=IO_READ},
        {.addr=0x205e, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_012E) {
    const struct CPU_State initial_cpu = {.pc=0xebb1, .a=0x62, .x=0x53, .y=0x1b, .sp=0xf8, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0x5f}, {.addr=0xebb1, .value=0x04}, {.addr=0xebb2, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0xebb3, .a=0x7f, .x=0x53, .y=0x1b, .sp=0xf8, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0x5f}, {.addr=0xebb1, .value=0x04}, {.addr=0xebb2, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0xebb1, .value=0x04, .type=IO_READ},
        {.addr=0xebb2, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0130) {
    const struct CPU_State initial_cpu = {.pc=0x49d8, .a=0x03, .x=0xf6, .y=0x74, .sp=0x7a, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0x1a}, {.addr=0x49d8, .value=0x04}, {.addr=0x49d9, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x49da, .a=0x1b, .x=0xf6, .y=0x74, .sp=0x7a, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0x1a}, {.addr=0x49d8, .value=0x04}, {.addr=0x49d9, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x49d8, .value=0x04, .type=IO_READ},
        {.addr=0x49d9, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0131) {
    const struct CPU_State initial_cpu = {.pc=0xcb48, .a=0x7f, .x=0x8c, .y=0xcf, .sp=0x68, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x68}, {.addr=0xcb48, .value=0x04}, {.addr=0xcb49, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xcb4a, .a=0x7f, .x=0x8c, .y=0xcf, .sp=0x68, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x68}, {.addr=0xcb48, .value=0x04}, {.addr=0xcb49, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb48, .value=0x04, .type=IO_READ},
        {.addr=0xcb49, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0132) {
    const struct CPU_State initial_cpu = {.pc=0xccaa, .a=0x3b, .x=0x9c, .y=0x17, .sp=0x22, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x3c}, {.addr=0xccaa, .value=0x04}, {.addr=0xccab, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xccac, .a=0x3f, .x=0x9c, .y=0x17, .sp=0x22, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x3c}, {.addr=0xccaa, .value=0x04}, {.addr=0xccab, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xccaa, .value=0x04, .type=IO_READ},
        {.addr=0xccab, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0133) {
    const struct CPU_State initial_cpu = {.pc=0x84f7, .a=0x08, .x=0xf1, .y=0xfb, .sp=0xed, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0x3c}, {.addr=0x84f7, .value=0x04}, {.addr=0x84f8, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x84f9, .a=0x3c, .x=0xf1, .y=0xfb, .sp=0xed, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0x3c}, {.addr=0x84f7, .value=0x04}, {.addr=0x84f8, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x84f7, .value=0x04, .type=IO_READ},
        {.addr=0x84f8, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0134) {
    const struct CPU_State initial_cpu = {.pc=0x990b, .a=0x9d, .x=0x86, .y=0x95, .sp=0x02, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0x8e}, {.addr=0x990b, .value=0x04}, {.addr=0x990c, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x990d, .a=0x9f, .x=0x86, .y=0x95, .sp=0x02, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0x8e}, {.addr=0x990b, .value=0x04}, {.addr=0x990c, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x990b, .value=0x04, .type=IO_READ},
        {.addr=0x990c, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0135) {
    const struct CPU_State initial_cpu = {.pc=0xa080, .a=0x67, .x=0xd8, .y=0x2a, .sp=0x58, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e0, .value=0xa0}, {.addr=0xa080, .value=0x04}, {.addr=0xa081, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0xa082, .a=0xe7, .x=0xd8, .y=0x2a, .sp=0x58, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e0, .value=0xa0}, {.addr=0xa080, .value=0x04}, {.addr=0xa081, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0xa080, .value=0x04, .type=IO_READ},
        {.addr=0xa081, .value=0xe0, .type=IO_READ},
        {.addr=0x01e0, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0136) {
    const struct CPU_State initial_cpu = {.pc=0xd87b, .a=0xc8, .x=0x71, .y=0x17, .sp=0x96, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0x0f}, {.addr=0xd87b, .value=0x04}, {.addr=0xd87c, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0xd87d, .a=0xcf, .x=0x71, .y=0x17, .sp=0x96, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0x0f}, {.addr=0xd87b, .value=0x04}, {.addr=0xd87c, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0xd87b, .value=0x04, .type=IO_READ},
        {.addr=0xd87c, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0137) {
    const struct CPU_State initial_cpu = {.pc=0xedc7, .a=0x2d, .x=0x7d, .y=0x8d, .sp=0x9c, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0x65}, {.addr=0xedc7, .value=0x04}, {.addr=0xedc8, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0xedc9, .a=0x6d, .x=0x7d, .y=0x8d, .sp=0x9c, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0x65}, {.addr=0xedc7, .value=0x04}, {.addr=0xedc8, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0xedc7, .value=0x04, .type=IO_READ},
        {.addr=0xedc8, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0138) {
    const struct CPU_State initial_cpu = {.pc=0x8795, .a=0x3b, .x=0x33, .y=0x38, .sp=0x53, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x14}, {.addr=0x8795, .value=0x04}, {.addr=0x8796, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x8797, .a=0x3f, .x=0x33, .y=0x38, .sp=0x53, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x14}, {.addr=0x8795, .value=0x04}, {.addr=0x8796, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8795, .value=0x04, .type=IO_READ},
        {.addr=0x8796, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0139) {
    const struct CPU_State initial_cpu = {.pc=0x6b82, .a=0xbc, .x=0x9e, .y=0xaf, .sp=0x03, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0x9c}, {.addr=0x6b82, .value=0x04}, {.addr=0x6b83, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x6b84, .a=0xbc, .x=0x9e, .y=0xaf, .sp=0x03, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0x9c}, {.addr=0x6b82, .value=0x04}, {.addr=0x6b83, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b82, .value=0x04, .type=IO_READ},
        {.addr=0x6b83, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_013A) {
    const struct CPU_State initial_cpu = {.pc=0x14c8, .a=0xb7, .x=0xd9, .y=0xf4, .sp=0xce, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x5b}, {.addr=0x14c8, .value=0x04}, {.addr=0x14c9, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x14ca, .a=0xff, .x=0xd9, .y=0xf4, .sp=0xce, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x5b}, {.addr=0x14c8, .value=0x04}, {.addr=0x14c9, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x14c8, .value=0x04, .type=IO_READ},
        {.addr=0x14c9, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_013B) {
    const struct CPU_State initial_cpu = {.pc=0x367c, .a=0xda, .x=0x76, .y=0x60, .sp=0x61, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x6b}, {.addr=0x367c, .value=0x04}, {.addr=0x367d, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x367e, .a=0xfb, .x=0x76, .y=0x60, .sp=0x61, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x6b}, {.addr=0x367c, .value=0x04}, {.addr=0x367d, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x367c, .value=0x04, .type=IO_READ},
        {.addr=0x367d, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_013C) {
    const struct CPU_State initial_cpu = {.pc=0x0078, .a=0x70, .x=0xc1, .y=0x9a, .sp=0x52, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0x04}, {.addr=0x0079, .value=0xd5}, {.addr=0x00d5, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x007a, .a=0x7f, .x=0xc1, .y=0x9a, .sp=0x52, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0x04}, {.addr=0x0079, .value=0xd5}, {.addr=0x00d5, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x0078, .value=0x04, .type=IO_READ},
        {.addr=0x0079, .value=0xd5, .type=IO_READ},
        {.addr=0x00d5, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_013D) {
    const struct CPU_State initial_cpu = {.pc=0x4126, .a=0xa5, .x=0x56, .y=0xdc, .sp=0xbe, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x5e}, {.addr=0x4126, .value=0x04}, {.addr=0x4127, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x4128, .a=0xff, .x=0x56, .y=0xdc, .sp=0xbe, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x5e}, {.addr=0x4126, .value=0x04}, {.addr=0x4127, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4126, .value=0x04, .type=IO_READ},
        {.addr=0x4127, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_013E) {
    const struct CPU_State initial_cpu = {.pc=0xee38, .a=0x64, .x=0xf7, .y=0x9b, .sp=0x4b, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0xcd}, {.addr=0xee38, .value=0x04}, {.addr=0xee39, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xee3a, .a=0xed, .x=0xf7, .y=0x9b, .sp=0x4b, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0xcd}, {.addr=0xee38, .value=0x04}, {.addr=0xee39, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xee38, .value=0x04, .type=IO_READ},
        {.addr=0xee39, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_013F) {
    const struct CPU_State initial_cpu = {.pc=0x706a, .a=0x57, .x=0xa9, .y=0x01, .sp=0x44, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0xcd}, {.addr=0x706a, .value=0x04}, {.addr=0x706b, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x706c, .a=0xdf, .x=0xa9, .y=0x01, .sp=0x44, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0xcd}, {.addr=0x706a, .value=0x04}, {.addr=0x706b, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x706a, .value=0x04, .type=IO_READ},
        {.addr=0x706b, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0140) {
    const struct CPU_State initial_cpu = {.pc=0x45da, .a=0x48, .x=0x5a, .y=0xe9, .sp=0xc3, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x30}, {.addr=0x45da, .value=0x04}, {.addr=0x45db, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x45dc, .a=0x78, .x=0x5a, .y=0xe9, .sp=0xc3, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x30}, {.addr=0x45da, .value=0x04}, {.addr=0x45db, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x45da, .value=0x04, .type=IO_READ},
        {.addr=0x45db, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0141) {
    const struct CPU_State initial_cpu = {.pc=0x6cb9, .a=0x0b, .x=0x8e, .y=0x64, .sp=0x59, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0xf6}, {.addr=0x6cb9, .value=0x04}, {.addr=0x6cba, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x6cbb, .a=0xff, .x=0x8e, .y=0x64, .sp=0x59, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0xf6}, {.addr=0x6cb9, .value=0x04}, {.addr=0x6cba, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6cb9, .value=0x04, .type=IO_READ},
        {.addr=0x6cba, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0142) {
    const struct CPU_State initial_cpu = {.pc=0x3d79, .a=0x72, .x=0x0b, .y=0x2c, .sp=0x69, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0xe4}, {.addr=0x3d79, .value=0x04}, {.addr=0x3d7a, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x3d7b, .a=0xf6, .x=0x0b, .y=0x2c, .sp=0x69, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0xe4}, {.addr=0x3d79, .value=0x04}, {.addr=0x3d7a, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3d79, .value=0x04, .type=IO_READ},
        {.addr=0x3d7a, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0143) {
    const struct CPU_State initial_cpu = {.pc=0x040e, .a=0x54, .x=0xdf, .y=0xb8, .sp=0xc0, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0140, .value=0x7c}, {.addr=0x040e, .value=0x04}, {.addr=0x040f, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x0410, .a=0x7c, .x=0xdf, .y=0xb8, .sp=0xc0, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x0140, .value=0x7c}, {.addr=0x040e, .value=0x04}, {.addr=0x040f, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x040e, .value=0x04, .type=IO_READ},
        {.addr=0x040f, .value=0x40, .type=IO_READ},
        {.addr=0x0140, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0144) {
    const struct CPU_State initial_cpu = {.pc=0x7d6a, .a=0x13, .x=0x85, .y=0xe2, .sp=0x1d, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0x91}, {.addr=0x7d6a, .value=0x04}, {.addr=0x7d6b, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x7d6c, .a=0x93, .x=0x85, .y=0xe2, .sp=0x1d, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0x91}, {.addr=0x7d6a, .value=0x04}, {.addr=0x7d6b, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d6a, .value=0x04, .type=IO_READ},
        {.addr=0x7d6b, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0145) {
    const struct CPU_State initial_cpu = {.pc=0x8520, .a=0x44, .x=0x9e, .y=0x2d, .sp=0x3f, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0xb6}, {.addr=0x8520, .value=0x04}, {.addr=0x8521, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x8522, .a=0xf6, .x=0x9e, .y=0x2d, .sp=0x3f, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0xb6}, {.addr=0x8520, .value=0x04}, {.addr=0x8521, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8520, .value=0x04, .type=IO_READ},
        {.addr=0x8521, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0146) {
    const struct CPU_State initial_cpu = {.pc=0x7853, .a=0xbc, .x=0x32, .y=0x0f, .sp=0x95, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0x36}, {.addr=0x7853, .value=0x04}, {.addr=0x7854, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x7855, .a=0xbe, .x=0x32, .y=0x0f, .sp=0x95, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0x36}, {.addr=0x7853, .value=0x04}, {.addr=0x7854, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x7853, .value=0x04, .type=IO_READ},
        {.addr=0x7854, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0147) {
    const struct CPU_State initial_cpu = {.pc=0x0448, .a=0x0a, .x=0x1b, .y=0xe1, .sp=0xb8, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0120, .value=0x24}, {.addr=0x0448, .value=0x04}, {.addr=0x0449, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x044a, .a=0x2e, .x=0x1b, .y=0xe1, .sp=0xb8, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0120, .value=0x24}, {.addr=0x0448, .value=0x04}, {.addr=0x0449, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x0448, .value=0x04, .type=IO_READ},
        {.addr=0x0449, .value=0x20, .type=IO_READ},
        {.addr=0x0120, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0148) {
    const struct CPU_State initial_cpu = {.pc=0x300f, .a=0x1e, .x=0x69, .y=0x9e, .sp=0x73, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0007, .value=0xde}, {.addr=0x300f, .value=0x04}, {.addr=0x3010, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x3011, .a=0xde, .x=0x69, .y=0x9e, .sp=0x73, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0007, .value=0xde}, {.addr=0x300f, .value=0x04}, {.addr=0x3010, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x300f, .value=0x04, .type=IO_READ},
        {.addr=0x3010, .value=0x07, .type=IO_READ},
        {.addr=0x0007, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0149) {
    const struct CPU_State initial_cpu = {.pc=0x82e2, .a=0x4a, .x=0x95, .y=0xff, .sp=0x75, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0xca}, {.addr=0x82e2, .value=0x04}, {.addr=0x82e3, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x82e4, .a=0xca, .x=0x95, .y=0xff, .sp=0x75, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0xca}, {.addr=0x82e2, .value=0x04}, {.addr=0x82e3, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x82e2, .value=0x04, .type=IO_READ},
        {.addr=0x82e3, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_014A) {
    const struct CPU_State initial_cpu = {.pc=0x5da0, .a=0x10, .x=0x0b, .y=0x3b, .sp=0x46, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0199, .value=0xe0}, {.addr=0x5da0, .value=0x04}, {.addr=0x5da1, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x5da2, .a=0xf0, .x=0x0b, .y=0x3b, .sp=0x46, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0199, .value=0xe0}, {.addr=0x5da0, .value=0x04}, {.addr=0x5da1, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x5da0, .value=0x04, .type=IO_READ},
        {.addr=0x5da1, .value=0x99, .type=IO_READ},
        {.addr=0x0199, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_014B) {
    const struct CPU_State initial_cpu = {.pc=0xa762, .a=0x57, .x=0xf0, .y=0xc9, .sp=0x98, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0xb9}, {.addr=0xa762, .value=0x04}, {.addr=0xa763, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xa764, .a=0xff, .x=0xf0, .y=0xc9, .sp=0x98, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0xb9}, {.addr=0xa762, .value=0x04}, {.addr=0xa763, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xa762, .value=0x04, .type=IO_READ},
        {.addr=0xa763, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_014C) {
    const struct CPU_State initial_cpu = {.pc=0x2e03, .a=0xfd, .x=0x63, .y=0x34, .sp=0x07, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0x32}, {.addr=0x2e03, .value=0x04}, {.addr=0x2e04, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x2e05, .a=0xff, .x=0x63, .y=0x34, .sp=0x07, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0x32}, {.addr=0x2e03, .value=0x04}, {.addr=0x2e04, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e03, .value=0x04, .type=IO_READ},
        {.addr=0x2e04, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_014D) {
    const struct CPU_State initial_cpu = {.pc=0x034d, .a=0x4d, .x=0x85, .y=0x4a, .sp=0xac, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0x71}, {.addr=0x034d, .value=0x04}, {.addr=0x034e, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x034f, .a=0x7d, .x=0x85, .y=0x4a, .sp=0xac, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0x71}, {.addr=0x034d, .value=0x04}, {.addr=0x034e, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x034d, .value=0x04, .type=IO_READ},
        {.addr=0x034e, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_014E) {
    const struct CPU_State initial_cpu = {.pc=0x18b2, .a=0x7f, .x=0xe2, .y=0x9d, .sp=0xe5, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0134, .value=0xd0}, {.addr=0x18b2, .value=0x04}, {.addr=0x18b3, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x18b4, .a=0xff, .x=0xe2, .y=0x9d, .sp=0xe5, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0134, .value=0xd0}, {.addr=0x18b2, .value=0x04}, {.addr=0x18b3, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x18b2, .value=0x04, .type=IO_READ},
        {.addr=0x18b3, .value=0x34, .type=IO_READ},
        {.addr=0x0134, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_014F) {
    const struct CPU_State initial_cpu = {.pc=0xd09d, .a=0x42, .x=0xf6, .y=0xf3, .sp=0xa2, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0x2b}, {.addr=0xd09d, .value=0x04}, {.addr=0xd09e, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xd09f, .a=0x6b, .x=0xf6, .y=0xf3, .sp=0xa2, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0x2b}, {.addr=0xd09d, .value=0x04}, {.addr=0xd09e, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xd09d, .value=0x04, .type=IO_READ},
        {.addr=0xd09e, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0150) {
    const struct CPU_State initial_cpu = {.pc=0x1df1, .a=0x11, .x=0xdd, .y=0xfa, .sp=0xf1, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0x8b}, {.addr=0x1df1, .value=0x04}, {.addr=0x1df2, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x1df3, .a=0x9b, .x=0xdd, .y=0xfa, .sp=0xf1, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0x8b}, {.addr=0x1df1, .value=0x04}, {.addr=0x1df2, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x1df1, .value=0x04, .type=IO_READ},
        {.addr=0x1df2, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0151) {
    const struct CPU_State initial_cpu = {.pc=0xa3d6, .a=0xfd, .x=0x25, .y=0x4a, .sp=0xa5, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0xc8}, {.addr=0xa3d6, .value=0x04}, {.addr=0xa3d7, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0xa3d8, .a=0xfd, .x=0x25, .y=0x4a, .sp=0xa5, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0xc8}, {.addr=0xa3d6, .value=0x04}, {.addr=0xa3d7, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0xa3d6, .value=0x04, .type=IO_READ},
        {.addr=0xa3d7, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0152) {
    const struct CPU_State initial_cpu = {.pc=0x6667, .a=0x66, .x=0x41, .y=0xf8, .sp=0xcd, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0xf8}, {.addr=0x6667, .value=0x04}, {.addr=0x6668, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x6669, .a=0xfe, .x=0x41, .y=0xf8, .sp=0xcd, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0xf8}, {.addr=0x6667, .value=0x04}, {.addr=0x6668, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x6667, .value=0x04, .type=IO_READ},
        {.addr=0x6668, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0153) {
    const struct CPU_State initial_cpu = {.pc=0x545f, .a=0xb9, .x=0xdf, .y=0x62, .sp=0x72, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0xf1}, {.addr=0x545f, .value=0x04}, {.addr=0x5460, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x5461, .a=0xf9, .x=0xdf, .y=0x62, .sp=0x72, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0xf1}, {.addr=0x545f, .value=0x04}, {.addr=0x5460, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x545f, .value=0x04, .type=IO_READ},
        {.addr=0x5460, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0154) {
    const struct CPU_State initial_cpu = {.pc=0x8443, .a=0xbb, .x=0x56, .y=0x7e, .sp=0xff, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d0, .value=0x56}, {.addr=0x8443, .value=0x04}, {.addr=0x8444, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x8445, .a=0xff, .x=0x56, .y=0x7e, .sp=0xff, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d0, .value=0x56}, {.addr=0x8443, .value=0x04}, {.addr=0x8444, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x8443, .value=0x04, .type=IO_READ},
        {.addr=0x8444, .value=0xd0, .type=IO_READ},
        {.addr=0x00d0, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0155) {
    const struct CPU_State initial_cpu = {.pc=0xefbb, .a=0xb4, .x=0xb4, .y=0xbc, .sp=0xc0, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x72}, {.addr=0xefbb, .value=0x04}, {.addr=0xefbc, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0xefbd, .a=0xf6, .x=0xb4, .y=0xbc, .sp=0xc0, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x72}, {.addr=0xefbb, .value=0x04}, {.addr=0xefbc, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0xefbb, .value=0x04, .type=IO_READ},
        {.addr=0xefbc, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0156) {
    const struct CPU_State initial_cpu = {.pc=0x8bab, .a=0x9f, .x=0xdc, .y=0xa7, .sp=0xfc, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0x82}, {.addr=0x8bab, .value=0x04}, {.addr=0x8bac, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0x8bad, .a=0x9f, .x=0xdc, .y=0xa7, .sp=0xfc, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0x82}, {.addr=0x8bab, .value=0x04}, {.addr=0x8bac, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0x8bab, .value=0x04, .type=IO_READ},
        {.addr=0x8bac, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0157) {
    const struct CPU_State initial_cpu = {.pc=0x74e1, .a=0xa1, .x=0x4d, .y=0x70, .sp=0x62, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008c, .value=0xf4}, {.addr=0x74e1, .value=0x04}, {.addr=0x74e2, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x74e3, .a=0xf5, .x=0x4d, .y=0x70, .sp=0x62, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x008c, .value=0xf4}, {.addr=0x74e1, .value=0x04}, {.addr=0x74e2, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x74e1, .value=0x04, .type=IO_READ},
        {.addr=0x74e2, .value=0x8c, .type=IO_READ},
        {.addr=0x008c, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0158) {
    const struct CPU_State initial_cpu = {.pc=0x66a8, .a=0x38, .x=0x74, .y=0x86, .sp=0xa8, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0x55}, {.addr=0x66a8, .value=0x04}, {.addr=0x66a9, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x66aa, .a=0x7d, .x=0x74, .y=0x86, .sp=0xa8, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0x55}, {.addr=0x66a8, .value=0x04}, {.addr=0x66a9, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x66a8, .value=0x04, .type=IO_READ},
        {.addr=0x66a9, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0159) {
    const struct CPU_State initial_cpu = {.pc=0x31c7, .a=0x54, .x=0xc2, .y=0xf1, .sp=0xfd, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0x3c}, {.addr=0x31c7, .value=0x04}, {.addr=0x31c8, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x31c9, .a=0x7c, .x=0xc2, .y=0xf1, .sp=0xfd, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0x3c}, {.addr=0x31c7, .value=0x04}, {.addr=0x31c8, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x31c7, .value=0x04, .type=IO_READ},
        {.addr=0x31c8, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_015A) {
    const struct CPU_State initial_cpu = {.pc=0xebe4, .a=0x29, .x=0x21, .y=0x28, .sp=0xe8, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0x5a}, {.addr=0xebe4, .value=0x04}, {.addr=0xebe5, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0xebe6, .a=0x7b, .x=0x21, .y=0x28, .sp=0xe8, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0x5a}, {.addr=0xebe4, .value=0x04}, {.addr=0xebe5, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0xebe4, .value=0x04, .type=IO_READ},
        {.addr=0xebe5, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_015B) {
    const struct CPU_State initial_cpu = {.pc=0x6212, .a=0xa4, .x=0xd3, .y=0xb0, .sp=0x3a, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0x03}, {.addr=0x6212, .value=0x04}, {.addr=0x6213, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x6214, .a=0xa7, .x=0xd3, .y=0xb0, .sp=0x3a, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0x03}, {.addr=0x6212, .value=0x04}, {.addr=0x6213, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x6212, .value=0x04, .type=IO_READ},
        {.addr=0x6213, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_015C) {
    const struct CPU_State initial_cpu = {.pc=0xd870, .a=0xf3, .x=0x72, .y=0x81, .sp=0xf5, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0x0b}, {.addr=0xd870, .value=0x04}, {.addr=0xd871, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xd872, .a=0xfb, .x=0x72, .y=0x81, .sp=0xf5, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0x0b}, {.addr=0xd870, .value=0x04}, {.addr=0xd871, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xd870, .value=0x04, .type=IO_READ},
        {.addr=0xd871, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_015D) {
    const struct CPU_State initial_cpu = {.pc=0xb31e, .a=0x68, .x=0x0d, .y=0x01, .sp=0x05, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0x95}, {.addr=0xb31e, .value=0x04}, {.addr=0xb31f, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0xb320, .a=0xfd, .x=0x0d, .y=0x01, .sp=0x05, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0x95}, {.addr=0xb31e, .value=0x04}, {.addr=0xb31f, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0xb31e, .value=0x04, .type=IO_READ},
        {.addr=0xb31f, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_015E) {
    const struct CPU_State initial_cpu = {.pc=0x3b00, .a=0x5c, .x=0xa1, .y=0xe0, .sp=0xc0, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0x86}, {.addr=0x3b00, .value=0x04}, {.addr=0x3b01, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x3b02, .a=0xde, .x=0xa1, .y=0xe0, .sp=0xc0, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0x86}, {.addr=0x3b00, .value=0x04}, {.addr=0x3b01, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b00, .value=0x04, .type=IO_READ},
        {.addr=0x3b01, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_015F) {
    const struct CPU_State initial_cpu = {.pc=0x2dfa, .a=0x99, .x=0x85, .y=0xe2, .sp=0xf1, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c4, .value=0xb9}, {.addr=0x2dfa, .value=0x04}, {.addr=0x2dfb, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x2dfc, .a=0xb9, .x=0x85, .y=0xe2, .sp=0xf1, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c4, .value=0xb9}, {.addr=0x2dfa, .value=0x04}, {.addr=0x2dfb, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x2dfa, .value=0x04, .type=IO_READ},
        {.addr=0x2dfb, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0160) {
    const struct CPU_State initial_cpu = {.pc=0xc2f6, .a=0x28, .x=0xa8, .y=0x5f, .sp=0xf2, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x80}, {.addr=0xc2f6, .value=0x04}, {.addr=0xc2f7, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xc2f8, .a=0xa8, .x=0xa8, .y=0x5f, .sp=0xf2, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x80}, {.addr=0xc2f6, .value=0x04}, {.addr=0xc2f7, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2f6, .value=0x04, .type=IO_READ},
        {.addr=0xc2f7, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0161) {
    const struct CPU_State initial_cpu = {.pc=0x2c6c, .a=0xa2, .x=0x25, .y=0xfa, .sp=0xf0, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0xce}, {.addr=0x2c6c, .value=0x04}, {.addr=0x2c6d, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x2c6e, .a=0xee, .x=0x25, .y=0xfa, .sp=0xf0, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0xce}, {.addr=0x2c6c, .value=0x04}, {.addr=0x2c6d, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c6c, .value=0x04, .type=IO_READ},
        {.addr=0x2c6d, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0162) {
    const struct CPU_State initial_cpu = {.pc=0x09c7, .a=0xa6, .x=0x15, .y=0x0a, .sp=0xb3, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0xd5}, {.addr=0x09c7, .value=0x04}, {.addr=0x09c8, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x09c9, .a=0xf7, .x=0x15, .y=0x0a, .sp=0xb3, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0xd5}, {.addr=0x09c7, .value=0x04}, {.addr=0x09c8, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x09c7, .value=0x04, .type=IO_READ},
        {.addr=0x09c8, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0164) {
    const struct CPU_State initial_cpu = {.pc=0x56fa, .a=0xe6, .x=0xd6, .y=0x25, .sp=0xa1, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x7a}, {.addr=0x56fa, .value=0x04}, {.addr=0x56fb, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x56fc, .a=0xfe, .x=0xd6, .y=0x25, .sp=0xa1, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x7a}, {.addr=0x56fa, .value=0x04}, {.addr=0x56fb, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x56fa, .value=0x04, .type=IO_READ},
        {.addr=0x56fb, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0165) {
    const struct CPU_State initial_cpu = {.pc=0xafcd, .a=0xb6, .x=0x02, .y=0x35, .sp=0xd6, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0xf8}, {.addr=0xafcd, .value=0x04}, {.addr=0xafce, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0xafcf, .a=0xfe, .x=0x02, .y=0x35, .sp=0xd6, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0xf8}, {.addr=0xafcd, .value=0x04}, {.addr=0xafce, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0xafcd, .value=0x04, .type=IO_READ},
        {.addr=0xafce, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0166) {
    const struct CPU_State initial_cpu = {.pc=0x6586, .a=0x09, .x=0x78, .y=0x36, .sp=0xbb, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0xdf}, {.addr=0x6586, .value=0x04}, {.addr=0x6587, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x6588, .a=0xdf, .x=0x78, .y=0x36, .sp=0xbb, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0xdf}, {.addr=0x6586, .value=0x04}, {.addr=0x6587, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x6586, .value=0x04, .type=IO_READ},
        {.addr=0x6587, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0167) {
    const struct CPU_State initial_cpu = {.pc=0xeef7, .a=0x30, .x=0xaa, .y=0xe4, .sp=0x1d, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0xb3}, {.addr=0xeef7, .value=0x04}, {.addr=0xeef8, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0xeef9, .a=0xb3, .x=0xaa, .y=0xe4, .sp=0x1d, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0xb3}, {.addr=0xeef7, .value=0x04}, {.addr=0xeef8, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0xeef7, .value=0x04, .type=IO_READ},
        {.addr=0xeef8, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0168) {
    const struct CPU_State initial_cpu = {.pc=0x6efe, .a=0x42, .x=0x08, .y=0x02, .sp=0x7b, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0x99}, {.addr=0x6efe, .value=0x04}, {.addr=0x6eff, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0x6f00, .a=0xdb, .x=0x08, .y=0x02, .sp=0x7b, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0x99}, {.addr=0x6efe, .value=0x04}, {.addr=0x6eff, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0x6efe, .value=0x04, .type=IO_READ},
        {.addr=0x6eff, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0169) {
    const struct CPU_State initial_cpu = {.pc=0x3e8b, .a=0xc3, .x=0xef, .y=0xa2, .sp=0x44, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0x94}, {.addr=0x3e8b, .value=0x04}, {.addr=0x3e8c, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x3e8d, .a=0xd7, .x=0xef, .y=0xa2, .sp=0x44, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0x94}, {.addr=0x3e8b, .value=0x04}, {.addr=0x3e8c, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e8b, .value=0x04, .type=IO_READ},
        {.addr=0x3e8c, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_016A) {
    const struct CPU_State initial_cpu = {.pc=0x2b59, .a=0x9e, .x=0x74, .y=0xd8, .sp=0x93, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009f, .value=0xa8}, {.addr=0x2b59, .value=0x04}, {.addr=0x2b5a, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x2b5b, .a=0xbe, .x=0x74, .y=0xd8, .sp=0x93, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x009f, .value=0xa8}, {.addr=0x2b59, .value=0x04}, {.addr=0x2b5a, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b59, .value=0x04, .type=IO_READ},
        {.addr=0x2b5a, .value=0x9f, .type=IO_READ},
        {.addr=0x009f, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_016B) {
    const struct CPU_State initial_cpu = {.pc=0x1991, .a=0x30, .x=0xa9, .y=0xae, .sp=0x69, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x88}, {.addr=0x1991, .value=0x04}, {.addr=0x1992, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x1993, .a=0xb8, .x=0xa9, .y=0xae, .sp=0x69, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x88}, {.addr=0x1991, .value=0x04}, {.addr=0x1992, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x1991, .value=0x04, .type=IO_READ},
        {.addr=0x1992, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_016C) {
    const struct CPU_State initial_cpu = {.pc=0x5743, .a=0xc9, .x=0x93, .y=0xc2, .sp=0xf9, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0x02}, {.addr=0x5743, .value=0x04}, {.addr=0x5744, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x5745, .a=0xcb, .x=0x93, .y=0xc2, .sp=0xf9, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0x02}, {.addr=0x5743, .value=0x04}, {.addr=0x5744, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5743, .value=0x04, .type=IO_READ},
        {.addr=0x5744, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_016D) {
    const struct CPU_State initial_cpu = {.pc=0xa294, .a=0x49, .x=0xf2, .y=0xc3, .sp=0xc7, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0x98}, {.addr=0xa294, .value=0x04}, {.addr=0xa295, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xa296, .a=0xd9, .x=0xf2, .y=0xc3, .sp=0xc7, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0x98}, {.addr=0xa294, .value=0x04}, {.addr=0xa295, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xa294, .value=0x04, .type=IO_READ},
        {.addr=0xa295, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_016E) {
    const struct CPU_State initial_cpu = {.pc=0xaa4c, .a=0xd0, .x=0x4e, .y=0xe9, .sp=0xf6, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x3f}, {.addr=0xaa4c, .value=0x04}, {.addr=0xaa4d, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0xaa4e, .a=0xff, .x=0x4e, .y=0xe9, .sp=0xf6, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x3f}, {.addr=0xaa4c, .value=0x04}, {.addr=0xaa4d, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa4c, .value=0x04, .type=IO_READ},
        {.addr=0xaa4d, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_016F) {
    const struct CPU_State initial_cpu = {.pc=0x56a4, .a=0xaf, .x=0x80, .y=0xa8, .sp=0xbe, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0x6a}, {.addr=0x56a4, .value=0x04}, {.addr=0x56a5, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x56a6, .a=0xef, .x=0x80, .y=0xa8, .sp=0xbe, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0x6a}, {.addr=0x56a4, .value=0x04}, {.addr=0x56a5, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x56a4, .value=0x04, .type=IO_READ},
        {.addr=0x56a5, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0170) {
    const struct CPU_State initial_cpu = {.pc=0x20bc, .a=0x63, .x=0x76, .y=0x78, .sp=0xb2, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0x80}, {.addr=0x20bc, .value=0x04}, {.addr=0x20bd, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x20be, .a=0xe3, .x=0x76, .y=0x78, .sp=0xb2, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0x80}, {.addr=0x20bc, .value=0x04}, {.addr=0x20bd, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x20bc, .value=0x04, .type=IO_READ},
        {.addr=0x20bd, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0171) {
    const struct CPU_State initial_cpu = {.pc=0x6d0f, .a=0x05, .x=0xcd, .y=0x33, .sp=0x83, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0xbe}, {.addr=0x6d0f, .value=0x04}, {.addr=0x6d10, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x6d11, .a=0xbf, .x=0xcd, .y=0x33, .sp=0x83, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0xbe}, {.addr=0x6d0f, .value=0x04}, {.addr=0x6d10, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d0f, .value=0x04, .type=IO_READ},
        {.addr=0x6d10, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0172) {
    const struct CPU_State initial_cpu = {.pc=0x2937, .a=0x6f, .x=0x3c, .y=0xf5, .sp=0xb9, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0xd7}, {.addr=0x2937, .value=0x04}, {.addr=0x2938, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x2939, .a=0xff, .x=0x3c, .y=0xf5, .sp=0xb9, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0xd7}, {.addr=0x2937, .value=0x04}, {.addr=0x2938, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x2937, .value=0x04, .type=IO_READ},
        {.addr=0x2938, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0173) {
    const struct CPU_State initial_cpu = {.pc=0x71c4, .a=0x1a, .x=0x2d, .y=0xe4, .sp=0xe1, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x4a}, {.addr=0x71c4, .value=0x04}, {.addr=0x71c5, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x71c6, .a=0x5a, .x=0x2d, .y=0xe4, .sp=0xe1, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x4a}, {.addr=0x71c4, .value=0x04}, {.addr=0x71c5, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x71c4, .value=0x04, .type=IO_READ},
        {.addr=0x71c5, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0174) {
    const struct CPU_State initial_cpu = {.pc=0xca68, .a=0x1e, .x=0xe1, .y=0x08, .sp=0x57, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0x50}, {.addr=0xca68, .value=0x04}, {.addr=0xca69, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0xca6a, .a=0x5e, .x=0xe1, .y=0x08, .sp=0x57, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0x50}, {.addr=0xca68, .value=0x04}, {.addr=0xca69, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0xca68, .value=0x04, .type=IO_READ},
        {.addr=0xca69, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0175) {
    const struct CPU_State initial_cpu = {.pc=0xf2d6, .a=0xe7, .x=0x6d, .y=0x3d, .sp=0x5d, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0xcb}, {.addr=0xf2d6, .value=0x04}, {.addr=0xf2d7, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xf2d8, .a=0xef, .x=0x6d, .y=0x3d, .sp=0x5d, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0xcb}, {.addr=0xf2d6, .value=0x04}, {.addr=0xf2d7, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2d6, .value=0x04, .type=IO_READ},
        {.addr=0xf2d7, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0176) {
    const struct CPU_State initial_cpu = {.pc=0xd84c, .a=0xc7, .x=0x05, .y=0xcf, .sp=0x35, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0x87}, {.addr=0xd84c, .value=0x04}, {.addr=0xd84d, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xd84e, .a=0xc7, .x=0x05, .y=0xcf, .sp=0x35, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0x87}, {.addr=0xd84c, .value=0x04}, {.addr=0xd84d, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xd84c, .value=0x04, .type=IO_READ},
        {.addr=0xd84d, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0177) {
    const struct CPU_State initial_cpu = {.pc=0x6b98, .a=0xde, .x=0x40, .y=0x8c, .sp=0x54, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0xa5}, {.addr=0x6b98, .value=0x04}, {.addr=0x6b99, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x6b9a, .a=0xff, .x=0x40, .y=0x8c, .sp=0x54, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0xa5}, {.addr=0x6b98, .value=0x04}, {.addr=0x6b99, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b98, .value=0x04, .type=IO_READ},
        {.addr=0x6b99, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0178) {
    const struct CPU_State initial_cpu = {.pc=0x9f42, .a=0xa5, .x=0x49, .y=0x20, .sp=0xd0, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0x4e}, {.addr=0x9f42, .value=0x04}, {.addr=0x9f43, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x9f44, .a=0xef, .x=0x49, .y=0x20, .sp=0xd0, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0x4e}, {.addr=0x9f42, .value=0x04}, {.addr=0x9f43, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f42, .value=0x04, .type=IO_READ},
        {.addr=0x9f43, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0179) {
    const struct CPU_State initial_cpu = {.pc=0x497e, .a=0x18, .x=0xbc, .y=0x7b, .sp=0x53, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0xe2}, {.addr=0x497e, .value=0x04}, {.addr=0x497f, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x4980, .a=0xfa, .x=0xbc, .y=0x7b, .sp=0x53, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0xe2}, {.addr=0x497e, .value=0x04}, {.addr=0x497f, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x497e, .value=0x04, .type=IO_READ},
        {.addr=0x497f, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_017A) {
    const struct CPU_State initial_cpu = {.pc=0xab46, .a=0xe2, .x=0xa5, .y=0x68, .sp=0xdd, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b8, .value=0xb0}, {.addr=0xab46, .value=0x04}, {.addr=0xab47, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0xab48, .a=0xf2, .x=0xa5, .y=0x68, .sp=0xdd, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b8, .value=0xb0}, {.addr=0xab46, .value=0x04}, {.addr=0xab47, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0xab46, .value=0x04, .type=IO_READ},
        {.addr=0xab47, .value=0xb8, .type=IO_READ},
        {.addr=0x01b8, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_017B) {
    const struct CPU_State initial_cpu = {.pc=0xda52, .a=0xb0, .x=0x16, .y=0x36, .sp=0xdb, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0xe8}, {.addr=0xda52, .value=0x04}, {.addr=0xda53, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xda54, .a=0xf8, .x=0x16, .y=0x36, .sp=0xdb, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0xe8}, {.addr=0xda52, .value=0x04}, {.addr=0xda53, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xda52, .value=0x04, .type=IO_READ},
        {.addr=0xda53, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_017C) {
    const struct CPU_State initial_cpu = {.pc=0x0bda, .a=0xfd, .x=0x71, .y=0x33, .sp=0xc2, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0x35}, {.addr=0x0bda, .value=0x04}, {.addr=0x0bdb, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x0bdc, .a=0xfd, .x=0x71, .y=0x33, .sp=0xc2, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0x35}, {.addr=0x0bda, .value=0x04}, {.addr=0x0bdb, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x0bda, .value=0x04, .type=IO_READ},
        {.addr=0x0bdb, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_017D) {
    const struct CPU_State initial_cpu = {.pc=0x2c89, .a=0x21, .x=0x40, .y=0x8c, .sp=0xa8, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0xca}, {.addr=0x2c89, .value=0x04}, {.addr=0x2c8a, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x2c8b, .a=0xeb, .x=0x40, .y=0x8c, .sp=0xa8, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0xca}, {.addr=0x2c89, .value=0x04}, {.addr=0x2c8a, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c89, .value=0x04, .type=IO_READ},
        {.addr=0x2c8a, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_017E) {
    const struct CPU_State initial_cpu = {.pc=0x8540, .a=0xca, .x=0xd5, .y=0x34, .sp=0x2a, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0x68}, {.addr=0x8540, .value=0x04}, {.addr=0x8541, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x8542, .a=0xea, .x=0xd5, .y=0x34, .sp=0x2a, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0x68}, {.addr=0x8540, .value=0x04}, {.addr=0x8541, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8540, .value=0x04, .type=IO_READ},
        {.addr=0x8541, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_017F) {
    const struct CPU_State initial_cpu = {.pc=0xc192, .a=0x9a, .x=0x29, .y=0xe0, .sp=0x8e, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0x7d}, {.addr=0xc192, .value=0x04}, {.addr=0xc193, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0xc194, .a=0xff, .x=0x29, .y=0xe0, .sp=0x8e, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0x7d}, {.addr=0xc192, .value=0x04}, {.addr=0xc193, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0xc192, .value=0x04, .type=IO_READ},
        {.addr=0xc193, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0180) {
    const struct CPU_State initial_cpu = {.pc=0x6549, .a=0x0d, .x=0xf6, .y=0xa2, .sp=0xbe, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0x95}, {.addr=0x6549, .value=0x04}, {.addr=0x654a, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x654b, .a=0x9d, .x=0xf6, .y=0xa2, .sp=0xbe, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0x95}, {.addr=0x6549, .value=0x04}, {.addr=0x654a, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x6549, .value=0x04, .type=IO_READ},
        {.addr=0x654a, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0181) {
    const struct CPU_State initial_cpu = {.pc=0xe3e1, .a=0x65, .x=0xc7, .y=0x77, .sp=0xe6, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0xd3}, {.addr=0xe3e1, .value=0x04}, {.addr=0xe3e2, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0xe3e3, .a=0xf7, .x=0xc7, .y=0x77, .sp=0xe6, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0xd3}, {.addr=0xe3e1, .value=0x04}, {.addr=0xe3e2, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3e1, .value=0x04, .type=IO_READ},
        {.addr=0xe3e2, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0182) {
    const struct CPU_State initial_cpu = {.pc=0xe6bc, .a=0x39, .x=0x00, .y=0xff, .sp=0xd1, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x6f}, {.addr=0xe6bc, .value=0x04}, {.addr=0xe6bd, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xe6be, .a=0x7f, .x=0x00, .y=0xff, .sp=0xd1, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x6f}, {.addr=0xe6bc, .value=0x04}, {.addr=0xe6bd, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xe6bc, .value=0x04, .type=IO_READ},
        {.addr=0xe6bd, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0183) {
    const struct CPU_State initial_cpu = {.pc=0x5e6b, .a=0xe6, .x=0x3c, .y=0xec, .sp=0xd0, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x55}, {.addr=0x5e6b, .value=0x04}, {.addr=0x5e6c, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x5e6d, .a=0xf7, .x=0x3c, .y=0xec, .sp=0xd0, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x55}, {.addr=0x5e6b, .value=0x04}, {.addr=0x5e6c, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e6b, .value=0x04, .type=IO_READ},
        {.addr=0x5e6c, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0184) {
    const struct CPU_State initial_cpu = {.pc=0xcd74, .a=0x66, .x=0x60, .y=0x15, .sp=0x06, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0x11}, {.addr=0xcd74, .value=0x04}, {.addr=0xcd75, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0xcd76, .a=0x77, .x=0x60, .y=0x15, .sp=0x06, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0x11}, {.addr=0xcd74, .value=0x04}, {.addr=0xcd75, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd74, .value=0x04, .type=IO_READ},
        {.addr=0xcd75, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0185) {
    const struct CPU_State initial_cpu = {.pc=0x4893, .a=0x62, .x=0x75, .y=0xb7, .sp=0xae, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0x5b}, {.addr=0x4893, .value=0x04}, {.addr=0x4894, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x4895, .a=0x7b, .x=0x75, .y=0xb7, .sp=0xae, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0x5b}, {.addr=0x4893, .value=0x04}, {.addr=0x4894, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x4893, .value=0x04, .type=IO_READ},
        {.addr=0x4894, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0187) {
    const struct CPU_State initial_cpu = {.pc=0x0b88, .a=0xfd, .x=0xa7, .y=0x95, .sp=0x0e, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cc, .value=0x6e}, {.addr=0x0b88, .value=0x04}, {.addr=0x0b89, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x0b8a, .a=0xff, .x=0xa7, .y=0x95, .sp=0x0e, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cc, .value=0x6e}, {.addr=0x0b88, .value=0x04}, {.addr=0x0b89, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b88, .value=0x04, .type=IO_READ},
        {.addr=0x0b89, .value=0xcc, .type=IO_READ},
        {.addr=0x01cc, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0188) {
    const struct CPU_State initial_cpu = {.pc=0xb85f, .a=0x4e, .x=0x65, .y=0x3c, .sp=0x34, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x7e}, {.addr=0xb85f, .value=0x04}, {.addr=0xb860, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xb861, .a=0x7e, .x=0x65, .y=0x3c, .sp=0x34, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x7e}, {.addr=0xb85f, .value=0x04}, {.addr=0xb860, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xb85f, .value=0x04, .type=IO_READ},
        {.addr=0xb860, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0189) {
    const struct CPU_State initial_cpu = {.pc=0xf2d7, .a=0xe2, .x=0xdf, .y=0x74, .sp=0x68, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0xe5}, {.addr=0xf2d7, .value=0x04}, {.addr=0xf2d8, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xf2d9, .a=0xe7, .x=0xdf, .y=0x74, .sp=0x68, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0xe5}, {.addr=0xf2d7, .value=0x04}, {.addr=0xf2d8, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2d7, .value=0x04, .type=IO_READ},
        {.addr=0xf2d8, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_018A) {
    const struct CPU_State initial_cpu = {.pc=0x6c65, .a=0x6d, .x=0x6e, .y=0xa7, .sp=0x7c, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0x2c}, {.addr=0x6c65, .value=0x04}, {.addr=0x6c66, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x6c67, .a=0x6d, .x=0x6e, .y=0xa7, .sp=0x7c, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0x2c}, {.addr=0x6c65, .value=0x04}, {.addr=0x6c66, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c65, .value=0x04, .type=IO_READ},
        {.addr=0x6c66, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_018B) {
    const struct CPU_State initial_cpu = {.pc=0x3389, .a=0x06, .x=0xda, .y=0x47, .sp=0xb8, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0x81}, {.addr=0x3389, .value=0x04}, {.addr=0x338a, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x338b, .a=0x87, .x=0xda, .y=0x47, .sp=0xb8, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0x81}, {.addr=0x3389, .value=0x04}, {.addr=0x338a, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x3389, .value=0x04, .type=IO_READ},
        {.addr=0x338a, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_018C) {
    const struct CPU_State initial_cpu = {.pc=0x96f4, .a=0x6c, .x=0x94, .y=0x0a, .sp=0x12, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0x4c}, {.addr=0x96f4, .value=0x04}, {.addr=0x96f5, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x96f6, .a=0x6c, .x=0x94, .y=0x0a, .sp=0x12, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0x4c}, {.addr=0x96f4, .value=0x04}, {.addr=0x96f5, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x96f4, .value=0x04, .type=IO_READ},
        {.addr=0x96f5, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_018D) {
    const struct CPU_State initial_cpu = {.pc=0x7947, .a=0xec, .x=0x81, .y=0x57, .sp=0x9c, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0x0f}, {.addr=0x7947, .value=0x04}, {.addr=0x7948, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x7949, .a=0xef, .x=0x81, .y=0x57, .sp=0x9c, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0x0f}, {.addr=0x7947, .value=0x04}, {.addr=0x7948, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x7947, .value=0x04, .type=IO_READ},
        {.addr=0x7948, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_018E) {
    const struct CPU_State initial_cpu = {.pc=0x765a, .a=0x9f, .x=0x1f, .y=0x43, .sp=0x8d, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0001, .value=0x52}, {.addr=0x765a, .value=0x04}, {.addr=0x765b, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0x765c, .a=0xdf, .x=0x1f, .y=0x43, .sp=0x8d, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0001, .value=0x52}, {.addr=0x765a, .value=0x04}, {.addr=0x765b, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0x765a, .value=0x04, .type=IO_READ},
        {.addr=0x765b, .value=0x01, .type=IO_READ},
        {.addr=0x0001, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_018F) {
    const struct CPU_State initial_cpu = {.pc=0x571c, .a=0x86, .x=0xa6, .y=0x6f, .sp=0x71, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0xaa}, {.addr=0x571c, .value=0x04}, {.addr=0x571d, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0x571e, .a=0xae, .x=0xa6, .y=0x6f, .sp=0x71, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0xaa}, {.addr=0x571c, .value=0x04}, {.addr=0x571d, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0x571c, .value=0x04, .type=IO_READ},
        {.addr=0x571d, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0190) {
    const struct CPU_State initial_cpu = {.pc=0xef28, .a=0xd0, .x=0xb0, .y=0xf6, .sp=0x3a, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016e, .value=0xc8}, {.addr=0xef28, .value=0x04}, {.addr=0xef29, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0xef2a, .a=0xd8, .x=0xb0, .y=0xf6, .sp=0x3a, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x016e, .value=0xc8}, {.addr=0xef28, .value=0x04}, {.addr=0xef29, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0xef28, .value=0x04, .type=IO_READ},
        {.addr=0xef29, .value=0x6e, .type=IO_READ},
        {.addr=0x016e, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0191) {
    const struct CPU_State initial_cpu = {.pc=0x9cc0, .a=0xd4, .x=0x8c, .y=0xe3, .sp=0xd3, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0xb2}, {.addr=0x9cc0, .value=0x04}, {.addr=0x9cc1, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x9cc2, .a=0xf6, .x=0x8c, .y=0xe3, .sp=0xd3, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0xb2}, {.addr=0x9cc0, .value=0x04}, {.addr=0x9cc1, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x9cc0, .value=0x04, .type=IO_READ},
        {.addr=0x9cc1, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0192) {
    const struct CPU_State initial_cpu = {.pc=0x1425, .a=0x11, .x=0xee, .y=0x6d, .sp=0x46, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0xac}, {.addr=0x1425, .value=0x04}, {.addr=0x1426, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x1427, .a=0xbd, .x=0xee, .y=0x6d, .sp=0x46, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0xac}, {.addr=0x1425, .value=0x04}, {.addr=0x1426, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x1425, .value=0x04, .type=IO_READ},
        {.addr=0x1426, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0193) {
    const struct CPU_State initial_cpu = {.pc=0x006a, .a=0x32, .x=0x36, .y=0xaf, .sp=0xb5, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0x04}, {.addr=0x006b, .value=0xdd}, {.addr=0x01dd, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x006c, .a=0xbe, .x=0x36, .y=0xaf, .sp=0xb5, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0x04}, {.addr=0x006b, .value=0xdd}, {.addr=0x01dd, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x006a, .value=0x04, .type=IO_READ},
        {.addr=0x006b, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0194) {
    const struct CPU_State initial_cpu = {.pc=0xd686, .a=0xf2, .x=0x4b, .y=0xbd, .sp=0x1a, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0xf5}, {.addr=0xd686, .value=0x04}, {.addr=0xd687, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xd688, .a=0xf7, .x=0x4b, .y=0xbd, .sp=0x1a, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0xf5}, {.addr=0xd686, .value=0x04}, {.addr=0xd687, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xd686, .value=0x04, .type=IO_READ},
        {.addr=0xd687, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0195) {
    const struct CPU_State initial_cpu = {.pc=0x997b, .a=0xda, .x=0xd4, .y=0x01, .sp=0x7a, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0x64}, {.addr=0x997b, .value=0x04}, {.addr=0x997c, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0x997d, .a=0xfe, .x=0xd4, .y=0x01, .sp=0x7a, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0x64}, {.addr=0x997b, .value=0x04}, {.addr=0x997c, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0x997b, .value=0x04, .type=IO_READ},
        {.addr=0x997c, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0196) {
    const struct CPU_State initial_cpu = {.pc=0x7644, .a=0x99, .x=0x67, .y=0x4a, .sp=0xae, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0x90}, {.addr=0x7644, .value=0x04}, {.addr=0x7645, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x7646, .a=0x99, .x=0x67, .y=0x4a, .sp=0xae, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0x90}, {.addr=0x7644, .value=0x04}, {.addr=0x7645, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x7644, .value=0x04, .type=IO_READ},
        {.addr=0x7645, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0198) {
    const struct CPU_State initial_cpu = {.pc=0xfba5, .a=0xdf, .x=0x69, .y=0x7a, .sp=0xc4, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0x91}, {.addr=0xfba5, .value=0x04}, {.addr=0xfba6, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0xfba7, .a=0xdf, .x=0x69, .y=0x7a, .sp=0xc4, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0x91}, {.addr=0xfba5, .value=0x04}, {.addr=0xfba6, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0xfba5, .value=0x04, .type=IO_READ},
        {.addr=0xfba6, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0199) {
    const struct CPU_State initial_cpu = {.pc=0x4846, .a=0x68, .x=0xff, .y=0xc2, .sp=0xfb, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019b, .value=0xc5}, {.addr=0x4846, .value=0x04}, {.addr=0x4847, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x4848, .a=0xed, .x=0xff, .y=0xc2, .sp=0xfb, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x019b, .value=0xc5}, {.addr=0x4846, .value=0x04}, {.addr=0x4847, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x4846, .value=0x04, .type=IO_READ},
        {.addr=0x4847, .value=0x9b, .type=IO_READ},
        {.addr=0x019b, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_019A) {
    const struct CPU_State initial_cpu = {.pc=0xce4e, .a=0x60, .x=0x3f, .y=0xc2, .sp=0x00, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0xb2}, {.addr=0xce4e, .value=0x04}, {.addr=0xce4f, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0xce50, .a=0xf2, .x=0x3f, .y=0xc2, .sp=0x00, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0xb2}, {.addr=0xce4e, .value=0x04}, {.addr=0xce4f, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0xce4e, .value=0x04, .type=IO_READ},
        {.addr=0xce4f, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_019B) {
    const struct CPU_State initial_cpu = {.pc=0xb0e2, .a=0xd1, .x=0x8f, .y=0x23, .sp=0x7b, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0xa9}, {.addr=0xb0e2, .value=0x04}, {.addr=0xb0e3, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xb0e4, .a=0xf9, .x=0x8f, .y=0x23, .sp=0x7b, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0xa9}, {.addr=0xb0e2, .value=0x04}, {.addr=0xb0e3, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0e2, .value=0x04, .type=IO_READ},
        {.addr=0xb0e3, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_019C) {
    const struct CPU_State initial_cpu = {.pc=0x2e43, .a=0x15, .x=0x9f, .y=0x87, .sp=0x71, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0xe6}, {.addr=0x2e43, .value=0x04}, {.addr=0x2e44, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x2e45, .a=0xf7, .x=0x9f, .y=0x87, .sp=0x71, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0xe6}, {.addr=0x2e43, .value=0x04}, {.addr=0x2e44, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e43, .value=0x04, .type=IO_READ},
        {.addr=0x2e44, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_019D) {
    const struct CPU_State initial_cpu = {.pc=0xdd2f, .a=0xc5, .x=0x97, .y=0xad, .sp=0xd1, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0x00}, {.addr=0xdd2f, .value=0x04}, {.addr=0xdd30, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0xdd31, .a=0xc5, .x=0x97, .y=0xad, .sp=0xd1, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0x00}, {.addr=0xdd2f, .value=0x04}, {.addr=0xdd30, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd2f, .value=0x04, .type=IO_READ},
        {.addr=0xdd30, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_019E) {
    const struct CPU_State initial_cpu = {.pc=0xafb2, .a=0x9a, .x=0x49, .y=0x86, .sp=0x86, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0x95}, {.addr=0xafb2, .value=0x04}, {.addr=0xafb3, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0xafb4, .a=0x9f, .x=0x49, .y=0x86, .sp=0x86, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0x95}, {.addr=0xafb2, .value=0x04}, {.addr=0xafb3, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0xafb2, .value=0x04, .type=IO_READ},
        {.addr=0xafb3, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_019F) {
    const struct CPU_State initial_cpu = {.pc=0xe317, .a=0x1c, .x=0xc6, .y=0x96, .sp=0xa7, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0xdb}, {.addr=0xe317, .value=0x04}, {.addr=0xe318, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xe319, .a=0xdf, .x=0xc6, .y=0x96, .sp=0xa7, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0xdb}, {.addr=0xe317, .value=0x04}, {.addr=0xe318, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xe317, .value=0x04, .type=IO_READ},
        {.addr=0xe318, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x179c, .a=0x18, .x=0x9c, .y=0x07, .sp=0x5f, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0x4d}, {.addr=0x179c, .value=0x04}, {.addr=0x179d, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x179e, .a=0x5d, .x=0x9c, .y=0x07, .sp=0x5f, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0x4d}, {.addr=0x179c, .value=0x04}, {.addr=0x179d, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x179c, .value=0x04, .type=IO_READ},
        {.addr=0x179d, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xda4e, .a=0xfb, .x=0xc0, .y=0xf6, .sp=0xea, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0xe4}, {.addr=0xda4e, .value=0x04}, {.addr=0xda4f, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xda50, .a=0xff, .x=0xc0, .y=0xf6, .sp=0xea, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0xe4}, {.addr=0xda4e, .value=0x04}, {.addr=0xda4f, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xda4e, .value=0x04, .type=IO_READ},
        {.addr=0xda4f, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x2069, .a=0xb9, .x=0x01, .y=0xcd, .sp=0xc7, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0x23}, {.addr=0x2069, .value=0x04}, {.addr=0x206a, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x206b, .a=0xbb, .x=0x01, .y=0xcd, .sp=0xc7, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0x23}, {.addr=0x2069, .value=0x04}, {.addr=0x206a, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x2069, .value=0x04, .type=IO_READ},
        {.addr=0x206a, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x89dc, .a=0xda, .x=0x8c, .y=0x15, .sp=0x7a, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0038, .value=0x1f}, {.addr=0x89dc, .value=0x04}, {.addr=0x89dd, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x89de, .a=0xdf, .x=0x8c, .y=0x15, .sp=0x7a, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0038, .value=0x1f}, {.addr=0x89dc, .value=0x04}, {.addr=0x89dd, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x89dc, .value=0x04, .type=IO_READ},
        {.addr=0x89dd, .value=0x38, .type=IO_READ},
        {.addr=0x0038, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x6989, .a=0x31, .x=0xa6, .y=0xf0, .sp=0x10, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x07}, {.addr=0x6989, .value=0x04}, {.addr=0x698a, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x698b, .a=0x37, .x=0xa6, .y=0xf0, .sp=0x10, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x07}, {.addr=0x6989, .value=0x04}, {.addr=0x698a, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6989, .value=0x04, .type=IO_READ},
        {.addr=0x698a, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xa455, .a=0x61, .x=0xed, .y=0x26, .sp=0xb9, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0x81}, {.addr=0xa455, .value=0x04}, {.addr=0xa456, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0xa457, .a=0xe1, .x=0xed, .y=0x26, .sp=0xb9, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0x81}, {.addr=0xa455, .value=0x04}, {.addr=0xa456, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0xa455, .value=0x04, .type=IO_READ},
        {.addr=0xa456, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xc812, .a=0x62, .x=0x0c, .y=0x61, .sp=0xa4, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0x29}, {.addr=0xc812, .value=0x04}, {.addr=0xc813, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xc814, .a=0x6b, .x=0x0c, .y=0x61, .sp=0xa4, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0x29}, {.addr=0xc812, .value=0x04}, {.addr=0xc813, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xc812, .value=0x04, .type=IO_READ},
        {.addr=0xc813, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x5a28, .a=0xf4, .x=0xf4, .y=0x2a, .sp=0x8a, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0xd7}, {.addr=0x5a28, .value=0x04}, {.addr=0x5a29, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x5a2a, .a=0xf7, .x=0xf4, .y=0x2a, .sp=0x8a, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0xd7}, {.addr=0x5a28, .value=0x04}, {.addr=0x5a29, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a28, .value=0x04, .type=IO_READ},
        {.addr=0x5a29, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xede1, .a=0xc3, .x=0x93, .y=0xe0, .sp=0xc0, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0xc2}, {.addr=0xede1, .value=0x04}, {.addr=0xede2, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xede3, .a=0xc3, .x=0x93, .y=0xe0, .sp=0xc0, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0xc2}, {.addr=0xede1, .value=0x04}, {.addr=0xede2, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xede1, .value=0x04, .type=IO_READ},
        {.addr=0xede2, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xa73b, .a=0x5d, .x=0x91, .y=0x6e, .sp=0x8e, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0x44}, {.addr=0xa73b, .value=0x04}, {.addr=0xa73c, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0xa73d, .a=0x5d, .x=0x91, .y=0x6e, .sp=0x8e, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0x44}, {.addr=0xa73b, .value=0x04}, {.addr=0xa73c, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0xa73b, .value=0x04, .type=IO_READ},
        {.addr=0xa73c, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x98ab, .a=0x4e, .x=0xcc, .y=0x51, .sp=0x8b, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0x9e}, {.addr=0x98ab, .value=0x04}, {.addr=0x98ac, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0x98ad, .a=0xde, .x=0xcc, .y=0x51, .sp=0x8b, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0x9e}, {.addr=0x98ab, .value=0x04}, {.addr=0x98ac, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0x98ab, .value=0x04, .type=IO_READ},
        {.addr=0x98ac, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x4f6a, .a=0x24, .x=0xad, .y=0x65, .sp=0x71, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0x3f}, {.addr=0x4f6a, .value=0x04}, {.addr=0x4f6b, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x4f6c, .a=0x3f, .x=0xad, .y=0x65, .sp=0x71, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0x3f}, {.addr=0x4f6a, .value=0x04}, {.addr=0x4f6b, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f6a, .value=0x04, .type=IO_READ},
        {.addr=0x4f6b, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xb143, .a=0xdc, .x=0x7f, .y=0xca, .sp=0xce, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0169, .value=0x9f}, {.addr=0xb143, .value=0x04}, {.addr=0xb144, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xb145, .a=0xdf, .x=0x7f, .y=0xca, .sp=0xce, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0169, .value=0x9f}, {.addr=0xb143, .value=0x04}, {.addr=0xb144, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xb143, .value=0x04, .type=IO_READ},
        {.addr=0xb144, .value=0x69, .type=IO_READ},
        {.addr=0x0169, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x174a, .a=0x28, .x=0xd3, .y=0x8c, .sp=0x96, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0xb8}, {.addr=0x174a, .value=0x04}, {.addr=0x174b, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0x174c, .a=0xb8, .x=0xd3, .y=0x8c, .sp=0x96, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0xb8}, {.addr=0x174a, .value=0x04}, {.addr=0x174b, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0x174a, .value=0x04, .type=IO_READ},
        {.addr=0x174b, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xe9e6, .a=0x42, .x=0xac, .y=0x5f, .sp=0x10, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0x26}, {.addr=0xe9e6, .value=0x04}, {.addr=0xe9e7, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xe9e8, .a=0x66, .x=0xac, .y=0x5f, .sp=0x10, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0x26}, {.addr=0xe9e6, .value=0x04}, {.addr=0xe9e7, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xe9e6, .value=0x04, .type=IO_READ},
        {.addr=0xe9e7, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x0d15, .a=0x84, .x=0xff, .y=0x5e, .sp=0x3c, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dd, .value=0x72}, {.addr=0x0d15, .value=0x04}, {.addr=0x0d16, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x0d17, .a=0xf6, .x=0xff, .y=0x5e, .sp=0x3c, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dd, .value=0x72}, {.addr=0x0d15, .value=0x04}, {.addr=0x0d16, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d15, .value=0x04, .type=IO_READ},
        {.addr=0x0d16, .value=0xdd, .type=IO_READ},
        {.addr=0x00dd, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x00a4, .a=0xb5, .x=0x26, .y=0xff, .sp=0x55, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0x04}, {.addr=0x00a5, .value=0xc2}, {.addr=0x00c2, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x00a6, .a=0xb7, .x=0x26, .y=0xff, .sp=0x55, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0x04}, {.addr=0x00a5, .value=0xc2}, {.addr=0x00c2, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x00a4, .value=0x04, .type=IO_READ},
        {.addr=0x00a5, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x09d8, .a=0x14, .x=0xc7, .y=0xf0, .sp=0xb7, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0134, .value=0x01}, {.addr=0x09d8, .value=0x04}, {.addr=0x09d9, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x09da, .a=0x15, .x=0xc7, .y=0xf0, .sp=0xb7, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0134, .value=0x01}, {.addr=0x09d8, .value=0x04}, {.addr=0x09d9, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x09d8, .value=0x04, .type=IO_READ},
        {.addr=0x09d9, .value=0x34, .type=IO_READ},
        {.addr=0x0134, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x8146, .a=0xec, .x=0x2b, .y=0xac, .sp=0x34, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x50}, {.addr=0x8146, .value=0x04}, {.addr=0x8147, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x8148, .a=0xfc, .x=0x2b, .y=0xac, .sp=0x34, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x50}, {.addr=0x8146, .value=0x04}, {.addr=0x8147, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8146, .value=0x04, .type=IO_READ},
        {.addr=0x8147, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xcddb, .a=0x48, .x=0x14, .y=0x93, .sp=0x8b, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0xe9}, {.addr=0xcddb, .value=0x04}, {.addr=0xcddc, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xcddd, .a=0xe9, .x=0x14, .y=0x93, .sp=0x8b, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0xe9}, {.addr=0xcddb, .value=0x04}, {.addr=0xcddc, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xcddb, .value=0x04, .type=IO_READ},
        {.addr=0xcddc, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xb79c, .a=0x2b, .x=0x0a, .y=0x4e, .sp=0x40, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0x36}, {.addr=0xb79c, .value=0x04}, {.addr=0xb79d, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0xb79e, .a=0x3f, .x=0x0a, .y=0x4e, .sp=0x40, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0x36}, {.addr=0xb79c, .value=0x04}, {.addr=0xb79d, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb79c, .value=0x04, .type=IO_READ},
        {.addr=0xb79d, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x2033, .a=0x56, .x=0xd9, .y=0x47, .sp=0x5d, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b8, .value=0xdc}, {.addr=0x2033, .value=0x04}, {.addr=0x2034, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x2035, .a=0xde, .x=0xd9, .y=0x47, .sp=0x5d, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b8, .value=0xdc}, {.addr=0x2033, .value=0x04}, {.addr=0x2034, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x2033, .value=0x04, .type=IO_READ},
        {.addr=0x2034, .value=0xb8, .type=IO_READ},
        {.addr=0x01b8, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x2b2a, .a=0x76, .x=0x49, .y=0x8c, .sp=0x4a, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0x98}, {.addr=0x2b2a, .value=0x04}, {.addr=0x2b2b, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x2b2c, .a=0xfe, .x=0x49, .y=0x8c, .sp=0x4a, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0x98}, {.addr=0x2b2a, .value=0x04}, {.addr=0x2b2b, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b2a, .value=0x04, .type=IO_READ},
        {.addr=0x2b2b, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x3019, .a=0xbe, .x=0xf2, .y=0x1b, .sp=0x79, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0xa8}, {.addr=0x3019, .value=0x04}, {.addr=0x301a, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x301b, .a=0xbe, .x=0xf2, .y=0x1b, .sp=0x79, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0xa8}, {.addr=0x3019, .value=0x04}, {.addr=0x301a, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3019, .value=0x04, .type=IO_READ},
        {.addr=0x301a, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xbbce, .a=0xe0, .x=0x10, .y=0x82, .sp=0xa1, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0x5f}, {.addr=0xbbce, .value=0x04}, {.addr=0xbbcf, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0xbbd0, .a=0xff, .x=0x10, .y=0x82, .sp=0xa1, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0x5f}, {.addr=0xbbce, .value=0x04}, {.addr=0xbbcf, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0xbbce, .value=0x04, .type=IO_READ},
        {.addr=0xbbcf, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xd2d9, .a=0xf9, .x=0x4a, .y=0xb3, .sp=0xd6, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0x66}, {.addr=0xd2d9, .value=0x04}, {.addr=0xd2da, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0xd2db, .a=0xff, .x=0x4a, .y=0xb3, .sp=0xd6, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0x66}, {.addr=0xd2d9, .value=0x04}, {.addr=0xd2da, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2d9, .value=0x04, .type=IO_READ},
        {.addr=0xd2da, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x2964, .a=0x54, .x=0xb8, .y=0x51, .sp=0x4d, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0x50}, {.addr=0x2964, .value=0x04}, {.addr=0x2965, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x2966, .a=0x54, .x=0xb8, .y=0x51, .sp=0x4d, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0x50}, {.addr=0x2964, .value=0x04}, {.addr=0x2965, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x2964, .value=0x04, .type=IO_READ},
        {.addr=0x2965, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x26d5, .a=0x81, .x=0xd2, .y=0xae, .sp=0xf0, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0x6e}, {.addr=0x26d5, .value=0x04}, {.addr=0x26d6, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x26d7, .a=0xef, .x=0xd2, .y=0xae, .sp=0xf0, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0x6e}, {.addr=0x26d5, .value=0x04}, {.addr=0x26d6, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x26d5, .value=0x04, .type=IO_READ},
        {.addr=0x26d6, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xc6f5, .a=0xb8, .x=0xa8, .y=0x50, .sp=0x2b, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d5, .value=0x88}, {.addr=0xc6f5, .value=0x04}, {.addr=0xc6f6, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0xc6f7, .a=0xb8, .x=0xa8, .y=0x50, .sp=0x2b, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d5, .value=0x88}, {.addr=0xc6f5, .value=0x04}, {.addr=0xc6f6, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0xc6f5, .value=0x04, .type=IO_READ},
        {.addr=0xc6f6, .value=0xd5, .type=IO_READ},
        {.addr=0x00d5, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x0efc, .a=0x3f, .x=0xe4, .y=0xa6, .sp=0x14, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0xda}, {.addr=0x0efc, .value=0x04}, {.addr=0x0efd, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x0efe, .a=0xff, .x=0xe4, .y=0xa6, .sp=0x14, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0xda}, {.addr=0x0efc, .value=0x04}, {.addr=0x0efd, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x0efc, .value=0x04, .type=IO_READ},
        {.addr=0x0efd, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xc28f, .a=0x6e, .x=0xbf, .y=0x49, .sp=0x20, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ee, .value=0xc8}, {.addr=0xc28f, .value=0x04}, {.addr=0xc290, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xc291, .a=0xee, .x=0xbf, .y=0x49, .sp=0x20, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ee, .value=0xc8}, {.addr=0xc28f, .value=0x04}, {.addr=0xc290, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xc28f, .value=0x04, .type=IO_READ},
        {.addr=0xc290, .value=0xee, .type=IO_READ},
        {.addr=0x01ee, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xed7d, .a=0xc3, .x=0x1b, .y=0xfe, .sp=0x61, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0x4c}, {.addr=0xed7d, .value=0x04}, {.addr=0xed7e, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xed7f, .a=0xcf, .x=0x1b, .y=0xfe, .sp=0x61, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0x4c}, {.addr=0xed7d, .value=0x04}, {.addr=0xed7e, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xed7d, .value=0x04, .type=IO_READ},
        {.addr=0xed7e, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xf580, .a=0xc7, .x=0x5b, .y=0x67, .sp=0x67, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0x8f}, {.addr=0xf580, .value=0x04}, {.addr=0xf581, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0xf582, .a=0xcf, .x=0x5b, .y=0x67, .sp=0x67, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0x8f}, {.addr=0xf580, .value=0x04}, {.addr=0xf581, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf580, .value=0x04, .type=IO_READ},
        {.addr=0xf581, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x4f97, .a=0x38, .x=0xb3, .y=0xf6, .sp=0x49, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0xa4}, {.addr=0x4f97, .value=0x04}, {.addr=0x4f98, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x4f99, .a=0xbc, .x=0xb3, .y=0xf6, .sp=0x49, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0xa4}, {.addr=0x4f97, .value=0x04}, {.addr=0x4f98, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f97, .value=0x04, .type=IO_READ},
        {.addr=0x4f98, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x8212, .a=0x2e, .x=0x84, .y=0x2e, .sp=0xf8, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0x8d}, {.addr=0x8212, .value=0x04}, {.addr=0x8213, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x8214, .a=0xaf, .x=0x84, .y=0x2e, .sp=0xf8, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0x8d}, {.addr=0x8212, .value=0x04}, {.addr=0x8213, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x8212, .value=0x04, .type=IO_READ},
        {.addr=0x8213, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x8ae2, .a=0x34, .x=0xb5, .y=0xe6, .sp=0x31, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0x4d}, {.addr=0x8ae2, .value=0x04}, {.addr=0x8ae3, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x8ae4, .a=0x7d, .x=0xb5, .y=0xe6, .sp=0x31, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0x4d}, {.addr=0x8ae2, .value=0x04}, {.addr=0x8ae3, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ae2, .value=0x04, .type=IO_READ},
        {.addr=0x8ae3, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x7aa0, .a=0xa7, .x=0xc9, .y=0x2c, .sp=0x8d, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0191, .value=0x84}, {.addr=0x7aa0, .value=0x04}, {.addr=0x7aa1, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x7aa2, .a=0xa7, .x=0xc9, .y=0x2c, .sp=0x8d, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0191, .value=0x84}, {.addr=0x7aa0, .value=0x04}, {.addr=0x7aa1, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x7aa0, .value=0x04, .type=IO_READ},
        {.addr=0x7aa1, .value=0x91, .type=IO_READ},
        {.addr=0x0191, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x7550, .a=0x8d, .x=0x88, .y=0x67, .sp=0x57, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00de, .value=0xef}, {.addr=0x7550, .value=0x04}, {.addr=0x7551, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x7552, .a=0xef, .x=0x88, .y=0x67, .sp=0x57, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00de, .value=0xef}, {.addr=0x7550, .value=0x04}, {.addr=0x7551, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x7550, .value=0x04, .type=IO_READ},
        {.addr=0x7551, .value=0xde, .type=IO_READ},
        {.addr=0x00de, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xe793, .a=0x99, .x=0x85, .y=0x49, .sp=0x6b, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0x90}, {.addr=0xe793, .value=0x04}, {.addr=0xe794, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0xe795, .a=0x99, .x=0x85, .y=0x49, .sp=0x6b, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0x90}, {.addr=0xe793, .value=0x04}, {.addr=0xe794, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0xe793, .value=0x04, .type=IO_READ},
        {.addr=0xe794, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xd42d, .a=0xa3, .x=0x85, .y=0x8b, .sp=0x06, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0xdd}, {.addr=0xd42d, .value=0x04}, {.addr=0xd42e, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xd42f, .a=0xff, .x=0x85, .y=0x8b, .sp=0x06, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0xdd}, {.addr=0xd42d, .value=0x04}, {.addr=0xd42e, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xd42d, .value=0x04, .type=IO_READ},
        {.addr=0xd42e, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xd743, .a=0x96, .x=0xbf, .y=0x43, .sp=0xb3, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0xb3}, {.addr=0xd743, .value=0x04}, {.addr=0xd744, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0xd745, .a=0xb7, .x=0xbf, .y=0x43, .sp=0xb3, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0xb3}, {.addr=0xd743, .value=0x04}, {.addr=0xd744, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0xd743, .value=0x04, .type=IO_READ},
        {.addr=0xd744, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x57c9, .a=0x95, .x=0x8f, .y=0x37, .sp=0x8d, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b6, .value=0xaf}, {.addr=0x57c9, .value=0x04}, {.addr=0x57ca, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x57cb, .a=0xbf, .x=0x8f, .y=0x37, .sp=0x8d, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b6, .value=0xaf}, {.addr=0x57c9, .value=0x04}, {.addr=0x57ca, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x57c9, .value=0x04, .type=IO_READ},
        {.addr=0x57ca, .value=0xb6, .type=IO_READ},
        {.addr=0x01b6, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x851a, .a=0xed, .x=0xa0, .y=0xba, .sp=0xf2, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b5, .value=0x3a}, {.addr=0x851a, .value=0x04}, {.addr=0x851b, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x851c, .a=0xff, .x=0xa0, .y=0xba, .sp=0xf2, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b5, .value=0x3a}, {.addr=0x851a, .value=0x04}, {.addr=0x851b, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x851a, .value=0x04, .type=IO_READ},
        {.addr=0x851b, .value=0xb5, .type=IO_READ},
        {.addr=0x00b5, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x7ac6, .a=0x3e, .x=0x88, .y=0x12, .sp=0xdb, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0x62}, {.addr=0x7ac6, .value=0x04}, {.addr=0x7ac7, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x7ac8, .a=0x7e, .x=0x88, .y=0x12, .sp=0xdb, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0x62}, {.addr=0x7ac6, .value=0x04}, {.addr=0x7ac7, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ac6, .value=0x04, .type=IO_READ},
        {.addr=0x7ac7, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xb795, .a=0x41, .x=0xf0, .y=0xb2, .sp=0x66, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0xf8}, {.addr=0xb795, .value=0x04}, {.addr=0xb796, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0xb797, .a=0xf9, .x=0xf0, .y=0xb2, .sp=0x66, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0xf8}, {.addr=0xb795, .value=0x04}, {.addr=0xb796, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0xb795, .value=0x04, .type=IO_READ},
        {.addr=0xb796, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x9053, .a=0xb9, .x=0xfe, .y=0xa3, .sp=0x2d, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0x40}, {.addr=0x9053, .value=0x04}, {.addr=0x9054, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x9055, .a=0xf9, .x=0xfe, .y=0xa3, .sp=0x2d, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0x40}, {.addr=0x9053, .value=0x04}, {.addr=0x9054, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x9053, .value=0x04, .type=IO_READ},
        {.addr=0x9054, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xf4e4, .a=0x6e, .x=0x19, .y=0xc3, .sp=0xaa, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0x18}, {.addr=0xf4e4, .value=0x04}, {.addr=0xf4e5, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0xf4e6, .a=0x7e, .x=0x19, .y=0xc3, .sp=0xaa, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0x18}, {.addr=0xf4e4, .value=0x04}, {.addr=0xf4e5, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4e4, .value=0x04, .type=IO_READ},
        {.addr=0xf4e5, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xed46, .a=0x58, .x=0x18, .y=0x3a, .sp=0x4f, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0xb0}, {.addr=0xed46, .value=0x04}, {.addr=0xed47, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xed48, .a=0xf8, .x=0x18, .y=0x3a, .sp=0x4f, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0xb0}, {.addr=0xed46, .value=0x04}, {.addr=0xed47, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xed46, .value=0x04, .type=IO_READ},
        {.addr=0xed47, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x44e9, .a=0x95, .x=0xfe, .y=0x05, .sp=0xbc, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005f, .value=0x6c}, {.addr=0x44e9, .value=0x04}, {.addr=0x44ea, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0x44eb, .a=0xfd, .x=0xfe, .y=0x05, .sp=0xbc, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x005f, .value=0x6c}, {.addr=0x44e9, .value=0x04}, {.addr=0x44ea, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0x44e9, .value=0x04, .type=IO_READ},
        {.addr=0x44ea, .value=0x5f, .type=IO_READ},
        {.addr=0x005f, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xb003, .a=0x54, .x=0xb0, .y=0x5b, .sp=0xff, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0xc7}, {.addr=0xb003, .value=0x04}, {.addr=0xb004, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xb005, .a=0xd7, .x=0xb0, .y=0x5b, .sp=0xff, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0xc7}, {.addr=0xb003, .value=0x04}, {.addr=0xb004, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xb003, .value=0x04, .type=IO_READ},
        {.addr=0xb004, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x0791, .a=0xc4, .x=0x78, .y=0xc5, .sp=0x59, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0x95}, {.addr=0x0791, .value=0x04}, {.addr=0x0792, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x0793, .a=0xd5, .x=0x78, .y=0xc5, .sp=0x59, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0x95}, {.addr=0x0791, .value=0x04}, {.addr=0x0792, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x0791, .value=0x04, .type=IO_READ},
        {.addr=0x0792, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x368b, .a=0x7c, .x=0x46, .y=0x22, .sp=0xc1, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x3f}, {.addr=0x368b, .value=0x04}, {.addr=0x368c, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x368d, .a=0x7f, .x=0x46, .y=0x22, .sp=0xc1, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x3f}, {.addr=0x368b, .value=0x04}, {.addr=0x368c, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x368b, .value=0x04, .type=IO_READ},
        {.addr=0x368c, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x651c, .a=0x67, .x=0x0e, .y=0x24, .sp=0xca, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0xae}, {.addr=0x651c, .value=0x04}, {.addr=0x651d, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x651e, .a=0xef, .x=0x0e, .y=0x24, .sp=0xca, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0xae}, {.addr=0x651c, .value=0x04}, {.addr=0x651d, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x651c, .value=0x04, .type=IO_READ},
        {.addr=0x651d, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xa36a, .a=0xc2, .x=0x64, .y=0xab, .sp=0xa7, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0xa6}, {.addr=0xa36a, .value=0x04}, {.addr=0xa36b, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xa36c, .a=0xe6, .x=0x64, .y=0xab, .sp=0xa7, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0xa6}, {.addr=0xa36a, .value=0x04}, {.addr=0xa36b, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xa36a, .value=0x04, .type=IO_READ},
        {.addr=0xa36b, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x60bd, .a=0xc3, .x=0xf3, .y=0xb4, .sp=0x4e, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0x7e}, {.addr=0x60bd, .value=0x04}, {.addr=0x60be, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x60bf, .a=0xff, .x=0xf3, .y=0xb4, .sp=0x4e, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0x7e}, {.addr=0x60bd, .value=0x04}, {.addr=0x60be, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x60bd, .value=0x04, .type=IO_READ},
        {.addr=0x60be, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x65e6, .a=0x64, .x=0x28, .y=0xab, .sp=0xc4, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0x4d}, {.addr=0x65e6, .value=0x04}, {.addr=0x65e7, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0x65e8, .a=0x6d, .x=0x28, .y=0xab, .sp=0xc4, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0x4d}, {.addr=0x65e6, .value=0x04}, {.addr=0x65e7, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0x65e6, .value=0x04, .type=IO_READ},
        {.addr=0x65e7, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x9052, .a=0x3e, .x=0xbc, .y=0x4d, .sp=0x8f, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0x7a}, {.addr=0x9052, .value=0x04}, {.addr=0x9053, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x9054, .a=0x7e, .x=0xbc, .y=0x4d, .sp=0x8f, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0x7a}, {.addr=0x9052, .value=0x04}, {.addr=0x9053, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9052, .value=0x04, .type=IO_READ},
        {.addr=0x9053, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xb1b0, .a=0x94, .x=0xb0, .y=0xfd, .sp=0x4d, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0x1c}, {.addr=0xb1b0, .value=0x04}, {.addr=0xb1b1, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0xb1b2, .a=0x9c, .x=0xb0, .y=0xfd, .sp=0x4d, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0x1c}, {.addr=0xb1b0, .value=0x04}, {.addr=0xb1b1, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0xb1b0, .value=0x04, .type=IO_READ},
        {.addr=0xb1b1, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x53f0, .a=0xb9, .x=0xb5, .y=0xae, .sp=0x4e, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ec, .value=0x1d}, {.addr=0x53f0, .value=0x04}, {.addr=0x53f1, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x53f2, .a=0xbd, .x=0xb5, .y=0xae, .sp=0x4e, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ec, .value=0x1d}, {.addr=0x53f0, .value=0x04}, {.addr=0x53f1, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x53f0, .value=0x04, .type=IO_READ},
        {.addr=0x53f1, .value=0xec, .type=IO_READ},
        {.addr=0x01ec, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x6b1a, .a=0x91, .x=0x38, .y=0x5d, .sp=0x6b, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0x44}, {.addr=0x6b1a, .value=0x04}, {.addr=0x6b1b, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x6b1c, .a=0xd5, .x=0x38, .y=0x5d, .sp=0x6b, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0x44}, {.addr=0x6b1a, .value=0x04}, {.addr=0x6b1b, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b1a, .value=0x04, .type=IO_READ},
        {.addr=0x6b1b, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x6949, .a=0x32, .x=0x01, .y=0xd2, .sp=0xc0, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0xab}, {.addr=0x6949, .value=0x04}, {.addr=0x694a, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x694b, .a=0xbb, .x=0x01, .y=0xd2, .sp=0xc0, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0xab}, {.addr=0x6949, .value=0x04}, {.addr=0x694a, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6949, .value=0x04, .type=IO_READ},
        {.addr=0x694a, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xd103, .a=0x05, .x=0x71, .y=0x52, .sp=0x07, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0xd2}, {.addr=0xd103, .value=0x04}, {.addr=0xd104, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0xd105, .a=0xd7, .x=0x71, .y=0x52, .sp=0x07, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0xd2}, {.addr=0xd103, .value=0x04}, {.addr=0xd104, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0xd103, .value=0x04, .type=IO_READ},
        {.addr=0xd104, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x7b1b, .a=0x82, .x=0xda, .y=0x4f, .sp=0x10, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0x49}, {.addr=0x7b1b, .value=0x04}, {.addr=0x7b1c, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x7b1d, .a=0xcb, .x=0xda, .y=0x4f, .sp=0x10, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0x49}, {.addr=0x7b1b, .value=0x04}, {.addr=0x7b1c, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b1b, .value=0x04, .type=IO_READ},
        {.addr=0x7b1c, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x37ef, .a=0x98, .x=0xe8, .y=0xd7, .sp=0x8b, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0xf1}, {.addr=0x37ef, .value=0x04}, {.addr=0x37f0, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x37f1, .a=0xf9, .x=0xe8, .y=0xd7, .sp=0x8b, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0xf1}, {.addr=0x37ef, .value=0x04}, {.addr=0x37f0, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x37ef, .value=0x04, .type=IO_READ},
        {.addr=0x37f0, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xc686, .a=0x14, .x=0xcc, .y=0xc5, .sp=0x81, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xb8}, {.addr=0xc686, .value=0x04}, {.addr=0xc687, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xc688, .a=0xbc, .x=0xcc, .y=0xc5, .sp=0x81, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xb8}, {.addr=0xc686, .value=0x04}, {.addr=0xc687, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xc686, .value=0x04, .type=IO_READ},
        {.addr=0xc687, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xa54d, .a=0x2a, .x=0x08, .y=0x6b, .sp=0x73, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0x02}, {.addr=0xa54d, .value=0x04}, {.addr=0xa54e, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0xa54f, .a=0x2a, .x=0x08, .y=0x6b, .sp=0x73, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0x02}, {.addr=0xa54d, .value=0x04}, {.addr=0xa54e, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0xa54d, .value=0x04, .type=IO_READ},
        {.addr=0xa54e, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x663f, .a=0xec, .x=0x0b, .y=0x5b, .sp=0x43, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0x8a}, {.addr=0x663f, .value=0x04}, {.addr=0x6640, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x6641, .a=0xee, .x=0x0b, .y=0x5b, .sp=0x43, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0x8a}, {.addr=0x663f, .value=0x04}, {.addr=0x6640, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x663f, .value=0x04, .type=IO_READ},
        {.addr=0x6640, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x9fa9, .a=0xb1, .x=0x01, .y=0x9a, .sp=0xb0, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0x1c}, {.addr=0x9fa9, .value=0x04}, {.addr=0x9faa, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x9fab, .a=0xbd, .x=0x01, .y=0x9a, .sp=0xb0, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0x1c}, {.addr=0x9fa9, .value=0x04}, {.addr=0x9faa, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x9fa9, .value=0x04, .type=IO_READ},
        {.addr=0x9faa, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x3f11, .a=0x14, .x=0x4b, .y=0x3c, .sp=0x27, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0x3b}, {.addr=0x3f11, .value=0x04}, {.addr=0x3f12, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x3f13, .a=0x3f, .x=0x4b, .y=0x3c, .sp=0x27, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0x3b}, {.addr=0x3f11, .value=0x04}, {.addr=0x3f12, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f11, .value=0x04, .type=IO_READ},
        {.addr=0x3f12, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x7ec1, .a=0x6c, .x=0xe1, .y=0x70, .sp=0x71, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0xa2}, {.addr=0x7ec1, .value=0x04}, {.addr=0x7ec2, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x7ec3, .a=0xee, .x=0xe1, .y=0x70, .sp=0x71, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0xa2}, {.addr=0x7ec1, .value=0x04}, {.addr=0x7ec2, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ec1, .value=0x04, .type=IO_READ},
        {.addr=0x7ec2, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x6ff3, .a=0x01, .x=0x42, .y=0xc9, .sp=0xc5, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0x5d}, {.addr=0x6ff3, .value=0x04}, {.addr=0x6ff4, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x6ff5, .a=0x5d, .x=0x42, .y=0xc9, .sp=0xc5, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0x5d}, {.addr=0x6ff3, .value=0x04}, {.addr=0x6ff4, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ff3, .value=0x04, .type=IO_READ},
        {.addr=0x6ff4, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xb8b3, .a=0xea, .x=0xc3, .y=0x8f, .sp=0x3f, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0007, .value=0x42}, {.addr=0xb8b3, .value=0x04}, {.addr=0xb8b4, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0xb8b5, .a=0xea, .x=0xc3, .y=0x8f, .sp=0x3f, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0007, .value=0x42}, {.addr=0xb8b3, .value=0x04}, {.addr=0xb8b4, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8b3, .value=0x04, .type=IO_READ},
        {.addr=0xb8b4, .value=0x07, .type=IO_READ},
        {.addr=0x0007, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xfee0, .a=0x2e, .x=0xae, .y=0x35, .sp=0x45, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0x43}, {.addr=0xfee0, .value=0x04}, {.addr=0xfee1, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xfee2, .a=0x6f, .x=0xae, .y=0x35, .sp=0x45, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0x43}, {.addr=0xfee0, .value=0x04}, {.addr=0xfee1, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xfee0, .value=0x04, .type=IO_READ},
        {.addr=0xfee1, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x00b1, .a=0x83, .x=0x5f, .y=0x9f, .sp=0x1a, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0x04}, {.addr=0x00b2, .value=0xca}, {.addr=0x00ca, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x00b3, .a=0xbf, .x=0x5f, .y=0x9f, .sp=0x1a, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0x04}, {.addr=0x00b2, .value=0xca}, {.addr=0x00ca, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x00b1, .value=0x04, .type=IO_READ},
        {.addr=0x00b2, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x0a6d, .a=0x6c, .x=0x64, .y=0x20, .sp=0x01, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0x0f}, {.addr=0x0a6d, .value=0x04}, {.addr=0x0a6e, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x0a6f, .a=0x6f, .x=0x64, .y=0x20, .sp=0x01, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0x0f}, {.addr=0x0a6d, .value=0x04}, {.addr=0x0a6e, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a6d, .value=0x04, .type=IO_READ},
        {.addr=0x0a6e, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x0670, .a=0x73, .x=0x0c, .y=0xb4, .sp=0xd9, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0x29}, {.addr=0x0670, .value=0x04}, {.addr=0x0671, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x0672, .a=0x7b, .x=0x0c, .y=0xb4, .sp=0xd9, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0x29}, {.addr=0x0670, .value=0x04}, {.addr=0x0671, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x0670, .value=0x04, .type=IO_READ},
        {.addr=0x0671, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xb3b7, .a=0x49, .x=0x87, .y=0x26, .sp=0xac, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0x2e}, {.addr=0xb3b7, .value=0x04}, {.addr=0xb3b8, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0xb3b9, .a=0x6f, .x=0x87, .y=0x26, .sp=0xac, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0x2e}, {.addr=0xb3b7, .value=0x04}, {.addr=0xb3b8, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb3b7, .value=0x04, .type=IO_READ},
        {.addr=0xb3b8, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x7154, .a=0xaa, .x=0xf6, .y=0xb7, .sp=0xfb, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x7d}, {.addr=0x7154, .value=0x04}, {.addr=0x7155, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x7156, .a=0xff, .x=0xf6, .y=0xb7, .sp=0xfb, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x7d}, {.addr=0x7154, .value=0x04}, {.addr=0x7155, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x7154, .value=0x04, .type=IO_READ},
        {.addr=0x7155, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xffb2, .a=0x1a, .x=0x38, .y=0x57, .sp=0xd8, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0x82}, {.addr=0xffb2, .value=0x04}, {.addr=0xffb3, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xffb4, .a=0x9a, .x=0x38, .y=0x57, .sp=0xd8, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0x82}, {.addr=0xffb2, .value=0x04}, {.addr=0xffb3, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xffb2, .value=0x04, .type=IO_READ},
        {.addr=0xffb3, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x210b, .a=0x6d, .x=0xe7, .y=0xd4, .sp=0x7d, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0xb7}, {.addr=0x210b, .value=0x04}, {.addr=0x210c, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x210d, .a=0xff, .x=0xe7, .y=0xd4, .sp=0x7d, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0xb7}, {.addr=0x210b, .value=0x04}, {.addr=0x210c, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x210b, .value=0x04, .type=IO_READ},
        {.addr=0x210c, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x0b18, .a=0x43, .x=0x75, .y=0x4d, .sp=0xb0, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0x69}, {.addr=0x0b18, .value=0x04}, {.addr=0x0b19, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x0b1a, .a=0x6b, .x=0x75, .y=0x4d, .sp=0xb0, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0x69}, {.addr=0x0b18, .value=0x04}, {.addr=0x0b19, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b18, .value=0x04, .type=IO_READ},
        {.addr=0x0b19, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x1c5e, .a=0x08, .x=0x7b, .y=0x08, .sp=0x6d, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0xdf}, {.addr=0x1c5e, .value=0x04}, {.addr=0x1c5f, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x1c60, .a=0xdf, .x=0x7b, .y=0x08, .sp=0x6d, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0xdf}, {.addr=0x1c5e, .value=0x04}, {.addr=0x1c5f, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c5e, .value=0x04, .type=IO_READ},
        {.addr=0x1c5f, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xe6ef, .a=0xff, .x=0xb3, .y=0x47, .sp=0x76, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x12}, {.addr=0xe6ef, .value=0x04}, {.addr=0xe6f0, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0xe6f1, .a=0xff, .x=0xb3, .y=0x47, .sp=0x76, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x12}, {.addr=0xe6ef, .value=0x04}, {.addr=0xe6f0, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0xe6ef, .value=0x04, .type=IO_READ},
        {.addr=0xe6f0, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x837c, .a=0xfa, .x=0xb8, .y=0xf0, .sp=0xcb, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x1b}, {.addr=0x837c, .value=0x04}, {.addr=0x837d, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x837e, .a=0xfb, .x=0xb8, .y=0xf0, .sp=0xcb, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x1b}, {.addr=0x837c, .value=0x04}, {.addr=0x837d, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x837c, .value=0x04, .type=IO_READ},
        {.addr=0x837d, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xec98, .a=0x3f, .x=0x72, .y=0x27, .sp=0x28, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0x49}, {.addr=0xec98, .value=0x04}, {.addr=0xec99, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xec9a, .a=0x7f, .x=0x72, .y=0x27, .sp=0x28, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0x49}, {.addr=0xec98, .value=0x04}, {.addr=0xec99, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xec98, .value=0x04, .type=IO_READ},
        {.addr=0xec99, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xf8f0, .a=0x14, .x=0xdc, .y=0x8d, .sp=0xd2, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0xfa}, {.addr=0xf8f0, .value=0x04}, {.addr=0xf8f1, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0xf8f2, .a=0xfe, .x=0xdc, .y=0x8d, .sp=0xd2, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0xfa}, {.addr=0xf8f0, .value=0x04}, {.addr=0xf8f1, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf8f0, .value=0x04, .type=IO_READ},
        {.addr=0xf8f1, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x9aa6, .a=0x5d, .x=0xd9, .y=0xb8, .sp=0x9b, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0xb4}, {.addr=0x9aa6, .value=0x04}, {.addr=0x9aa7, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x9aa8, .a=0xfd, .x=0xd9, .y=0xb8, .sp=0x9b, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0xb4}, {.addr=0x9aa6, .value=0x04}, {.addr=0x9aa7, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x9aa6, .value=0x04, .type=IO_READ},
        {.addr=0x9aa7, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x80a9, .a=0xc1, .x=0x49, .y=0x70, .sp=0x00, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0x9d}, {.addr=0x80a9, .value=0x04}, {.addr=0x80aa, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0x80ab, .a=0xdd, .x=0x49, .y=0x70, .sp=0x00, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0x9d}, {.addr=0x80a9, .value=0x04}, {.addr=0x80aa, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0x80a9, .value=0x04, .type=IO_READ},
        {.addr=0x80aa, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x5ce0, .a=0xa4, .x=0xb9, .y=0xe4, .sp=0xbe, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0xa8}, {.addr=0x5ce0, .value=0x04}, {.addr=0x5ce1, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x5ce2, .a=0xac, .x=0xb9, .y=0xe4, .sp=0xbe, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0xa8}, {.addr=0x5ce0, .value=0x04}, {.addr=0x5ce1, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ce0, .value=0x04, .type=IO_READ},
        {.addr=0x5ce1, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xf1b7, .a=0x82, .x=0x35, .y=0xed, .sp=0x1c, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0x45}, {.addr=0xf1b7, .value=0x04}, {.addr=0xf1b8, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0xf1b9, .a=0xc7, .x=0x35, .y=0xed, .sp=0x1c, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0x45}, {.addr=0xf1b7, .value=0x04}, {.addr=0xf1b8, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf1b7, .value=0x04, .type=IO_READ},
        {.addr=0xf1b8, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x1cba, .a=0x16, .x=0x78, .y=0x7a, .sp=0x78, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x82}, {.addr=0x1cba, .value=0x04}, {.addr=0x1cbb, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x1cbc, .a=0x96, .x=0x78, .y=0x7a, .sp=0x78, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x82}, {.addr=0x1cba, .value=0x04}, {.addr=0x1cbb, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1cba, .value=0x04, .type=IO_READ},
        {.addr=0x1cbb, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xb7a3, .a=0x87, .x=0xf2, .y=0xb7, .sp=0xa2, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0x36}, {.addr=0xb7a3, .value=0x04}, {.addr=0xb7a4, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0xb7a5, .a=0xb7, .x=0xf2, .y=0xb7, .sp=0xa2, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0x36}, {.addr=0xb7a3, .value=0x04}, {.addr=0xb7a4, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0xb7a3, .value=0x04, .type=IO_READ},
        {.addr=0xb7a4, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x77e7, .a=0xbc, .x=0xfd, .y=0xba, .sp=0x03, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0x33}, {.addr=0x77e7, .value=0x04}, {.addr=0x77e8, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x77e9, .a=0xbf, .x=0xfd, .y=0xba, .sp=0x03, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0x33}, {.addr=0x77e7, .value=0x04}, {.addr=0x77e8, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x77e7, .value=0x04, .type=IO_READ},
        {.addr=0x77e8, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0200) {
    const struct CPU_State initial_cpu = {.pc=0x9dd8, .a=0xc9, .x=0x95, .y=0x27, .sp=0x79, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d7, .value=0xf2}, {.addr=0x9dd8, .value=0x04}, {.addr=0x9dd9, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x9dda, .a=0xfb, .x=0x95, .y=0x27, .sp=0x79, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d7, .value=0xf2}, {.addr=0x9dd8, .value=0x04}, {.addr=0x9dd9, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x9dd8, .value=0x04, .type=IO_READ},
        {.addr=0x9dd9, .value=0xd7, .type=IO_READ},
        {.addr=0x00d7, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0201) {
    const struct CPU_State initial_cpu = {.pc=0x84bc, .a=0x80, .x=0xde, .y=0x12, .sp=0x6e, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0x22}, {.addr=0x84bc, .value=0x04}, {.addr=0x84bd, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0x84be, .a=0xa2, .x=0xde, .y=0x12, .sp=0x6e, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0x22}, {.addr=0x84bc, .value=0x04}, {.addr=0x84bd, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0x84bc, .value=0x04, .type=IO_READ},
        {.addr=0x84bd, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0202) {
    const struct CPU_State initial_cpu = {.pc=0xd341, .a=0x5d, .x=0xfd, .y=0x6d, .sp=0xa9, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0x67}, {.addr=0xd341, .value=0x04}, {.addr=0xd342, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0xd343, .a=0x7f, .x=0xfd, .y=0x6d, .sp=0xa9, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0x67}, {.addr=0xd341, .value=0x04}, {.addr=0xd342, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0xd341, .value=0x04, .type=IO_READ},
        {.addr=0xd342, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0203) {
    const struct CPU_State initial_cpu = {.pc=0xe897, .a=0xc1, .x=0xd8, .y=0xeb, .sp=0x6f, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0x4b}, {.addr=0xe897, .value=0x04}, {.addr=0xe898, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0xe899, .a=0xcb, .x=0xd8, .y=0xeb, .sp=0x6f, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0x4b}, {.addr=0xe897, .value=0x04}, {.addr=0xe898, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0xe897, .value=0x04, .type=IO_READ},
        {.addr=0xe898, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0204) {
    const struct CPU_State initial_cpu = {.pc=0x5fe1, .a=0xf0, .x=0xa2, .y=0x07, .sp=0xfc, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e5, .value=0xf9}, {.addr=0x5fe1, .value=0x04}, {.addr=0x5fe2, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x5fe3, .a=0xf9, .x=0xa2, .y=0x07, .sp=0xfc, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e5, .value=0xf9}, {.addr=0x5fe1, .value=0x04}, {.addr=0x5fe2, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x5fe1, .value=0x04, .type=IO_READ},
        {.addr=0x5fe2, .value=0xe5, .type=IO_READ},
        {.addr=0x00e5, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0205) {
    const struct CPU_State initial_cpu = {.pc=0xcaa6, .a=0x94, .x=0xf7, .y=0x28, .sp=0x6d, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0xf6}, {.addr=0xcaa6, .value=0x04}, {.addr=0xcaa7, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0xcaa8, .a=0xf6, .x=0xf7, .y=0x28, .sp=0x6d, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0xf6}, {.addr=0xcaa6, .value=0x04}, {.addr=0xcaa7, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0xcaa6, .value=0x04, .type=IO_READ},
        {.addr=0xcaa7, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0206) {
    const struct CPU_State initial_cpu = {.pc=0x115e, .a=0x81, .x=0x41, .y=0xbc, .sp=0x77, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x6a}, {.addr=0x115e, .value=0x04}, {.addr=0x115f, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x1160, .a=0xeb, .x=0x41, .y=0xbc, .sp=0x77, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x6a}, {.addr=0x115e, .value=0x04}, {.addr=0x115f, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x115e, .value=0x04, .type=IO_READ},
        {.addr=0x115f, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0207) {
    const struct CPU_State initial_cpu = {.pc=0xc317, .a=0xb6, .x=0xd7, .y=0x1b, .sp=0xc1, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x24}, {.addr=0xc317, .value=0x04}, {.addr=0xc318, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xc319, .a=0xb6, .x=0xd7, .y=0x1b, .sp=0xc1, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x24}, {.addr=0xc317, .value=0x04}, {.addr=0xc318, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc317, .value=0x04, .type=IO_READ},
        {.addr=0xc318, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0208) {
    const struct CPU_State initial_cpu = {.pc=0x087e, .a=0x06, .x=0xd9, .y=0x36, .sp=0x26, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0x6f}, {.addr=0x087e, .value=0x04}, {.addr=0x087f, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x0880, .a=0x6f, .x=0xd9, .y=0x36, .sp=0x26, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0x6f}, {.addr=0x087e, .value=0x04}, {.addr=0x087f, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x087e, .value=0x04, .type=IO_READ},
        {.addr=0x087f, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0209) {
    const struct CPU_State initial_cpu = {.pc=0xffb3, .a=0x7a, .x=0xa6, .y=0x3b, .sp=0xbe, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0117, .value=0x14}, {.addr=0xffb3, .value=0x04}, {.addr=0xffb4, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0xffb5, .a=0x7e, .x=0xa6, .y=0x3b, .sp=0xbe, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0117, .value=0x14}, {.addr=0xffb3, .value=0x04}, {.addr=0xffb4, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0xffb3, .value=0x04, .type=IO_READ},
        {.addr=0xffb4, .value=0x17, .type=IO_READ},
        {.addr=0x0117, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_020A) {
    const struct CPU_State initial_cpu = {.pc=0x5d5e, .a=0xd3, .x=0x32, .y=0x9b, .sp=0x20, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0x00}, {.addr=0x5d5e, .value=0x04}, {.addr=0x5d5f, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0x5d60, .a=0xd3, .x=0x32, .y=0x9b, .sp=0x20, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0x00}, {.addr=0x5d5e, .value=0x04}, {.addr=0x5d5f, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d5e, .value=0x04, .type=IO_READ},
        {.addr=0x5d5f, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_020B) {
    const struct CPU_State initial_cpu = {.pc=0xbbb2, .a=0x78, .x=0x17, .y=0x02, .sp=0xa7, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x43}, {.addr=0xbbb2, .value=0x04}, {.addr=0xbbb3, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xbbb4, .a=0x7b, .x=0x17, .y=0x02, .sp=0xa7, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x43}, {.addr=0xbbb2, .value=0x04}, {.addr=0xbbb3, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xbbb2, .value=0x04, .type=IO_READ},
        {.addr=0xbbb3, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_020C) {
    const struct CPU_State initial_cpu = {.pc=0x2fd6, .a=0x52, .x=0xf2, .y=0x64, .sp=0x98, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x9e}, {.addr=0x2fd6, .value=0x04}, {.addr=0x2fd7, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x2fd8, .a=0xde, .x=0xf2, .y=0x64, .sp=0x98, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x9e}, {.addr=0x2fd6, .value=0x04}, {.addr=0x2fd7, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x2fd6, .value=0x04, .type=IO_READ},
        {.addr=0x2fd7, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_020D) {
    const struct CPU_State initial_cpu = {.pc=0x5282, .a=0xf2, .x=0x03, .y=0x63, .sp=0x30, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0xce}, {.addr=0x5282, .value=0x04}, {.addr=0x5283, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x5284, .a=0xfe, .x=0x03, .y=0x63, .sp=0x30, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0xce}, {.addr=0x5282, .value=0x04}, {.addr=0x5283, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x5282, .value=0x04, .type=IO_READ},
        {.addr=0x5283, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_020E) {
    const struct CPU_State initial_cpu = {.pc=0x601e, .a=0x37, .x=0x05, .y=0x30, .sp=0xb5, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0xf2}, {.addr=0x601e, .value=0x04}, {.addr=0x601f, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x6020, .a=0xf7, .x=0x05, .y=0x30, .sp=0xb5, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0xf2}, {.addr=0x601e, .value=0x04}, {.addr=0x601f, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x601e, .value=0x04, .type=IO_READ},
        {.addr=0x601f, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_020F) {
    const struct CPU_State initial_cpu = {.pc=0x8ad0, .a=0xc4, .x=0x99, .y=0xa8, .sp=0x97, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0xdc}, {.addr=0x8ad0, .value=0x04}, {.addr=0x8ad1, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x8ad2, .a=0xdc, .x=0x99, .y=0xa8, .sp=0x97, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0xdc}, {.addr=0x8ad0, .value=0x04}, {.addr=0x8ad1, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ad0, .value=0x04, .type=IO_READ},
        {.addr=0x8ad1, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0210) {
    const struct CPU_State initial_cpu = {.pc=0x743b, .a=0xf9, .x=0x85, .y=0xf0, .sp=0xe7, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0x77}, {.addr=0x743b, .value=0x04}, {.addr=0x743c, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x743d, .a=0xff, .x=0x85, .y=0xf0, .sp=0xe7, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0x77}, {.addr=0x743b, .value=0x04}, {.addr=0x743c, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x743b, .value=0x04, .type=IO_READ},
        {.addr=0x743c, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0211) {
    const struct CPU_State initial_cpu = {.pc=0xf393, .a=0xdd, .x=0x8a, .y=0x4f, .sp=0x68, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0xd6}, {.addr=0xf393, .value=0x04}, {.addr=0xf394, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xf395, .a=0xdf, .x=0x8a, .y=0x4f, .sp=0x68, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0xd6}, {.addr=0xf393, .value=0x04}, {.addr=0xf394, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xf393, .value=0x04, .type=IO_READ},
        {.addr=0xf394, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0212) {
    const struct CPU_State initial_cpu = {.pc=0xf4c3, .a=0x00, .x=0x18, .y=0xe5, .sp=0x5b, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ed, .value=0x84}, {.addr=0xf4c3, .value=0x04}, {.addr=0xf4c4, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0xf4c5, .a=0x84, .x=0x18, .y=0xe5, .sp=0x5b, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ed, .value=0x84}, {.addr=0xf4c3, .value=0x04}, {.addr=0xf4c4, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4c3, .value=0x04, .type=IO_READ},
        {.addr=0xf4c4, .value=0xed, .type=IO_READ},
        {.addr=0x01ed, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0213) {
    const struct CPU_State initial_cpu = {.pc=0x41a9, .a=0x27, .x=0xad, .y=0xa0, .sp=0xac, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0xac}, {.addr=0x41a9, .value=0x04}, {.addr=0x41aa, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x41ab, .a=0xaf, .x=0xad, .y=0xa0, .sp=0xac, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0xac}, {.addr=0x41a9, .value=0x04}, {.addr=0x41aa, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x41a9, .value=0x04, .type=IO_READ},
        {.addr=0x41aa, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0214) {
    const struct CPU_State initial_cpu = {.pc=0xb663, .a=0x48, .x=0xc4, .y=0x06, .sp=0xe1, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0189, .value=0xc9}, {.addr=0xb663, .value=0x04}, {.addr=0xb664, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0xb665, .a=0xc9, .x=0xc4, .y=0x06, .sp=0xe1, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0189, .value=0xc9}, {.addr=0xb663, .value=0x04}, {.addr=0xb664, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0xb663, .value=0x04, .type=IO_READ},
        {.addr=0xb664, .value=0x89, .type=IO_READ},
        {.addr=0x0189, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0215) {
    const struct CPU_State initial_cpu = {.pc=0xbcb3, .a=0x04, .x=0xc1, .y=0x76, .sp=0xd2, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x4d}, {.addr=0xbcb3, .value=0x04}, {.addr=0xbcb4, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0xbcb5, .a=0x4d, .x=0xc1, .y=0x76, .sp=0xd2, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x4d}, {.addr=0xbcb3, .value=0x04}, {.addr=0xbcb4, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0xbcb3, .value=0x04, .type=IO_READ},
        {.addr=0xbcb4, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0217) {
    const struct CPU_State initial_cpu = {.pc=0x4029, .a=0xd2, .x=0xf6, .y=0x0a, .sp=0xd3, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0x16}, {.addr=0x4029, .value=0x04}, {.addr=0x402a, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x402b, .a=0xd6, .x=0xf6, .y=0x0a, .sp=0xd3, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0x16}, {.addr=0x4029, .value=0x04}, {.addr=0x402a, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x4029, .value=0x04, .type=IO_READ},
        {.addr=0x402a, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0218) {
    const struct CPU_State initial_cpu = {.pc=0xfa76, .a=0x3f, .x=0xf5, .y=0xa6, .sp=0x16, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0xc7}, {.addr=0xfa76, .value=0x04}, {.addr=0xfa77, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0xfa78, .a=0xff, .x=0xf5, .y=0xa6, .sp=0x16, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0xc7}, {.addr=0xfa76, .value=0x04}, {.addr=0xfa77, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa76, .value=0x04, .type=IO_READ},
        {.addr=0xfa77, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0219) {
    const struct CPU_State initial_cpu = {.pc=0xf237, .a=0xea, .x=0x42, .y=0x57, .sp=0xc7, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0095, .value=0x51}, {.addr=0xf237, .value=0x04}, {.addr=0xf238, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0xf239, .a=0xfb, .x=0x42, .y=0x57, .sp=0xc7, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0095, .value=0x51}, {.addr=0xf237, .value=0x04}, {.addr=0xf238, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0xf237, .value=0x04, .type=IO_READ},
        {.addr=0xf238, .value=0x95, .type=IO_READ},
        {.addr=0x0095, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_021A) {
    const struct CPU_State initial_cpu = {.pc=0x8e07, .a=0x60, .x=0xe4, .y=0x55, .sp=0xe5, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0x4e}, {.addr=0x8e07, .value=0x04}, {.addr=0x8e08, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x8e09, .a=0x6e, .x=0xe4, .y=0x55, .sp=0xe5, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0x4e}, {.addr=0x8e07, .value=0x04}, {.addr=0x8e08, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e07, .value=0x04, .type=IO_READ},
        {.addr=0x8e08, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_021B) {
    const struct CPU_State initial_cpu = {.pc=0x1fa4, .a=0xb8, .x=0x6b, .y=0xc7, .sp=0x10, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0x23}, {.addr=0x1fa4, .value=0x04}, {.addr=0x1fa5, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x1fa6, .a=0xbb, .x=0x6b, .y=0xc7, .sp=0x10, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0x23}, {.addr=0x1fa4, .value=0x04}, {.addr=0x1fa5, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x1fa4, .value=0x04, .type=IO_READ},
        {.addr=0x1fa5, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_021C) {
    const struct CPU_State initial_cpu = {.pc=0x7c74, .a=0xf5, .x=0x1d, .y=0x2e, .sp=0xa8, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x92}, {.addr=0x7c74, .value=0x04}, {.addr=0x7c75, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x7c76, .a=0xf7, .x=0x1d, .y=0x2e, .sp=0xa8, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x92}, {.addr=0x7c74, .value=0x04}, {.addr=0x7c75, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c74, .value=0x04, .type=IO_READ},
        {.addr=0x7c75, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_021D) {
    const struct CPU_State initial_cpu = {.pc=0x6637, .a=0x41, .x=0xc8, .y=0xa1, .sp=0x89, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0xfa}, {.addr=0x6637, .value=0x04}, {.addr=0x6638, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x6639, .a=0xfb, .x=0xc8, .y=0xa1, .sp=0x89, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0xfa}, {.addr=0x6637, .value=0x04}, {.addr=0x6638, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6637, .value=0x04, .type=IO_READ},
        {.addr=0x6638, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_021E) {
    const struct CPU_State initial_cpu = {.pc=0xb610, .a=0xf7, .x=0x2d, .y=0xc3, .sp=0xa4, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0x0f}, {.addr=0xb610, .value=0x04}, {.addr=0xb611, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0xb612, .a=0xff, .x=0x2d, .y=0xc3, .sp=0xa4, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0x0f}, {.addr=0xb610, .value=0x04}, {.addr=0xb611, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0xb610, .value=0x04, .type=IO_READ},
        {.addr=0xb611, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_021F) {
    const struct CPU_State initial_cpu = {.pc=0x1545, .a=0xcf, .x=0xc1, .y=0x66, .sp=0x82, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0x94}, {.addr=0x1545, .value=0x04}, {.addr=0x1546, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x1547, .a=0xdf, .x=0xc1, .y=0x66, .sp=0x82, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0x94}, {.addr=0x1545, .value=0x04}, {.addr=0x1546, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x1545, .value=0x04, .type=IO_READ},
        {.addr=0x1546, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0220) {
    const struct CPU_State initial_cpu = {.pc=0x66b3, .a=0x2c, .x=0x0e, .y=0x8e, .sp=0x7c, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0007, .value=0xaa}, {.addr=0x66b3, .value=0x04}, {.addr=0x66b4, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x66b5, .a=0xae, .x=0x0e, .y=0x8e, .sp=0x7c, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0007, .value=0xaa}, {.addr=0x66b3, .value=0x04}, {.addr=0x66b4, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x66b3, .value=0x04, .type=IO_READ},
        {.addr=0x66b4, .value=0x07, .type=IO_READ},
        {.addr=0x0007, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0221) {
    const struct CPU_State initial_cpu = {.pc=0x02c4, .a=0x28, .x=0xb5, .y=0x7f, .sp=0x8f, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0x04}, {.addr=0x02c4, .value=0x04}, {.addr=0x02c5, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x02c6, .a=0x2c, .x=0xb5, .y=0x7f, .sp=0x8f, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0x04}, {.addr=0x02c4, .value=0x04}, {.addr=0x02c5, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x02c4, .value=0x04, .type=IO_READ},
        {.addr=0x02c5, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0222) {
    const struct CPU_State initial_cpu = {.pc=0xdf4e, .a=0x1b, .x=0xa7, .y=0x15, .sp=0x34, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x4a}, {.addr=0xdf4e, .value=0x04}, {.addr=0xdf4f, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xdf50, .a=0x5b, .x=0xa7, .y=0x15, .sp=0x34, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x4a}, {.addr=0xdf4e, .value=0x04}, {.addr=0xdf4f, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf4e, .value=0x04, .type=IO_READ},
        {.addr=0xdf4f, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0223) {
    const struct CPU_State initial_cpu = {.pc=0xb4ad, .a=0x38, .x=0xf3, .y=0xdb, .sp=0xa6, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0x47}, {.addr=0xb4ad, .value=0x04}, {.addr=0xb4ae, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xb4af, .a=0x7f, .x=0xf3, .y=0xdb, .sp=0xa6, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0x47}, {.addr=0xb4ad, .value=0x04}, {.addr=0xb4ae, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xb4ad, .value=0x04, .type=IO_READ},
        {.addr=0xb4ae, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0224) {
    const struct CPU_State initial_cpu = {.pc=0x4089, .a=0xa6, .x=0x62, .y=0xb0, .sp=0x33, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0x40}, {.addr=0x4089, .value=0x04}, {.addr=0x408a, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x408b, .a=0xe6, .x=0x62, .y=0xb0, .sp=0x33, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0x40}, {.addr=0x4089, .value=0x04}, {.addr=0x408a, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4089, .value=0x04, .type=IO_READ},
        {.addr=0x408a, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0225) {
    const struct CPU_State initial_cpu = {.pc=0xe3c4, .a=0x70, .x=0x17, .y=0xb3, .sp=0x48, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0xee}, {.addr=0xe3c4, .value=0x04}, {.addr=0xe3c5, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xe3c6, .a=0xfe, .x=0x17, .y=0xb3, .sp=0x48, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0xee}, {.addr=0xe3c4, .value=0x04}, {.addr=0xe3c5, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3c4, .value=0x04, .type=IO_READ},
        {.addr=0xe3c5, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0226) {
    const struct CPU_State initial_cpu = {.pc=0x6cec, .a=0x1a, .x=0x32, .y=0xed, .sp=0x96, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0xc1}, {.addr=0x6cec, .value=0x04}, {.addr=0x6ced, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x6cee, .a=0xdb, .x=0x32, .y=0xed, .sp=0x96, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0xc1}, {.addr=0x6cec, .value=0x04}, {.addr=0x6ced, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x6cec, .value=0x04, .type=IO_READ},
        {.addr=0x6ced, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0227) {
    const struct CPU_State initial_cpu = {.pc=0x748b, .a=0xaf, .x=0x42, .y=0x8d, .sp=0x06, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0x5c}, {.addr=0x748b, .value=0x04}, {.addr=0x748c, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x748d, .a=0xff, .x=0x42, .y=0x8d, .sp=0x06, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0x5c}, {.addr=0x748b, .value=0x04}, {.addr=0x748c, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x748b, .value=0x04, .type=IO_READ},
        {.addr=0x748c, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0228) {
    const struct CPU_State initial_cpu = {.pc=0xf86c, .a=0xe4, .x=0x45, .y=0x73, .sp=0xb6, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0x28}, {.addr=0xf86c, .value=0x04}, {.addr=0xf86d, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0xf86e, .a=0xec, .x=0x45, .y=0x73, .sp=0xb6, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0x28}, {.addr=0xf86c, .value=0x04}, {.addr=0xf86d, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf86c, .value=0x04, .type=IO_READ},
        {.addr=0xf86d, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0229) {
    const struct CPU_State initial_cpu = {.pc=0x80fa, .a=0xe1, .x=0xfb, .y=0xbd, .sp=0xbb, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0xfe}, {.addr=0x80fa, .value=0x04}, {.addr=0x80fb, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x80fc, .a=0xff, .x=0xfb, .y=0xbd, .sp=0xbb, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0xfe}, {.addr=0x80fa, .value=0x04}, {.addr=0x80fb, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x80fa, .value=0x04, .type=IO_READ},
        {.addr=0x80fb, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_022A) {
    const struct CPU_State initial_cpu = {.pc=0x4840, .a=0x4e, .x=0x9f, .y=0x85, .sp=0xc2, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0x65}, {.addr=0x4840, .value=0x04}, {.addr=0x4841, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x4842, .a=0x6f, .x=0x9f, .y=0x85, .sp=0xc2, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0x65}, {.addr=0x4840, .value=0x04}, {.addr=0x4841, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x4840, .value=0x04, .type=IO_READ},
        {.addr=0x4841, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_022B) {
    const struct CPU_State initial_cpu = {.pc=0x672c, .a=0xdc, .x=0xd2, .y=0x04, .sp=0x3d, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x86}, {.addr=0x672c, .value=0x04}, {.addr=0x672d, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x672e, .a=0xde, .x=0xd2, .y=0x04, .sp=0x3d, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x86}, {.addr=0x672c, .value=0x04}, {.addr=0x672d, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x672c, .value=0x04, .type=IO_READ},
        {.addr=0x672d, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_022C) {
    const struct CPU_State initial_cpu = {.pc=0x84bc, .a=0x16, .x=0x4d, .y=0x95, .sp=0x5f, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0x0b}, {.addr=0x84bc, .value=0x04}, {.addr=0x84bd, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x84be, .a=0x1f, .x=0x4d, .y=0x95, .sp=0x5f, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0x0b}, {.addr=0x84bc, .value=0x04}, {.addr=0x84bd, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x84bc, .value=0x04, .type=IO_READ},
        {.addr=0x84bd, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_022D) {
    const struct CPU_State initial_cpu = {.pc=0x5dda, .a=0xa8, .x=0x7d, .y=0xd5, .sp=0x96, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0x53}, {.addr=0x5dda, .value=0x04}, {.addr=0x5ddb, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x5ddc, .a=0xfb, .x=0x7d, .y=0xd5, .sp=0x96, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0x53}, {.addr=0x5dda, .value=0x04}, {.addr=0x5ddb, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x5dda, .value=0x04, .type=IO_READ},
        {.addr=0x5ddb, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_022E) {
    const struct CPU_State initial_cpu = {.pc=0x16af, .a=0xc6, .x=0x70, .y=0x02, .sp=0x73, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0xb9}, {.addr=0x16af, .value=0x04}, {.addr=0x16b0, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x16b1, .a=0xff, .x=0x70, .y=0x02, .sp=0x73, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0xb9}, {.addr=0x16af, .value=0x04}, {.addr=0x16b0, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x16af, .value=0x04, .type=IO_READ},
        {.addr=0x16b0, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_022F) {
    const struct CPU_State initial_cpu = {.pc=0x2998, .a=0x53, .x=0x80, .y=0xa9, .sp=0x5d, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0x5e}, {.addr=0x2998, .value=0x04}, {.addr=0x2999, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x299a, .a=0x5f, .x=0x80, .y=0xa9, .sp=0x5d, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0x5e}, {.addr=0x2998, .value=0x04}, {.addr=0x2999, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x2998, .value=0x04, .type=IO_READ},
        {.addr=0x2999, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0230) {
    const struct CPU_State initial_cpu = {.pc=0x16c5, .a=0x10, .x=0x7b, .y=0xf8, .sp=0x48, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0xf4}, {.addr=0x16c5, .value=0x04}, {.addr=0x16c6, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x16c7, .a=0xf4, .x=0x7b, .y=0xf8, .sp=0x48, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0xf4}, {.addr=0x16c5, .value=0x04}, {.addr=0x16c6, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x16c5, .value=0x04, .type=IO_READ},
        {.addr=0x16c6, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0231) {
    const struct CPU_State initial_cpu = {.pc=0x3c87, .a=0xb2, .x=0x70, .y=0xe4, .sp=0xa5, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0xab}, {.addr=0x3c87, .value=0x04}, {.addr=0x3c88, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x3c89, .a=0xbb, .x=0x70, .y=0xe4, .sp=0xa5, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0xab}, {.addr=0x3c87, .value=0x04}, {.addr=0x3c88, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c87, .value=0x04, .type=IO_READ},
        {.addr=0x3c88, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0232) {
    const struct CPU_State initial_cpu = {.pc=0x6f78, .a=0x2a, .x=0x12, .y=0xff, .sp=0x70, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0x22}, {.addr=0x6f78, .value=0x04}, {.addr=0x6f79, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x6f7a, .a=0x2a, .x=0x12, .y=0xff, .sp=0x70, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0x22}, {.addr=0x6f78, .value=0x04}, {.addr=0x6f79, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f78, .value=0x04, .type=IO_READ},
        {.addr=0x6f79, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0233) {
    const struct CPU_State initial_cpu = {.pc=0xa460, .a=0xd0, .x=0x83, .y=0xb1, .sp=0x9b, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0x9e}, {.addr=0xa460, .value=0x04}, {.addr=0xa461, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0xa462, .a=0xde, .x=0x83, .y=0xb1, .sp=0x9b, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0x9e}, {.addr=0xa460, .value=0x04}, {.addr=0xa461, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0xa460, .value=0x04, .type=IO_READ},
        {.addr=0xa461, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0234) {
    const struct CPU_State initial_cpu = {.pc=0x5993, .a=0x75, .x=0x24, .y=0x38, .sp=0x85, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0x30}, {.addr=0x5993, .value=0x04}, {.addr=0x5994, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x5995, .a=0x75, .x=0x24, .y=0x38, .sp=0x85, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0x30}, {.addr=0x5993, .value=0x04}, {.addr=0x5994, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x5993, .value=0x04, .type=IO_READ},
        {.addr=0x5994, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0235) {
    const struct CPU_State initial_cpu = {.pc=0x5d7a, .a=0xd0, .x=0x57, .y=0xc3, .sp=0x9b, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0x24}, {.addr=0x5d7a, .value=0x04}, {.addr=0x5d7b, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x5d7c, .a=0xf4, .x=0x57, .y=0xc3, .sp=0x9b, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0x24}, {.addr=0x5d7a, .value=0x04}, {.addr=0x5d7b, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d7a, .value=0x04, .type=IO_READ},
        {.addr=0x5d7b, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0236) {
    const struct CPU_State initial_cpu = {.pc=0x9137, .a=0x46, .x=0xc1, .y=0x2e, .sp=0xc7, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0191, .value=0xb9}, {.addr=0x9137, .value=0x04}, {.addr=0x9138, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x9139, .a=0xff, .x=0xc1, .y=0x2e, .sp=0xc7, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0191, .value=0xb9}, {.addr=0x9137, .value=0x04}, {.addr=0x9138, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x9137, .value=0x04, .type=IO_READ},
        {.addr=0x9138, .value=0x91, .type=IO_READ},
        {.addr=0x0191, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0237) {
    const struct CPU_State initial_cpu = {.pc=0xd1c0, .a=0xf0, .x=0x15, .y=0x43, .sp=0x1e, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0x41}, {.addr=0xd1c0, .value=0x04}, {.addr=0xd1c1, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0xd1c2, .a=0xf1, .x=0x15, .y=0x43, .sp=0x1e, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0x41}, {.addr=0xd1c0, .value=0x04}, {.addr=0xd1c1, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1c0, .value=0x04, .type=IO_READ},
        {.addr=0xd1c1, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0238) {
    const struct CPU_State initial_cpu = {.pc=0x0a05, .a=0xf3, .x=0x0f, .y=0x33, .sp=0x80, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0x07}, {.addr=0x0a05, .value=0x04}, {.addr=0x0a06, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x0a07, .a=0xf7, .x=0x0f, .y=0x33, .sp=0x80, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0x07}, {.addr=0x0a05, .value=0x04}, {.addr=0x0a06, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a05, .value=0x04, .type=IO_READ},
        {.addr=0x0a06, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0239) {
    const struct CPU_State initial_cpu = {.pc=0x67e4, .a=0x44, .x=0xd5, .y=0x3f, .sp=0x2c, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0xea}, {.addr=0x67e4, .value=0x04}, {.addr=0x67e5, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x67e6, .a=0xee, .x=0xd5, .y=0x3f, .sp=0x2c, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0xea}, {.addr=0x67e4, .value=0x04}, {.addr=0x67e5, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x67e4, .value=0x04, .type=IO_READ},
        {.addr=0x67e5, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_023A) {
    const struct CPU_State initial_cpu = {.pc=0x1f48, .a=0xa7, .x=0x38, .y=0xbd, .sp=0x35, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0xc1}, {.addr=0x1f48, .value=0x04}, {.addr=0x1f49, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x1f4a, .a=0xe7, .x=0x38, .y=0xbd, .sp=0x35, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0xc1}, {.addr=0x1f48, .value=0x04}, {.addr=0x1f49, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f48, .value=0x04, .type=IO_READ},
        {.addr=0x1f49, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_023B) {
    const struct CPU_State initial_cpu = {.pc=0xad16, .a=0x60, .x=0x97, .y=0x23, .sp=0x56, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0x80}, {.addr=0xad16, .value=0x04}, {.addr=0xad17, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xad18, .a=0xe0, .x=0x97, .y=0x23, .sp=0x56, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0x80}, {.addr=0xad16, .value=0x04}, {.addr=0xad17, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xad16, .value=0x04, .type=IO_READ},
        {.addr=0xad17, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_023C) {
    const struct CPU_State initial_cpu = {.pc=0x021d, .a=0xf4, .x=0xe0, .y=0x1b, .sp=0x01, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0x5e}, {.addr=0x021d, .value=0x04}, {.addr=0x021e, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x021f, .a=0xfe, .x=0xe0, .y=0x1b, .sp=0x01, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0x5e}, {.addr=0x021d, .value=0x04}, {.addr=0x021e, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x021d, .value=0x04, .type=IO_READ},
        {.addr=0x021e, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_023D) {
    const struct CPU_State initial_cpu = {.pc=0xdefe, .a=0xd0, .x=0xbc, .y=0xb9, .sp=0xdb, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0xdd}, {.addr=0xdefe, .value=0x04}, {.addr=0xdeff, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xdf00, .a=0xdd, .x=0xbc, .y=0xb9, .sp=0xdb, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0xdd}, {.addr=0xdefe, .value=0x04}, {.addr=0xdeff, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xdefe, .value=0x04, .type=IO_READ},
        {.addr=0xdeff, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_023E) {
    const struct CPU_State initial_cpu = {.pc=0xc76e, .a=0xe9, .x=0x9e, .y=0x0b, .sp=0xda, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0x7e}, {.addr=0xc76e, .value=0x04}, {.addr=0xc76f, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0xc770, .a=0xff, .x=0x9e, .y=0x0b, .sp=0xda, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0x7e}, {.addr=0xc76e, .value=0x04}, {.addr=0xc76f, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0xc76e, .value=0x04, .type=IO_READ},
        {.addr=0xc76f, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_023F) {
    const struct CPU_State initial_cpu = {.pc=0x91a6, .a=0xcb, .x=0x79, .y=0x91, .sp=0x0b, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0x5f}, {.addr=0x91a6, .value=0x04}, {.addr=0x91a7, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x91a8, .a=0xdf, .x=0x79, .y=0x91, .sp=0x0b, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0x5f}, {.addr=0x91a6, .value=0x04}, {.addr=0x91a7, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x91a6, .value=0x04, .type=IO_READ},
        {.addr=0x91a7, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0240) {
    const struct CPU_State initial_cpu = {.pc=0x299d, .a=0x3a, .x=0x2a, .y=0x5a, .sp=0xd1, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0x0f}, {.addr=0x299d, .value=0x04}, {.addr=0x299e, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x299f, .a=0x3f, .x=0x2a, .y=0x5a, .sp=0xd1, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0x0f}, {.addr=0x299d, .value=0x04}, {.addr=0x299e, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x299d, .value=0x04, .type=IO_READ},
        {.addr=0x299e, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0241) {
    const struct CPU_State initial_cpu = {.pc=0xa6e6, .a=0x52, .x=0xb0, .y=0x5e, .sp=0xb8, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0xa4}, {.addr=0xa6e6, .value=0x04}, {.addr=0xa6e7, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xa6e8, .a=0xf6, .x=0xb0, .y=0x5e, .sp=0xb8, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0xa4}, {.addr=0xa6e6, .value=0x04}, {.addr=0xa6e7, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xa6e6, .value=0x04, .type=IO_READ},
        {.addr=0xa6e7, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0242) {
    const struct CPU_State initial_cpu = {.pc=0x80df, .a=0xc1, .x=0x0c, .y=0x9b, .sp=0x2c, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0xe4}, {.addr=0x80df, .value=0x04}, {.addr=0x80e0, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x80e1, .a=0xe5, .x=0x0c, .y=0x9b, .sp=0x2c, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0xe4}, {.addr=0x80df, .value=0x04}, {.addr=0x80e0, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x80df, .value=0x04, .type=IO_READ},
        {.addr=0x80e0, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0243) {
    const struct CPU_State initial_cpu = {.pc=0x4420, .a=0xd0, .x=0x34, .y=0x1d, .sp=0xbe, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0xd6}, {.addr=0x4420, .value=0x04}, {.addr=0x4421, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x4422, .a=0xd6, .x=0x34, .y=0x1d, .sp=0xbe, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0xd6}, {.addr=0x4420, .value=0x04}, {.addr=0x4421, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x4420, .value=0x04, .type=IO_READ},
        {.addr=0x4421, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0244) {
    const struct CPU_State initial_cpu = {.pc=0x3d7a, .a=0xb9, .x=0x8e, .y=0x0c, .sp=0x8f, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0x4f}, {.addr=0x3d7a, .value=0x04}, {.addr=0x3d7b, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x3d7c, .a=0xff, .x=0x8e, .y=0x0c, .sp=0x8f, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0x4f}, {.addr=0x3d7a, .value=0x04}, {.addr=0x3d7b, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x3d7a, .value=0x04, .type=IO_READ},
        {.addr=0x3d7b, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0245) {
    const struct CPU_State initial_cpu = {.pc=0xdfa9, .a=0x60, .x=0x28, .y=0xfa, .sp=0xdf, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0x66}, {.addr=0xdfa9, .value=0x04}, {.addr=0xdfaa, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xdfab, .a=0x66, .x=0x28, .y=0xfa, .sp=0xdf, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0x66}, {.addr=0xdfa9, .value=0x04}, {.addr=0xdfaa, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xdfa9, .value=0x04, .type=IO_READ},
        {.addr=0xdfaa, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0246) {
    const struct CPU_State initial_cpu = {.pc=0x331c, .a=0x80, .x=0x9b, .y=0x50, .sp=0x05, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0x22}, {.addr=0x331c, .value=0x04}, {.addr=0x331d, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x331e, .a=0xa2, .x=0x9b, .y=0x50, .sp=0x05, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0x22}, {.addr=0x331c, .value=0x04}, {.addr=0x331d, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x331c, .value=0x04, .type=IO_READ},
        {.addr=0x331d, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0247) {
    const struct CPU_State initial_cpu = {.pc=0xfcdd, .a=0x3b, .x=0x98, .y=0x17, .sp=0x18, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0x5e}, {.addr=0xfcdd, .value=0x04}, {.addr=0xfcde, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0xfcdf, .a=0x7f, .x=0x98, .y=0x17, .sp=0x18, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0x5e}, {.addr=0xfcdd, .value=0x04}, {.addr=0xfcde, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0xfcdd, .value=0x04, .type=IO_READ},
        {.addr=0xfcde, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0248) {
    const struct CPU_State initial_cpu = {.pc=0xb388, .a=0x43, .x=0x32, .y=0xfd, .sp=0x8c, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0x7a}, {.addr=0xb388, .value=0x04}, {.addr=0xb389, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0xb38a, .a=0x7b, .x=0x32, .y=0xfd, .sp=0x8c, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0x7a}, {.addr=0xb388, .value=0x04}, {.addr=0xb389, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0xb388, .value=0x04, .type=IO_READ},
        {.addr=0xb389, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0249) {
    const struct CPU_State initial_cpu = {.pc=0x1299, .a=0x26, .x=0x50, .y=0x15, .sp=0x43, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0x06}, {.addr=0x1299, .value=0x04}, {.addr=0x129a, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x129b, .a=0x26, .x=0x50, .y=0x15, .sp=0x43, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0x06}, {.addr=0x1299, .value=0x04}, {.addr=0x129a, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x1299, .value=0x04, .type=IO_READ},
        {.addr=0x129a, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_024A) {
    const struct CPU_State initial_cpu = {.pc=0xfc77, .a=0x5c, .x=0xfe, .y=0xd6, .sp=0xe6, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0111, .value=0xf6}, {.addr=0xfc77, .value=0x04}, {.addr=0xfc78, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xfc79, .a=0xfe, .x=0xfe, .y=0xd6, .sp=0xe6, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0111, .value=0xf6}, {.addr=0xfc77, .value=0x04}, {.addr=0xfc78, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc77, .value=0x04, .type=IO_READ},
        {.addr=0xfc78, .value=0x11, .type=IO_READ},
        {.addr=0x0111, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_024B) {
    const struct CPU_State initial_cpu = {.pc=0x9b9e, .a=0x68, .x=0xab, .y=0xe8, .sp=0x30, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0088, .value=0x34}, {.addr=0x9b9e, .value=0x04}, {.addr=0x9b9f, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x9ba0, .a=0x7c, .x=0xab, .y=0xe8, .sp=0x30, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0088, .value=0x34}, {.addr=0x9b9e, .value=0x04}, {.addr=0x9b9f, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b9e, .value=0x04, .type=IO_READ},
        {.addr=0x9b9f, .value=0x88, .type=IO_READ},
        {.addr=0x0088, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_024C) {
    const struct CPU_State initial_cpu = {.pc=0xbf58, .a=0x7d, .x=0x09, .y=0x28, .sp=0x8a, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0x7c}, {.addr=0xbf58, .value=0x04}, {.addr=0xbf59, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0xbf5a, .a=0x7d, .x=0x09, .y=0x28, .sp=0x8a, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0x7c}, {.addr=0xbf58, .value=0x04}, {.addr=0xbf59, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf58, .value=0x04, .type=IO_READ},
        {.addr=0xbf59, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_024D) {
    const struct CPU_State initial_cpu = {.pc=0xac9e, .a=0x6e, .x=0xa0, .y=0xcb, .sp=0x02, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0x19}, {.addr=0xac9e, .value=0x04}, {.addr=0xac9f, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0xaca0, .a=0x7f, .x=0xa0, .y=0xcb, .sp=0x02, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0x19}, {.addr=0xac9e, .value=0x04}, {.addr=0xac9f, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0xac9e, .value=0x04, .type=IO_READ},
        {.addr=0xac9f, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_024E) {
    const struct CPU_State initial_cpu = {.pc=0x523b, .a=0x7b, .x=0xe4, .y=0x1d, .sp=0x6a, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f0, .value=0x86}, {.addr=0x523b, .value=0x04}, {.addr=0x523c, .value=0xf0},
    };
    const struct CPU_State final_cpu = {.pc=0x523d, .a=0xff, .x=0xe4, .y=0x1d, .sp=0x6a, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f0, .value=0x86}, {.addr=0x523b, .value=0x04}, {.addr=0x523c, .value=0xf0},
    };
    const struct BusEvent events[] = {
        {.addr=0x523b, .value=0x04, .type=IO_READ},
        {.addr=0x523c, .value=0xf0, .type=IO_READ},
        {.addr=0x01f0, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_024F) {
    const struct CPU_State initial_cpu = {.pc=0xf294, .a=0xb4, .x=0xfb, .y=0x64, .sp=0x48, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00db, .value=0x92}, {.addr=0xf294, .value=0x04}, {.addr=0xf295, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xf296, .a=0xb6, .x=0xfb, .y=0x64, .sp=0x48, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00db, .value=0x92}, {.addr=0xf294, .value=0x04}, {.addr=0xf295, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xf294, .value=0x04, .type=IO_READ},
        {.addr=0xf295, .value=0xdb, .type=IO_READ},
        {.addr=0x00db, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0250) {
    const struct CPU_State initial_cpu = {.pc=0xc9ff, .a=0x03, .x=0x6d, .y=0xca, .sp=0xe6, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0x29}, {.addr=0xc9ff, .value=0x04}, {.addr=0xca00, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xca01, .a=0x2b, .x=0x6d, .y=0xca, .sp=0xe6, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0x29}, {.addr=0xc9ff, .value=0x04}, {.addr=0xca00, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xc9ff, .value=0x04, .type=IO_READ},
        {.addr=0xca00, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0251) {
    const struct CPU_State initial_cpu = {.pc=0xb6ee, .a=0x97, .x=0xe0, .y=0x42, .sp=0xde, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e0, .value=0x69}, {.addr=0xb6ee, .value=0x04}, {.addr=0xb6ef, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0xb6f0, .a=0xff, .x=0xe0, .y=0x42, .sp=0xde, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e0, .value=0x69}, {.addr=0xb6ee, .value=0x04}, {.addr=0xb6ef, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0xb6ee, .value=0x04, .type=IO_READ},
        {.addr=0xb6ef, .value=0xe0, .type=IO_READ},
        {.addr=0x01e0, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0252) {
    const struct CPU_State initial_cpu = {.pc=0x1a8d, .a=0xeb, .x=0x59, .y=0x5a, .sp=0x23, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a7, .value=0x32}, {.addr=0x1a8d, .value=0x04}, {.addr=0x1a8e, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x1a8f, .a=0xfb, .x=0x59, .y=0x5a, .sp=0x23, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a7, .value=0x32}, {.addr=0x1a8d, .value=0x04}, {.addr=0x1a8e, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a8d, .value=0x04, .type=IO_READ},
        {.addr=0x1a8e, .value=0xa7, .type=IO_READ},
        {.addr=0x00a7, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0253) {
    const struct CPU_State initial_cpu = {.pc=0xa871, .a=0xd5, .x=0xae, .y=0x53, .sp=0x1f, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0xa1}, {.addr=0xa871, .value=0x04}, {.addr=0xa872, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0xa873, .a=0xf5, .x=0xae, .y=0x53, .sp=0x1f, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0xa1}, {.addr=0xa871, .value=0x04}, {.addr=0xa872, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0xa871, .value=0x04, .type=IO_READ},
        {.addr=0xa872, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0254) {
    const struct CPU_State initial_cpu = {.pc=0x4bf9, .a=0xdd, .x=0x9e, .y=0x48, .sp=0x76, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0x57}, {.addr=0x4bf9, .value=0x04}, {.addr=0x4bfa, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x4bfb, .a=0xdf, .x=0x9e, .y=0x48, .sp=0x76, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0x57}, {.addr=0x4bf9, .value=0x04}, {.addr=0x4bfa, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4bf9, .value=0x04, .type=IO_READ},
        {.addr=0x4bfa, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0255) {
    const struct CPU_State initial_cpu = {.pc=0x828a, .a=0xbc, .x=0xaa, .y=0x79, .sp=0x10, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0xa4}, {.addr=0x828a, .value=0x04}, {.addr=0x828b, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x828c, .a=0xbc, .x=0xaa, .y=0x79, .sp=0x10, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0xa4}, {.addr=0x828a, .value=0x04}, {.addr=0x828b, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x828a, .value=0x04, .type=IO_READ},
        {.addr=0x828b, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0256) {
    const struct CPU_State initial_cpu = {.pc=0xf05a, .a=0x1b, .x=0x02, .y=0x28, .sp=0x37, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0x12}, {.addr=0xf05a, .value=0x04}, {.addr=0xf05b, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0xf05c, .a=0x1b, .x=0x02, .y=0x28, .sp=0x37, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0x12}, {.addr=0xf05a, .value=0x04}, {.addr=0xf05b, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0xf05a, .value=0x04, .type=IO_READ},
        {.addr=0xf05b, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0257) {
    const struct CPU_State initial_cpu = {.pc=0xa45e, .a=0x4c, .x=0x61, .y=0x3d, .sp=0xd7, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0x8d}, {.addr=0xa45e, .value=0x04}, {.addr=0xa45f, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xa460, .a=0xcd, .x=0x61, .y=0x3d, .sp=0xd7, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0x8d}, {.addr=0xa45e, .value=0x04}, {.addr=0xa45f, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xa45e, .value=0x04, .type=IO_READ},
        {.addr=0xa45f, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0258) {
    const struct CPU_State initial_cpu = {.pc=0x3d2c, .a=0x57, .x=0x40, .y=0xd7, .sp=0x73, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0xd2}, {.addr=0x3d2c, .value=0x04}, {.addr=0x3d2d, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x3d2e, .a=0xd7, .x=0x40, .y=0xd7, .sp=0x73, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0xd2}, {.addr=0x3d2c, .value=0x04}, {.addr=0x3d2d, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x3d2c, .value=0x04, .type=IO_READ},
        {.addr=0x3d2d, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0259) {
    const struct CPU_State initial_cpu = {.pc=0xf638, .a=0x11, .x=0x76, .y=0x91, .sp=0x32, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0xf2}, {.addr=0xf638, .value=0x04}, {.addr=0xf639, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0xf63a, .a=0xf3, .x=0x76, .y=0x91, .sp=0x32, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0xf2}, {.addr=0xf638, .value=0x04}, {.addr=0xf639, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0xf638, .value=0x04, .type=IO_READ},
        {.addr=0xf639, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_025A) {
    const struct CPU_State initial_cpu = {.pc=0x84b3, .a=0xd4, .x=0x9d, .y=0x83, .sp=0x57, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0105, .value=0xe1}, {.addr=0x84b3, .value=0x04}, {.addr=0x84b4, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x84b5, .a=0xf5, .x=0x9d, .y=0x83, .sp=0x57, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0105, .value=0xe1}, {.addr=0x84b3, .value=0x04}, {.addr=0x84b4, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x84b3, .value=0x04, .type=IO_READ},
        {.addr=0x84b4, .value=0x05, .type=IO_READ},
        {.addr=0x0105, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_025B) {
    const struct CPU_State initial_cpu = {.pc=0xa293, .a=0x2b, .x=0xcc, .y=0xfc, .sp=0xee, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0xd6}, {.addr=0xa293, .value=0x04}, {.addr=0xa294, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xa295, .a=0xff, .x=0xcc, .y=0xfc, .sp=0xee, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0xd6}, {.addr=0xa293, .value=0x04}, {.addr=0xa294, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xa293, .value=0x04, .type=IO_READ},
        {.addr=0xa294, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_025C) {
    const struct CPU_State initial_cpu = {.pc=0xb34a, .a=0xdf, .x=0xed, .y=0xfc, .sp=0x8e, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x20}, {.addr=0xb34a, .value=0x04}, {.addr=0xb34b, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0xb34c, .a=0xff, .x=0xed, .y=0xfc, .sp=0x8e, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x20}, {.addr=0xb34a, .value=0x04}, {.addr=0xb34b, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0xb34a, .value=0x04, .type=IO_READ},
        {.addr=0xb34b, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_025D) {
    const struct CPU_State initial_cpu = {.pc=0x33d3, .a=0xff, .x=0xe9, .y=0x9f, .sp=0x54, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0080, .value=0x8b}, {.addr=0x33d3, .value=0x04}, {.addr=0x33d4, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x33d5, .a=0xff, .x=0xe9, .y=0x9f, .sp=0x54, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0080, .value=0x8b}, {.addr=0x33d3, .value=0x04}, {.addr=0x33d4, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x33d3, .value=0x04, .type=IO_READ},
        {.addr=0x33d4, .value=0x80, .type=IO_READ},
        {.addr=0x0080, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_025E) {
    const struct CPU_State initial_cpu = {.pc=0x1034, .a=0x44, .x=0xf1, .y=0x1e, .sp=0xf5, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x08}, {.addr=0x1034, .value=0x04}, {.addr=0x1035, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x1036, .a=0x4c, .x=0xf1, .y=0x1e, .sp=0xf5, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x08}, {.addr=0x1034, .value=0x04}, {.addr=0x1035, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1034, .value=0x04, .type=IO_READ},
        {.addr=0x1035, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0260) {
    const struct CPU_State initial_cpu = {.pc=0x8f92, .a=0x04, .x=0x10, .y=0xe5, .sp=0xee, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ea, .value=0x10}, {.addr=0x8f92, .value=0x04}, {.addr=0x8f93, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x8f94, .a=0x14, .x=0x10, .y=0xe5, .sp=0xee, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ea, .value=0x10}, {.addr=0x8f92, .value=0x04}, {.addr=0x8f93, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f92, .value=0x04, .type=IO_READ},
        {.addr=0x8f93, .value=0xea, .type=IO_READ},
        {.addr=0x00ea, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0261) {
    const struct CPU_State initial_cpu = {.pc=0xd896, .a=0x33, .x=0x00, .y=0x2b, .sp=0x7e, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d6, .value=0x95}, {.addr=0xd896, .value=0x04}, {.addr=0xd897, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0xd898, .a=0xb7, .x=0x00, .y=0x2b, .sp=0x7e, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d6, .value=0x95}, {.addr=0xd896, .value=0x04}, {.addr=0xd897, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0xd896, .value=0x04, .type=IO_READ},
        {.addr=0xd897, .value=0xd6, .type=IO_READ},
        {.addr=0x00d6, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0262) {
    const struct CPU_State initial_cpu = {.pc=0x9acb, .a=0x5d, .x=0x45, .y=0x30, .sp=0x39, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x5f}, {.addr=0x9acb, .value=0x04}, {.addr=0x9acc, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x9acd, .a=0x5f, .x=0x45, .y=0x30, .sp=0x39, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x5f}, {.addr=0x9acb, .value=0x04}, {.addr=0x9acc, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x9acb, .value=0x04, .type=IO_READ},
        {.addr=0x9acc, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0263) {
    const struct CPU_State initial_cpu = {.pc=0x3113, .a=0x45, .x=0x59, .y=0x4b, .sp=0xf2, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0xf1}, {.addr=0x3113, .value=0x04}, {.addr=0x3114, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x3115, .a=0xf5, .x=0x59, .y=0x4b, .sp=0xf2, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0xf1}, {.addr=0x3113, .value=0x04}, {.addr=0x3114, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3113, .value=0x04, .type=IO_READ},
        {.addr=0x3114, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0264) {
    const struct CPU_State initial_cpu = {.pc=0xd384, .a=0x3d, .x=0x82, .y=0x43, .sp=0xe4, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0xef}, {.addr=0xd384, .value=0x04}, {.addr=0xd385, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0xd386, .a=0xff, .x=0x82, .y=0x43, .sp=0xe4, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0xef}, {.addr=0xd384, .value=0x04}, {.addr=0xd385, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0xd384, .value=0x04, .type=IO_READ},
        {.addr=0xd385, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0265) {
    const struct CPU_State initial_cpu = {.pc=0x0325, .a=0xd7, .x=0x48, .y=0xc1, .sp=0xfe, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e1, .value=0x90}, {.addr=0x0325, .value=0x04}, {.addr=0x0326, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x0327, .a=0xd7, .x=0x48, .y=0xc1, .sp=0xfe, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e1, .value=0x90}, {.addr=0x0325, .value=0x04}, {.addr=0x0326, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x0325, .value=0x04, .type=IO_READ},
        {.addr=0x0326, .value=0xe1, .type=IO_READ},
        {.addr=0x01e1, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0266) {
    const struct CPU_State initial_cpu = {.pc=0x0723, .a=0x63, .x=0x0c, .y=0x57, .sp=0xd1, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0xeb}, {.addr=0x0723, .value=0x04}, {.addr=0x0724, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x0725, .a=0xeb, .x=0x0c, .y=0x57, .sp=0xd1, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0xeb}, {.addr=0x0723, .value=0x04}, {.addr=0x0724, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x0723, .value=0x04, .type=IO_READ},
        {.addr=0x0724, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0267) {
    const struct CPU_State initial_cpu = {.pc=0xc35c, .a=0xdb, .x=0x94, .y=0x9e, .sp=0x85, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0xd2}, {.addr=0xc35c, .value=0x04}, {.addr=0xc35d, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0xc35e, .a=0xdb, .x=0x94, .y=0x9e, .sp=0x85, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0xd2}, {.addr=0xc35c, .value=0x04}, {.addr=0xc35d, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc35c, .value=0x04, .type=IO_READ},
        {.addr=0xc35d, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0268) {
    const struct CPU_State initial_cpu = {.pc=0x3383, .a=0x9e, .x=0x1a, .y=0x71, .sp=0x47, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0xee}, {.addr=0x3383, .value=0x04}, {.addr=0x3384, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x3385, .a=0xfe, .x=0x1a, .y=0x71, .sp=0x47, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0xee}, {.addr=0x3383, .value=0x04}, {.addr=0x3384, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x3383, .value=0x04, .type=IO_READ},
        {.addr=0x3384, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0269) {
    const struct CPU_State initial_cpu = {.pc=0xaa4f, .a=0xf7, .x=0x9b, .y=0xcb, .sp=0xa2, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0140, .value=0x86}, {.addr=0xaa4f, .value=0x04}, {.addr=0xaa50, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0xaa51, .a=0xf7, .x=0x9b, .y=0xcb, .sp=0xa2, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0140, .value=0x86}, {.addr=0xaa4f, .value=0x04}, {.addr=0xaa50, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa4f, .value=0x04, .type=IO_READ},
        {.addr=0xaa50, .value=0x40, .type=IO_READ},
        {.addr=0x0140, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_026A) {
    const struct CPU_State initial_cpu = {.pc=0x081d, .a=0xb7, .x=0x3e, .y=0x54, .sp=0xfa, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0x0a}, {.addr=0x081d, .value=0x04}, {.addr=0x081e, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x081f, .a=0xbf, .x=0x3e, .y=0x54, .sp=0xfa, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0x0a}, {.addr=0x081d, .value=0x04}, {.addr=0x081e, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x081d, .value=0x04, .type=IO_READ},
        {.addr=0x081e, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_026B) {
    const struct CPU_State initial_cpu = {.pc=0x5a6f, .a=0x73, .x=0x1b, .y=0x8d, .sp=0x77, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ac, .value=0xba}, {.addr=0x5a6f, .value=0x04}, {.addr=0x5a70, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x5a71, .a=0xfb, .x=0x1b, .y=0x8d, .sp=0x77, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ac, .value=0xba}, {.addr=0x5a6f, .value=0x04}, {.addr=0x5a70, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a6f, .value=0x04, .type=IO_READ},
        {.addr=0x5a70, .value=0xac, .type=IO_READ},
        {.addr=0x00ac, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_026D) {
    const struct CPU_State initial_cpu = {.pc=0x881d, .a=0xbb, .x=0x36, .y=0xb8, .sp=0x9c, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0x2f}, {.addr=0x881d, .value=0x04}, {.addr=0x881e, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x881f, .a=0xbf, .x=0x36, .y=0xb8, .sp=0x9c, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0x2f}, {.addr=0x881d, .value=0x04}, {.addr=0x881e, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x881d, .value=0x04, .type=IO_READ},
        {.addr=0x881e, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_026E) {
    const struct CPU_State initial_cpu = {.pc=0xdd9f, .a=0x31, .x=0xb9, .y=0x70, .sp=0x70, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0x15}, {.addr=0xdd9f, .value=0x04}, {.addr=0xdda0, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xdda1, .a=0x35, .x=0xb9, .y=0x70, .sp=0x70, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0x15}, {.addr=0xdd9f, .value=0x04}, {.addr=0xdda0, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd9f, .value=0x04, .type=IO_READ},
        {.addr=0xdda0, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_026F) {
    const struct CPU_State initial_cpu = {.pc=0x14fc, .a=0xad, .x=0x6d, .y=0xb6, .sp=0x18, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0x3d}, {.addr=0x14fc, .value=0x04}, {.addr=0x14fd, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x14fe, .a=0xbd, .x=0x6d, .y=0xb6, .sp=0x18, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0x3d}, {.addr=0x14fc, .value=0x04}, {.addr=0x14fd, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x14fc, .value=0x04, .type=IO_READ},
        {.addr=0x14fd, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0270) {
    const struct CPU_State initial_cpu = {.pc=0x9b2b, .a=0x82, .x=0x77, .y=0x19, .sp=0xf9, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0xc6}, {.addr=0x9b2b, .value=0x04}, {.addr=0x9b2c, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x9b2d, .a=0xc6, .x=0x77, .y=0x19, .sp=0xf9, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0xc6}, {.addr=0x9b2b, .value=0x04}, {.addr=0x9b2c, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b2b, .value=0x04, .type=IO_READ},
        {.addr=0x9b2c, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0271) {
    const struct CPU_State initial_cpu = {.pc=0x7741, .a=0x81, .x=0xcd, .y=0x12, .sp=0x89, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0xe2}, {.addr=0x7741, .value=0x04}, {.addr=0x7742, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x7743, .a=0xe3, .x=0xcd, .y=0x12, .sp=0x89, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0xe2}, {.addr=0x7741, .value=0x04}, {.addr=0x7742, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x7741, .value=0x04, .type=IO_READ},
        {.addr=0x7742, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0272) {
    const struct CPU_State initial_cpu = {.pc=0xfb9c, .a=0x5a, .x=0xd7, .y=0xb8, .sp=0xbd, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0x5c}, {.addr=0xfb9c, .value=0x04}, {.addr=0xfb9d, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0xfb9e, .a=0x5e, .x=0xd7, .y=0xb8, .sp=0xbd, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0x5c}, {.addr=0xfb9c, .value=0x04}, {.addr=0xfb9d, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb9c, .value=0x04, .type=IO_READ},
        {.addr=0xfb9d, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0275) {
    const struct CPU_State initial_cpu = {.pc=0x6a29, .a=0x70, .x=0x52, .y=0xb3, .sp=0x84, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x55}, {.addr=0x6a29, .value=0x04}, {.addr=0x6a2a, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x6a2b, .a=0x75, .x=0x52, .y=0xb3, .sp=0x84, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x55}, {.addr=0x6a29, .value=0x04}, {.addr=0x6a2a, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a29, .value=0x04, .type=IO_READ},
        {.addr=0x6a2a, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0276) {
    const struct CPU_State initial_cpu = {.pc=0x349f, .a=0xc9, .x=0xbc, .y=0x0d, .sp=0x80, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0xf0}, {.addr=0x349f, .value=0x04}, {.addr=0x34a0, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x34a1, .a=0xf9, .x=0xbc, .y=0x0d, .sp=0x80, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0xf0}, {.addr=0x349f, .value=0x04}, {.addr=0x34a0, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x349f, .value=0x04, .type=IO_READ},
        {.addr=0x34a0, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0277) {
    const struct CPU_State initial_cpu = {.pc=0xbf87, .a=0x05, .x=0xe9, .y=0x9e, .sp=0xbb, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0x36}, {.addr=0xbf87, .value=0x04}, {.addr=0xbf88, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xbf89, .a=0x37, .x=0xe9, .y=0x9e, .sp=0xbb, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0x36}, {.addr=0xbf87, .value=0x04}, {.addr=0xbf88, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf87, .value=0x04, .type=IO_READ},
        {.addr=0xbf88, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0278) {
    const struct CPU_State initial_cpu = {.pc=0x62aa, .a=0x26, .x=0xa3, .y=0x07, .sp=0x32, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0x75}, {.addr=0x62aa, .value=0x04}, {.addr=0x62ab, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x62ac, .a=0x77, .x=0xa3, .y=0x07, .sp=0x32, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0x75}, {.addr=0x62aa, .value=0x04}, {.addr=0x62ab, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x62aa, .value=0x04, .type=IO_READ},
        {.addr=0x62ab, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0279) {
    const struct CPU_State initial_cpu = {.pc=0x4c14, .a=0x4f, .x=0xb6, .y=0xd2, .sp=0xdd, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0x6f}, {.addr=0x4c14, .value=0x04}, {.addr=0x4c15, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x4c16, .a=0x6f, .x=0xb6, .y=0xd2, .sp=0xdd, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0x6f}, {.addr=0x4c14, .value=0x04}, {.addr=0x4c15, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c14, .value=0x04, .type=IO_READ},
        {.addr=0x4c15, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_027A) {
    const struct CPU_State initial_cpu = {.pc=0x7810, .a=0x91, .x=0x78, .y=0x3a, .sp=0x70, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0x43}, {.addr=0x7810, .value=0x04}, {.addr=0x7811, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0x7812, .a=0xd3, .x=0x78, .y=0x3a, .sp=0x70, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0x43}, {.addr=0x7810, .value=0x04}, {.addr=0x7811, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0x7810, .value=0x04, .type=IO_READ},
        {.addr=0x7811, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_027B) {
    const struct CPU_State initial_cpu = {.pc=0x7745, .a=0xe7, .x=0xe7, .y=0xe6, .sp=0x0a, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0xaa}, {.addr=0x7745, .value=0x04}, {.addr=0x7746, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x7747, .a=0xef, .x=0xe7, .y=0xe6, .sp=0x0a, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0xaa}, {.addr=0x7745, .value=0x04}, {.addr=0x7746, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x7745, .value=0x04, .type=IO_READ},
        {.addr=0x7746, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_027C) {
    const struct CPU_State initial_cpu = {.pc=0x18d9, .a=0xa6, .x=0x58, .y=0x54, .sp=0xf1, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0xb6}, {.addr=0x18d9, .value=0x04}, {.addr=0x18da, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x18db, .a=0xb6, .x=0x58, .y=0x54, .sp=0xf1, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0xb6}, {.addr=0x18d9, .value=0x04}, {.addr=0x18da, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x18d9, .value=0x04, .type=IO_READ},
        {.addr=0x18da, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_027D) {
    const struct CPU_State initial_cpu = {.pc=0x2635, .a=0x81, .x=0x68, .y=0xcc, .sp=0x02, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0x2a}, {.addr=0x2635, .value=0x04}, {.addr=0x2636, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x2637, .a=0xab, .x=0x68, .y=0xcc, .sp=0x02, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0x2a}, {.addr=0x2635, .value=0x04}, {.addr=0x2636, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x2635, .value=0x04, .type=IO_READ},
        {.addr=0x2636, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_027E) {
    const struct CPU_State initial_cpu = {.pc=0xfe40, .a=0xd8, .x=0x80, .y=0x6d, .sp=0x94, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0x2e}, {.addr=0xfe40, .value=0x04}, {.addr=0xfe41, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0xfe42, .a=0xfe, .x=0x80, .y=0x6d, .sp=0x94, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0x2e}, {.addr=0xfe40, .value=0x04}, {.addr=0xfe41, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe40, .value=0x04, .type=IO_READ},
        {.addr=0xfe41, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_027F) {
    const struct CPU_State initial_cpu = {.pc=0x4ff9, .a=0x75, .x=0xdb, .y=0xa7, .sp=0x21, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0x0a}, {.addr=0x4ff9, .value=0x04}, {.addr=0x4ffa, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0x4ffb, .a=0x7f, .x=0xdb, .y=0xa7, .sp=0x21, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0x0a}, {.addr=0x4ff9, .value=0x04}, {.addr=0x4ffa, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ff9, .value=0x04, .type=IO_READ},
        {.addr=0x4ffa, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0280) {
    const struct CPU_State initial_cpu = {.pc=0xf7f0, .a=0xdb, .x=0x36, .y=0xb9, .sp=0xba, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0x07}, {.addr=0xf7f0, .value=0x04}, {.addr=0xf7f1, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0xf7f2, .a=0xdf, .x=0x36, .y=0xb9, .sp=0xba, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0x07}, {.addr=0xf7f0, .value=0x04}, {.addr=0xf7f1, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0xf7f0, .value=0x04, .type=IO_READ},
        {.addr=0xf7f1, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0281) {
    const struct CPU_State initial_cpu = {.pc=0xe20c, .a=0x75, .x=0x85, .y=0xce, .sp=0x7d, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0x74}, {.addr=0xe20c, .value=0x04}, {.addr=0xe20d, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0xe20e, .a=0x75, .x=0x85, .y=0xce, .sp=0x7d, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0x74}, {.addr=0xe20c, .value=0x04}, {.addr=0xe20d, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0xe20c, .value=0x04, .type=IO_READ},
        {.addr=0xe20d, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0282) {
    const struct CPU_State initial_cpu = {.pc=0x2056, .a=0x72, .x=0x03, .y=0xf0, .sp=0x89, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0x9a}, {.addr=0x2056, .value=0x04}, {.addr=0x2057, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x2058, .a=0xfa, .x=0x03, .y=0xf0, .sp=0x89, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0x9a}, {.addr=0x2056, .value=0x04}, {.addr=0x2057, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2056, .value=0x04, .type=IO_READ},
        {.addr=0x2057, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0283) {
    const struct CPU_State initial_cpu = {.pc=0x980f, .a=0xa8, .x=0x3f, .y=0xaa, .sp=0x16, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0xd9}, {.addr=0x980f, .value=0x04}, {.addr=0x9810, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x9811, .a=0xf9, .x=0x3f, .y=0xaa, .sp=0x16, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0xd9}, {.addr=0x980f, .value=0x04}, {.addr=0x9810, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x980f, .value=0x04, .type=IO_READ},
        {.addr=0x9810, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0284) {
    const struct CPU_State initial_cpu = {.pc=0x3930, .a=0xe4, .x=0xa2, .y=0xdf, .sp=0xb8, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0xc8}, {.addr=0x3930, .value=0x04}, {.addr=0x3931, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0x3932, .a=0xec, .x=0xa2, .y=0xdf, .sp=0xb8, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0xc8}, {.addr=0x3930, .value=0x04}, {.addr=0x3931, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0x3930, .value=0x04, .type=IO_READ},
        {.addr=0x3931, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0285) {
    const struct CPU_State initial_cpu = {.pc=0xe96b, .a=0xe7, .x=0x8f, .y=0x9d, .sp=0x93, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0110, .value=0xba}, {.addr=0xe96b, .value=0x04}, {.addr=0xe96c, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xe96d, .a=0xff, .x=0x8f, .y=0x9d, .sp=0x93, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0110, .value=0xba}, {.addr=0xe96b, .value=0x04}, {.addr=0xe96c, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xe96b, .value=0x04, .type=IO_READ},
        {.addr=0xe96c, .value=0x10, .type=IO_READ},
        {.addr=0x0110, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0286) {
    const struct CPU_State initial_cpu = {.pc=0x5ef0, .a=0x82, .x=0xf5, .y=0x82, .sp=0xd1, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x92}, {.addr=0x5ef0, .value=0x04}, {.addr=0x5ef1, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x5ef2, .a=0x92, .x=0xf5, .y=0x82, .sp=0xd1, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x92}, {.addr=0x5ef0, .value=0x04}, {.addr=0x5ef1, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ef0, .value=0x04, .type=IO_READ},
        {.addr=0x5ef1, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0287) {
    const struct CPU_State initial_cpu = {.pc=0x59cf, .a=0x20, .x=0xc2, .y=0x6b, .sp=0x14, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0x1a}, {.addr=0x59cf, .value=0x04}, {.addr=0x59d0, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x59d1, .a=0x3a, .x=0xc2, .y=0x6b, .sp=0x14, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0x1a}, {.addr=0x59cf, .value=0x04}, {.addr=0x59d0, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x59cf, .value=0x04, .type=IO_READ},
        {.addr=0x59d0, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0288) {
    const struct CPU_State initial_cpu = {.pc=0xbafa, .a=0x6d, .x=0x65, .y=0xa1, .sp=0xae, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0x78}, {.addr=0xbafa, .value=0x04}, {.addr=0xbafb, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0xbafc, .a=0x7d, .x=0x65, .y=0xa1, .sp=0xae, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0x78}, {.addr=0xbafa, .value=0x04}, {.addr=0xbafb, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0xbafa, .value=0x04, .type=IO_READ},
        {.addr=0xbafb, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0289) {
    const struct CPU_State initial_cpu = {.pc=0x4f27, .a=0x7d, .x=0xce, .y=0x9d, .sp=0xeb, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0xa6}, {.addr=0x4f27, .value=0x04}, {.addr=0x4f28, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x4f29, .a=0xff, .x=0xce, .y=0x9d, .sp=0xeb, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0xa6}, {.addr=0x4f27, .value=0x04}, {.addr=0x4f28, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f27, .value=0x04, .type=IO_READ},
        {.addr=0x4f28, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_028A) {
    const struct CPU_State initial_cpu = {.pc=0x2853, .a=0xf1, .x=0x9d, .y=0xc5, .sp=0xa7, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0x9a}, {.addr=0x2853, .value=0x04}, {.addr=0x2854, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x2855, .a=0xfb, .x=0x9d, .y=0xc5, .sp=0xa7, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0x9a}, {.addr=0x2853, .value=0x04}, {.addr=0x2854, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x2853, .value=0x04, .type=IO_READ},
        {.addr=0x2854, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_028B) {
    const struct CPU_State initial_cpu = {.pc=0x76a1, .a=0x99, .x=0xc9, .y=0xa3, .sp=0x00, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013d, .value=0x7a}, {.addr=0x76a1, .value=0x04}, {.addr=0x76a2, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x76a3, .a=0xfb, .x=0xc9, .y=0xa3, .sp=0x00, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x013d, .value=0x7a}, {.addr=0x76a1, .value=0x04}, {.addr=0x76a2, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x76a1, .value=0x04, .type=IO_READ},
        {.addr=0x76a2, .value=0x3d, .type=IO_READ},
        {.addr=0x013d, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_028C) {
    const struct CPU_State initial_cpu = {.pc=0x86ba, .a=0x60, .x=0xca, .y=0xa7, .sp=0x34, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0x71}, {.addr=0x86ba, .value=0x04}, {.addr=0x86bb, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x86bc, .a=0x71, .x=0xca, .y=0xa7, .sp=0x34, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0x71}, {.addr=0x86ba, .value=0x04}, {.addr=0x86bb, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x86ba, .value=0x04, .type=IO_READ},
        {.addr=0x86bb, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_028D) {
    const struct CPU_State initial_cpu = {.pc=0x9307, .a=0xdb, .x=0xe2, .y=0x6a, .sp=0xad, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0xc5}, {.addr=0x9307, .value=0x04}, {.addr=0x9308, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x9309, .a=0xdf, .x=0xe2, .y=0x6a, .sp=0xad, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0xc5}, {.addr=0x9307, .value=0x04}, {.addr=0x9308, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x9307, .value=0x04, .type=IO_READ},
        {.addr=0x9308, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_028F) {
    const struct CPU_State initial_cpu = {.pc=0x18cc, .a=0x15, .x=0xd6, .y=0x83, .sp=0xa9, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0xee}, {.addr=0x18cc, .value=0x04}, {.addr=0x18cd, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x18ce, .a=0xff, .x=0xd6, .y=0x83, .sp=0xa9, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0xee}, {.addr=0x18cc, .value=0x04}, {.addr=0x18cd, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x18cc, .value=0x04, .type=IO_READ},
        {.addr=0x18cd, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0290) {
    const struct CPU_State initial_cpu = {.pc=0x966c, .a=0x50, .x=0x73, .y=0xd8, .sp=0xba, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0x07}, {.addr=0x966c, .value=0x04}, {.addr=0x966d, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x966e, .a=0x57, .x=0x73, .y=0xd8, .sp=0xba, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0x07}, {.addr=0x966c, .value=0x04}, {.addr=0x966d, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x966c, .value=0x04, .type=IO_READ},
        {.addr=0x966d, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0291) {
    const struct CPU_State initial_cpu = {.pc=0xaf38, .a=0xf8, .x=0xe8, .y=0x7f, .sp=0x16, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00de, .value=0xfa}, {.addr=0xaf38, .value=0x04}, {.addr=0xaf39, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0xaf3a, .a=0xfa, .x=0xe8, .y=0x7f, .sp=0x16, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00de, .value=0xfa}, {.addr=0xaf38, .value=0x04}, {.addr=0xaf39, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf38, .value=0x04, .type=IO_READ},
        {.addr=0xaf39, .value=0xde, .type=IO_READ},
        {.addr=0x00de, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0293) {
    const struct CPU_State initial_cpu = {.pc=0x460f, .a=0x39, .x=0x55, .y=0x39, .sp=0x58, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0x4c}, {.addr=0x460f, .value=0x04}, {.addr=0x4610, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x4611, .a=0x7d, .x=0x55, .y=0x39, .sp=0x58, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0x4c}, {.addr=0x460f, .value=0x04}, {.addr=0x4610, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x460f, .value=0x04, .type=IO_READ},
        {.addr=0x4610, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0294) {
    const struct CPU_State initial_cpu = {.pc=0x9361, .a=0x4e, .x=0xfa, .y=0x53, .sp=0x07, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0x10}, {.addr=0x9361, .value=0x04}, {.addr=0x9362, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0x9363, .a=0x5e, .x=0xfa, .y=0x53, .sp=0x07, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0x10}, {.addr=0x9361, .value=0x04}, {.addr=0x9362, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0x9361, .value=0x04, .type=IO_READ},
        {.addr=0x9362, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0295) {
    const struct CPU_State initial_cpu = {.pc=0x9547, .a=0x14, .x=0x29, .y=0xfa, .sp=0xc7, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0x99}, {.addr=0x9547, .value=0x04}, {.addr=0x9548, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x9549, .a=0x9d, .x=0x29, .y=0xfa, .sp=0xc7, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0x99}, {.addr=0x9547, .value=0x04}, {.addr=0x9548, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x9547, .value=0x04, .type=IO_READ},
        {.addr=0x9548, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0296) {
    const struct CPU_State initial_cpu = {.pc=0x9645, .a=0xed, .x=0x95, .y=0xf2, .sp=0xf9, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0xec}, {.addr=0x9645, .value=0x04}, {.addr=0x9646, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x9647, .a=0xed, .x=0x95, .y=0xf2, .sp=0xf9, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0xec}, {.addr=0x9645, .value=0x04}, {.addr=0x9646, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x9645, .value=0x04, .type=IO_READ},
        {.addr=0x9646, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0297) {
    const struct CPU_State initial_cpu = {.pc=0x3a62, .a=0xa7, .x=0x6c, .y=0x52, .sp=0x5c, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0xca}, {.addr=0x3a62, .value=0x04}, {.addr=0x3a63, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x3a64, .a=0xef, .x=0x6c, .y=0x52, .sp=0x5c, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0xca}, {.addr=0x3a62, .value=0x04}, {.addr=0x3a63, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a62, .value=0x04, .type=IO_READ},
        {.addr=0x3a63, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0298) {
    const struct CPU_State initial_cpu = {.pc=0x5013, .a=0xe8, .x=0x8a, .y=0xb5, .sp=0x90, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0x6a}, {.addr=0x5013, .value=0x04}, {.addr=0x5014, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x5015, .a=0xea, .x=0x8a, .y=0xb5, .sp=0x90, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0x6a}, {.addr=0x5013, .value=0x04}, {.addr=0x5014, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5013, .value=0x04, .type=IO_READ},
        {.addr=0x5014, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0299) {
    const struct CPU_State initial_cpu = {.pc=0xfc34, .a=0x71, .x=0xfc, .y=0x77, .sp=0xc7, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0x30}, {.addr=0xfc34, .value=0x04}, {.addr=0xfc35, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0xfc36, .a=0x71, .x=0xfc, .y=0x77, .sp=0xc7, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0x30}, {.addr=0xfc34, .value=0x04}, {.addr=0xfc35, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc34, .value=0x04, .type=IO_READ},
        {.addr=0xfc35, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_029A) {
    const struct CPU_State initial_cpu = {.pc=0xf36f, .a=0x23, .x=0xf9, .y=0x10, .sp=0xdf, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017d, .value=0x06}, {.addr=0xf36f, .value=0x04}, {.addr=0xf370, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xf371, .a=0x27, .x=0xf9, .y=0x10, .sp=0xdf, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x017d, .value=0x06}, {.addr=0xf36f, .value=0x04}, {.addr=0xf370, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xf36f, .value=0x04, .type=IO_READ},
        {.addr=0xf370, .value=0x7d, .type=IO_READ},
        {.addr=0x017d, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_029B) {
    const struct CPU_State initial_cpu = {.pc=0x460d, .a=0x7f, .x=0x0f, .y=0x2e, .sp=0x4c, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0xe2}, {.addr=0x460d, .value=0x04}, {.addr=0x460e, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x460f, .a=0xff, .x=0x0f, .y=0x2e, .sp=0x4c, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0xe2}, {.addr=0x460d, .value=0x04}, {.addr=0x460e, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x460d, .value=0x04, .type=IO_READ},
        {.addr=0x460e, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_029C) {
    const struct CPU_State initial_cpu = {.pc=0x74f4, .a=0xfe, .x=0x12, .y=0x26, .sp=0x1a, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0xb4}, {.addr=0x74f4, .value=0x04}, {.addr=0x74f5, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x74f6, .a=0xfe, .x=0x12, .y=0x26, .sp=0x1a, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0xb4}, {.addr=0x74f4, .value=0x04}, {.addr=0x74f5, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x74f4, .value=0x04, .type=IO_READ},
        {.addr=0x74f5, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_029D) {
    const struct CPU_State initial_cpu = {.pc=0x7055, .a=0x1d, .x=0x71, .y=0x8f, .sp=0xa1, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0xbb}, {.addr=0x7055, .value=0x04}, {.addr=0x7056, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x7057, .a=0xbf, .x=0x71, .y=0x8f, .sp=0xa1, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0xbb}, {.addr=0x7055, .value=0x04}, {.addr=0x7056, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x7055, .value=0x04, .type=IO_READ},
        {.addr=0x7056, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_029E) {
    const struct CPU_State initial_cpu = {.pc=0x8c1e, .a=0x89, .x=0x03, .y=0x5e, .sp=0x27, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0x8c}, {.addr=0x8c1e, .value=0x04}, {.addr=0x8c1f, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x8c20, .a=0x8d, .x=0x03, .y=0x5e, .sp=0x27, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0x8c}, {.addr=0x8c1e, .value=0x04}, {.addr=0x8c1f, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c1e, .value=0x04, .type=IO_READ},
        {.addr=0x8c1f, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_029F) {
    const struct CPU_State initial_cpu = {.pc=0x0b71, .a=0x20, .x=0x8b, .y=0xb6, .sp=0xc2, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0xe2}, {.addr=0x0b71, .value=0x04}, {.addr=0x0b72, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x0b73, .a=0xe2, .x=0x8b, .y=0xb6, .sp=0xc2, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0xe2}, {.addr=0x0b71, .value=0x04}, {.addr=0x0b72, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b71, .value=0x04, .type=IO_READ},
        {.addr=0x0b72, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x01f1, .a=0xdc, .x=0x50, .y=0x9d, .sp=0x40, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0xfa}, {.addr=0x01f1, .value=0x04}, {.addr=0x01f2, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x01f3, .a=0xfe, .x=0x50, .y=0x9d, .sp=0x40, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0xfa}, {.addr=0x01f1, .value=0x04}, {.addr=0x01f2, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x01f1, .value=0x04, .type=IO_READ},
        {.addr=0x01f2, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xd278, .a=0x29, .x=0x36, .y=0x10, .sp=0x5b, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0x32}, {.addr=0xd278, .value=0x04}, {.addr=0xd279, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xd27a, .a=0x3b, .x=0x36, .y=0x10, .sp=0x5b, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0x32}, {.addr=0xd278, .value=0x04}, {.addr=0xd279, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xd278, .value=0x04, .type=IO_READ},
        {.addr=0xd279, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xb654, .a=0x60, .x=0xec, .y=0x0c, .sp=0x02, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x9e}, {.addr=0xb654, .value=0x04}, {.addr=0xb655, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0xb656, .a=0xfe, .x=0xec, .y=0x0c, .sp=0x02, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x9e}, {.addr=0xb654, .value=0x04}, {.addr=0xb655, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0xb654, .value=0x04, .type=IO_READ},
        {.addr=0xb655, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xce38, .a=0xaf, .x=0xc5, .y=0x67, .sp=0x07, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0xda}, {.addr=0xce38, .value=0x04}, {.addr=0xce39, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xce3a, .a=0xff, .x=0xc5, .y=0x67, .sp=0x07, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0xda}, {.addr=0xce38, .value=0x04}, {.addr=0xce39, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xce38, .value=0x04, .type=IO_READ},
        {.addr=0xce39, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x0d31, .a=0x35, .x=0x8b, .y=0x30, .sp=0xe7, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0x1c}, {.addr=0x0d31, .value=0x04}, {.addr=0x0d32, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x0d33, .a=0x3d, .x=0x8b, .y=0x30, .sp=0xe7, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0x1c}, {.addr=0x0d31, .value=0x04}, {.addr=0x0d32, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d31, .value=0x04, .type=IO_READ},
        {.addr=0x0d32, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xe61f, .a=0x5d, .x=0x2a, .y=0xcc, .sp=0xa7, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0110, .value=0x8a}, {.addr=0xe61f, .value=0x04}, {.addr=0xe620, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xe621, .a=0xdf, .x=0x2a, .y=0xcc, .sp=0xa7, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0110, .value=0x8a}, {.addr=0xe61f, .value=0x04}, {.addr=0xe620, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xe61f, .value=0x04, .type=IO_READ},
        {.addr=0xe620, .value=0x10, .type=IO_READ},
        {.addr=0x0110, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x63e4, .a=0x9a, .x=0x19, .y=0xd2, .sp=0xf7, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0xbe}, {.addr=0x63e4, .value=0x04}, {.addr=0x63e5, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x63e6, .a=0xbe, .x=0x19, .y=0xd2, .sp=0xf7, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0xbe}, {.addr=0x63e4, .value=0x04}, {.addr=0x63e5, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x63e4, .value=0x04, .type=IO_READ},
        {.addr=0x63e5, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x701d, .a=0x4b, .x=0xeb, .y=0xb3, .sp=0x87, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0xfd}, {.addr=0x701d, .value=0x04}, {.addr=0x701e, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x701f, .a=0xff, .x=0xeb, .y=0xb3, .sp=0x87, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0xfd}, {.addr=0x701d, .value=0x04}, {.addr=0x701e, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x701d, .value=0x04, .type=IO_READ},
        {.addr=0x701e, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x0462, .a=0x0d, .x=0x2c, .y=0x57, .sp=0x4c, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a7, .value=0x2e}, {.addr=0x0462, .value=0x04}, {.addr=0x0463, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x0464, .a=0x2f, .x=0x2c, .y=0x57, .sp=0x4c, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a7, .value=0x2e}, {.addr=0x0462, .value=0x04}, {.addr=0x0463, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x0462, .value=0x04, .type=IO_READ},
        {.addr=0x0463, .value=0xa7, .type=IO_READ},
        {.addr=0x00a7, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x0a29, .a=0x01, .x=0x05, .y=0xec, .sp=0xb7, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x8f}, {.addr=0x0a29, .value=0x04}, {.addr=0x0a2a, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x0a2b, .a=0x8f, .x=0x05, .y=0xec, .sp=0xb7, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x8f}, {.addr=0x0a29, .value=0x04}, {.addr=0x0a2a, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a29, .value=0x04, .type=IO_READ},
        {.addr=0x0a2a, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x1859, .a=0xe6, .x=0x85, .y=0x7f, .sp=0x25, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0x44}, {.addr=0x1859, .value=0x04}, {.addr=0x185a, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x185b, .a=0xe6, .x=0x85, .y=0x7f, .sp=0x25, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0x44}, {.addr=0x1859, .value=0x04}, {.addr=0x185a, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x1859, .value=0x04, .type=IO_READ},
        {.addr=0x185a, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x1b16, .a=0x81, .x=0x4c, .y=0x71, .sp=0x25, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004a, .value=0x3e}, {.addr=0x1b16, .value=0x04}, {.addr=0x1b17, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x1b18, .a=0xbf, .x=0x4c, .y=0x71, .sp=0x25, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x004a, .value=0x3e}, {.addr=0x1b16, .value=0x04}, {.addr=0x1b17, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b16, .value=0x04, .type=IO_READ},
        {.addr=0x1b17, .value=0x4a, .type=IO_READ},
        {.addr=0x004a, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x8579, .a=0xae, .x=0xe4, .y=0xdb, .sp=0x34, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a7, .value=0x40}, {.addr=0x8579, .value=0x04}, {.addr=0x857a, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x857b, .a=0xee, .x=0xe4, .y=0xdb, .sp=0x34, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a7, .value=0x40}, {.addr=0x8579, .value=0x04}, {.addr=0x857a, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x8579, .value=0x04, .type=IO_READ},
        {.addr=0x857a, .value=0xa7, .type=IO_READ},
        {.addr=0x00a7, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x620e, .a=0x28, .x=0x4c, .y=0xdb, .sp=0xf7, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x81}, {.addr=0x620e, .value=0x04}, {.addr=0x620f, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x6210, .a=0xa9, .x=0x4c, .y=0xdb, .sp=0xf7, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x81}, {.addr=0x620e, .value=0x04}, {.addr=0x620f, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x620e, .value=0x04, .type=IO_READ},
        {.addr=0x620f, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xc7eb, .a=0xf1, .x=0x10, .y=0xd8, .sp=0xff, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0x5f}, {.addr=0xc7eb, .value=0x04}, {.addr=0xc7ec, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xc7ed, .a=0xff, .x=0x10, .y=0xd8, .sp=0xff, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0x5f}, {.addr=0xc7eb, .value=0x04}, {.addr=0xc7ec, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xc7eb, .value=0x04, .type=IO_READ},
        {.addr=0xc7ec, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xb74d, .a=0x40, .x=0x04, .y=0x0d, .sp=0x4e, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012e, .value=0x0c}, {.addr=0xb74d, .value=0x04}, {.addr=0xb74e, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0xb74f, .a=0x4c, .x=0x04, .y=0x0d, .sp=0x4e, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x012e, .value=0x0c}, {.addr=0xb74d, .value=0x04}, {.addr=0xb74e, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb74d, .value=0x04, .type=IO_READ},
        {.addr=0xb74e, .value=0x2e, .type=IO_READ},
        {.addr=0x012e, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x6f21, .a=0x6a, .x=0x52, .y=0x0c, .sp=0x9e, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0x52}, {.addr=0x6f21, .value=0x04}, {.addr=0x6f22, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x6f23, .a=0x7a, .x=0x52, .y=0x0c, .sp=0x9e, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0x52}, {.addr=0x6f21, .value=0x04}, {.addr=0x6f22, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f21, .value=0x04, .type=IO_READ},
        {.addr=0x6f22, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xa09f, .a=0x15, .x=0x0a, .y=0x62, .sp=0x8f, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0x81}, {.addr=0xa09f, .value=0x04}, {.addr=0xa0a0, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xa0a1, .a=0x95, .x=0x0a, .y=0x62, .sp=0x8f, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0x81}, {.addr=0xa09f, .value=0x04}, {.addr=0xa0a0, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xa09f, .value=0x04, .type=IO_READ},
        {.addr=0xa0a0, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xdd81, .a=0x54, .x=0xca, .y=0x69, .sp=0x9a, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0xd5}, {.addr=0xdd81, .value=0x04}, {.addr=0xdd82, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0xdd83, .a=0xd5, .x=0xca, .y=0x69, .sp=0x9a, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0xd5}, {.addr=0xdd81, .value=0x04}, {.addr=0xdd82, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd81, .value=0x04, .type=IO_READ},
        {.addr=0xdd82, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xc879, .a=0xc6, .x=0x19, .y=0x83, .sp=0xb1, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0117, .value=0xdf}, {.addr=0xc879, .value=0x04}, {.addr=0xc87a, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0xc87b, .a=0xdf, .x=0x19, .y=0x83, .sp=0xb1, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0117, .value=0xdf}, {.addr=0xc879, .value=0x04}, {.addr=0xc87a, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0xc879, .value=0x04, .type=IO_READ},
        {.addr=0xc87a, .value=0x17, .type=IO_READ},
        {.addr=0x0117, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xe082, .a=0xe9, .x=0x70, .y=0x19, .sp=0x4b, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0x55}, {.addr=0xe082, .value=0x04}, {.addr=0xe083, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xe084, .a=0xfd, .x=0x70, .y=0x19, .sp=0x4b, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0x55}, {.addr=0xe082, .value=0x04}, {.addr=0xe083, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xe082, .value=0x04, .type=IO_READ},
        {.addr=0xe083, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x339d, .a=0x3f, .x=0x73, .y=0xbf, .sp=0x7b, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0xe3}, {.addr=0x339d, .value=0x04}, {.addr=0x339e, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x339f, .a=0xff, .x=0x73, .y=0xbf, .sp=0x7b, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0xe3}, {.addr=0x339d, .value=0x04}, {.addr=0x339e, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x339d, .value=0x04, .type=IO_READ},
        {.addr=0x339e, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xd39d, .a=0xb9, .x=0x06, .y=0x58, .sp=0x7f, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0xfb}, {.addr=0xd39d, .value=0x04}, {.addr=0xd39e, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xd39f, .a=0xfb, .x=0x06, .y=0x58, .sp=0x7f, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0xfb}, {.addr=0xd39d, .value=0x04}, {.addr=0xd39e, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xd39d, .value=0x04, .type=IO_READ},
        {.addr=0xd39e, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x3f0a, .a=0x20, .x=0x32, .y=0x73, .sp=0xa9, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0xa5}, {.addr=0x3f0a, .value=0x04}, {.addr=0x3f0b, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x3f0c, .a=0xa5, .x=0x32, .y=0x73, .sp=0xa9, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0xa5}, {.addr=0x3f0a, .value=0x04}, {.addr=0x3f0b, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f0a, .value=0x04, .type=IO_READ},
        {.addr=0x3f0b, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x9092, .a=0x85, .x=0x6c, .y=0x3b, .sp=0x35, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0xee}, {.addr=0x9092, .value=0x04}, {.addr=0x9093, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x9094, .a=0xef, .x=0x6c, .y=0x3b, .sp=0x35, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0xee}, {.addr=0x9092, .value=0x04}, {.addr=0x9093, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x9092, .value=0x04, .type=IO_READ},
        {.addr=0x9093, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xbd64, .a=0x41, .x=0xf6, .y=0x0c, .sp=0xda, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0x96}, {.addr=0xbd64, .value=0x04}, {.addr=0xbd65, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xbd66, .a=0xd7, .x=0xf6, .y=0x0c, .sp=0xda, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0x96}, {.addr=0xbd64, .value=0x04}, {.addr=0xbd65, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd64, .value=0x04, .type=IO_READ},
        {.addr=0xbd65, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x2927, .a=0x84, .x=0x85, .y=0xaa, .sp=0x42, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0x91}, {.addr=0x2927, .value=0x04}, {.addr=0x2928, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x2929, .a=0x95, .x=0x85, .y=0xaa, .sp=0x42, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0x91}, {.addr=0x2927, .value=0x04}, {.addr=0x2928, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x2927, .value=0x04, .type=IO_READ},
        {.addr=0x2928, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xe3ec, .a=0x1a, .x=0x61, .y=0xe5, .sp=0x50, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ea, .value=0xa0}, {.addr=0xe3ec, .value=0x04}, {.addr=0xe3ed, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0xe3ee, .a=0xba, .x=0x61, .y=0xe5, .sp=0x50, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ea, .value=0xa0}, {.addr=0xe3ec, .value=0x04}, {.addr=0xe3ed, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3ec, .value=0x04, .type=IO_READ},
        {.addr=0xe3ed, .value=0xea, .type=IO_READ},
        {.addr=0x00ea, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x3859, .a=0xbb, .x=0x49, .y=0x91, .sp=0x6d, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f0, .value=0xe1}, {.addr=0x3859, .value=0x04}, {.addr=0x385a, .value=0xf0},
    };
    const struct CPU_State final_cpu = {.pc=0x385b, .a=0xfb, .x=0x49, .y=0x91, .sp=0x6d, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f0, .value=0xe1}, {.addr=0x3859, .value=0x04}, {.addr=0x385a, .value=0xf0},
    };
    const struct BusEvent events[] = {
        {.addr=0x3859, .value=0x04, .type=IO_READ},
        {.addr=0x385a, .value=0xf0, .type=IO_READ},
        {.addr=0x01f0, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xfe35, .a=0x16, .x=0xd5, .y=0x1d, .sp=0x52, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0xe9}, {.addr=0xfe35, .value=0x04}, {.addr=0xfe36, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xfe37, .a=0xff, .x=0xd5, .y=0x1d, .sp=0x52, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0xe9}, {.addr=0xfe35, .value=0x04}, {.addr=0xfe36, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe35, .value=0x04, .type=IO_READ},
        {.addr=0xfe36, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xda06, .a=0xdf, .x=0x71, .y=0xfd, .sp=0xf4, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0xa6}, {.addr=0xda06, .value=0x04}, {.addr=0xda07, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0xda08, .a=0xff, .x=0x71, .y=0xfd, .sp=0xf4, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0xa6}, {.addr=0xda06, .value=0x04}, {.addr=0xda07, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0xda06, .value=0x04, .type=IO_READ},
        {.addr=0xda07, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x6dc8, .a=0xc5, .x=0xff, .y=0xd5, .sp=0x1f, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0x6b}, {.addr=0x6dc8, .value=0x04}, {.addr=0x6dc9, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x6dca, .a=0xef, .x=0xff, .y=0xd5, .sp=0x1f, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0x6b}, {.addr=0x6dc8, .value=0x04}, {.addr=0x6dc9, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x6dc8, .value=0x04, .type=IO_READ},
        {.addr=0x6dc9, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x3a01, .a=0x61, .x=0xb2, .y=0x82, .sp=0xcf, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x12}, {.addr=0x3a01, .value=0x04}, {.addr=0x3a02, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x3a03, .a=0x73, .x=0xb2, .y=0x82, .sp=0xcf, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x12}, {.addr=0x3a01, .value=0x04}, {.addr=0x3a02, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a01, .value=0x04, .type=IO_READ},
        {.addr=0x3a02, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xb5d3, .a=0x4c, .x=0xdd, .y=0xe9, .sp=0x8e, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0x25}, {.addr=0xb5d3, .value=0x04}, {.addr=0xb5d4, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0xb5d5, .a=0x6d, .x=0xdd, .y=0xe9, .sp=0x8e, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0x25}, {.addr=0xb5d3, .value=0x04}, {.addr=0xb5d4, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5d3, .value=0x04, .type=IO_READ},
        {.addr=0xb5d4, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xd639, .a=0x48, .x=0x7a, .y=0xf8, .sp=0x41, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009c, .value=0x98}, {.addr=0xd639, .value=0x04}, {.addr=0xd63a, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0xd63b, .a=0xd8, .x=0x7a, .y=0xf8, .sp=0x41, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x009c, .value=0x98}, {.addr=0xd639, .value=0x04}, {.addr=0xd63a, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0xd639, .value=0x04, .type=IO_READ},
        {.addr=0xd63a, .value=0x9c, .type=IO_READ},
        {.addr=0x009c, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xd091, .a=0x6a, .x=0x81, .y=0x1a, .sp=0x5d, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0x87}, {.addr=0xd091, .value=0x04}, {.addr=0xd092, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0xd093, .a=0xef, .x=0x81, .y=0x1a, .sp=0x5d, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0x87}, {.addr=0xd091, .value=0x04}, {.addr=0xd092, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0xd091, .value=0x04, .type=IO_READ},
        {.addr=0xd092, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x0c32, .a=0xbc, .x=0xea, .y=0x30, .sp=0xf7, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0x61}, {.addr=0x0c32, .value=0x04}, {.addr=0x0c33, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x0c34, .a=0xfd, .x=0xea, .y=0x30, .sp=0xf7, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0x61}, {.addr=0x0c32, .value=0x04}, {.addr=0x0c33, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c32, .value=0x04, .type=IO_READ},
        {.addr=0x0c33, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xcdb4, .a=0x1c, .x=0xe0, .y=0xf2, .sp=0x26, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0xbb}, {.addr=0xcdb4, .value=0x04}, {.addr=0xcdb5, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0xcdb6, .a=0xbf, .x=0xe0, .y=0xf2, .sp=0x26, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0xbb}, {.addr=0xcdb4, .value=0x04}, {.addr=0xcdb5, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0xcdb4, .value=0x04, .type=IO_READ},
        {.addr=0xcdb5, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x165b, .a=0xff, .x=0xb7, .y=0x0e, .sp=0x3a, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0xff}, {.addr=0x165b, .value=0x04}, {.addr=0x165c, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x165d, .a=0xff, .x=0xb7, .y=0x0e, .sp=0x3a, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0xff}, {.addr=0x165b, .value=0x04}, {.addr=0x165c, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x165b, .value=0x04, .type=IO_READ},
        {.addr=0x165c, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x08f9, .a=0xb6, .x=0xce, .y=0x03, .sp=0xf8, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0xa0}, {.addr=0x08f9, .value=0x04}, {.addr=0x08fa, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x08fb, .a=0xb6, .x=0xce, .y=0x03, .sp=0xf8, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0xa0}, {.addr=0x08f9, .value=0x04}, {.addr=0x08fa, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x08f9, .value=0x04, .type=IO_READ},
        {.addr=0x08fa, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xf46a, .a=0x0b, .x=0xb7, .y=0x61, .sp=0x79, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0x7d}, {.addr=0xf46a, .value=0x04}, {.addr=0xf46b, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0xf46c, .a=0x7f, .x=0xb7, .y=0x61, .sp=0x79, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0x7d}, {.addr=0xf46a, .value=0x04}, {.addr=0xf46b, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf46a, .value=0x04, .type=IO_READ},
        {.addr=0xf46b, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x0e03, .a=0x25, .x=0x24, .y=0xc3, .sp=0x62, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0077, .value=0x54}, {.addr=0x0e03, .value=0x04}, {.addr=0x0e04, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x0e05, .a=0x75, .x=0x24, .y=0xc3, .sp=0x62, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0077, .value=0x54}, {.addr=0x0e03, .value=0x04}, {.addr=0x0e04, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e03, .value=0x04, .type=IO_READ},
        {.addr=0x0e04, .value=0x77, .type=IO_READ},
        {.addr=0x0077, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xcbb6, .a=0x44, .x=0x81, .y=0x27, .sp=0xaa, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0xc6}, {.addr=0xcbb6, .value=0x04}, {.addr=0xcbb7, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0xcbb8, .a=0xc6, .x=0x81, .y=0x27, .sp=0xaa, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0xc6}, {.addr=0xcbb6, .value=0x04}, {.addr=0xcbb7, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0xcbb6, .value=0x04, .type=IO_READ},
        {.addr=0xcbb7, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xe753, .a=0xbd, .x=0xd2, .y=0x49, .sp=0xae, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0xd8}, {.addr=0xe753, .value=0x04}, {.addr=0xe754, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xe755, .a=0xfd, .x=0xd2, .y=0x49, .sp=0xae, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0xd8}, {.addr=0xe753, .value=0x04}, {.addr=0xe754, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe753, .value=0x04, .type=IO_READ},
        {.addr=0xe754, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x66e8, .a=0x45, .x=0x81, .y=0x13, .sp=0x70, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0x30}, {.addr=0x66e8, .value=0x04}, {.addr=0x66e9, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x66ea, .a=0x75, .x=0x81, .y=0x13, .sp=0x70, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0x30}, {.addr=0x66e8, .value=0x04}, {.addr=0x66e9, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x66e8, .value=0x04, .type=IO_READ},
        {.addr=0x66e9, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x62d3, .a=0xe8, .x=0x37, .y=0xa3, .sp=0xb2, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x93}, {.addr=0x62d3, .value=0x04}, {.addr=0x62d4, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x62d5, .a=0xfb, .x=0x37, .y=0xa3, .sp=0xb2, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x93}, {.addr=0x62d3, .value=0x04}, {.addr=0x62d4, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x62d3, .value=0x04, .type=IO_READ},
        {.addr=0x62d4, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xb118, .a=0x92, .x=0xaf, .y=0xba, .sp=0x10, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0x6d}, {.addr=0xb118, .value=0x04}, {.addr=0xb119, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0xb11a, .a=0xff, .x=0xaf, .y=0xba, .sp=0x10, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0x6d}, {.addr=0xb118, .value=0x04}, {.addr=0xb119, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb118, .value=0x04, .type=IO_READ},
        {.addr=0xb119, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x856c, .a=0x40, .x=0x13, .y=0xf9, .sp=0xd7, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006c, .value=0x86}, {.addr=0x856c, .value=0x04}, {.addr=0x856d, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x856e, .a=0xc6, .x=0x13, .y=0xf9, .sp=0xd7, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x006c, .value=0x86}, {.addr=0x856c, .value=0x04}, {.addr=0x856d, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x856c, .value=0x04, .type=IO_READ},
        {.addr=0x856d, .value=0x6c, .type=IO_READ},
        {.addr=0x006c, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xff5c, .a=0xb4, .x=0x26, .y=0x35, .sp=0xd9, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x94}, {.addr=0xff5c, .value=0x04}, {.addr=0xff5d, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xff5e, .a=0xb4, .x=0x26, .y=0x35, .sp=0xd9, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x94}, {.addr=0xff5c, .value=0x04}, {.addr=0xff5d, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xff5c, .value=0x04, .type=IO_READ},
        {.addr=0xff5d, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x01f9, .a=0x89, .x=0xff, .y=0xb9, .sp=0x8e, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003e, .value=0x76}, {.addr=0x01f9, .value=0x04}, {.addr=0x01fa, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x01fb, .a=0xff, .x=0xff, .y=0xb9, .sp=0x8e, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x003e, .value=0x76}, {.addr=0x01f9, .value=0x04}, {.addr=0x01fa, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x01f9, .value=0x04, .type=IO_READ},
        {.addr=0x01fa, .value=0x3e, .type=IO_READ},
        {.addr=0x003e, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xb1fb, .a=0xeb, .x=0x5c, .y=0x82, .sp=0xa3, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008d, .value=0x22}, {.addr=0xb1fb, .value=0x04}, {.addr=0xb1fc, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0xb1fd, .a=0xeb, .x=0x5c, .y=0x82, .sp=0xa3, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x008d, .value=0x22}, {.addr=0xb1fb, .value=0x04}, {.addr=0xb1fc, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb1fb, .value=0x04, .type=IO_READ},
        {.addr=0xb1fc, .value=0x8d, .type=IO_READ},
        {.addr=0x008d, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x64c5, .a=0xd3, .x=0x1f, .y=0xe6, .sp=0x70, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b6, .value=0xcb}, {.addr=0x64c5, .value=0x04}, {.addr=0x64c6, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x64c7, .a=0xdb, .x=0x1f, .y=0xe6, .sp=0x70, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b6, .value=0xcb}, {.addr=0x64c5, .value=0x04}, {.addr=0x64c6, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x64c5, .value=0x04, .type=IO_READ},
        {.addr=0x64c6, .value=0xb6, .type=IO_READ},
        {.addr=0x01b6, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xa9da, .a=0xa0, .x=0xd6, .y=0x33, .sp=0x12, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0xad}, {.addr=0xa9da, .value=0x04}, {.addr=0xa9db, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xa9dc, .a=0xad, .x=0xd6, .y=0x33, .sp=0x12, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0xad}, {.addr=0xa9da, .value=0x04}, {.addr=0xa9db, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9da, .value=0x04, .type=IO_READ},
        {.addr=0xa9db, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x1829, .a=0x77, .x=0x75, .y=0x8d, .sp=0x53, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x7d}, {.addr=0x1829, .value=0x04}, {.addr=0x182a, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x182b, .a=0x7f, .x=0x75, .y=0x8d, .sp=0x53, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x7d}, {.addr=0x1829, .value=0x04}, {.addr=0x182a, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1829, .value=0x04, .type=IO_READ},
        {.addr=0x182a, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x7320, .a=0x6f, .x=0x53, .y=0x38, .sp=0x29, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0103, .value=0xdf}, {.addr=0x7320, .value=0x04}, {.addr=0x7321, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x7322, .a=0xff, .x=0x53, .y=0x38, .sp=0x29, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0103, .value=0xdf}, {.addr=0x7320, .value=0x04}, {.addr=0x7321, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x7320, .value=0x04, .type=IO_READ},
        {.addr=0x7321, .value=0x03, .type=IO_READ},
        {.addr=0x0103, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xb17b, .a=0x9b, .x=0xaa, .y=0xc1, .sp=0x08, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0169, .value=0x79}, {.addr=0xb17b, .value=0x04}, {.addr=0xb17c, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xb17d, .a=0xfb, .x=0xaa, .y=0xc1, .sp=0x08, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0169, .value=0x79}, {.addr=0xb17b, .value=0x04}, {.addr=0xb17c, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xb17b, .value=0x04, .type=IO_READ},
        {.addr=0xb17c, .value=0x69, .type=IO_READ},
        {.addr=0x0169, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xef7c, .a=0x12, .x=0x28, .y=0x13, .sp=0x05, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bc, .value=0x50}, {.addr=0xef7c, .value=0x04}, {.addr=0xef7d, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0xef7e, .a=0x52, .x=0x28, .y=0x13, .sp=0x05, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bc, .value=0x50}, {.addr=0xef7c, .value=0x04}, {.addr=0xef7d, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0xef7c, .value=0x04, .type=IO_READ},
        {.addr=0xef7d, .value=0xbc, .type=IO_READ},
        {.addr=0x01bc, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x5c94, .a=0x12, .x=0x49, .y=0x37, .sp=0xcb, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0xf3}, {.addr=0x5c94, .value=0x04}, {.addr=0x5c95, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x5c96, .a=0xf3, .x=0x49, .y=0x37, .sp=0xcb, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0xf3}, {.addr=0x5c94, .value=0x04}, {.addr=0x5c95, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c94, .value=0x04, .type=IO_READ},
        {.addr=0x5c95, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xeb2a, .a=0x0a, .x=0xa2, .y=0xd0, .sp=0xa6, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x51}, {.addr=0xeb2a, .value=0x04}, {.addr=0xeb2b, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xeb2c, .a=0x5b, .x=0xa2, .y=0xd0, .sp=0xa6, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x51}, {.addr=0xeb2a, .value=0x04}, {.addr=0xeb2b, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb2a, .value=0x04, .type=IO_READ},
        {.addr=0xeb2b, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xa5ac, .a=0xe7, .x=0x27, .y=0x1a, .sp=0x9a, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0xbc}, {.addr=0xa5ac, .value=0x04}, {.addr=0xa5ad, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xa5ae, .a=0xff, .x=0x27, .y=0x1a, .sp=0x9a, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0xbc}, {.addr=0xa5ac, .value=0x04}, {.addr=0xa5ad, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xa5ac, .value=0x04, .type=IO_READ},
        {.addr=0xa5ad, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x82cb, .a=0xb3, .x=0xc1, .y=0xb9, .sp=0x77, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0xe6}, {.addr=0x82cb, .value=0x04}, {.addr=0x82cc, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x82cd, .a=0xf7, .x=0xc1, .y=0xb9, .sp=0x77, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0xe6}, {.addr=0x82cb, .value=0x04}, {.addr=0x82cc, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x82cb, .value=0x04, .type=IO_READ},
        {.addr=0x82cc, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x5d53, .a=0x7e, .x=0x0e, .y=0xd1, .sp=0x34, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0xc3}, {.addr=0x5d53, .value=0x04}, {.addr=0x5d54, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x5d55, .a=0xff, .x=0x0e, .y=0xd1, .sp=0x34, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0xc3}, {.addr=0x5d53, .value=0x04}, {.addr=0x5d54, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d53, .value=0x04, .type=IO_READ},
        {.addr=0x5d54, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x4f03, .a=0x8a, .x=0x8c, .y=0xf2, .sp=0x80, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0x35}, {.addr=0x4f03, .value=0x04}, {.addr=0x4f04, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x4f05, .a=0xbf, .x=0x8c, .y=0xf2, .sp=0x80, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0x35}, {.addr=0x4f03, .value=0x04}, {.addr=0x4f04, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f03, .value=0x04, .type=IO_READ},
        {.addr=0x4f04, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x5bb0, .a=0x78, .x=0xe6, .y=0x7f, .sp=0x30, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0x54}, {.addr=0x5bb0, .value=0x04}, {.addr=0x5bb1, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x5bb2, .a=0x7c, .x=0xe6, .y=0x7f, .sp=0x30, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0x54}, {.addr=0x5bb0, .value=0x04}, {.addr=0x5bb1, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bb0, .value=0x04, .type=IO_READ},
        {.addr=0x5bb1, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x068f, .a=0xb1, .x=0xc0, .y=0x3c, .sp=0xfd, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0xa1}, {.addr=0x068f, .value=0x04}, {.addr=0x0690, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x0691, .a=0xb1, .x=0xc0, .y=0x3c, .sp=0xfd, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0xa1}, {.addr=0x068f, .value=0x04}, {.addr=0x0690, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x068f, .value=0x04, .type=IO_READ},
        {.addr=0x0690, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x0aa7, .a=0x7d, .x=0x6d, .y=0x9a, .sp=0x62, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0x05}, {.addr=0x0aa7, .value=0x04}, {.addr=0x0aa8, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x0aa9, .a=0x7d, .x=0x6d, .y=0x9a, .sp=0x62, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0x05}, {.addr=0x0aa7, .value=0x04}, {.addr=0x0aa8, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x0aa7, .value=0x04, .type=IO_READ},
        {.addr=0x0aa8, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xf386, .a=0xb6, .x=0xd9, .y=0x14, .sp=0xbd, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0xa1}, {.addr=0xf386, .value=0x04}, {.addr=0xf387, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0xf388, .a=0xb7, .x=0xd9, .y=0x14, .sp=0xbd, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0xa1}, {.addr=0xf386, .value=0x04}, {.addr=0xf387, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0xf386, .value=0x04, .type=IO_READ},
        {.addr=0xf387, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x3ccf, .a=0x82, .x=0x51, .y=0x85, .sp=0xd5, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0x3d}, {.addr=0x3ccf, .value=0x04}, {.addr=0x3cd0, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x3cd1, .a=0xbf, .x=0x51, .y=0x85, .sp=0xd5, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0x3d}, {.addr=0x3ccf, .value=0x04}, {.addr=0x3cd0, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ccf, .value=0x04, .type=IO_READ},
        {.addr=0x3cd0, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x8c84, .a=0x98, .x=0xe0, .y=0xc6, .sp=0x48, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0111, .value=0xf5}, {.addr=0x8c84, .value=0x04}, {.addr=0x8c85, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x8c86, .a=0xfd, .x=0xe0, .y=0xc6, .sp=0x48, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0111, .value=0xf5}, {.addr=0x8c84, .value=0x04}, {.addr=0x8c85, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c84, .value=0x04, .type=IO_READ},
        {.addr=0x8c85, .value=0x11, .type=IO_READ},
        {.addr=0x0111, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x5e4e, .a=0x0a, .x=0xa2, .y=0x81, .sp=0x4c, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0x53}, {.addr=0x5e4e, .value=0x04}, {.addr=0x5e4f, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x5e50, .a=0x5b, .x=0xa2, .y=0x81, .sp=0x4c, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0x53}, {.addr=0x5e4e, .value=0x04}, {.addr=0x5e4f, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e4e, .value=0x04, .type=IO_READ},
        {.addr=0x5e4f, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x87fb, .a=0xcc, .x=0xf4, .y=0x2d, .sp=0x08, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0x93}, {.addr=0x87fb, .value=0x04}, {.addr=0x87fc, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x87fd, .a=0xdf, .x=0xf4, .y=0x2d, .sp=0x08, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0x93}, {.addr=0x87fb, .value=0x04}, {.addr=0x87fc, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x87fb, .value=0x04, .type=IO_READ},
        {.addr=0x87fc, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xff32, .a=0x8a, .x=0x93, .y=0x46, .sp=0xca, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0002, .value=0x82}, {.addr=0xff32, .value=0x04}, {.addr=0xff33, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0xff34, .a=0x8a, .x=0x93, .y=0x46, .sp=0xca, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0002, .value=0x82}, {.addr=0xff32, .value=0x04}, {.addr=0xff33, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0xff32, .value=0x04, .type=IO_READ},
        {.addr=0xff33, .value=0x02, .type=IO_READ},
        {.addr=0x0002, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x1f4c, .a=0x97, .x=0xf6, .y=0xae, .sp=0xfe, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019b, .value=0x75}, {.addr=0x1f4c, .value=0x04}, {.addr=0x1f4d, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x1f4e, .a=0xf7, .x=0xf6, .y=0xae, .sp=0xfe, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x019b, .value=0x75}, {.addr=0x1f4c, .value=0x04}, {.addr=0x1f4d, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f4c, .value=0x04, .type=IO_READ},
        {.addr=0x1f4d, .value=0x9b, .type=IO_READ},
        {.addr=0x019b, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x160f, .a=0x62, .x=0xd0, .y=0x49, .sp=0x1e, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0189, .value=0xc7}, {.addr=0x160f, .value=0x04}, {.addr=0x1610, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x1611, .a=0xe7, .x=0xd0, .y=0x49, .sp=0x1e, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0189, .value=0xc7}, {.addr=0x160f, .value=0x04}, {.addr=0x1610, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x160f, .value=0x04, .type=IO_READ},
        {.addr=0x1610, .value=0x89, .type=IO_READ},
        {.addr=0x0189, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x3aa6, .a=0x71, .x=0x7f, .y=0x5c, .sp=0x03, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0x99}, {.addr=0x3aa6, .value=0x04}, {.addr=0x3aa7, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x3aa8, .a=0xf9, .x=0x7f, .y=0x5c, .sp=0x03, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0x99}, {.addr=0x3aa6, .value=0x04}, {.addr=0x3aa7, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x3aa6, .value=0x04, .type=IO_READ},
        {.addr=0x3aa7, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x928b, .a=0x7a, .x=0x0b, .y=0xce, .sp=0xde, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x16}, {.addr=0x928b, .value=0x04}, {.addr=0x928c, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x928d, .a=0x7e, .x=0x0b, .y=0xce, .sp=0xde, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x16}, {.addr=0x928b, .value=0x04}, {.addr=0x928c, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x928b, .value=0x04, .type=IO_READ},
        {.addr=0x928c, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x7313, .a=0x7d, .x=0x95, .y=0xf7, .sp=0x6e, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x92}, {.addr=0x7313, .value=0x04}, {.addr=0x7314, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x7315, .a=0xff, .x=0x95, .y=0xf7, .sp=0x6e, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x92}, {.addr=0x7313, .value=0x04}, {.addr=0x7314, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x7313, .value=0x04, .type=IO_READ},
        {.addr=0x7314, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xe460, .a=0xb1, .x=0x8c, .y=0x68, .sp=0xdd, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0x70}, {.addr=0xe460, .value=0x04}, {.addr=0xe461, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0xe462, .a=0xf1, .x=0x8c, .y=0x68, .sp=0xdd, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0x70}, {.addr=0xe460, .value=0x04}, {.addr=0xe461, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0xe460, .value=0x04, .type=IO_READ},
        {.addr=0xe461, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x02d1, .a=0x99, .x=0xba, .y=0x82, .sp=0xd5, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0x5e}, {.addr=0x02d1, .value=0x04}, {.addr=0x02d2, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x02d3, .a=0xdf, .x=0xba, .y=0x82, .sp=0xd5, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0x5e}, {.addr=0x02d1, .value=0x04}, {.addr=0x02d2, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x02d1, .value=0x04, .type=IO_READ},
        {.addr=0x02d2, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x96e8, .a=0xcc, .x=0xa5, .y=0xa6, .sp=0x88, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0xa1}, {.addr=0x96e8, .value=0x04}, {.addr=0x96e9, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x96ea, .a=0xed, .x=0xa5, .y=0xa6, .sp=0x88, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0xa1}, {.addr=0x96e8, .value=0x04}, {.addr=0x96e9, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x96e8, .value=0x04, .type=IO_READ},
        {.addr=0x96e9, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x9efc, .a=0x1a, .x=0xc9, .y=0xa3, .sp=0x1e, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x41}, {.addr=0x9efc, .value=0x04}, {.addr=0x9efd, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x9efe, .a=0x5b, .x=0xc9, .y=0xa3, .sp=0x1e, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x41}, {.addr=0x9efc, .value=0x04}, {.addr=0x9efd, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x9efc, .value=0x04, .type=IO_READ},
        {.addr=0x9efd, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x3df1, .a=0xf5, .x=0x0c, .y=0x51, .sp=0xc9, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0x02}, {.addr=0x3df1, .value=0x04}, {.addr=0x3df2, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x3df3, .a=0xf7, .x=0x0c, .y=0x51, .sp=0xc9, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0x02}, {.addr=0x3df1, .value=0x04}, {.addr=0x3df2, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x3df1, .value=0x04, .type=IO_READ},
        {.addr=0x3df2, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x2c08, .a=0x80, .x=0x39, .y=0x0e, .sp=0xb4, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0x8e}, {.addr=0x2c08, .value=0x04}, {.addr=0x2c09, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x2c0a, .a=0x8e, .x=0x39, .y=0x0e, .sp=0xb4, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0x8e}, {.addr=0x2c08, .value=0x04}, {.addr=0x2c09, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c08, .value=0x04, .type=IO_READ},
        {.addr=0x2c09, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x7d29, .a=0xdf, .x=0x85, .y=0xee, .sp=0xa4, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dd, .value=0x0e}, {.addr=0x7d29, .value=0x04}, {.addr=0x7d2a, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x7d2b, .a=0xdf, .x=0x85, .y=0xee, .sp=0xa4, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dd, .value=0x0e}, {.addr=0x7d29, .value=0x04}, {.addr=0x7d2a, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d29, .value=0x04, .type=IO_READ},
        {.addr=0x7d2a, .value=0xdd, .type=IO_READ},
        {.addr=0x00dd, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xc850, .a=0xf5, .x=0xab, .y=0xd3, .sp=0xea, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0x2f}, {.addr=0xc850, .value=0x04}, {.addr=0xc851, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0xc852, .a=0xff, .x=0xab, .y=0xd3, .sp=0xea, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0x2f}, {.addr=0xc850, .value=0x04}, {.addr=0xc851, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0xc850, .value=0x04, .type=IO_READ},
        {.addr=0xc851, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x7476, .a=0x68, .x=0xa8, .y=0x69, .sp=0xe7, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0x79}, {.addr=0x7476, .value=0x04}, {.addr=0x7477, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x7478, .a=0x79, .x=0xa8, .y=0x69, .sp=0xe7, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0x79}, {.addr=0x7476, .value=0x04}, {.addr=0x7477, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x7476, .value=0x04, .type=IO_READ},
        {.addr=0x7477, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x4615, .a=0x08, .x=0x9e, .y=0x23, .sp=0x6c, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0x71}, {.addr=0x4615, .value=0x04}, {.addr=0x4616, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0x4617, .a=0x79, .x=0x9e, .y=0x23, .sp=0x6c, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0x71}, {.addr=0x4615, .value=0x04}, {.addr=0x4616, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0x4615, .value=0x04, .type=IO_READ},
        {.addr=0x4616, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xaec6, .a=0x91, .x=0x4e, .y=0xfc, .sp=0x95, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0xd4}, {.addr=0xaec6, .value=0x04}, {.addr=0xaec7, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xaec8, .a=0xd5, .x=0x4e, .y=0xfc, .sp=0x95, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0xd4}, {.addr=0xaec6, .value=0x04}, {.addr=0xaec7, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xaec6, .value=0x04, .type=IO_READ},
        {.addr=0xaec7, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x7d09, .a=0xe0, .x=0xdf, .y=0xcf, .sp=0xfe, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0x9d}, {.addr=0x7d09, .value=0x04}, {.addr=0x7d0a, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x7d0b, .a=0xfd, .x=0xdf, .y=0xcf, .sp=0xfe, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0x9d}, {.addr=0x7d09, .value=0x04}, {.addr=0x7d0a, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d09, .value=0x04, .type=IO_READ},
        {.addr=0x7d0a, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0300) {
    const struct CPU_State initial_cpu = {.pc=0xa3fd, .a=0xbf, .x=0x18, .y=0xa0, .sp=0x1b, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0x80}, {.addr=0xa3fd, .value=0x04}, {.addr=0xa3fe, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xa3ff, .a=0xbf, .x=0x18, .y=0xa0, .sp=0x1b, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0x80}, {.addr=0xa3fd, .value=0x04}, {.addr=0xa3fe, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xa3fd, .value=0x04, .type=IO_READ},
        {.addr=0xa3fe, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0301) {
    const struct CPU_State initial_cpu = {.pc=0x06b3, .a=0xa8, .x=0x52, .y=0x1e, .sp=0x90, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0x4e}, {.addr=0x06b3, .value=0x04}, {.addr=0x06b4, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x06b5, .a=0xee, .x=0x52, .y=0x1e, .sp=0x90, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0x4e}, {.addr=0x06b3, .value=0x04}, {.addr=0x06b4, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x06b3, .value=0x04, .type=IO_READ},
        {.addr=0x06b4, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0302) {
    const struct CPU_State initial_cpu = {.pc=0x66dc, .a=0xad, .x=0xa3, .y=0xdb, .sp=0x9b, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0x4c}, {.addr=0x66dc, .value=0x04}, {.addr=0x66dd, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0x66de, .a=0xed, .x=0xa3, .y=0xdb, .sp=0x9b, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0x4c}, {.addr=0x66dc, .value=0x04}, {.addr=0x66dd, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0x66dc, .value=0x04, .type=IO_READ},
        {.addr=0x66dd, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0303) {
    const struct CPU_State initial_cpu = {.pc=0xf9a3, .a=0x50, .x=0x8b, .y=0x30, .sp=0x90, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0x87}, {.addr=0xf9a3, .value=0x04}, {.addr=0xf9a4, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0xf9a5, .a=0xd7, .x=0x8b, .y=0x30, .sp=0x90, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0x87}, {.addr=0xf9a3, .value=0x04}, {.addr=0xf9a4, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9a3, .value=0x04, .type=IO_READ},
        {.addr=0xf9a4, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0304) {
    const struct CPU_State initial_cpu = {.pc=0xbc52, .a=0xc6, .x=0xf8, .y=0x0e, .sp=0x60, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x1f}, {.addr=0xbc52, .value=0x04}, {.addr=0xbc53, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xbc54, .a=0xdf, .x=0xf8, .y=0x0e, .sp=0x60, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x1f}, {.addr=0xbc52, .value=0x04}, {.addr=0xbc53, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc52, .value=0x04, .type=IO_READ},
        {.addr=0xbc53, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0305) {
    const struct CPU_State initial_cpu = {.pc=0x987c, .a=0x63, .x=0xdb, .y=0x22, .sp=0x3a, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d7, .value=0x3c}, {.addr=0x987c, .value=0x04}, {.addr=0x987d, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x987e, .a=0x7f, .x=0xdb, .y=0x22, .sp=0x3a, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d7, .value=0x3c}, {.addr=0x987c, .value=0x04}, {.addr=0x987d, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x987c, .value=0x04, .type=IO_READ},
        {.addr=0x987d, .value=0xd7, .type=IO_READ},
        {.addr=0x00d7, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0306) {
    const struct CPU_State initial_cpu = {.pc=0x91d4, .a=0x52, .x=0xfc, .y=0x09, .sp=0xa6, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0xbf}, {.addr=0x91d4, .value=0x04}, {.addr=0x91d5, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x91d6, .a=0xff, .x=0xfc, .y=0x09, .sp=0xa6, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0xbf}, {.addr=0x91d4, .value=0x04}, {.addr=0x91d5, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x91d4, .value=0x04, .type=IO_READ},
        {.addr=0x91d5, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0307) {
    const struct CPU_State initial_cpu = {.pc=0x8c2a, .a=0xf4, .x=0x18, .y=0x52, .sp=0xa9, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0x50}, {.addr=0x8c2a, .value=0x04}, {.addr=0x8c2b, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x8c2c, .a=0xf4, .x=0x18, .y=0x52, .sp=0xa9, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0x50}, {.addr=0x8c2a, .value=0x04}, {.addr=0x8c2b, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c2a, .value=0x04, .type=IO_READ},
        {.addr=0x8c2b, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0308) {
    const struct CPU_State initial_cpu = {.pc=0x39df, .a=0xba, .x=0x9f, .y=0xbe, .sp=0x4a, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0xc1}, {.addr=0x39df, .value=0x04}, {.addr=0x39e0, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x39e1, .a=0xfb, .x=0x9f, .y=0xbe, .sp=0x4a, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0xc1}, {.addr=0x39df, .value=0x04}, {.addr=0x39e0, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x39df, .value=0x04, .type=IO_READ},
        {.addr=0x39e0, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0309) {
    const struct CPU_State initial_cpu = {.pc=0xc900, .a=0x33, .x=0x9a, .y=0xdd, .sp=0x75, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0x49}, {.addr=0xc900, .value=0x04}, {.addr=0xc901, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xc902, .a=0x7b, .x=0x9a, .y=0xdd, .sp=0x75, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0x49}, {.addr=0xc900, .value=0x04}, {.addr=0xc901, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xc900, .value=0x04, .type=IO_READ},
        {.addr=0xc901, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_030A) {
    const struct CPU_State initial_cpu = {.pc=0xc44a, .a=0xef, .x=0x02, .y=0xc3, .sp=0x39, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0x81}, {.addr=0xc44a, .value=0x04}, {.addr=0xc44b, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xc44c, .a=0xef, .x=0x02, .y=0xc3, .sp=0x39, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0x81}, {.addr=0xc44a, .value=0x04}, {.addr=0xc44b, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xc44a, .value=0x04, .type=IO_READ},
        {.addr=0xc44b, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_030B) {
    const struct CPU_State initial_cpu = {.pc=0xffdc, .a=0x26, .x=0x57, .y=0x2b, .sp=0x68, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0xd9}, {.addr=0xffdc, .value=0x04}, {.addr=0xffdd, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0xffde, .a=0xff, .x=0x57, .y=0x2b, .sp=0x68, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0xd9}, {.addr=0xffdc, .value=0x04}, {.addr=0xffdd, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0xffdc, .value=0x04, .type=IO_READ},
        {.addr=0xffdd, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_030C) {
    const struct CPU_State initial_cpu = {.pc=0xb49c, .a=0x20, .x=0x14, .y=0x31, .sp=0xa8, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0x8c}, {.addr=0xb49c, .value=0x04}, {.addr=0xb49d, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0xb49e, .a=0xac, .x=0x14, .y=0x31, .sp=0xa8, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0x8c}, {.addr=0xb49c, .value=0x04}, {.addr=0xb49d, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb49c, .value=0x04, .type=IO_READ},
        {.addr=0xb49d, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_030D) {
    const struct CPU_State initial_cpu = {.pc=0xdb11, .a=0xc3, .x=0x79, .y=0xd4, .sp=0xaa, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0xb1}, {.addr=0xdb11, .value=0x04}, {.addr=0xdb12, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0xdb13, .a=0xf3, .x=0x79, .y=0xd4, .sp=0xaa, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0xb1}, {.addr=0xdb11, .value=0x04}, {.addr=0xdb12, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb11, .value=0x04, .type=IO_READ},
        {.addr=0xdb12, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_030E) {
    const struct CPU_State initial_cpu = {.pc=0x759a, .a=0x74, .x=0xef, .y=0x4e, .sp=0x90, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0x03}, {.addr=0x759a, .value=0x04}, {.addr=0x759b, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x759c, .a=0x77, .x=0xef, .y=0x4e, .sp=0x90, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0x03}, {.addr=0x759a, .value=0x04}, {.addr=0x759b, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x759a, .value=0x04, .type=IO_READ},
        {.addr=0x759b, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_030F) {
    const struct CPU_State initial_cpu = {.pc=0x6b23, .a=0xaf, .x=0xac, .y=0x5e, .sp=0x3a, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0x84}, {.addr=0x6b23, .value=0x04}, {.addr=0x6b24, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x6b25, .a=0xaf, .x=0xac, .y=0x5e, .sp=0x3a, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0x84}, {.addr=0x6b23, .value=0x04}, {.addr=0x6b24, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b23, .value=0x04, .type=IO_READ},
        {.addr=0x6b24, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0310) {
    const struct CPU_State initial_cpu = {.pc=0xe7d7, .a=0x9b, .x=0xfc, .y=0x61, .sp=0x4f, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0xb6}, {.addr=0xe7d7, .value=0x04}, {.addr=0xe7d8, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xe7d9, .a=0xbf, .x=0xfc, .y=0x61, .sp=0x4f, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0xb6}, {.addr=0xe7d7, .value=0x04}, {.addr=0xe7d8, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xe7d7, .value=0x04, .type=IO_READ},
        {.addr=0xe7d8, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0311) {
    const struct CPU_State initial_cpu = {.pc=0xb39d, .a=0x0a, .x=0xcd, .y=0x51, .sp=0x86, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0x9b}, {.addr=0xb39d, .value=0x04}, {.addr=0xb39e, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xb39f, .a=0x9b, .x=0xcd, .y=0x51, .sp=0x86, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0x9b}, {.addr=0xb39d, .value=0x04}, {.addr=0xb39e, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xb39d, .value=0x04, .type=IO_READ},
        {.addr=0xb39e, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0312) {
    const struct CPU_State initial_cpu = {.pc=0x9cf4, .a=0x2e, .x=0x72, .y=0xd3, .sp=0x88, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0xb6}, {.addr=0x9cf4, .value=0x04}, {.addr=0x9cf5, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x9cf6, .a=0xbe, .x=0x72, .y=0xd3, .sp=0x88, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0xb6}, {.addr=0x9cf4, .value=0x04}, {.addr=0x9cf5, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x9cf4, .value=0x04, .type=IO_READ},
        {.addr=0x9cf5, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0313) {
    const struct CPU_State initial_cpu = {.pc=0x9520, .a=0x4a, .x=0xbb, .y=0xcf, .sp=0xad, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0x7d}, {.addr=0x9520, .value=0x04}, {.addr=0x9521, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x9522, .a=0x7f, .x=0xbb, .y=0xcf, .sp=0xad, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0x7d}, {.addr=0x9520, .value=0x04}, {.addr=0x9521, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x9520, .value=0x04, .type=IO_READ},
        {.addr=0x9521, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0314) {
    const struct CPU_State initial_cpu = {.pc=0xdcc0, .a=0xe3, .x=0x79, .y=0xfd, .sp=0x8d, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x55}, {.addr=0xdcc0, .value=0x04}, {.addr=0xdcc1, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xdcc2, .a=0xf7, .x=0x79, .y=0xfd, .sp=0x8d, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x55}, {.addr=0xdcc0, .value=0x04}, {.addr=0xdcc1, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xdcc0, .value=0x04, .type=IO_READ},
        {.addr=0xdcc1, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0315) {
    const struct CPU_State initial_cpu = {.pc=0x4ba9, .a=0x1b, .x=0x6b, .y=0x77, .sp=0x35, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0xf6}, {.addr=0x4ba9, .value=0x04}, {.addr=0x4baa, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x4bab, .a=0xff, .x=0x6b, .y=0x77, .sp=0x35, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0xf6}, {.addr=0x4ba9, .value=0x04}, {.addr=0x4baa, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ba9, .value=0x04, .type=IO_READ},
        {.addr=0x4baa, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0316) {
    const struct CPU_State initial_cpu = {.pc=0x697c, .a=0x3b, .x=0x33, .y=0x9c, .sp=0x8e, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0xb0}, {.addr=0x697c, .value=0x04}, {.addr=0x697d, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x697e, .a=0xbb, .x=0x33, .y=0x9c, .sp=0x8e, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0xb0}, {.addr=0x697c, .value=0x04}, {.addr=0x697d, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x697c, .value=0x04, .type=IO_READ},
        {.addr=0x697d, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0317) {
    const struct CPU_State initial_cpu = {.pc=0x86c0, .a=0xb7, .x=0x79, .y=0xb9, .sp=0x2c, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x81}, {.addr=0x86c0, .value=0x04}, {.addr=0x86c1, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x86c2, .a=0xb7, .x=0x79, .y=0xb9, .sp=0x2c, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x81}, {.addr=0x86c0, .value=0x04}, {.addr=0x86c1, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x86c0, .value=0x04, .type=IO_READ},
        {.addr=0x86c1, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0318) {
    const struct CPU_State initial_cpu = {.pc=0x3357, .a=0xb2, .x=0xbb, .y=0xeb, .sp=0x4b, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0x37}, {.addr=0x3357, .value=0x04}, {.addr=0x3358, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x3359, .a=0xb7, .x=0xbb, .y=0xeb, .sp=0x4b, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0x37}, {.addr=0x3357, .value=0x04}, {.addr=0x3358, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x3357, .value=0x04, .type=IO_READ},
        {.addr=0x3358, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0319) {
    const struct CPU_State initial_cpu = {.pc=0x45cc, .a=0x75, .x=0x00, .y=0x0b, .sp=0x07, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0xc9}, {.addr=0x45cc, .value=0x04}, {.addr=0x45cd, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x45ce, .a=0xfd, .x=0x00, .y=0x0b, .sp=0x07, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0xc9}, {.addr=0x45cc, .value=0x04}, {.addr=0x45cd, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x45cc, .value=0x04, .type=IO_READ},
        {.addr=0x45cd, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_031A) {
    const struct CPU_State initial_cpu = {.pc=0x77d4, .a=0x65, .x=0x62, .y=0x63, .sp=0x9e, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0xb6}, {.addr=0x77d4, .value=0x04}, {.addr=0x77d5, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x77d6, .a=0xf7, .x=0x62, .y=0x63, .sp=0x9e, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0xb6}, {.addr=0x77d4, .value=0x04}, {.addr=0x77d5, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x77d4, .value=0x04, .type=IO_READ},
        {.addr=0x77d5, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_031B) {
    const struct CPU_State initial_cpu = {.pc=0x2013, .a=0x74, .x=0xbe, .y=0xc5, .sp=0x64, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0x41}, {.addr=0x2013, .value=0x04}, {.addr=0x2014, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x2015, .a=0x75, .x=0xbe, .y=0xc5, .sp=0x64, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0x41}, {.addr=0x2013, .value=0x04}, {.addr=0x2014, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x2013, .value=0x04, .type=IO_READ},
        {.addr=0x2014, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_031C) {
    const struct CPU_State initial_cpu = {.pc=0x8049, .a=0xa7, .x=0x0b, .y=0x0f, .sp=0xbf, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015c, .value=0x38}, {.addr=0x8049, .value=0x04}, {.addr=0x804a, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x804b, .a=0xbf, .x=0x0b, .y=0x0f, .sp=0xbf, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x015c, .value=0x38}, {.addr=0x8049, .value=0x04}, {.addr=0x804a, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8049, .value=0x04, .type=IO_READ},
        {.addr=0x804a, .value=0x5c, .type=IO_READ},
        {.addr=0x015c, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_031D) {
    const struct CPU_State initial_cpu = {.pc=0x94e3, .a=0xec, .x=0x10, .y=0xbd, .sp=0x2c, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0x2a}, {.addr=0x94e3, .value=0x04}, {.addr=0x94e4, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x94e5, .a=0xee, .x=0x10, .y=0xbd, .sp=0x2c, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0x2a}, {.addr=0x94e3, .value=0x04}, {.addr=0x94e4, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x94e3, .value=0x04, .type=IO_READ},
        {.addr=0x94e4, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_031E) {
    const struct CPU_State initial_cpu = {.pc=0x665d, .a=0x3a, .x=0xcd, .y=0x51, .sp=0xe0, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0xdd}, {.addr=0x665d, .value=0x04}, {.addr=0x665e, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x665f, .a=0xff, .x=0xcd, .y=0x51, .sp=0xe0, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0xdd}, {.addr=0x665d, .value=0x04}, {.addr=0x665e, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x665d, .value=0x04, .type=IO_READ},
        {.addr=0x665e, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_031F) {
    const struct CPU_State initial_cpu = {.pc=0xe67e, .a=0x10, .x=0x04, .y=0x43, .sp=0xab, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x9e}, {.addr=0xe67e, .value=0x04}, {.addr=0xe67f, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xe680, .a=0x9e, .x=0x04, .y=0x43, .sp=0xab, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x9e}, {.addr=0xe67e, .value=0x04}, {.addr=0xe67f, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe67e, .value=0x04, .type=IO_READ},
        {.addr=0xe67f, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0320) {
    const struct CPU_State initial_cpu = {.pc=0x6ae4, .a=0x77, .x=0x3a, .y=0xee, .sp=0xe8, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0xd4}, {.addr=0x6ae4, .value=0x04}, {.addr=0x6ae5, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x6ae6, .a=0xf7, .x=0x3a, .y=0xee, .sp=0xe8, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0xd4}, {.addr=0x6ae4, .value=0x04}, {.addr=0x6ae5, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ae4, .value=0x04, .type=IO_READ},
        {.addr=0x6ae5, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0321) {
    const struct CPU_State initial_cpu = {.pc=0xe68b, .a=0xa4, .x=0x47, .y=0x5f, .sp=0x77, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0x08}, {.addr=0xe68b, .value=0x04}, {.addr=0xe68c, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0xe68d, .a=0xac, .x=0x47, .y=0x5f, .sp=0x77, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0x08}, {.addr=0xe68b, .value=0x04}, {.addr=0xe68c, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0xe68b, .value=0x04, .type=IO_READ},
        {.addr=0xe68c, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0322) {
    const struct CPU_State initial_cpu = {.pc=0x4169, .a=0x47, .x=0x71, .y=0xba, .sp=0xeb, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0xdc}, {.addr=0x4169, .value=0x04}, {.addr=0x416a, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x416b, .a=0xdf, .x=0x71, .y=0xba, .sp=0xeb, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0xdc}, {.addr=0x4169, .value=0x04}, {.addr=0x416a, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4169, .value=0x04, .type=IO_READ},
        {.addr=0x416a, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0323) {
    const struct CPU_State initial_cpu = {.pc=0x8f5f, .a=0x52, .x=0x87, .y=0x03, .sp=0xb7, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0x52}, {.addr=0x8f5f, .value=0x04}, {.addr=0x8f60, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x8f61, .a=0x52, .x=0x87, .y=0x03, .sp=0xb7, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0x52}, {.addr=0x8f5f, .value=0x04}, {.addr=0x8f60, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f5f, .value=0x04, .type=IO_READ},
        {.addr=0x8f60, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0324) {
    const struct CPU_State initial_cpu = {.pc=0x217b, .a=0x39, .x=0xf6, .y=0xa4, .sp=0xa0, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f0, .value=0x31}, {.addr=0x217b, .value=0x04}, {.addr=0x217c, .value=0xf0},
    };
    const struct CPU_State final_cpu = {.pc=0x217d, .a=0x39, .x=0xf6, .y=0xa4, .sp=0xa0, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f0, .value=0x31}, {.addr=0x217b, .value=0x04}, {.addr=0x217c, .value=0xf0},
    };
    const struct BusEvent events[] = {
        {.addr=0x217b, .value=0x04, .type=IO_READ},
        {.addr=0x217c, .value=0xf0, .type=IO_READ},
        {.addr=0x01f0, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0325) {
    const struct CPU_State initial_cpu = {.pc=0x2d84, .a=0x38, .x=0x29, .y=0xa3, .sp=0xf3, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0x6b}, {.addr=0x2d84, .value=0x04}, {.addr=0x2d85, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0x2d86, .a=0x7b, .x=0x29, .y=0xa3, .sp=0xf3, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0x6b}, {.addr=0x2d84, .value=0x04}, {.addr=0x2d85, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d84, .value=0x04, .type=IO_READ},
        {.addr=0x2d85, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0326) {
    const struct CPU_State initial_cpu = {.pc=0x4804, .a=0x2d, .x=0xa4, .y=0x83, .sp=0x62, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0x46}, {.addr=0x4804, .value=0x04}, {.addr=0x4805, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x4806, .a=0x6f, .x=0xa4, .y=0x83, .sp=0x62, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0x46}, {.addr=0x4804, .value=0x04}, {.addr=0x4805, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x4804, .value=0x04, .type=IO_READ},
        {.addr=0x4805, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0327) {
    const struct CPU_State initial_cpu = {.pc=0x11a6, .a=0x28, .x=0xf6, .y=0xde, .sp=0x3d, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0xc4}, {.addr=0x11a6, .value=0x04}, {.addr=0x11a7, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x11a8, .a=0xec, .x=0xf6, .y=0xde, .sp=0x3d, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0xc4}, {.addr=0x11a6, .value=0x04}, {.addr=0x11a7, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x11a6, .value=0x04, .type=IO_READ},
        {.addr=0x11a7, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0329) {
    const struct CPU_State initial_cpu = {.pc=0x68eb, .a=0x0b, .x=0x3e, .y=0xd9, .sp=0x90, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0x3b}, {.addr=0x68eb, .value=0x04}, {.addr=0x68ec, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x68ed, .a=0x3b, .x=0x3e, .y=0xd9, .sp=0x90, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0x3b}, {.addr=0x68eb, .value=0x04}, {.addr=0x68ec, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x68eb, .value=0x04, .type=IO_READ},
        {.addr=0x68ec, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_032A) {
    const struct CPU_State initial_cpu = {.pc=0x12b6, .a=0xb3, .x=0x43, .y=0x10, .sp=0x15, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0xf7}, {.addr=0x12b6, .value=0x04}, {.addr=0x12b7, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x12b8, .a=0xf7, .x=0x43, .y=0x10, .sp=0x15, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0xf7}, {.addr=0x12b6, .value=0x04}, {.addr=0x12b7, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x12b6, .value=0x04, .type=IO_READ},
        {.addr=0x12b7, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_032B) {
    const struct CPU_State initial_cpu = {.pc=0x8673, .a=0xdc, .x=0xed, .y=0x41, .sp=0xd5, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0x14}, {.addr=0x8673, .value=0x04}, {.addr=0x8674, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x8675, .a=0xdc, .x=0xed, .y=0x41, .sp=0xd5, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0x14}, {.addr=0x8673, .value=0x04}, {.addr=0x8674, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x8673, .value=0x04, .type=IO_READ},
        {.addr=0x8674, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_032C) {
    const struct CPU_State initial_cpu = {.pc=0x7289, .a=0xa5, .x=0x63, .y=0x61, .sp=0xa4, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0x41}, {.addr=0x7289, .value=0x04}, {.addr=0x728a, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x728b, .a=0xe5, .x=0x63, .y=0x61, .sp=0xa4, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0x41}, {.addr=0x7289, .value=0x04}, {.addr=0x728a, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x7289, .value=0x04, .type=IO_READ},
        {.addr=0x728a, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_032D) {
    const struct CPU_State initial_cpu = {.pc=0x7f73, .a=0xd9, .x=0xca, .y=0x29, .sp=0x5c, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x1f}, {.addr=0x7f73, .value=0x04}, {.addr=0x7f74, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x7f75, .a=0xdf, .x=0xca, .y=0x29, .sp=0x5c, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x1f}, {.addr=0x7f73, .value=0x04}, {.addr=0x7f74, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f73, .value=0x04, .type=IO_READ},
        {.addr=0x7f74, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_032E) {
    const struct CPU_State initial_cpu = {.pc=0x131a, .a=0x1c, .x=0x27, .y=0x9e, .sp=0x34, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0xa1}, {.addr=0x131a, .value=0x04}, {.addr=0x131b, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0x131c, .a=0xbd, .x=0x27, .y=0x9e, .sp=0x34, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0xa1}, {.addr=0x131a, .value=0x04}, {.addr=0x131b, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0x131a, .value=0x04, .type=IO_READ},
        {.addr=0x131b, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_032F) {
    const struct CPU_State initial_cpu = {.pc=0x388c, .a=0xa8, .x=0x16, .y=0x20, .sp=0xa7, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0x4c}, {.addr=0x388c, .value=0x04}, {.addr=0x388d, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0x388e, .a=0xec, .x=0x16, .y=0x20, .sp=0xa7, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0x4c}, {.addr=0x388c, .value=0x04}, {.addr=0x388d, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0x388c, .value=0x04, .type=IO_READ},
        {.addr=0x388d, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0330) {
    const struct CPU_State initial_cpu = {.pc=0x7874, .a=0xf7, .x=0x70, .y=0xeb, .sp=0x0e, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ce, .value=0x46}, {.addr=0x7874, .value=0x04}, {.addr=0x7875, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x7876, .a=0xf7, .x=0x70, .y=0xeb, .sp=0x0e, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ce, .value=0x46}, {.addr=0x7874, .value=0x04}, {.addr=0x7875, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x7874, .value=0x04, .type=IO_READ},
        {.addr=0x7875, .value=0xce, .type=IO_READ},
        {.addr=0x01ce, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0331) {
    const struct CPU_State initial_cpu = {.pc=0xcf29, .a=0x52, .x=0x33, .y=0xe7, .sp=0xcd, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0xb3}, {.addr=0xcf29, .value=0x04}, {.addr=0xcf2a, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0xcf2b, .a=0xf3, .x=0x33, .y=0xe7, .sp=0xcd, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0xb3}, {.addr=0xcf29, .value=0x04}, {.addr=0xcf2a, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0xcf29, .value=0x04, .type=IO_READ},
        {.addr=0xcf2a, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0332) {
    const struct CPU_State initial_cpu = {.pc=0x42f7, .a=0x34, .x=0xb8, .y=0x7d, .sp=0x0f, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bc, .value=0x32}, {.addr=0x42f7, .value=0x04}, {.addr=0x42f8, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x42f9, .a=0x36, .x=0xb8, .y=0x7d, .sp=0x0f, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bc, .value=0x32}, {.addr=0x42f7, .value=0x04}, {.addr=0x42f8, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x42f7, .value=0x04, .type=IO_READ},
        {.addr=0x42f8, .value=0xbc, .type=IO_READ},
        {.addr=0x01bc, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0333) {
    const struct CPU_State initial_cpu = {.pc=0xc487, .a=0x9e, .x=0x4f, .y=0xaa, .sp=0x0f, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0xa5}, {.addr=0xc487, .value=0x04}, {.addr=0xc488, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xc489, .a=0xbf, .x=0x4f, .y=0xaa, .sp=0x0f, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0xa5}, {.addr=0xc487, .value=0x04}, {.addr=0xc488, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc487, .value=0x04, .type=IO_READ},
        {.addr=0xc488, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0334) {
    const struct CPU_State initial_cpu = {.pc=0x1a91, .a=0x50, .x=0xbe, .y=0xf3, .sp=0x33, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0x1e}, {.addr=0x1a91, .value=0x04}, {.addr=0x1a92, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x1a93, .a=0x5e, .x=0xbe, .y=0xf3, .sp=0x33, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0x1e}, {.addr=0x1a91, .value=0x04}, {.addr=0x1a92, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a91, .value=0x04, .type=IO_READ},
        {.addr=0x1a92, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0335) {
    const struct CPU_State initial_cpu = {.pc=0x135c, .a=0xbd, .x=0x8f, .y=0xc2, .sp=0xe7, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0xe2}, {.addr=0x135c, .value=0x04}, {.addr=0x135d, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x135e, .a=0xff, .x=0x8f, .y=0xc2, .sp=0xe7, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0xe2}, {.addr=0x135c, .value=0x04}, {.addr=0x135d, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x135c, .value=0x04, .type=IO_READ},
        {.addr=0x135d, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0336) {
    const struct CPU_State initial_cpu = {.pc=0xc755, .a=0x93, .x=0x73, .y=0x4f, .sp=0x68, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0x7a}, {.addr=0xc755, .value=0x04}, {.addr=0xc756, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0xc757, .a=0xfb, .x=0x73, .y=0x4f, .sp=0x68, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0x7a}, {.addr=0xc755, .value=0x04}, {.addr=0xc756, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0xc755, .value=0x04, .type=IO_READ},
        {.addr=0xc756, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0337) {
    const struct CPU_State initial_cpu = {.pc=0xdd30, .a=0xb1, .x=0xcc, .y=0x7b, .sp=0x2b, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0x38}, {.addr=0xdd30, .value=0x04}, {.addr=0xdd31, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xdd32, .a=0xb9, .x=0xcc, .y=0x7b, .sp=0x2b, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0x38}, {.addr=0xdd30, .value=0x04}, {.addr=0xdd31, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd30, .value=0x04, .type=IO_READ},
        {.addr=0xdd31, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0338) {
    const struct CPU_State initial_cpu = {.pc=0x3b73, .a=0x7e, .x=0xd6, .y=0x84, .sp=0x50, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x4b}, {.addr=0x3b73, .value=0x04}, {.addr=0x3b74, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x3b75, .a=0x7f, .x=0xd6, .y=0x84, .sp=0x50, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x4b}, {.addr=0x3b73, .value=0x04}, {.addr=0x3b74, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b73, .value=0x04, .type=IO_READ},
        {.addr=0x3b74, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0339) {
    const struct CPU_State initial_cpu = {.pc=0x4d01, .a=0x09, .x=0x7b, .y=0x6e, .sp=0x10, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x70}, {.addr=0x4d01, .value=0x04}, {.addr=0x4d02, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x4d03, .a=0x79, .x=0x7b, .y=0x6e, .sp=0x10, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x70}, {.addr=0x4d01, .value=0x04}, {.addr=0x4d02, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d01, .value=0x04, .type=IO_READ},
        {.addr=0x4d02, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_033A) {
    const struct CPU_State initial_cpu = {.pc=0x11fc, .a=0xf9, .x=0xaa, .y=0xa8, .sp=0xc4, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0086, .value=0xe3}, {.addr=0x11fc, .value=0x04}, {.addr=0x11fd, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x11fe, .a=0xfb, .x=0xaa, .y=0xa8, .sp=0xc4, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0086, .value=0xe3}, {.addr=0x11fc, .value=0x04}, {.addr=0x11fd, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x11fc, .value=0x04, .type=IO_READ},
        {.addr=0x11fd, .value=0x86, .type=IO_READ},
        {.addr=0x0086, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_033B) {
    const struct CPU_State initial_cpu = {.pc=0x7799, .a=0x9c, .x=0xbb, .y=0xe3, .sp=0x5b, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0x12}, {.addr=0x7799, .value=0x04}, {.addr=0x779a, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x779b, .a=0x9e, .x=0xbb, .y=0xe3, .sp=0x5b, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0x12}, {.addr=0x7799, .value=0x04}, {.addr=0x779a, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x7799, .value=0x04, .type=IO_READ},
        {.addr=0x779a, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_033C) {
    const struct CPU_State initial_cpu = {.pc=0xf3e1, .a=0x5a, .x=0x03, .y=0x5e, .sp=0x23, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0x5c}, {.addr=0xf3e1, .value=0x04}, {.addr=0xf3e2, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0xf3e3, .a=0x5e, .x=0x03, .y=0x5e, .sp=0x23, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0x5c}, {.addr=0xf3e1, .value=0x04}, {.addr=0xf3e2, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0xf3e1, .value=0x04, .type=IO_READ},
        {.addr=0xf3e2, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_033D) {
    const struct CPU_State initial_cpu = {.pc=0xf445, .a=0xc9, .x=0x98, .y=0xe1, .sp=0xce, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x5d}, {.addr=0xf445, .value=0x04}, {.addr=0xf446, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xf447, .a=0xdd, .x=0x98, .y=0xe1, .sp=0xce, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x5d}, {.addr=0xf445, .value=0x04}, {.addr=0xf446, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf445, .value=0x04, .type=IO_READ},
        {.addr=0xf446, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_033E) {
    const struct CPU_State initial_cpu = {.pc=0xce2a, .a=0xf3, .x=0x3e, .y=0xae, .sp=0x49, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x37}, {.addr=0xce2a, .value=0x04}, {.addr=0xce2b, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xce2c, .a=0xf7, .x=0x3e, .y=0xae, .sp=0x49, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x37}, {.addr=0xce2a, .value=0x04}, {.addr=0xce2b, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xce2a, .value=0x04, .type=IO_READ},
        {.addr=0xce2b, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_033F) {
    const struct CPU_State initial_cpu = {.pc=0x9c40, .a=0x57, .x=0x0b, .y=0xbf, .sp=0x3e, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0xa6}, {.addr=0x9c40, .value=0x04}, {.addr=0x9c41, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x9c42, .a=0xf7, .x=0x0b, .y=0xbf, .sp=0x3e, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0xa6}, {.addr=0x9c40, .value=0x04}, {.addr=0x9c41, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c40, .value=0x04, .type=IO_READ},
        {.addr=0x9c41, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0340) {
    const struct CPU_State initial_cpu = {.pc=0x699c, .a=0xb4, .x=0x4e, .y=0x16, .sp=0xa7, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0x5a}, {.addr=0x699c, .value=0x04}, {.addr=0x699d, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x699e, .a=0xfe, .x=0x4e, .y=0x16, .sp=0xa7, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0x5a}, {.addr=0x699c, .value=0x04}, {.addr=0x699d, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x699c, .value=0x04, .type=IO_READ},
        {.addr=0x699d, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0341) {
    const struct CPU_State initial_cpu = {.pc=0xdbfc, .a=0x51, .x=0x26, .y=0x62, .sp=0x62, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0xd3}, {.addr=0xdbfc, .value=0x04}, {.addr=0xdbfd, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xdbfe, .a=0xd3, .x=0x26, .y=0x62, .sp=0x62, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0xd3}, {.addr=0xdbfc, .value=0x04}, {.addr=0xdbfd, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbfc, .value=0x04, .type=IO_READ},
        {.addr=0xdbfd, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0342) {
    const struct CPU_State initial_cpu = {.pc=0xbca8, .a=0x0d, .x=0x9a, .y=0x80, .sp=0x30, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0x53}, {.addr=0xbca8, .value=0x04}, {.addr=0xbca9, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xbcaa, .a=0x5f, .x=0x9a, .y=0x80, .sp=0x30, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0x53}, {.addr=0xbca8, .value=0x04}, {.addr=0xbca9, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xbca8, .value=0x04, .type=IO_READ},
        {.addr=0xbca9, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0343) {
    const struct CPU_State initial_cpu = {.pc=0x23ce, .a=0x45, .x=0x87, .y=0x2c, .sp=0x35, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x5c}, {.addr=0x23ce, .value=0x04}, {.addr=0x23cf, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x23d0, .a=0x5d, .x=0x87, .y=0x2c, .sp=0x35, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x5c}, {.addr=0x23ce, .value=0x04}, {.addr=0x23cf, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x23ce, .value=0x04, .type=IO_READ},
        {.addr=0x23cf, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0344) {
    const struct CPU_State initial_cpu = {.pc=0x2168, .a=0xa1, .x=0xa7, .y=0x0c, .sp=0x5b, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0xd1}, {.addr=0x2168, .value=0x04}, {.addr=0x2169, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x216a, .a=0xf1, .x=0xa7, .y=0x0c, .sp=0x5b, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0xd1}, {.addr=0x2168, .value=0x04}, {.addr=0x2169, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x2168, .value=0x04, .type=IO_READ},
        {.addr=0x2169, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0345) {
    const struct CPU_State initial_cpu = {.pc=0x032c, .a=0xf2, .x=0xdc, .y=0x26, .sp=0xd2, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0x57}, {.addr=0x032c, .value=0x04}, {.addr=0x032d, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x032e, .a=0xf7, .x=0xdc, .y=0x26, .sp=0xd2, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0x57}, {.addr=0x032c, .value=0x04}, {.addr=0x032d, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x032c, .value=0x04, .type=IO_READ},
        {.addr=0x032d, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0346) {
    const struct CPU_State initial_cpu = {.pc=0x6c32, .a=0xe3, .x=0xff, .y=0x9c, .sp=0x8a, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0x7b}, {.addr=0x6c32, .value=0x04}, {.addr=0x6c33, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x6c34, .a=0xfb, .x=0xff, .y=0x9c, .sp=0x8a, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0x7b}, {.addr=0x6c32, .value=0x04}, {.addr=0x6c33, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c32, .value=0x04, .type=IO_READ},
        {.addr=0x6c33, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0347) {
    const struct CPU_State initial_cpu = {.pc=0xc135, .a=0x2f, .x=0x74, .y=0x21, .sp=0xa5, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0xb1}, {.addr=0xc135, .value=0x04}, {.addr=0xc136, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xc137, .a=0xbf, .x=0x74, .y=0x21, .sp=0xa5, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0xb1}, {.addr=0xc135, .value=0x04}, {.addr=0xc136, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xc135, .value=0x04, .type=IO_READ},
        {.addr=0xc136, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0348) {
    const struct CPU_State initial_cpu = {.pc=0x2455, .a=0x2b, .x=0x64, .y=0xfe, .sp=0xcd, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0xb2}, {.addr=0x2455, .value=0x04}, {.addr=0x2456, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x2457, .a=0xbb, .x=0x64, .y=0xfe, .sp=0xcd, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0xb2}, {.addr=0x2455, .value=0x04}, {.addr=0x2456, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x2455, .value=0x04, .type=IO_READ},
        {.addr=0x2456, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0349) {
    const struct CPU_State initial_cpu = {.pc=0x4a18, .a=0xb7, .x=0x61, .y=0x8f, .sp=0x94, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e1, .value=0x55}, {.addr=0x4a18, .value=0x04}, {.addr=0x4a19, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x4a1a, .a=0xf7, .x=0x61, .y=0x8f, .sp=0x94, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e1, .value=0x55}, {.addr=0x4a18, .value=0x04}, {.addr=0x4a19, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a18, .value=0x04, .type=IO_READ},
        {.addr=0x4a19, .value=0xe1, .type=IO_READ},
        {.addr=0x01e1, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_034A) {
    const struct CPU_State initial_cpu = {.pc=0x199a, .a=0x2e, .x=0x9d, .y=0x5c, .sp=0x7e, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0111, .value=0x41}, {.addr=0x199a, .value=0x04}, {.addr=0x199b, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x199c, .a=0x6f, .x=0x9d, .y=0x5c, .sp=0x7e, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0111, .value=0x41}, {.addr=0x199a, .value=0x04}, {.addr=0x199b, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x199a, .value=0x04, .type=IO_READ},
        {.addr=0x199b, .value=0x11, .type=IO_READ},
        {.addr=0x0111, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_034B) {
    const struct CPU_State initial_cpu = {.pc=0xcd2c, .a=0x1f, .x=0xf2, .y=0x1b, .sp=0x79, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0x2e}, {.addr=0xcd2c, .value=0x04}, {.addr=0xcd2d, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0xcd2e, .a=0x3f, .x=0xf2, .y=0x1b, .sp=0x79, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0x2e}, {.addr=0xcd2c, .value=0x04}, {.addr=0xcd2d, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd2c, .value=0x04, .type=IO_READ},
        {.addr=0xcd2d, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_034C) {
    const struct CPU_State initial_cpu = {.pc=0xae48, .a=0x04, .x=0xa6, .y=0x87, .sp=0x53, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x71}, {.addr=0xae48, .value=0x04}, {.addr=0xae49, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xae4a, .a=0x75, .x=0xa6, .y=0x87, .sp=0x53, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x71}, {.addr=0xae48, .value=0x04}, {.addr=0xae49, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xae48, .value=0x04, .type=IO_READ},
        {.addr=0xae49, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_034D) {
    const struct CPU_State initial_cpu = {.pc=0x8880, .a=0x07, .x=0x88, .y=0xa5, .sp=0x81, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0x0e}, {.addr=0x8880, .value=0x04}, {.addr=0x8881, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x8882, .a=0x0f, .x=0x88, .y=0xa5, .sp=0x81, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0x0e}, {.addr=0x8880, .value=0x04}, {.addr=0x8881, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x8880, .value=0x04, .type=IO_READ},
        {.addr=0x8881, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_034E) {
    const struct CPU_State initial_cpu = {.pc=0x22ae, .a=0x7a, .x=0xa1, .y=0xd2, .sp=0xfd, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0xc6}, {.addr=0x22ae, .value=0x04}, {.addr=0x22af, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x22b0, .a=0xfe, .x=0xa1, .y=0xd2, .sp=0xfd, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0xc6}, {.addr=0x22ae, .value=0x04}, {.addr=0x22af, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x22ae, .value=0x04, .type=IO_READ},
        {.addr=0x22af, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_034F) {
    const struct CPU_State initial_cpu = {.pc=0xfc7c, .a=0x7f, .x=0xf5, .y=0x6e, .sp=0xc9, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x57}, {.addr=0xfc7c, .value=0x04}, {.addr=0xfc7d, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xfc7e, .a=0x7f, .x=0xf5, .y=0x6e, .sp=0xc9, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x57}, {.addr=0xfc7c, .value=0x04}, {.addr=0xfc7d, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc7c, .value=0x04, .type=IO_READ},
        {.addr=0xfc7d, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0350) {
    const struct CPU_State initial_cpu = {.pc=0x4e09, .a=0x32, .x=0xd0, .y=0x83, .sp=0x7c, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0140, .value=0xe3}, {.addr=0x4e09, .value=0x04}, {.addr=0x4e0a, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x4e0b, .a=0xf3, .x=0xd0, .y=0x83, .sp=0x7c, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0140, .value=0xe3}, {.addr=0x4e09, .value=0x04}, {.addr=0x4e0a, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e09, .value=0x04, .type=IO_READ},
        {.addr=0x4e0a, .value=0x40, .type=IO_READ},
        {.addr=0x0140, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0351) {
    const struct CPU_State initial_cpu = {.pc=0x5a85, .a=0x7c, .x=0x05, .y=0x22, .sp=0x38, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0x1c}, {.addr=0x5a85, .value=0x04}, {.addr=0x5a86, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x5a87, .a=0x7c, .x=0x05, .y=0x22, .sp=0x38, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0x1c}, {.addr=0x5a85, .value=0x04}, {.addr=0x5a86, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a85, .value=0x04, .type=IO_READ},
        {.addr=0x5a86, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0352) {
    const struct CPU_State initial_cpu = {.pc=0xe18a, .a=0xb9, .x=0xec, .y=0x23, .sp=0x05, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0xed}, {.addr=0xe18a, .value=0x04}, {.addr=0xe18b, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0xe18c, .a=0xfd, .x=0xec, .y=0x23, .sp=0x05, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0xed}, {.addr=0xe18a, .value=0x04}, {.addr=0xe18b, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0xe18a, .value=0x04, .type=IO_READ},
        {.addr=0xe18b, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0353) {
    const struct CPU_State initial_cpu = {.pc=0xacd8, .a=0x4c, .x=0x47, .y=0x66, .sp=0x41, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x8d}, {.addr=0xacd8, .value=0x04}, {.addr=0xacd9, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xacda, .a=0xcd, .x=0x47, .y=0x66, .sp=0x41, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x8d}, {.addr=0xacd8, .value=0x04}, {.addr=0xacd9, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xacd8, .value=0x04, .type=IO_READ},
        {.addr=0xacd9, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0354) {
    const struct CPU_State initial_cpu = {.pc=0x1061, .a=0x78, .x=0xf4, .y=0xbc, .sp=0x5d, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0x04}, {.addr=0x1061, .value=0x04}, {.addr=0x1062, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x1063, .a=0x7c, .x=0xf4, .y=0xbc, .sp=0x5d, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0x04}, {.addr=0x1061, .value=0x04}, {.addr=0x1062, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x1061, .value=0x04, .type=IO_READ},
        {.addr=0x1062, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0355) {
    const struct CPU_State initial_cpu = {.pc=0x2a6c, .a=0xd9, .x=0x35, .y=0x24, .sp=0x2b, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0x24}, {.addr=0x2a6c, .value=0x04}, {.addr=0x2a6d, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x2a6e, .a=0xfd, .x=0x35, .y=0x24, .sp=0x2b, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0x24}, {.addr=0x2a6c, .value=0x04}, {.addr=0x2a6d, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a6c, .value=0x04, .type=IO_READ},
        {.addr=0x2a6d, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0356) {
    const struct CPU_State initial_cpu = {.pc=0x3a8c, .a=0x4b, .x=0x91, .y=0x20, .sp=0x90, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0xf6}, {.addr=0x3a8c, .value=0x04}, {.addr=0x3a8d, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x3a8e, .a=0xff, .x=0x91, .y=0x20, .sp=0x90, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0xf6}, {.addr=0x3a8c, .value=0x04}, {.addr=0x3a8d, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a8c, .value=0x04, .type=IO_READ},
        {.addr=0x3a8d, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0357) {
    const struct CPU_State initial_cpu = {.pc=0x707d, .a=0xec, .x=0xcd, .y=0xca, .sp=0x7f, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0xee}, {.addr=0x707d, .value=0x04}, {.addr=0x707e, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x707f, .a=0xee, .x=0xcd, .y=0xca, .sp=0x7f, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0xee}, {.addr=0x707d, .value=0x04}, {.addr=0x707e, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x707d, .value=0x04, .type=IO_READ},
        {.addr=0x707e, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0358) {
    const struct CPU_State initial_cpu = {.pc=0x1a2f, .a=0x6f, .x=0x29, .y=0xc3, .sp=0x6f, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0xa4}, {.addr=0x1a2f, .value=0x04}, {.addr=0x1a30, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x1a31, .a=0xef, .x=0x29, .y=0xc3, .sp=0x6f, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0xa4}, {.addr=0x1a2f, .value=0x04}, {.addr=0x1a30, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a2f, .value=0x04, .type=IO_READ},
        {.addr=0x1a30, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0359) {
    const struct CPU_State initial_cpu = {.pc=0x9508, .a=0xa4, .x=0xb3, .y=0x46, .sp=0xea, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0x87}, {.addr=0x9508, .value=0x04}, {.addr=0x9509, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x950a, .a=0xa7, .x=0xb3, .y=0x46, .sp=0xea, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0x87}, {.addr=0x9508, .value=0x04}, {.addr=0x9509, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x9508, .value=0x04, .type=IO_READ},
        {.addr=0x9509, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_035A) {
    const struct CPU_State initial_cpu = {.pc=0x25c3, .a=0xc2, .x=0x92, .y=0xf0, .sp=0x1e, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0199, .value=0xec}, {.addr=0x25c3, .value=0x04}, {.addr=0x25c4, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x25c5, .a=0xee, .x=0x92, .y=0xf0, .sp=0x1e, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0199, .value=0xec}, {.addr=0x25c3, .value=0x04}, {.addr=0x25c4, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x25c3, .value=0x04, .type=IO_READ},
        {.addr=0x25c4, .value=0x99, .type=IO_READ},
        {.addr=0x0199, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_035B) {
    const struct CPU_State initial_cpu = {.pc=0xa7bb, .a=0x36, .x=0x3a, .y=0x39, .sp=0xc7, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0xca}, {.addr=0xa7bb, .value=0x04}, {.addr=0xa7bc, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0xa7bd, .a=0xfe, .x=0x3a, .y=0x39, .sp=0xc7, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0xca}, {.addr=0xa7bb, .value=0x04}, {.addr=0xa7bc, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0xa7bb, .value=0x04, .type=IO_READ},
        {.addr=0xa7bc, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_035C) {
    const struct CPU_State initial_cpu = {.pc=0x7b48, .a=0x33, .x=0x09, .y=0xe9, .sp=0x72, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0x09}, {.addr=0x7b48, .value=0x04}, {.addr=0x7b49, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x7b4a, .a=0x3b, .x=0x09, .y=0xe9, .sp=0x72, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0x09}, {.addr=0x7b48, .value=0x04}, {.addr=0x7b49, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b48, .value=0x04, .type=IO_READ},
        {.addr=0x7b49, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_035D) {
    const struct CPU_State initial_cpu = {.pc=0x6acf, .a=0x65, .x=0xbf, .y=0x01, .sp=0x50, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0xcb}, {.addr=0x6acf, .value=0x04}, {.addr=0x6ad0, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x6ad1, .a=0xef, .x=0xbf, .y=0x01, .sp=0x50, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0xcb}, {.addr=0x6acf, .value=0x04}, {.addr=0x6ad0, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x6acf, .value=0x04, .type=IO_READ},
        {.addr=0x6ad0, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_035E) {
    const struct CPU_State initial_cpu = {.pc=0x301d, .a=0xbb, .x=0x4e, .y=0x4b, .sp=0x73, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0xda}, {.addr=0x301d, .value=0x04}, {.addr=0x301e, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x301f, .a=0xfb, .x=0x4e, .y=0x4b, .sp=0x73, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0xda}, {.addr=0x301d, .value=0x04}, {.addr=0x301e, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x301d, .value=0x04, .type=IO_READ},
        {.addr=0x301e, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_035F) {
    const struct CPU_State initial_cpu = {.pc=0xb92c, .a=0x5b, .x=0xa6, .y=0x5e, .sp=0x3f, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0x7c}, {.addr=0xb92c, .value=0x04}, {.addr=0xb92d, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0xb92e, .a=0x7f, .x=0xa6, .y=0x5e, .sp=0x3f, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0x7c}, {.addr=0xb92c, .value=0x04}, {.addr=0xb92d, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0xb92c, .value=0x04, .type=IO_READ},
        {.addr=0xb92d, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0360) {
    const struct CPU_State initial_cpu = {.pc=0x1b50, .a=0xfd, .x=0xfb, .y=0xc1, .sp=0x56, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0xeb}, {.addr=0x1b50, .value=0x04}, {.addr=0x1b51, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x1b52, .a=0xff, .x=0xfb, .y=0xc1, .sp=0x56, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0xeb}, {.addr=0x1b50, .value=0x04}, {.addr=0x1b51, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b50, .value=0x04, .type=IO_READ},
        {.addr=0x1b51, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0361) {
    const struct CPU_State initial_cpu = {.pc=0xa4f7, .a=0x47, .x=0x4d, .y=0xba, .sp=0x4b, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x3a}, {.addr=0xa4f7, .value=0x04}, {.addr=0xa4f8, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xa4f9, .a=0x7f, .x=0x4d, .y=0xba, .sp=0x4b, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x3a}, {.addr=0xa4f7, .value=0x04}, {.addr=0xa4f8, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xa4f7, .value=0x04, .type=IO_READ},
        {.addr=0xa4f8, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0362) {
    const struct CPU_State initial_cpu = {.pc=0x39d9, .a=0x76, .x=0x36, .y=0xb0, .sp=0xca, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0x55}, {.addr=0x39d9, .value=0x04}, {.addr=0x39da, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x39db, .a=0x77, .x=0x36, .y=0xb0, .sp=0xca, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0x55}, {.addr=0x39d9, .value=0x04}, {.addr=0x39da, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x39d9, .value=0x04, .type=IO_READ},
        {.addr=0x39da, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0363) {
    const struct CPU_State initial_cpu = {.pc=0x1840, .a=0xbf, .x=0x65, .y=0xd6, .sp=0x39, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0x56}, {.addr=0x1840, .value=0x04}, {.addr=0x1841, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x1842, .a=0xff, .x=0x65, .y=0xd6, .sp=0x39, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0x56}, {.addr=0x1840, .value=0x04}, {.addr=0x1841, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x1840, .value=0x04, .type=IO_READ},
        {.addr=0x1841, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0364) {
    const struct CPU_State initial_cpu = {.pc=0x06f2, .a=0x3a, .x=0x79, .y=0x84, .sp=0xe8, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004a, .value=0x54}, {.addr=0x06f2, .value=0x04}, {.addr=0x06f3, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x06f4, .a=0x7e, .x=0x79, .y=0x84, .sp=0xe8, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x004a, .value=0x54}, {.addr=0x06f2, .value=0x04}, {.addr=0x06f3, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x06f2, .value=0x04, .type=IO_READ},
        {.addr=0x06f3, .value=0x4a, .type=IO_READ},
        {.addr=0x004a, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0365) {
    const struct CPU_State initial_cpu = {.pc=0x436f, .a=0xfd, .x=0xe6, .y=0x42, .sp=0x63, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0xd0}, {.addr=0x436f, .value=0x04}, {.addr=0x4370, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x4371, .a=0xfd, .x=0xe6, .y=0x42, .sp=0x63, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0xd0}, {.addr=0x436f, .value=0x04}, {.addr=0x4370, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x436f, .value=0x04, .type=IO_READ},
        {.addr=0x4370, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0366) {
    const struct CPU_State initial_cpu = {.pc=0x5fca, .a=0x0f, .x=0x97, .y=0xac, .sp=0x21, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0xe9}, {.addr=0x5fca, .value=0x04}, {.addr=0x5fcb, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x5fcc, .a=0xef, .x=0x97, .y=0xac, .sp=0x21, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0xe9}, {.addr=0x5fca, .value=0x04}, {.addr=0x5fcb, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x5fca, .value=0x04, .type=IO_READ},
        {.addr=0x5fcb, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0367) {
    const struct CPU_State initial_cpu = {.pc=0x102d, .a=0x34, .x=0x66, .y=0xa8, .sp=0x30, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0x07}, {.addr=0x102d, .value=0x04}, {.addr=0x102e, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x102f, .a=0x37, .x=0x66, .y=0xa8, .sp=0x30, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0x07}, {.addr=0x102d, .value=0x04}, {.addr=0x102e, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x102d, .value=0x04, .type=IO_READ},
        {.addr=0x102e, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0368) {
    const struct CPU_State initial_cpu = {.pc=0x356f, .a=0x3c, .x=0x9b, .y=0xc6, .sp=0x02, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0xe7}, {.addr=0x356f, .value=0x04}, {.addr=0x3570, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x3571, .a=0xff, .x=0x9b, .y=0xc6, .sp=0x02, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0xe7}, {.addr=0x356f, .value=0x04}, {.addr=0x3570, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x356f, .value=0x04, .type=IO_READ},
        {.addr=0x3570, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0369) {
    const struct CPU_State initial_cpu = {.pc=0x7b4e, .a=0xad, .x=0xb5, .y=0xe9, .sp=0xd3, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013d, .value=0xfb}, {.addr=0x7b4e, .value=0x04}, {.addr=0x7b4f, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x7b50, .a=0xff, .x=0xb5, .y=0xe9, .sp=0xd3, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x013d, .value=0xfb}, {.addr=0x7b4e, .value=0x04}, {.addr=0x7b4f, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b4e, .value=0x04, .type=IO_READ},
        {.addr=0x7b4f, .value=0x3d, .type=IO_READ},
        {.addr=0x013d, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_036A) {
    const struct CPU_State initial_cpu = {.pc=0x0909, .a=0x40, .x=0x2c, .y=0xaa, .sp=0x7c, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0168, .value=0xf2}, {.addr=0x0909, .value=0x04}, {.addr=0x090a, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x090b, .a=0xf2, .x=0x2c, .y=0xaa, .sp=0x7c, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0168, .value=0xf2}, {.addr=0x0909, .value=0x04}, {.addr=0x090a, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x0909, .value=0x04, .type=IO_READ},
        {.addr=0x090a, .value=0x68, .type=IO_READ},
        {.addr=0x0168, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_036B) {
    const struct CPU_State initial_cpu = {.pc=0x4ee1, .a=0x40, .x=0x6b, .y=0x1f, .sp=0xf0, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0xda}, {.addr=0x4ee1, .value=0x04}, {.addr=0x4ee2, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x4ee3, .a=0xda, .x=0x6b, .y=0x1f, .sp=0xf0, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0xda}, {.addr=0x4ee1, .value=0x04}, {.addr=0x4ee2, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ee1, .value=0x04, .type=IO_READ},
        {.addr=0x4ee2, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_036C) {
    const struct CPU_State initial_cpu = {.pc=0xd185, .a=0x10, .x=0x72, .y=0x9b, .sp=0xf2, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0x7e}, {.addr=0xd185, .value=0x04}, {.addr=0xd186, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0xd187, .a=0x7e, .x=0x72, .y=0x9b, .sp=0xf2, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0x7e}, {.addr=0xd185, .value=0x04}, {.addr=0xd186, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0xd185, .value=0x04, .type=IO_READ},
        {.addr=0xd186, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_036D) {
    const struct CPU_State initial_cpu = {.pc=0xb976, .a=0x82, .x=0x5f, .y=0x9d, .sp=0x6d, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0x0d}, {.addr=0xb976, .value=0x04}, {.addr=0xb977, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0xb978, .a=0x8f, .x=0x5f, .y=0x9d, .sp=0x6d, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0x0d}, {.addr=0xb976, .value=0x04}, {.addr=0xb977, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0xb976, .value=0x04, .type=IO_READ},
        {.addr=0xb977, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_036E) {
    const struct CPU_State initial_cpu = {.pc=0x0614, .a=0xc1, .x=0x13, .y=0xf7, .sp=0x29, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0x54}, {.addr=0x0614, .value=0x04}, {.addr=0x0615, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x0616, .a=0xd5, .x=0x13, .y=0xf7, .sp=0x29, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0x54}, {.addr=0x0614, .value=0x04}, {.addr=0x0615, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x0614, .value=0x04, .type=IO_READ},
        {.addr=0x0615, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_036F) {
    const struct CPU_State initial_cpu = {.pc=0x6dd7, .a=0xd8, .x=0x67, .y=0x67, .sp=0xf6, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0xed}, {.addr=0x6dd7, .value=0x04}, {.addr=0x6dd8, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x6dd9, .a=0xfd, .x=0x67, .y=0x67, .sp=0xf6, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0xed}, {.addr=0x6dd7, .value=0x04}, {.addr=0x6dd8, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x6dd7, .value=0x04, .type=IO_READ},
        {.addr=0x6dd8, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0370) {
    const struct CPU_State initial_cpu = {.pc=0x4094, .a=0x0a, .x=0xab, .y=0x76, .sp=0xb1, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0xc5}, {.addr=0x4094, .value=0x04}, {.addr=0x4095, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x4096, .a=0xcf, .x=0xab, .y=0x76, .sp=0xb1, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0xc5}, {.addr=0x4094, .value=0x04}, {.addr=0x4095, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x4094, .value=0x04, .type=IO_READ},
        {.addr=0x4095, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0371) {
    const struct CPU_State initial_cpu = {.pc=0xa9b8, .a=0x57, .x=0xb2, .y=0x7e, .sp=0x3d, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006e, .value=0xe3}, {.addr=0xa9b8, .value=0x04}, {.addr=0xa9b9, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0xa9ba, .a=0xf7, .x=0xb2, .y=0x7e, .sp=0x3d, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x006e, .value=0xe3}, {.addr=0xa9b8, .value=0x04}, {.addr=0xa9b9, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9b8, .value=0x04, .type=IO_READ},
        {.addr=0xa9b9, .value=0x6e, .type=IO_READ},
        {.addr=0x006e, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0372) {
    const struct CPU_State initial_cpu = {.pc=0x971f, .a=0xef, .x=0x1a, .y=0x18, .sp=0xb1, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0xdb}, {.addr=0x971f, .value=0x04}, {.addr=0x9720, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0x9721, .a=0xff, .x=0x1a, .y=0x18, .sp=0xb1, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0xdb}, {.addr=0x971f, .value=0x04}, {.addr=0x9720, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0x971f, .value=0x04, .type=IO_READ},
        {.addr=0x9720, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0373) {
    const struct CPU_State initial_cpu = {.pc=0x3e05, .a=0x99, .x=0x6e, .y=0xcc, .sp=0xeb, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0x29}, {.addr=0x3e05, .value=0x04}, {.addr=0x3e06, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x3e07, .a=0xb9, .x=0x6e, .y=0xcc, .sp=0xeb, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0x29}, {.addr=0x3e05, .value=0x04}, {.addr=0x3e06, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e05, .value=0x04, .type=IO_READ},
        {.addr=0x3e06, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0374) {
    const struct CPU_State initial_cpu = {.pc=0x1e63, .a=0xf7, .x=0xf7, .y=0x60, .sp=0xb3, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0xbc}, {.addr=0x1e63, .value=0x04}, {.addr=0x1e64, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x1e65, .a=0xff, .x=0xf7, .y=0x60, .sp=0xb3, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0xbc}, {.addr=0x1e63, .value=0x04}, {.addr=0x1e64, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e63, .value=0x04, .type=IO_READ},
        {.addr=0x1e64, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0377) {
    const struct CPU_State initial_cpu = {.pc=0x3af8, .a=0xd4, .x=0x29, .y=0x92, .sp=0x7b, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0x20}, {.addr=0x3af8, .value=0x04}, {.addr=0x3af9, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x3afa, .a=0xf4, .x=0x29, .y=0x92, .sp=0x7b, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0x20}, {.addr=0x3af8, .value=0x04}, {.addr=0x3af9, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x3af8, .value=0x04, .type=IO_READ},
        {.addr=0x3af9, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0378) {
    const struct CPU_State initial_cpu = {.pc=0x7865, .a=0x5a, .x=0xbd, .y=0xd2, .sp=0xb5, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0x62}, {.addr=0x7865, .value=0x04}, {.addr=0x7866, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x7867, .a=0x7a, .x=0xbd, .y=0xd2, .sp=0xb5, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0x62}, {.addr=0x7865, .value=0x04}, {.addr=0x7866, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x7865, .value=0x04, .type=IO_READ},
        {.addr=0x7866, .value=0x12, .type=IO_READ},
        {.addr=0x0012, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0379) {
    const struct CPU_State initial_cpu = {.pc=0xfcd1, .a=0x33, .x=0xc5, .y=0x2a, .sp=0x47, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0x64}, {.addr=0xfcd1, .value=0x04}, {.addr=0xfcd2, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xfcd3, .a=0x77, .x=0xc5, .y=0x2a, .sp=0x47, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0x64}, {.addr=0xfcd1, .value=0x04}, {.addr=0xfcd2, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xfcd1, .value=0x04, .type=IO_READ},
        {.addr=0xfcd2, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_037A) {
    const struct CPU_State initial_cpu = {.pc=0x2380, .a=0xe5, .x=0x52, .y=0xb3, .sp=0xe6, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ce, .value=0xd4}, {.addr=0x2380, .value=0x04}, {.addr=0x2381, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x2382, .a=0xf5, .x=0x52, .y=0xb3, .sp=0xe6, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ce, .value=0xd4}, {.addr=0x2380, .value=0x04}, {.addr=0x2381, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x2380, .value=0x04, .type=IO_READ},
        {.addr=0x2381, .value=0xce, .type=IO_READ},
        {.addr=0x01ce, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_037B) {
    const struct CPU_State initial_cpu = {.pc=0xd275, .a=0xda, .x=0x3d, .y=0x3e, .sp=0x4d, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0168, .value=0x6d}, {.addr=0xd275, .value=0x04}, {.addr=0xd276, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0xd277, .a=0xff, .x=0x3d, .y=0x3e, .sp=0x4d, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0168, .value=0x6d}, {.addr=0xd275, .value=0x04}, {.addr=0xd276, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0xd275, .value=0x04, .type=IO_READ},
        {.addr=0xd276, .value=0x68, .type=IO_READ},
        {.addr=0x0168, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_037C) {
    const struct CPU_State initial_cpu = {.pc=0xcb2f, .a=0xb8, .x=0x79, .y=0x99, .sp=0xc7, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0x0c}, {.addr=0xcb2f, .value=0x04}, {.addr=0xcb30, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0xcb31, .a=0xbc, .x=0x79, .y=0x99, .sp=0xc7, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0x0c}, {.addr=0xcb2f, .value=0x04}, {.addr=0xcb30, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb2f, .value=0x04, .type=IO_READ},
        {.addr=0xcb30, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_037D) {
    const struct CPU_State initial_cpu = {.pc=0xb4c2, .a=0x95, .x=0x46, .y=0x86, .sp=0xd0, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0xa0}, {.addr=0xb4c2, .value=0x04}, {.addr=0xb4c3, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0xb4c4, .a=0xb5, .x=0x46, .y=0x86, .sp=0xd0, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0xa0}, {.addr=0xb4c2, .value=0x04}, {.addr=0xb4c3, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0xb4c2, .value=0x04, .type=IO_READ},
        {.addr=0xb4c3, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_037E) {
    const struct CPU_State initial_cpu = {.pc=0x6043, .a=0xe6, .x=0x10, .y=0x34, .sp=0xe3, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0x8f}, {.addr=0x6043, .value=0x04}, {.addr=0x6044, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x6045, .a=0xef, .x=0x10, .y=0x34, .sp=0xe3, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0x8f}, {.addr=0x6043, .value=0x04}, {.addr=0x6044, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6043, .value=0x04, .type=IO_READ},
        {.addr=0x6044, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_037F) {
    const struct CPU_State initial_cpu = {.pc=0xd211, .a=0xa1, .x=0x58, .y=0xd5, .sp=0x83, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0x58}, {.addr=0xd211, .value=0x04}, {.addr=0xd212, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0xd213, .a=0xf9, .x=0x58, .y=0xd5, .sp=0x83, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0x58}, {.addr=0xd211, .value=0x04}, {.addr=0xd212, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0xd211, .value=0x04, .type=IO_READ},
        {.addr=0xd212, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0380) {
    const struct CPU_State initial_cpu = {.pc=0x1250, .a=0xbc, .x=0x2b, .y=0x09, .sp=0xa9, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0x39}, {.addr=0x1250, .value=0x04}, {.addr=0x1251, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x1252, .a=0xbd, .x=0x2b, .y=0x09, .sp=0xa9, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0x39}, {.addr=0x1250, .value=0x04}, {.addr=0x1251, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x1250, .value=0x04, .type=IO_READ},
        {.addr=0x1251, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0381) {
    const struct CPU_State initial_cpu = {.pc=0x16c3, .a=0x75, .x=0x5f, .y=0xa7, .sp=0x46, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0077, .value=0xe9}, {.addr=0x16c3, .value=0x04}, {.addr=0x16c4, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x16c5, .a=0xfd, .x=0x5f, .y=0xa7, .sp=0x46, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0077, .value=0xe9}, {.addr=0x16c3, .value=0x04}, {.addr=0x16c4, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x16c3, .value=0x04, .type=IO_READ},
        {.addr=0x16c4, .value=0x77, .type=IO_READ},
        {.addr=0x0077, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0382) {
    const struct CPU_State initial_cpu = {.pc=0xe69b, .a=0x94, .x=0xd3, .y=0xe1, .sp=0xab, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0199, .value=0x7f}, {.addr=0xe69b, .value=0x04}, {.addr=0xe69c, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0xe69d, .a=0xff, .x=0xd3, .y=0xe1, .sp=0xab, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0199, .value=0x7f}, {.addr=0xe69b, .value=0x04}, {.addr=0xe69c, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0xe69b, .value=0x04, .type=IO_READ},
        {.addr=0xe69c, .value=0x99, .type=IO_READ},
        {.addr=0x0199, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0383) {
    const struct CPU_State initial_cpu = {.pc=0x90fd, .a=0x55, .x=0xcf, .y=0xeb, .sp=0x6b, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0033, .value=0xa9}, {.addr=0x90fd, .value=0x04}, {.addr=0x90fe, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x90ff, .a=0xfd, .x=0xcf, .y=0xeb, .sp=0x6b, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0033, .value=0xa9}, {.addr=0x90fd, .value=0x04}, {.addr=0x90fe, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x90fd, .value=0x04, .type=IO_READ},
        {.addr=0x90fe, .value=0x33, .type=IO_READ},
        {.addr=0x0033, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0384) {
    const struct CPU_State initial_cpu = {.pc=0x60d5, .a=0x0c, .x=0x47, .y=0x4e, .sp=0x59, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0x13}, {.addr=0x60d5, .value=0x04}, {.addr=0x60d6, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x60d7, .a=0x1f, .x=0x47, .y=0x4e, .sp=0x59, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0x13}, {.addr=0x60d5, .value=0x04}, {.addr=0x60d6, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x60d5, .value=0x04, .type=IO_READ},
        {.addr=0x60d6, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0385) {
    const struct CPU_State initial_cpu = {.pc=0x4a86, .a=0x5e, .x=0xe8, .y=0xc9, .sp=0x7f, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0xeb}, {.addr=0x4a86, .value=0x04}, {.addr=0x4a87, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x4a88, .a=0xff, .x=0xe8, .y=0xc9, .sp=0x7f, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0xeb}, {.addr=0x4a86, .value=0x04}, {.addr=0x4a87, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a86, .value=0x04, .type=IO_READ},
        {.addr=0x4a87, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0386) {
    const struct CPU_State initial_cpu = {.pc=0x52c5, .a=0x17, .x=0xa8, .y=0xe4, .sp=0x57, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0x2f}, {.addr=0x52c5, .value=0x04}, {.addr=0x52c6, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x52c7, .a=0x3f, .x=0xa8, .y=0xe4, .sp=0x57, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0x2f}, {.addr=0x52c5, .value=0x04}, {.addr=0x52c6, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x52c5, .value=0x04, .type=IO_READ},
        {.addr=0x52c6, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0387) {
    const struct CPU_State initial_cpu = {.pc=0xf9ab, .a=0xbb, .x=0x17, .y=0x99, .sp=0x42, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0xc0}, {.addr=0xf9ab, .value=0x04}, {.addr=0xf9ac, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0xf9ad, .a=0xfb, .x=0x17, .y=0x99, .sp=0x42, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0xc0}, {.addr=0xf9ab, .value=0x04}, {.addr=0xf9ac, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9ab, .value=0x04, .type=IO_READ},
        {.addr=0xf9ac, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0388) {
    const struct CPU_State initial_cpu = {.pc=0xfff7, .a=0xe9, .x=0xcf, .y=0x38, .sp=0xf9, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0x06}, {.addr=0xfff7, .value=0x04}, {.addr=0xfff8, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0xfff9, .a=0xef, .x=0xcf, .y=0x38, .sp=0xf9, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0x06}, {.addr=0xfff7, .value=0x04}, {.addr=0xfff8, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0xfff7, .value=0x04, .type=IO_READ},
        {.addr=0xfff8, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0389) {
    const struct CPU_State initial_cpu = {.pc=0x51db, .a=0xf8, .x=0x00, .y=0x4e, .sp=0x8d, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0x15}, {.addr=0x51db, .value=0x04}, {.addr=0x51dc, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0x51dd, .a=0xfd, .x=0x00, .y=0x4e, .sp=0x8d, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0x15}, {.addr=0x51db, .value=0x04}, {.addr=0x51dc, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0x51db, .value=0x04, .type=IO_READ},
        {.addr=0x51dc, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_038A) {
    const struct CPU_State initial_cpu = {.pc=0x44b4, .a=0x47, .x=0x15, .y=0x28, .sp=0xe5, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0xf2}, {.addr=0x44b4, .value=0x04}, {.addr=0x44b5, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x44b6, .a=0xf7, .x=0x15, .y=0x28, .sp=0xe5, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0xf2}, {.addr=0x44b4, .value=0x04}, {.addr=0x44b5, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x44b4, .value=0x04, .type=IO_READ},
        {.addr=0x44b5, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_038B) {
    const struct CPU_State initial_cpu = {.pc=0xcf80, .a=0x3c, .x=0x53, .y=0x54, .sp=0xb5, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0x0d}, {.addr=0xcf80, .value=0x04}, {.addr=0xcf81, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0xcf82, .a=0x3d, .x=0x53, .y=0x54, .sp=0xb5, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0x0d}, {.addr=0xcf80, .value=0x04}, {.addr=0xcf81, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0xcf80, .value=0x04, .type=IO_READ},
        {.addr=0xcf81, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_038C) {
    const struct CPU_State initial_cpu = {.pc=0x1f79, .a=0x31, .x=0xb2, .y=0x5c, .sp=0xd1, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0x6e}, {.addr=0x1f79, .value=0x04}, {.addr=0x1f7a, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x1f7b, .a=0x7f, .x=0xb2, .y=0x5c, .sp=0xd1, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0x6e}, {.addr=0x1f79, .value=0x04}, {.addr=0x1f7a, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f79, .value=0x04, .type=IO_READ},
        {.addr=0x1f7a, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_038D) {
    const struct CPU_State initial_cpu = {.pc=0xbd62, .a=0xe4, .x=0xca, .y=0x82, .sp=0x49, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x08}, {.addr=0xbd62, .value=0x04}, {.addr=0xbd63, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xbd64, .a=0xec, .x=0xca, .y=0x82, .sp=0x49, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x08}, {.addr=0xbd62, .value=0x04}, {.addr=0xbd63, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd62, .value=0x04, .type=IO_READ},
        {.addr=0xbd63, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_038E) {
    const struct CPU_State initial_cpu = {.pc=0x0a05, .a=0xe7, .x=0x5a, .y=0x47, .sp=0xae, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0x0c}, {.addr=0x0a05, .value=0x04}, {.addr=0x0a06, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x0a07, .a=0xef, .x=0x5a, .y=0x47, .sp=0xae, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0x0c}, {.addr=0x0a05, .value=0x04}, {.addr=0x0a06, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a05, .value=0x04, .type=IO_READ},
        {.addr=0x0a06, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_038F) {
    const struct CPU_State initial_cpu = {.pc=0x3dcb, .a=0x6a, .x=0x6f, .y=0xd3, .sp=0xa3, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0x76}, {.addr=0x3dcb, .value=0x04}, {.addr=0x3dcc, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x3dcd, .a=0x7e, .x=0x6f, .y=0xd3, .sp=0xa3, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0x76}, {.addr=0x3dcb, .value=0x04}, {.addr=0x3dcc, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x3dcb, .value=0x04, .type=IO_READ},
        {.addr=0x3dcc, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0390) {
    const struct CPU_State initial_cpu = {.pc=0xaaff, .a=0x35, .x=0x65, .y=0x6a, .sp=0xab, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0xb6}, {.addr=0xaaff, .value=0x04}, {.addr=0xab00, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0xab01, .a=0xb7, .x=0x65, .y=0x6a, .sp=0xab, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0xb6}, {.addr=0xaaff, .value=0x04}, {.addr=0xab00, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0xaaff, .value=0x04, .type=IO_READ},
        {.addr=0xab00, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0391) {
    const struct CPU_State initial_cpu = {.pc=0x16eb, .a=0x32, .x=0x36, .y=0xac, .sp=0x64, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0x0e}, {.addr=0x16eb, .value=0x04}, {.addr=0x16ec, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x16ed, .a=0x3e, .x=0x36, .y=0xac, .sp=0x64, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0x0e}, {.addr=0x16eb, .value=0x04}, {.addr=0x16ec, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x16eb, .value=0x04, .type=IO_READ},
        {.addr=0x16ec, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0392) {
    const struct CPU_State initial_cpu = {.pc=0x48a4, .a=0x8d, .x=0xd1, .y=0xf7, .sp=0x14, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x13}, {.addr=0x48a4, .value=0x04}, {.addr=0x48a5, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x48a6, .a=0x9f, .x=0xd1, .y=0xf7, .sp=0x14, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x13}, {.addr=0x48a4, .value=0x04}, {.addr=0x48a5, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x48a4, .value=0x04, .type=IO_READ},
        {.addr=0x48a5, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0393) {
    const struct CPU_State initial_cpu = {.pc=0xa6c1, .a=0x26, .x=0x28, .y=0xc7, .sp=0x73, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0xaf}, {.addr=0xa6c1, .value=0x04}, {.addr=0xa6c2, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0xa6c3, .a=0xaf, .x=0x28, .y=0xc7, .sp=0x73, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0xaf}, {.addr=0xa6c1, .value=0x04}, {.addr=0xa6c2, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0xa6c1, .value=0x04, .type=IO_READ},
        {.addr=0xa6c2, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0394) {
    const struct CPU_State initial_cpu = {.pc=0x64df, .a=0xcb, .x=0x62, .y=0x5f, .sp=0x62, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x75}, {.addr=0x64df, .value=0x04}, {.addr=0x64e0, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x64e1, .a=0xff, .x=0x62, .y=0x5f, .sp=0x62, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x75}, {.addr=0x64df, .value=0x04}, {.addr=0x64e0, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x64df, .value=0x04, .type=IO_READ},
        {.addr=0x64e0, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0395) {
    const struct CPU_State initial_cpu = {.pc=0x6140, .a=0x43, .x=0xe5, .y=0x34, .sp=0xb3, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0x22}, {.addr=0x6140, .value=0x04}, {.addr=0x6141, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x6142, .a=0x63, .x=0xe5, .y=0x34, .sp=0xb3, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0x22}, {.addr=0x6140, .value=0x04}, {.addr=0x6141, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x6140, .value=0x04, .type=IO_READ},
        {.addr=0x6141, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0396) {
    const struct CPU_State initial_cpu = {.pc=0xc9c6, .a=0xb0, .x=0x75, .y=0x3b, .sp=0x57, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x63}, {.addr=0xc9c6, .value=0x04}, {.addr=0xc9c7, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xc9c8, .a=0xf3, .x=0x75, .y=0x3b, .sp=0x57, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x63}, {.addr=0xc9c6, .value=0x04}, {.addr=0xc9c7, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xc9c6, .value=0x04, .type=IO_READ},
        {.addr=0xc9c7, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0398) {
    const struct CPU_State initial_cpu = {.pc=0x9a4e, .a=0x10, .x=0x2d, .y=0x3d, .sp=0x7f, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0xa4}, {.addr=0x9a4e, .value=0x04}, {.addr=0x9a4f, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x9a50, .a=0xb4, .x=0x2d, .y=0x3d, .sp=0x7f, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0xa4}, {.addr=0x9a4e, .value=0x04}, {.addr=0x9a4f, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a4e, .value=0x04, .type=IO_READ},
        {.addr=0x9a4f, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_0399) {
    const struct CPU_State initial_cpu = {.pc=0x044b, .a=0xa9, .x=0xff, .y=0x19, .sp=0x5f, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0x40}, {.addr=0x044b, .value=0x04}, {.addr=0x044c, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x044d, .a=0xe9, .x=0xff, .y=0x19, .sp=0x5f, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0x40}, {.addr=0x044b, .value=0x04}, {.addr=0x044c, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x044b, .value=0x04, .type=IO_READ},
        {.addr=0x044c, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_039A) {
    const struct CPU_State initial_cpu = {.pc=0x5a54, .a=0x6d, .x=0x13, .y=0x5e, .sp=0xb5, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0x02}, {.addr=0x5a54, .value=0x04}, {.addr=0x5a55, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x5a56, .a=0x6f, .x=0x13, .y=0x5e, .sp=0xb5, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0x02}, {.addr=0x5a54, .value=0x04}, {.addr=0x5a55, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a54, .value=0x04, .type=IO_READ},
        {.addr=0x5a55, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_039B) {
    const struct CPU_State initial_cpu = {.pc=0x002d, .a=0xef, .x=0xa4, .y=0xfe, .sp=0xbf, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x04}, {.addr=0x002e, .value=0x70}, {.addr=0x0070, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x002f, .a=0xff, .x=0xa4, .y=0xfe, .sp=0xbf, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x04}, {.addr=0x002e, .value=0x70}, {.addr=0x0070, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x002d, .value=0x04, .type=IO_READ},
        {.addr=0x002e, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_039C) {
    const struct CPU_State initial_cpu = {.pc=0xff37, .a=0x04, .x=0xf2, .y=0xac, .sp=0xc7, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0xdd}, {.addr=0xff37, .value=0x04}, {.addr=0xff38, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0xff39, .a=0xdd, .x=0xf2, .y=0xac, .sp=0xc7, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0xdd}, {.addr=0xff37, .value=0x04}, {.addr=0xff38, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0xff37, .value=0x04, .type=IO_READ},
        {.addr=0xff38, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_039D) {
    const struct CPU_State initial_cpu = {.pc=0xe873, .a=0x6b, .x=0xfb, .y=0xd0, .sp=0xce, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x78}, {.addr=0xe873, .value=0x04}, {.addr=0xe874, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xe875, .a=0x7b, .x=0xfb, .y=0xd0, .sp=0xce, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x78}, {.addr=0xe873, .value=0x04}, {.addr=0xe874, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xe873, .value=0x04, .type=IO_READ},
        {.addr=0xe874, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_039E) {
    const struct CPU_State initial_cpu = {.pc=0xfb45, .a=0xe7, .x=0x99, .y=0x50, .sp=0x83, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0x53}, {.addr=0xfb45, .value=0x04}, {.addr=0xfb46, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xfb47, .a=0xf7, .x=0x99, .y=0x50, .sp=0x83, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0x53}, {.addr=0xfb45, .value=0x04}, {.addr=0xfb46, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb45, .value=0x04, .type=IO_READ},
        {.addr=0xfb46, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_039F) {
    const struct CPU_State initial_cpu = {.pc=0xb2c4, .a=0xb8, .x=0xe9, .y=0xd4, .sp=0xa9, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0x6a}, {.addr=0xb2c4, .value=0x04}, {.addr=0xb2c5, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0xb2c6, .a=0xfa, .x=0xe9, .y=0xd4, .sp=0xa9, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0x6a}, {.addr=0xb2c4, .value=0x04}, {.addr=0xb2c5, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2c4, .value=0x04, .type=IO_READ},
        {.addr=0xb2c5, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xf8b4, .a=0x65, .x=0xd3, .y=0x76, .sp=0x13, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0038, .value=0x52}, {.addr=0xf8b4, .value=0x04}, {.addr=0xf8b5, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0xf8b6, .a=0x77, .x=0xd3, .y=0x76, .sp=0x13, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0038, .value=0x52}, {.addr=0xf8b4, .value=0x04}, {.addr=0xf8b5, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0xf8b4, .value=0x04, .type=IO_READ},
        {.addr=0xf8b5, .value=0x38, .type=IO_READ},
        {.addr=0x0038, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xcb7e, .a=0xbf, .x=0x31, .y=0x74, .sp=0x2e, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0x5e}, {.addr=0xcb7e, .value=0x04}, {.addr=0xcb7f, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0xcb80, .a=0xff, .x=0x31, .y=0x74, .sp=0x2e, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0x5e}, {.addr=0xcb7e, .value=0x04}, {.addr=0xcb7f, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb7e, .value=0x04, .type=IO_READ},
        {.addr=0xcb7f, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xdbe9, .a=0x9e, .x=0x30, .y=0x25, .sp=0xff, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0xcf}, {.addr=0xdbe9, .value=0x04}, {.addr=0xdbea, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0xdbeb, .a=0xdf, .x=0x30, .y=0x25, .sp=0xff, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0xcf}, {.addr=0xdbe9, .value=0x04}, {.addr=0xdbea, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbe9, .value=0x04, .type=IO_READ},
        {.addr=0xdbea, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x88e6, .a=0xea, .x=0xe0, .y=0xc2, .sp=0x3a, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016d, .value=0x2a}, {.addr=0x88e6, .value=0x04}, {.addr=0x88e7, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x88e8, .a=0xea, .x=0xe0, .y=0xc2, .sp=0x3a, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x016d, .value=0x2a}, {.addr=0x88e6, .value=0x04}, {.addr=0x88e7, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x88e6, .value=0x04, .type=IO_READ},
        {.addr=0x88e7, .value=0x6d, .type=IO_READ},
        {.addr=0x016d, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xbc51, .a=0x8a, .x=0xe3, .y=0x3b, .sp=0x93, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x58}, {.addr=0xbc51, .value=0x04}, {.addr=0xbc52, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xbc53, .a=0xda, .x=0xe3, .y=0x3b, .sp=0x93, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x58}, {.addr=0xbc51, .value=0x04}, {.addr=0xbc52, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc51, .value=0x04, .type=IO_READ},
        {.addr=0xbc52, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x6581, .a=0x57, .x=0xb4, .y=0xe0, .sp=0xa9, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0x92}, {.addr=0x6581, .value=0x04}, {.addr=0x6582, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0x6583, .a=0xd7, .x=0xb4, .y=0xe0, .sp=0xa9, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0x92}, {.addr=0x6581, .value=0x04}, {.addr=0x6582, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0x6581, .value=0x04, .type=IO_READ},
        {.addr=0x6582, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x55da, .a=0x6c, .x=0xe0, .y=0x77, .sp=0x65, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0x51}, {.addr=0x55da, .value=0x04}, {.addr=0x55db, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x55dc, .a=0x7d, .x=0xe0, .y=0x77, .sp=0x65, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0x51}, {.addr=0x55da, .value=0x04}, {.addr=0x55db, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x55da, .value=0x04, .type=IO_READ},
        {.addr=0x55db, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xa9a2, .a=0x7f, .x=0x73, .y=0xab, .sp=0xda, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0xdb}, {.addr=0xa9a2, .value=0x04}, {.addr=0xa9a3, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0xa9a4, .a=0xff, .x=0x73, .y=0xab, .sp=0xda, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0xdb}, {.addr=0xa9a2, .value=0x04}, {.addr=0xa9a3, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9a2, .value=0x04, .type=IO_READ},
        {.addr=0xa9a3, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xbf31, .a=0xa6, .x=0x99, .y=0xf4, .sp=0x43, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0x61}, {.addr=0xbf31, .value=0x04}, {.addr=0xbf32, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0xbf33, .a=0xe7, .x=0x99, .y=0xf4, .sp=0x43, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0x61}, {.addr=0xbf31, .value=0x04}, {.addr=0xbf32, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf31, .value=0x04, .type=IO_READ},
        {.addr=0xbf32, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x4aee, .a=0xa2, .x=0x9d, .y=0xe4, .sp=0x12, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0xa8}, {.addr=0x4aee, .value=0x04}, {.addr=0x4aef, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x4af0, .a=0xaa, .x=0x9d, .y=0xe4, .sp=0x12, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0xa8}, {.addr=0x4aee, .value=0x04}, {.addr=0x4aef, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x4aee, .value=0x04, .type=IO_READ},
        {.addr=0x4aef, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xf33b, .a=0xc0, .x=0x27, .y=0xc3, .sp=0x15, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0xe7}, {.addr=0xf33b, .value=0x04}, {.addr=0xf33c, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xf33d, .a=0xe7, .x=0x27, .y=0xc3, .sp=0x15, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0xe7}, {.addr=0xf33b, .value=0x04}, {.addr=0xf33c, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xf33b, .value=0x04, .type=IO_READ},
        {.addr=0xf33c, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x6b08, .a=0x56, .x=0x9f, .y=0xcf, .sp=0xf6, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x41}, {.addr=0x6b08, .value=0x04}, {.addr=0x6b09, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x6b0a, .a=0x57, .x=0x9f, .y=0xcf, .sp=0xf6, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x41}, {.addr=0x6b08, .value=0x04}, {.addr=0x6b09, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b08, .value=0x04, .type=IO_READ},
        {.addr=0x6b09, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xd8fe, .a=0x32, .x=0x44, .y=0xf9, .sp=0xad, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0x3b}, {.addr=0xd8fe, .value=0x04}, {.addr=0xd8ff, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0xd900, .a=0x3b, .x=0x44, .y=0xf9, .sp=0xad, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0x3b}, {.addr=0xd8fe, .value=0x04}, {.addr=0xd8ff, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0xd8fe, .value=0x04, .type=IO_READ},
        {.addr=0xd8ff, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x1e7c, .a=0xca, .x=0xfe, .y=0x55, .sp=0x79, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0x5c}, {.addr=0x1e7c, .value=0x04}, {.addr=0x1e7d, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x1e7e, .a=0xde, .x=0xfe, .y=0x55, .sp=0x79, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0x5c}, {.addr=0x1e7c, .value=0x04}, {.addr=0x1e7d, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e7c, .value=0x04, .type=IO_READ},
        {.addr=0x1e7d, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x6d34, .a=0x50, .x=0x30, .y=0x9f, .sp=0x08, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0xc0}, {.addr=0x6d34, .value=0x04}, {.addr=0x6d35, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x6d36, .a=0xd0, .x=0x30, .y=0x9f, .sp=0x08, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0xc0}, {.addr=0x6d34, .value=0x04}, {.addr=0x6d35, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d34, .value=0x04, .type=IO_READ},
        {.addr=0x6d35, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x7eff, .a=0x71, .x=0x85, .y=0x42, .sp=0x7b, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0x1c}, {.addr=0x7eff, .value=0x04}, {.addr=0x7f00, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x7f01, .a=0x7d, .x=0x85, .y=0x42, .sp=0x7b, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0x1c}, {.addr=0x7eff, .value=0x04}, {.addr=0x7f00, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x7eff, .value=0x04, .type=IO_READ},
        {.addr=0x7f00, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x77eb, .a=0x6f, .x=0x5e, .y=0x93, .sp=0x73, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x14}, {.addr=0x77eb, .value=0x04}, {.addr=0x77ec, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x77ed, .a=0x7f, .x=0x5e, .y=0x93, .sp=0x73, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x14}, {.addr=0x77eb, .value=0x04}, {.addr=0x77ec, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x77eb, .value=0x04, .type=IO_READ},
        {.addr=0x77ec, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xcbef, .a=0xa0, .x=0xa1, .y=0xb2, .sp=0x99, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0xd0}, {.addr=0xcbef, .value=0x04}, {.addr=0xcbf0, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0xcbf1, .a=0xf0, .x=0xa1, .y=0xb2, .sp=0x99, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0xd0}, {.addr=0xcbef, .value=0x04}, {.addr=0xcbf0, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0xcbef, .value=0x04, .type=IO_READ},
        {.addr=0xcbf0, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x18bd, .a=0x9a, .x=0x00, .y=0x30, .sp=0x5f, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0025, .value=0xde}, {.addr=0x18bd, .value=0x04}, {.addr=0x18be, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x18bf, .a=0xde, .x=0x00, .y=0x30, .sp=0x5f, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0025, .value=0xde}, {.addr=0x18bd, .value=0x04}, {.addr=0x18be, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x18bd, .value=0x04, .type=IO_READ},
        {.addr=0x18be, .value=0x25, .type=IO_READ},
        {.addr=0x0025, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xde82, .a=0x1e, .x=0x0c, .y=0xad, .sp=0x96, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0x8a}, {.addr=0xde82, .value=0x04}, {.addr=0xde83, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0xde84, .a=0x9e, .x=0x0c, .y=0xad, .sp=0x96, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0x8a}, {.addr=0xde82, .value=0x04}, {.addr=0xde83, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0xde82, .value=0x04, .type=IO_READ},
        {.addr=0xde83, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x876b, .a=0xc3, .x=0xb1, .y=0x44, .sp=0x17, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0x05}, {.addr=0x876b, .value=0x04}, {.addr=0x876c, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x876d, .a=0xc7, .x=0xb1, .y=0x44, .sp=0x17, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0x05}, {.addr=0x876b, .value=0x04}, {.addr=0x876c, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x876b, .value=0x04, .type=IO_READ},
        {.addr=0x876c, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xcdff, .a=0xa0, .x=0x60, .y=0x9c, .sp=0xfd, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0x0b}, {.addr=0xcdff, .value=0x04}, {.addr=0xce00, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0xce01, .a=0xab, .x=0x60, .y=0x9c, .sp=0xfd, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0x0b}, {.addr=0xcdff, .value=0x04}, {.addr=0xce00, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0xcdff, .value=0x04, .type=IO_READ},
        {.addr=0xce00, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x5137, .a=0x91, .x=0x32, .y=0xe5, .sp=0xfa, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0x96}, {.addr=0x5137, .value=0x04}, {.addr=0x5138, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x5139, .a=0x97, .x=0x32, .y=0xe5, .sp=0xfa, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0x96}, {.addr=0x5137, .value=0x04}, {.addr=0x5138, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x5137, .value=0x04, .type=IO_READ},
        {.addr=0x5138, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xae44, .a=0x6e, .x=0xd4, .y=0xc5, .sp=0x39, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0xfd}, {.addr=0xae44, .value=0x04}, {.addr=0xae45, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xae46, .a=0xff, .x=0xd4, .y=0xc5, .sp=0x39, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0xfd}, {.addr=0xae44, .value=0x04}, {.addr=0xae45, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xae44, .value=0x04, .type=IO_READ},
        {.addr=0xae45, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xc0bd, .a=0xbd, .x=0xbb, .y=0x00, .sp=0x6d, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016d, .value=0xab}, {.addr=0xc0bd, .value=0x04}, {.addr=0xc0be, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0xc0bf, .a=0xbf, .x=0xbb, .y=0x00, .sp=0x6d, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x016d, .value=0xab}, {.addr=0xc0bd, .value=0x04}, {.addr=0xc0be, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0bd, .value=0x04, .type=IO_READ},
        {.addr=0xc0be, .value=0x6d, .type=IO_READ},
        {.addr=0x016d, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x3b7f, .a=0x5c, .x=0xc9, .y=0xe7, .sp=0x4b, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0xe5}, {.addr=0x3b7f, .value=0x04}, {.addr=0x3b80, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x3b81, .a=0xfd, .x=0xc9, .y=0xe7, .sp=0x4b, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0xe5}, {.addr=0x3b7f, .value=0x04}, {.addr=0x3b80, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b7f, .value=0x04, .type=IO_READ},
        {.addr=0x3b80, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x2642, .a=0x1d, .x=0xd5, .y=0x9b, .sp=0x06, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x21}, {.addr=0x2642, .value=0x04}, {.addr=0x2643, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x2644, .a=0x3d, .x=0xd5, .y=0x9b, .sp=0x06, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x21}, {.addr=0x2642, .value=0x04}, {.addr=0x2643, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x2642, .value=0x04, .type=IO_READ},
        {.addr=0x2643, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x3e56, .a=0x32, .x=0x79, .y=0x16, .sp=0x54, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0xdf}, {.addr=0x3e56, .value=0x04}, {.addr=0x3e57, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x3e58, .a=0xff, .x=0x79, .y=0x16, .sp=0x54, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0xdf}, {.addr=0x3e56, .value=0x04}, {.addr=0x3e57, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e56, .value=0x04, .type=IO_READ},
        {.addr=0x3e57, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xdbce, .a=0x75, .x=0x61, .y=0x5a, .sp=0x9c, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0xdb}, {.addr=0xdbce, .value=0x04}, {.addr=0xdbcf, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xdbd0, .a=0xff, .x=0x61, .y=0x5a, .sp=0x9c, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0xdb}, {.addr=0xdbce, .value=0x04}, {.addr=0xdbcf, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbce, .value=0x04, .type=IO_READ},
        {.addr=0xdbcf, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x76b1, .a=0x8b, .x=0xcd, .y=0x03, .sp=0x5a, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0xb2}, {.addr=0x76b1, .value=0x04}, {.addr=0x76b2, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x76b3, .a=0xbb, .x=0xcd, .y=0x03, .sp=0x5a, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0xb2}, {.addr=0x76b1, .value=0x04}, {.addr=0x76b2, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x76b1, .value=0x04, .type=IO_READ},
        {.addr=0x76b2, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xf94a, .a=0x56, .x=0x4e, .y=0x14, .sp=0x08, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0x81}, {.addr=0xf94a, .value=0x04}, {.addr=0xf94b, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0xf94c, .a=0xd7, .x=0x4e, .y=0x14, .sp=0x08, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0x81}, {.addr=0xf94a, .value=0x04}, {.addr=0xf94b, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0xf94a, .value=0x04, .type=IO_READ},
        {.addr=0xf94b, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x105e, .a=0x5c, .x=0xaf, .y=0x3d, .sp=0xa9, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0x72}, {.addr=0x105e, .value=0x04}, {.addr=0x105f, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x1060, .a=0x7e, .x=0xaf, .y=0x3d, .sp=0xa9, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0x72}, {.addr=0x105e, .value=0x04}, {.addr=0x105f, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x105e, .value=0x04, .type=IO_READ},
        {.addr=0x105f, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x8c48, .a=0x8f, .x=0x49, .y=0xd7, .sp=0xac, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0xf1}, {.addr=0x8c48, .value=0x04}, {.addr=0x8c49, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x8c4a, .a=0xff, .x=0x49, .y=0xd7, .sp=0xac, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0xf1}, {.addr=0x8c48, .value=0x04}, {.addr=0x8c49, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c48, .value=0x04, .type=IO_READ},
        {.addr=0x8c49, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x369c, .a=0xfc, .x=0xd7, .y=0x0a, .sp=0x0c, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0xa2}, {.addr=0x369c, .value=0x04}, {.addr=0x369d, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x369e, .a=0xfe, .x=0xd7, .y=0x0a, .sp=0x0c, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0xa2}, {.addr=0x369c, .value=0x04}, {.addr=0x369d, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x369c, .value=0x04, .type=IO_READ},
        {.addr=0x369d, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x62b4, .a=0x1c, .x=0x72, .y=0xbe, .sp=0xe5, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0x6f}, {.addr=0x62b4, .value=0x04}, {.addr=0x62b5, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x62b6, .a=0x7f, .x=0x72, .y=0xbe, .sp=0xe5, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0x6f}, {.addr=0x62b4, .value=0x04}, {.addr=0x62b5, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x62b4, .value=0x04, .type=IO_READ},
        {.addr=0x62b5, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x00e4, .a=0x19, .x=0x90, .y=0x13, .sp=0x98, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0xfd}, {.addr=0x00e4, .value=0x04}, {.addr=0x00e5, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x00e6, .a=0xfd, .x=0x90, .y=0x13, .sp=0x98, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0xfd}, {.addr=0x00e4, .value=0x04}, {.addr=0x00e5, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x00e4, .value=0x04, .type=IO_READ},
        {.addr=0x00e5, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x68d9, .a=0x79, .x=0xe4, .y=0x5c, .sp=0xd8, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0xc6}, {.addr=0x68d9, .value=0x04}, {.addr=0x68da, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x68db, .a=0xff, .x=0xe4, .y=0x5c, .sp=0xd8, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0xc6}, {.addr=0x68d9, .value=0x04}, {.addr=0x68da, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x68d9, .value=0x04, .type=IO_READ},
        {.addr=0x68da, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xaf21, .a=0x0d, .x=0x92, .y=0x7c, .sp=0xe5, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0xe8}, {.addr=0xaf21, .value=0x04}, {.addr=0xaf22, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xaf23, .a=0xed, .x=0x92, .y=0x7c, .sp=0xe5, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0xe8}, {.addr=0xaf21, .value=0x04}, {.addr=0xaf22, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf21, .value=0x04, .type=IO_READ},
        {.addr=0xaf22, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x131a, .a=0x25, .x=0x50, .y=0x6b, .sp=0x21, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0x4d}, {.addr=0x131a, .value=0x04}, {.addr=0x131b, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x131c, .a=0x6d, .x=0x50, .y=0x6b, .sp=0x21, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0x4d}, {.addr=0x131a, .value=0x04}, {.addr=0x131b, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x131a, .value=0x04, .type=IO_READ},
        {.addr=0x131b, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x6f82, .a=0xc1, .x=0xec, .y=0x88, .sp=0x8b, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0xbc}, {.addr=0x6f82, .value=0x04}, {.addr=0x6f83, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0x6f84, .a=0xfd, .x=0xec, .y=0x88, .sp=0x8b, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0xbc}, {.addr=0x6f82, .value=0x04}, {.addr=0x6f83, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f82, .value=0x04, .type=IO_READ},
        {.addr=0x6f83, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x87c5, .a=0xc5, .x=0x87, .y=0x68, .sp=0x24, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0x8c}, {.addr=0x87c5, .value=0x04}, {.addr=0x87c6, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x87c7, .a=0xcd, .x=0x87, .y=0x68, .sp=0x24, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0x8c}, {.addr=0x87c5, .value=0x04}, {.addr=0x87c6, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x87c5, .value=0x04, .type=IO_READ},
        {.addr=0x87c6, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x4042, .a=0x5a, .x=0xaf, .y=0xc2, .sp=0x41, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0x8c}, {.addr=0x4042, .value=0x04}, {.addr=0x4043, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x4044, .a=0xde, .x=0xaf, .y=0xc2, .sp=0x41, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0x8c}, {.addr=0x4042, .value=0x04}, {.addr=0x4043, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4042, .value=0x04, .type=IO_READ},
        {.addr=0x4043, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xcb3c, .a=0x12, .x=0xb1, .y=0x12, .sp=0x9a, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0xe1}, {.addr=0xcb3c, .value=0x04}, {.addr=0xcb3d, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0xcb3e, .a=0xf3, .x=0xb1, .y=0x12, .sp=0x9a, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0xe1}, {.addr=0xcb3c, .value=0x04}, {.addr=0xcb3d, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb3c, .value=0x04, .type=IO_READ},
        {.addr=0xcb3d, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xcc8d, .a=0x63, .x=0x59, .y=0x74, .sp=0xaa, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0x60}, {.addr=0xcc8d, .value=0x04}, {.addr=0xcc8e, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0xcc8f, .a=0x63, .x=0x59, .y=0x74, .sp=0xaa, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0x60}, {.addr=0xcc8d, .value=0x04}, {.addr=0xcc8e, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc8d, .value=0x04, .type=IO_READ},
        {.addr=0xcc8e, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xa52d, .a=0x3f, .x=0x93, .y=0x4c, .sp=0xdd, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0002, .value=0x6c}, {.addr=0xa52d, .value=0x04}, {.addr=0xa52e, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0xa52f, .a=0x7f, .x=0x93, .y=0x4c, .sp=0xdd, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0002, .value=0x6c}, {.addr=0xa52d, .value=0x04}, {.addr=0xa52e, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0xa52d, .value=0x04, .type=IO_READ},
        {.addr=0xa52e, .value=0x02, .type=IO_READ},
        {.addr=0x0002, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x0201, .a=0x3d, .x=0xcf, .y=0x1f, .sp=0x3d, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0xe2}, {.addr=0x0201, .value=0x04}, {.addr=0x0202, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x0203, .a=0xff, .x=0xcf, .y=0x1f, .sp=0x3d, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0xe2}, {.addr=0x0201, .value=0x04}, {.addr=0x0202, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x0201, .value=0x04, .type=IO_READ},
        {.addr=0x0202, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x3552, .a=0xdd, .x=0xff, .y=0x2f, .sp=0x0f, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0xf8}, {.addr=0x3552, .value=0x04}, {.addr=0x3553, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x3554, .a=0xfd, .x=0xff, .y=0x2f, .sp=0x0f, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0xf8}, {.addr=0x3552, .value=0x04}, {.addr=0x3553, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x3552, .value=0x04, .type=IO_READ},
        {.addr=0x3553, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x786d, .a=0x5b, .x=0x90, .y=0x8d, .sp=0xf2, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0x0c}, {.addr=0x786d, .value=0x04}, {.addr=0x786e, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x786f, .a=0x5f, .x=0x90, .y=0x8d, .sp=0xf2, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0x0c}, {.addr=0x786d, .value=0x04}, {.addr=0x786e, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x786d, .value=0x04, .type=IO_READ},
        {.addr=0x786e, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xd1de, .a=0x80, .x=0x78, .y=0x2a, .sp=0x6c, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x4f}, {.addr=0xd1de, .value=0x04}, {.addr=0xd1df, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xd1e0, .a=0xcf, .x=0x78, .y=0x2a, .sp=0x6c, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x4f}, {.addr=0xd1de, .value=0x04}, {.addr=0xd1df, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1de, .value=0x04, .type=IO_READ},
        {.addr=0xd1df, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x2238, .a=0x58, .x=0x85, .y=0x12, .sp=0x5f, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0x85}, {.addr=0x2238, .value=0x04}, {.addr=0x2239, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x223a, .a=0xdd, .x=0x85, .y=0x12, .sp=0x5f, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0x85}, {.addr=0x2238, .value=0x04}, {.addr=0x2239, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x2238, .value=0x04, .type=IO_READ},
        {.addr=0x2239, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xa58e, .a=0x95, .x=0x20, .y=0xed, .sp=0x7d, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x6c}, {.addr=0xa58e, .value=0x04}, {.addr=0xa58f, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xa590, .a=0xfd, .x=0x20, .y=0xed, .sp=0x7d, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x6c}, {.addr=0xa58e, .value=0x04}, {.addr=0xa58f, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xa58e, .value=0x04, .type=IO_READ},
        {.addr=0xa58f, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x8f39, .a=0x50, .x=0xf8, .y=0x86, .sp=0xd8, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0xc5}, {.addr=0x8f39, .value=0x04}, {.addr=0x8f3a, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x8f3b, .a=0xd5, .x=0xf8, .y=0x86, .sp=0xd8, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0xc5}, {.addr=0x8f39, .value=0x04}, {.addr=0x8f3a, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f39, .value=0x04, .type=IO_READ},
        {.addr=0x8f3a, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x9fd7, .a=0xb7, .x=0xb5, .y=0x79, .sp=0x73, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0x9b}, {.addr=0x9fd7, .value=0x04}, {.addr=0x9fd8, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x9fd9, .a=0xbf, .x=0xb5, .y=0x79, .sp=0x73, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0x9b}, {.addr=0x9fd7, .value=0x04}, {.addr=0x9fd8, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x9fd7, .value=0x04, .type=IO_READ},
        {.addr=0x9fd8, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xeebf, .a=0xed, .x=0xd4, .y=0x24, .sp=0x49, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0x1e}, {.addr=0xeebf, .value=0x04}, {.addr=0xeec0, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0xeec1, .a=0xff, .x=0xd4, .y=0x24, .sp=0x49, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0x1e}, {.addr=0xeebf, .value=0x04}, {.addr=0xeec0, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0xeebf, .value=0x04, .type=IO_READ},
        {.addr=0xeec0, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x5770, .a=0xff, .x=0x95, .y=0x97, .sp=0x8d, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0xc4}, {.addr=0x5770, .value=0x04}, {.addr=0x5771, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0x5772, .a=0xff, .x=0x95, .y=0x97, .sp=0x8d, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0xc4}, {.addr=0x5770, .value=0x04}, {.addr=0x5771, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0x5770, .value=0x04, .type=IO_READ},
        {.addr=0x5771, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x7ddf, .a=0xf9, .x=0xf8, .y=0x10, .sp=0xb3, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x73}, {.addr=0x7ddf, .value=0x04}, {.addr=0x7de0, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x7de1, .a=0xfb, .x=0xf8, .y=0x10, .sp=0xb3, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x73}, {.addr=0x7ddf, .value=0x04}, {.addr=0x7de0, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ddf, .value=0x04, .type=IO_READ},
        {.addr=0x7de0, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x440b, .a=0xd5, .x=0x7d, .y=0x5f, .sp=0xa8, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0x0a}, {.addr=0x440b, .value=0x04}, {.addr=0x440c, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x440d, .a=0xdf, .x=0x7d, .y=0x5f, .sp=0xa8, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0x0a}, {.addr=0x440b, .value=0x04}, {.addr=0x440c, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x440b, .value=0x04, .type=IO_READ},
        {.addr=0x440c, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x600f, .a=0xea, .x=0xa2, .y=0xa1, .sp=0xe3, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0xbd}, {.addr=0x600f, .value=0x04}, {.addr=0x6010, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x6011, .a=0xff, .x=0xa2, .y=0xa1, .sp=0xe3, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0xbd}, {.addr=0x600f, .value=0x04}, {.addr=0x6010, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x600f, .value=0x04, .type=IO_READ},
        {.addr=0x6010, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x6b10, .a=0xc4, .x=0xc6, .y=0x34, .sp=0x75, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0xc9}, {.addr=0x6b10, .value=0x04}, {.addr=0x6b11, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x6b12, .a=0xcd, .x=0xc6, .y=0x34, .sp=0x75, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0xc9}, {.addr=0x6b10, .value=0x04}, {.addr=0x6b11, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b10, .value=0x04, .type=IO_READ},
        {.addr=0x6b11, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x0c8c, .a=0x5f, .x=0xdd, .y=0x9d, .sp=0xe4, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0x04}, {.addr=0x0c8c, .value=0x04}, {.addr=0x0c8d, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x0c8e, .a=0x5f, .x=0xdd, .y=0x9d, .sp=0xe4, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0x04}, {.addr=0x0c8c, .value=0x04}, {.addr=0x0c8d, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c8c, .value=0x04, .type=IO_READ},
        {.addr=0x0c8d, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x1df5, .a=0x48, .x=0x6e, .y=0xfb, .sp=0xf1, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x0c}, {.addr=0x1df5, .value=0x04}, {.addr=0x1df6, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x1df7, .a=0x4c, .x=0x6e, .y=0xfb, .sp=0xf1, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x0c}, {.addr=0x1df5, .value=0x04}, {.addr=0x1df6, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1df5, .value=0x04, .type=IO_READ},
        {.addr=0x1df6, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xb1f3, .a=0x2b, .x=0xa5, .y=0x03, .sp=0x05, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0x15}, {.addr=0xb1f3, .value=0x04}, {.addr=0xb1f4, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0xb1f5, .a=0x3f, .x=0xa5, .y=0x03, .sp=0x05, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0x15}, {.addr=0xb1f3, .value=0x04}, {.addr=0xb1f4, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0xb1f3, .value=0x04, .type=IO_READ},
        {.addr=0xb1f4, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xc42c, .a=0xa6, .x=0xee, .y=0xbb, .sp=0x99, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0x53}, {.addr=0xc42c, .value=0x04}, {.addr=0xc42d, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xc42e, .a=0xf7, .x=0xee, .y=0xbb, .sp=0x99, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0x53}, {.addr=0xc42c, .value=0x04}, {.addr=0xc42d, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xc42c, .value=0x04, .type=IO_READ},
        {.addr=0xc42d, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x2595, .a=0x02, .x=0xad, .y=0xcb, .sp=0x2f, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0xd5}, {.addr=0x2595, .value=0x04}, {.addr=0x2596, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0x2597, .a=0xd7, .x=0xad, .y=0xcb, .sp=0x2f, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0xd5}, {.addr=0x2595, .value=0x04}, {.addr=0x2596, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0x2595, .value=0x04, .type=IO_READ},
        {.addr=0x2596, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x91c2, .a=0x77, .x=0x75, .y=0xe3, .sp=0xab, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x0f}, {.addr=0x91c2, .value=0x04}, {.addr=0x91c3, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x91c4, .a=0x7f, .x=0x75, .y=0xe3, .sp=0xab, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x0f}, {.addr=0x91c2, .value=0x04}, {.addr=0x91c3, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x91c2, .value=0x04, .type=IO_READ},
        {.addr=0x91c3, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x4bbf, .a=0xae, .x=0xde, .y=0x5e, .sp=0xdf, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x03}, {.addr=0x4bbf, .value=0x04}, {.addr=0x4bc0, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x4bc1, .a=0xaf, .x=0xde, .y=0x5e, .sp=0xdf, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x03}, {.addr=0x4bbf, .value=0x04}, {.addr=0x4bc0, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x4bbf, .value=0x04, .type=IO_READ},
        {.addr=0x4bc0, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x5e1b, .a=0xfe, .x=0xb0, .y=0xc8, .sp=0x02, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0x10}, {.addr=0x5e1b, .value=0x04}, {.addr=0x5e1c, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x5e1d, .a=0xfe, .x=0xb0, .y=0xc8, .sp=0x02, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0x10}, {.addr=0x5e1b, .value=0x04}, {.addr=0x5e1c, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e1b, .value=0x04, .type=IO_READ},
        {.addr=0x5e1c, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xae64, .a=0x68, .x=0x05, .y=0x2a, .sp=0x90, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0111, .value=0xa0}, {.addr=0xae64, .value=0x04}, {.addr=0xae65, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xae66, .a=0xe8, .x=0x05, .y=0x2a, .sp=0x90, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0111, .value=0xa0}, {.addr=0xae64, .value=0x04}, {.addr=0xae65, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xae64, .value=0x04, .type=IO_READ},
        {.addr=0xae65, .value=0x11, .type=IO_READ},
        {.addr=0x0111, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_04, _04_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xd2aa, .a=0x72, .x=0x1c, .y=0x12, .sp=0xaa, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0xb5}, {.addr=0xd2aa, .value=0x04}, {.addr=0xd2ab, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0xd2ac, .a=0xf7, .x=0x1c, .y=0x12, .sp=0xaa, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0xb5}, {.addr=0xd2aa, .value=0x04}, {.addr=0xd2ab, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2aa, .value=0x04, .type=IO_READ},
        {.addr=0xd2ab, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("04 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
