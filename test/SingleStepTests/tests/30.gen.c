#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_30, _30_0000) {
    const struct CPU_State initial_cpu = {.pc=0xdaf3, .a=0xff, .x=0x22, .y=0x20, .sp=0x7e, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xdaf3, .value=0x30}, {.addr=0xdaf4, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xdaf5, .a=0xff, .x=0x22, .y=0x20, .sp=0x7e, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xdaf3, .value=0x30}, {.addr=0xdaf4, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xdaf3, .value=0x30, .type=IO_READ},
        {.addr=0xdaf4, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0001) {
    const struct CPU_State initial_cpu = {.pc=0x7b3c, .a=0xad, .x=0xdc, .y=0xfa, .sp=0x99, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x7b3c, .value=0x30}, {.addr=0x7b3d, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x7b12, .a=0xad, .x=0xdc, .y=0xfa, .sp=0x99, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x7b3c, .value=0x30}, {.addr=0x7b3d, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x7b3c, .value=0x30, .type=IO_READ},
        {.addr=0x7b3d, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0002) {
    const struct CPU_State initial_cpu = {.pc=0x2769, .a=0x06, .x=0x18, .y=0xe8, .sp=0x25, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x2769, .value=0x30}, {.addr=0x276a, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x2765, .a=0x06, .x=0x18, .y=0xe8, .sp=0x25, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2769, .value=0x30}, {.addr=0x276a, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x2769, .value=0x30, .type=IO_READ},
        {.addr=0x276a, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0003) {
    const struct CPU_State initial_cpu = {.pc=0x1db5, .a=0x26, .x=0x49, .y=0x2a, .sp=0xa4, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x1db5, .value=0x30}, {.addr=0x1db6, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x1db7, .a=0x26, .x=0x49, .y=0x2a, .sp=0xa4, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x1db5, .value=0x30}, {.addr=0x1db6, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x1db5, .value=0x30, .type=IO_READ},
        {.addr=0x1db6, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0004) {
    const struct CPU_State initial_cpu = {.pc=0x21a9, .a=0x5b, .x=0x8b, .y=0x02, .sp=0x1f, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x21a9, .value=0x30}, {.addr=0x21aa, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x219f, .a=0x5b, .x=0x8b, .y=0x02, .sp=0x1f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x21a9, .value=0x30}, {.addr=0x21aa, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x21a9, .value=0x30, .type=IO_READ},
        {.addr=0x21aa, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0005) {
    const struct CPU_State initial_cpu = {.pc=0x3b63, .a=0x52, .x=0x8d, .y=0xca, .sp=0x78, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x3b63, .value=0x30}, {.addr=0x3b64, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3b6b, .a=0x52, .x=0x8d, .y=0xca, .sp=0x78, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x3b63, .value=0x30}, {.addr=0x3b64, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3b63, .value=0x30, .type=IO_READ},
        {.addr=0x3b64, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0006) {
    const struct CPU_State initial_cpu = {.pc=0x1e78, .a=0x68, .x=0x08, .y=0x0c, .sp=0x36, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x1e78, .value=0x30}, {.addr=0x1e79, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x1ea5, .a=0x68, .x=0x08, .y=0x0c, .sp=0x36, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x1e78, .value=0x30}, {.addr=0x1e79, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x1e78, .value=0x30, .type=IO_READ},
        {.addr=0x1e79, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0007) {
    const struct CPU_State initial_cpu = {.pc=0x7070, .a=0xa1, .x=0x18, .y=0x08, .sp=0xf9, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x7070, .value=0x30}, {.addr=0x7071, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x7072, .a=0xa1, .x=0x18, .y=0x08, .sp=0xf9, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x7070, .value=0x30}, {.addr=0x7071, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x7070, .value=0x30, .type=IO_READ},
        {.addr=0x7071, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0008) {
    const struct CPU_State initial_cpu = {.pc=0x572f, .a=0x69, .x=0x49, .y=0x16, .sp=0x54, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x572f, .value=0x30}, {.addr=0x5730, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x5767, .a=0x69, .x=0x49, .y=0x16, .sp=0x54, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x572f, .value=0x30}, {.addr=0x5730, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x572f, .value=0x30, .type=IO_READ},
        {.addr=0x5730, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0009) {
    const struct CPU_State initial_cpu = {.pc=0x19d8, .a=0x23, .x=0x9c, .y=0xe3, .sp=0xa9, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x19d8, .value=0x30}, {.addr=0x19d9, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x19e5, .a=0x23, .x=0x9c, .y=0xe3, .sp=0xa9, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x19d8, .value=0x30}, {.addr=0x19d9, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x19d8, .value=0x30, .type=IO_READ},
        {.addr=0x19d9, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_000A) {
    const struct CPU_State initial_cpu = {.pc=0xbafa, .a=0xda, .x=0x3c, .y=0xf5, .sp=0x7d, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xbafa, .value=0x30}, {.addr=0xbafb, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xbb32, .a=0xda, .x=0x3c, .y=0xf5, .sp=0x7d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xbafa, .value=0x30}, {.addr=0xbafb, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xbafa, .value=0x30, .type=IO_READ},
        {.addr=0xbafb, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_000B) {
    const struct CPU_State initial_cpu = {.pc=0xcf05, .a=0x12, .x=0x94, .y=0x57, .sp=0x8f, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xcf05, .value=0x30}, {.addr=0xcf06, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xcf07, .a=0x12, .x=0x94, .y=0x57, .sp=0x8f, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xcf05, .value=0x30}, {.addr=0xcf06, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xcf05, .value=0x30, .type=IO_READ},
        {.addr=0xcf06, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_000C) {
    const struct CPU_State initial_cpu = {.pc=0xb395, .a=0x1e, .x=0x16, .y=0x08, .sp=0x8c, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xb395, .value=0x30}, {.addr=0xb396, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb397, .a=0x1e, .x=0x16, .y=0x08, .sp=0x8c, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xb395, .value=0x30}, {.addr=0xb396, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb395, .value=0x30, .type=IO_READ},
        {.addr=0xb396, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_000D) {
    const struct CPU_State initial_cpu = {.pc=0xa0bf, .a=0x28, .x=0xfa, .y=0xaa, .sp=0xb8, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xa0bf, .value=0x30}, {.addr=0xa0c0, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xa106, .a=0x28, .x=0xfa, .y=0xaa, .sp=0xb8, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xa0bf, .value=0x30}, {.addr=0xa0c0, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xa0bf, .value=0x30, .type=IO_READ},
        {.addr=0xa0c0, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_000E) {
    const struct CPU_State initial_cpu = {.pc=0xdc04, .a=0x35, .x=0xdc, .y=0x7a, .sp=0xd0, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xdc04, .value=0x30}, {.addr=0xdc05, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdc73, .a=0x35, .x=0xdc, .y=0x7a, .sp=0xd0, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xdc04, .value=0x30}, {.addr=0xdc05, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdc04, .value=0x30, .type=IO_READ},
        {.addr=0xdc05, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_000F) {
    const struct CPU_State initial_cpu = {.pc=0x0079, .a=0x29, .x=0xeb, .y=0xed, .sp=0xad, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0x30}, {.addr=0x007a, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x007b, .a=0x29, .x=0xeb, .y=0xed, .sp=0xad, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0x30}, {.addr=0x007a, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x0079, .value=0x30, .type=IO_READ},
        {.addr=0x007a, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0010) {
    const struct CPU_State initial_cpu = {.pc=0x55de, .a=0x15, .x=0xa5, .y=0x12, .sp=0x0e, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x55de, .value=0x30}, {.addr=0x55df, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x55e0, .a=0x15, .x=0xa5, .y=0x12, .sp=0x0e, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x55de, .value=0x30}, {.addr=0x55df, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x55de, .value=0x30, .type=IO_READ},
        {.addr=0x55df, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0011) {
    const struct CPU_State initial_cpu = {.pc=0xe58f, .a=0xc2, .x=0xad, .y=0x7c, .sp=0x89, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xe58f, .value=0x30}, {.addr=0xe590, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xe5ff, .a=0xc2, .x=0xad, .y=0x7c, .sp=0x89, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xe58f, .value=0x30}, {.addr=0xe590, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xe58f, .value=0x30, .type=IO_READ},
        {.addr=0xe590, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0012) {
    const struct CPU_State initial_cpu = {.pc=0x63a6, .a=0xab, .x=0x39, .y=0xfe, .sp=0x56, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x63a6, .value=0x30}, {.addr=0x63a7, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x63a8, .a=0xab, .x=0x39, .y=0xfe, .sp=0x56, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x63a6, .value=0x30}, {.addr=0x63a7, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x63a6, .value=0x30, .type=IO_READ},
        {.addr=0x63a7, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0013) {
    const struct CPU_State initial_cpu = {.pc=0xd222, .a=0xce, .x=0x47, .y=0x63, .sp=0x92, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xd222, .value=0x30}, {.addr=0xd223, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xd224, .a=0xce, .x=0x47, .y=0x63, .sp=0x92, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xd222, .value=0x30}, {.addr=0xd223, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xd222, .value=0x30, .type=IO_READ},
        {.addr=0xd223, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0014) {
    const struct CPU_State initial_cpu = {.pc=0x42e0, .a=0x23, .x=0xc0, .y=0x9e, .sp=0x33, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x42e0, .value=0x30}, {.addr=0x42e1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x42e2, .a=0x23, .x=0xc0, .y=0x9e, .sp=0x33, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x42e0, .value=0x30}, {.addr=0x42e1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x42e0, .value=0x30, .type=IO_READ},
        {.addr=0x42e1, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0015) {
    const struct CPU_State initial_cpu = {.pc=0x6874, .a=0x4a, .x=0xb0, .y=0x2b, .sp=0xed, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x6874, .value=0x30}, {.addr=0x6875, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x68d3, .a=0x4a, .x=0xb0, .y=0x2b, .sp=0xed, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x6874, .value=0x30}, {.addr=0x6875, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x6874, .value=0x30, .type=IO_READ},
        {.addr=0x6875, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0016) {
    const struct CPU_State initial_cpu = {.pc=0xe7e7, .a=0x0b, .x=0xa4, .y=0x98, .sp=0xcc, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xe7e7, .value=0x30}, {.addr=0xe7e8, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xe77e, .a=0x0b, .x=0xa4, .y=0x98, .sp=0xcc, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xe7e7, .value=0x30}, {.addr=0xe7e8, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xe7e7, .value=0x30, .type=IO_READ},
        {.addr=0xe7e8, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0017) {
    const struct CPU_State initial_cpu = {.pc=0x4fa6, .a=0x53, .x=0xd8, .y=0xc2, .sp=0x9d, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x4fa6, .value=0x30}, {.addr=0x4fa7, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x4fc6, .a=0x53, .x=0xd8, .y=0xc2, .sp=0x9d, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x4fa6, .value=0x30}, {.addr=0x4fa7, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x4fa6, .value=0x30, .type=IO_READ},
        {.addr=0x4fa7, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0018) {
    const struct CPU_State initial_cpu = {.pc=0xbee4, .a=0xe6, .x=0xec, .y=0x4b, .sp=0xb1, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xbee4, .value=0x30}, {.addr=0xbee5, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xbee6, .a=0xe6, .x=0xec, .y=0x4b, .sp=0xb1, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xbee4, .value=0x30}, {.addr=0xbee5, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xbee4, .value=0x30, .type=IO_READ},
        {.addr=0xbee5, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0019) {
    const struct CPU_State initial_cpu = {.pc=0xccc8, .a=0xbb, .x=0x4d, .y=0x7f, .sp=0x48, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xccc8, .value=0x30}, {.addr=0xccc9, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xcd25, .a=0xbb, .x=0x4d, .y=0x7f, .sp=0x48, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xccc8, .value=0x30}, {.addr=0xccc9, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xccc8, .value=0x30, .type=IO_READ},
        {.addr=0xccc9, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_001A) {
    const struct CPU_State initial_cpu = {.pc=0x721f, .a=0x78, .x=0x0d, .y=0x06, .sp=0x6b, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x721f, .value=0x30}, {.addr=0x7220, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x7212, .a=0x78, .x=0x0d, .y=0x06, .sp=0x6b, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x721f, .value=0x30}, {.addr=0x7220, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x721f, .value=0x30, .type=IO_READ},
        {.addr=0x7220, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_001B) {
    const struct CPU_State initial_cpu = {.pc=0x68db, .a=0xe6, .x=0x6d, .y=0x14, .sp=0x1b, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x68db, .value=0x30}, {.addr=0x68dc, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x68d9, .a=0xe6, .x=0x6d, .y=0x14, .sp=0x1b, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x68db, .value=0x30}, {.addr=0x68dc, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x68db, .value=0x30, .type=IO_READ},
        {.addr=0x68dc, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_001C) {
    const struct CPU_State initial_cpu = {.pc=0x404a, .a=0x7f, .x=0xff, .y=0x76, .sp=0x81, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x404a, .value=0x30}, {.addr=0x404b, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x4060, .a=0x7f, .x=0xff, .y=0x76, .sp=0x81, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x404a, .value=0x30}, {.addr=0x404b, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x404a, .value=0x30, .type=IO_READ},
        {.addr=0x404b, .value=0x14, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_001D) {
    const struct CPU_State initial_cpu = {.pc=0xf786, .a=0x8d, .x=0xe0, .y=0x90, .sp=0xbe, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xf786, .value=0x30}, {.addr=0xf787, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf7ae, .a=0x8d, .x=0xe0, .y=0x90, .sp=0xbe, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xf786, .value=0x30}, {.addr=0xf787, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf786, .value=0x30, .type=IO_READ},
        {.addr=0xf787, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_001E) {
    const struct CPU_State initial_cpu = {.pc=0x840c, .a=0x46, .x=0x6c, .y=0xa7, .sp=0xc3, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x840c, .value=0x30}, {.addr=0x840d, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x841a, .a=0x46, .x=0x6c, .y=0xa7, .sp=0xc3, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x840c, .value=0x30}, {.addr=0x840d, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x840c, .value=0x30, .type=IO_READ},
        {.addr=0x840d, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_001F) {
    const struct CPU_State initial_cpu = {.pc=0x14ca, .a=0x50, .x=0x73, .y=0xef, .sp=0xb4, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x14ca, .value=0x30}, {.addr=0x14cb, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x151f, .a=0x50, .x=0x73, .y=0xef, .sp=0xb4, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x14ca, .value=0x30}, {.addr=0x14cb, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x14ca, .value=0x30, .type=IO_READ},
        {.addr=0x14cb, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0020) {
    const struct CPU_State initial_cpu = {.pc=0x840b, .a=0x96, .x=0x79, .y=0xd3, .sp=0x50, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x840b, .value=0x30}, {.addr=0x840c, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x8478, .a=0x96, .x=0x79, .y=0xd3, .sp=0x50, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x840b, .value=0x30}, {.addr=0x840c, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x840b, .value=0x30, .type=IO_READ},
        {.addr=0x840c, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0021) {
    const struct CPU_State initial_cpu = {.pc=0xc701, .a=0xa4, .x=0xf4, .y=0xb2, .sp=0x06, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xc701, .value=0x30}, {.addr=0xc702, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc703, .a=0xa4, .x=0xf4, .y=0xb2, .sp=0x06, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xc701, .value=0x30}, {.addr=0xc702, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc701, .value=0x30, .type=IO_READ},
        {.addr=0xc702, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0022) {
    const struct CPU_State initial_cpu = {.pc=0x7fe9, .a=0xa2, .x=0x57, .y=0x9d, .sp=0xb7, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x7fe9, .value=0x30}, {.addr=0x7fea, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x8028, .a=0xa2, .x=0x57, .y=0x9d, .sp=0xb7, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x7fe9, .value=0x30}, {.addr=0x7fea, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7fe9, .value=0x30, .type=IO_READ},
        {.addr=0x7fea, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0023) {
    const struct CPU_State initial_cpu = {.pc=0xc26c, .a=0x93, .x=0xa3, .y=0xd0, .sp=0xc5, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xc26c, .value=0x30}, {.addr=0xc26d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc22d, .a=0x93, .x=0xa3, .y=0xd0, .sp=0xc5, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xc26c, .value=0x30}, {.addr=0xc26d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc26c, .value=0x30, .type=IO_READ},
        {.addr=0xc26d, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0024) {
    const struct CPU_State initial_cpu = {.pc=0x1228, .a=0xd7, .x=0x39, .y=0xe4, .sp=0xf7, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x1228, .value=0x30}, {.addr=0x1229, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1237, .a=0xd7, .x=0x39, .y=0xe4, .sp=0xf7, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x1228, .value=0x30}, {.addr=0x1229, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1228, .value=0x30, .type=IO_READ},
        {.addr=0x1229, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0025) {
    const struct CPU_State initial_cpu = {.pc=0x4436, .a=0x49, .x=0x2a, .y=0x86, .sp=0x23, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x4436, .value=0x30}, {.addr=0x4437, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x4438, .a=0x49, .x=0x2a, .y=0x86, .sp=0x23, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x4436, .value=0x30}, {.addr=0x4437, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x4436, .value=0x30, .type=IO_READ},
        {.addr=0x4437, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0026) {
    const struct CPU_State initial_cpu = {.pc=0x89cf, .a=0xdb, .x=0x64, .y=0xeb, .sp=0x6f, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x89cf, .value=0x30}, {.addr=0x89d0, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x89d1, .a=0xdb, .x=0x64, .y=0xeb, .sp=0x6f, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x89cf, .value=0x30}, {.addr=0x89d0, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x89cf, .value=0x30, .type=IO_READ},
        {.addr=0x89d0, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0027) {
    const struct CPU_State initial_cpu = {.pc=0x1142, .a=0x92, .x=0xd6, .y=0xb0, .sp=0xd0, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x1142, .value=0x30}, {.addr=0x1143, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x1144, .a=0x92, .x=0xd6, .y=0xb0, .sp=0xd0, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x1142, .value=0x30}, {.addr=0x1143, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x1142, .value=0x30, .type=IO_READ},
        {.addr=0x1143, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0028) {
    const struct CPU_State initial_cpu = {.pc=0xe9a2, .a=0x4a, .x=0xc3, .y=0x55, .sp=0x35, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xe9a2, .value=0x30}, {.addr=0xe9a3, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xe9fe, .a=0x4a, .x=0xc3, .y=0x55, .sp=0x35, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xe9a2, .value=0x30}, {.addr=0xe9a3, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xe9a2, .value=0x30, .type=IO_READ},
        {.addr=0xe9a3, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0029) {
    const struct CPU_State initial_cpu = {.pc=0xb11c, .a=0x82, .x=0x3e, .y=0xaa, .sp=0xae, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xb11c, .value=0x30}, {.addr=0xb11d, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xb11e, .a=0x82, .x=0x3e, .y=0xaa, .sp=0xae, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xb11c, .value=0x30}, {.addr=0xb11d, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xb11c, .value=0x30, .type=IO_READ},
        {.addr=0xb11d, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_002A) {
    const struct CPU_State initial_cpu = {.pc=0x303d, .a=0xfa, .x=0x25, .y=0xee, .sp=0xa5, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x303d, .value=0x30}, {.addr=0x303e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x308c, .a=0xfa, .x=0x25, .y=0xee, .sp=0xa5, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x303d, .value=0x30}, {.addr=0x303e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x303d, .value=0x30, .type=IO_READ},
        {.addr=0x303e, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_002B) {
    const struct CPU_State initial_cpu = {.pc=0xb760, .a=0x42, .x=0x59, .y=0x28, .sp=0x02, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xb760, .value=0x30}, {.addr=0xb761, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb762, .a=0x42, .x=0x59, .y=0x28, .sp=0x02, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xb760, .value=0x30}, {.addr=0xb761, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb760, .value=0x30, .type=IO_READ},
        {.addr=0xb761, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_002C) {
    const struct CPU_State initial_cpu = {.pc=0xd464, .a=0x71, .x=0x73, .y=0x72, .sp=0x7f, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xd464, .value=0x30}, {.addr=0xd465, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xd459, .a=0x71, .x=0x73, .y=0x72, .sp=0x7f, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xd464, .value=0x30}, {.addr=0xd465, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xd464, .value=0x30, .type=IO_READ},
        {.addr=0xd465, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_002D) {
    const struct CPU_State initial_cpu = {.pc=0x479b, .a=0x84, .x=0x54, .y=0x2b, .sp=0x86, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x479b, .value=0x30}, {.addr=0x479c, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x479d, .a=0x84, .x=0x54, .y=0x2b, .sp=0x86, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x479b, .value=0x30}, {.addr=0x479c, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x479b, .value=0x30, .type=IO_READ},
        {.addr=0x479c, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_002E) {
    const struct CPU_State initial_cpu = {.pc=0x58d0, .a=0x7e, .x=0x85, .y=0xad, .sp=0xa3, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x58d0, .value=0x30}, {.addr=0x58d1, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x585c, .a=0x7e, .x=0x85, .y=0xad, .sp=0xa3, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x58d0, .value=0x30}, {.addr=0x58d1, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x58d0, .value=0x30, .type=IO_READ},
        {.addr=0x58d1, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_002F) {
    const struct CPU_State initial_cpu = {.pc=0x2ff7, .a=0x4b, .x=0x53, .y=0x50, .sp=0x43, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x2ff7, .value=0x30}, {.addr=0x2ff8, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x2ff9, .a=0x4b, .x=0x53, .y=0x50, .sp=0x43, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2ff7, .value=0x30}, {.addr=0x2ff8, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x2ff7, .value=0x30, .type=IO_READ},
        {.addr=0x2ff8, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0030) {
    const struct CPU_State initial_cpu = {.pc=0x3e68, .a=0xc0, .x=0x33, .y=0xa9, .sp=0x69, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x3e68, .value=0x30}, {.addr=0x3e69, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x3e6a, .a=0xc0, .x=0x33, .y=0xa9, .sp=0x69, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x3e68, .value=0x30}, {.addr=0x3e69, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x3e68, .value=0x30, .type=IO_READ},
        {.addr=0x3e69, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0031) {
    const struct CPU_State initial_cpu = {.pc=0xbd68, .a=0x1c, .x=0x4d, .y=0x8c, .sp=0x51, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xbd68, .value=0x30}, {.addr=0xbd69, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbd6a, .a=0x1c, .x=0x4d, .y=0x8c, .sp=0x51, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xbd68, .value=0x30}, {.addr=0xbd69, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbd68, .value=0x30, .type=IO_READ},
        {.addr=0xbd69, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0032) {
    const struct CPU_State initial_cpu = {.pc=0xf55f, .a=0x59, .x=0xca, .y=0x84, .sp=0xb9, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xf55f, .value=0x30}, {.addr=0xf560, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xf523, .a=0x59, .x=0xca, .y=0x84, .sp=0xb9, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xf55f, .value=0x30}, {.addr=0xf560, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xf55f, .value=0x30, .type=IO_READ},
        {.addr=0xf560, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0033) {
    const struct CPU_State initial_cpu = {.pc=0xb8c4, .a=0xaa, .x=0x78, .y=0xf0, .sp=0xba, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xb8c4, .value=0x30}, {.addr=0xb8c5, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xb8c6, .a=0xaa, .x=0x78, .y=0xf0, .sp=0xba, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xb8c4, .value=0x30}, {.addr=0xb8c5, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xb8c4, .value=0x30, .type=IO_READ},
        {.addr=0xb8c5, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0034) {
    const struct CPU_State initial_cpu = {.pc=0xa4c3, .a=0xf2, .x=0xe6, .y=0xfc, .sp=0xb7, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xa4c3, .value=0x30}, {.addr=0xa4c4, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xa540, .a=0xf2, .x=0xe6, .y=0xfc, .sp=0xb7, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xa4c3, .value=0x30}, {.addr=0xa4c4, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xa4c3, .value=0x30, .type=IO_READ},
        {.addr=0xa4c4, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0035) {
    const struct CPU_State initial_cpu = {.pc=0xbea0, .a=0x5d, .x=0x88, .y=0x8b, .sp=0xaa, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xbea0, .value=0x30}, {.addr=0xbea1, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbf1f, .a=0x5d, .x=0x88, .y=0x8b, .sp=0xaa, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xbea0, .value=0x30}, {.addr=0xbea1, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbea0, .value=0x30, .type=IO_READ},
        {.addr=0xbea1, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0036) {
    const struct CPU_State initial_cpu = {.pc=0x3ec6, .a=0x2e, .x=0x30, .y=0x04, .sp=0x71, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x3ec6, .value=0x30}, {.addr=0x3ec7, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x3ec8, .a=0x2e, .x=0x30, .y=0x04, .sp=0x71, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x3ec6, .value=0x30}, {.addr=0x3ec7, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x3ec6, .value=0x30, .type=IO_READ},
        {.addr=0x3ec7, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0037) {
    const struct CPU_State initial_cpu = {.pc=0xc89c, .a=0x61, .x=0x40, .y=0x08, .sp=0x0c, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xc89c, .value=0x30}, {.addr=0xc89d, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xc89e, .a=0x61, .x=0x40, .y=0x08, .sp=0x0c, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xc89c, .value=0x30}, {.addr=0xc89d, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xc89c, .value=0x30, .type=IO_READ},
        {.addr=0xc89d, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0038) {
    const struct CPU_State initial_cpu = {.pc=0xa416, .a=0x67, .x=0x72, .y=0x57, .sp=0xf0, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xa416, .value=0x30}, {.addr=0xa417, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xa418, .a=0x67, .x=0x72, .y=0x57, .sp=0xf0, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xa416, .value=0x30}, {.addr=0xa417, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xa416, .value=0x30, .type=IO_READ},
        {.addr=0xa417, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0039) {
    const struct CPU_State initial_cpu = {.pc=0x39b5, .a=0xe7, .x=0x1f, .y=0xdd, .sp=0xf5, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x39b5, .value=0x30}, {.addr=0x39b6, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x39b7, .a=0xe7, .x=0x1f, .y=0xdd, .sp=0xf5, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x39b5, .value=0x30}, {.addr=0x39b6, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x39b5, .value=0x30, .type=IO_READ},
        {.addr=0x39b6, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_003A) {
    const struct CPU_State initial_cpu = {.pc=0xac34, .a=0xef, .x=0x9a, .y=0x1a, .sp=0xd8, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xac34, .value=0x30}, {.addr=0xac35, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xac36, .a=0xef, .x=0x9a, .y=0x1a, .sp=0xd8, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xac34, .value=0x30}, {.addr=0xac35, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xac34, .value=0x30, .type=IO_READ},
        {.addr=0xac35, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_003B) {
    const struct CPU_State initial_cpu = {.pc=0xf401, .a=0xb9, .x=0xb9, .y=0xa6, .sp=0xfb, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xf401, .value=0x30}, {.addr=0xf402, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xf465, .a=0xb9, .x=0xb9, .y=0xa6, .sp=0xfb, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xf401, .value=0x30}, {.addr=0xf402, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xf401, .value=0x30, .type=IO_READ},
        {.addr=0xf402, .value=0x62, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_003C) {
    const struct CPU_State initial_cpu = {.pc=0x5ff9, .a=0x24, .x=0x09, .y=0xf9, .sp=0xa3, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x5ff9, .value=0x30}, {.addr=0x5ffa, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x5fb0, .a=0x24, .x=0x09, .y=0xf9, .sp=0xa3, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x5ff9, .value=0x30}, {.addr=0x5ffa, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x5ff9, .value=0x30, .type=IO_READ},
        {.addr=0x5ffa, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_003D) {
    const struct CPU_State initial_cpu = {.pc=0x40e0, .a=0xc7, .x=0x91, .y=0x15, .sp=0x55, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x40e0, .value=0x30}, {.addr=0x40e1, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x40e2, .a=0xc7, .x=0x91, .y=0x15, .sp=0x55, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x40e0, .value=0x30}, {.addr=0x40e1, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x40e0, .value=0x30, .type=IO_READ},
        {.addr=0x40e1, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_003E) {
    const struct CPU_State initial_cpu = {.pc=0x633c, .a=0xd6, .x=0xae, .y=0x69, .sp=0x50, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x633c, .value=0x30}, {.addr=0x633d, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x633e, .a=0xd6, .x=0xae, .y=0x69, .sp=0x50, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x633c, .value=0x30}, {.addr=0x633d, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x633c, .value=0x30, .type=IO_READ},
        {.addr=0x633d, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_003F) {
    const struct CPU_State initial_cpu = {.pc=0xfe97, .a=0x57, .x=0x9a, .y=0x7a, .sp=0xd0, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xfe97, .value=0x30}, {.addr=0xfe98, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xfe3b, .a=0x57, .x=0x9a, .y=0x7a, .sp=0xd0, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xfe97, .value=0x30}, {.addr=0xfe98, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xfe97, .value=0x30, .type=IO_READ},
        {.addr=0xfe98, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0040) {
    const struct CPU_State initial_cpu = {.pc=0x6367, .a=0x89, .x=0x9b, .y=0x4a, .sp=0xfc, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x6367, .value=0x30}, {.addr=0x6368, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x6369, .a=0x89, .x=0x9b, .y=0x4a, .sp=0xfc, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x6367, .value=0x30}, {.addr=0x6368, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x6367, .value=0x30, .type=IO_READ},
        {.addr=0x6368, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0041) {
    const struct CPU_State initial_cpu = {.pc=0xaadc, .a=0x97, .x=0xd5, .y=0xe9, .sp=0x38, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xaadc, .value=0x30}, {.addr=0xaadd, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xaade, .a=0x97, .x=0xd5, .y=0xe9, .sp=0x38, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xaadc, .value=0x30}, {.addr=0xaadd, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xaadc, .value=0x30, .type=IO_READ},
        {.addr=0xaadd, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0042) {
    const struct CPU_State initial_cpu = {.pc=0x58ea, .a=0x3f, .x=0xf0, .y=0xc2, .sp=0x91, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x58ea, .value=0x30}, {.addr=0x58eb, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x58ec, .a=0x3f, .x=0xf0, .y=0xc2, .sp=0x91, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x58ea, .value=0x30}, {.addr=0x58eb, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x58ea, .value=0x30, .type=IO_READ},
        {.addr=0x58eb, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0043) {
    const struct CPU_State initial_cpu = {.pc=0x722a, .a=0x0d, .x=0x71, .y=0x86, .sp=0x15, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x722a, .value=0x30}, {.addr=0x722b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7232, .a=0x0d, .x=0x71, .y=0x86, .sp=0x15, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x722a, .value=0x30}, {.addr=0x722b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x722a, .value=0x30, .type=IO_READ},
        {.addr=0x722b, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0044) {
    const struct CPU_State initial_cpu = {.pc=0xb5a7, .a=0x30, .x=0x77, .y=0x6e, .sp=0x56, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xb5a7, .value=0x30}, {.addr=0xb5a8, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xb58d, .a=0x30, .x=0x77, .y=0x6e, .sp=0x56, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xb5a7, .value=0x30}, {.addr=0xb5a8, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xb5a7, .value=0x30, .type=IO_READ},
        {.addr=0xb5a8, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0045) {
    const struct CPU_State initial_cpu = {.pc=0xb42e, .a=0xc8, .x=0x4c, .y=0x47, .sp=0x93, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xb42e, .value=0x30}, {.addr=0xb42f, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xb3c2, .a=0xc8, .x=0x4c, .y=0x47, .sp=0x93, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xb42e, .value=0x30}, {.addr=0xb42f, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xb42e, .value=0x30, .type=IO_READ},
        {.addr=0xb42f, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0046) {
    const struct CPU_State initial_cpu = {.pc=0x9c12, .a=0x8a, .x=0xaf, .y=0x35, .sp=0xf2, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x9c12, .value=0x30}, {.addr=0x9c13, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x9c14, .a=0x8a, .x=0xaf, .y=0x35, .sp=0xf2, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x9c12, .value=0x30}, {.addr=0x9c13, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x9c12, .value=0x30, .type=IO_READ},
        {.addr=0x9c13, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0047) {
    const struct CPU_State initial_cpu = {.pc=0x03a1, .a=0x29, .x=0xd3, .y=0x9b, .sp=0x6c, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x03a1, .value=0x30}, {.addr=0x03a2, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x03a3, .a=0x29, .x=0xd3, .y=0x9b, .sp=0x6c, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x03a1, .value=0x30}, {.addr=0x03a2, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x03a1, .value=0x30, .type=IO_READ},
        {.addr=0x03a2, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0048) {
    const struct CPU_State initial_cpu = {.pc=0xf6a9, .a=0x56, .x=0xb9, .y=0x80, .sp=0x40, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xf6a9, .value=0x30}, {.addr=0xf6aa, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xf6ab, .a=0x56, .x=0xb9, .y=0x80, .sp=0x40, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xf6a9, .value=0x30}, {.addr=0xf6aa, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xf6a9, .value=0x30, .type=IO_READ},
        {.addr=0xf6aa, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0049) {
    const struct CPU_State initial_cpu = {.pc=0x2698, .a=0xa1, .x=0x19, .y=0xcd, .sp=0x04, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x2698, .value=0x30}, {.addr=0x2699, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x269a, .a=0xa1, .x=0x19, .y=0xcd, .sp=0x04, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x2698, .value=0x30}, {.addr=0x2699, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2698, .value=0x30, .type=IO_READ},
        {.addr=0x2699, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_004A) {
    const struct CPU_State initial_cpu = {.pc=0x0072, .a=0x9c, .x=0x9e, .y=0x78, .sp=0xc4, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0x30}, {.addr=0x0073, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x0074, .a=0x9c, .x=0x9e, .y=0x78, .sp=0xc4, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0x30}, {.addr=0x0073, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x0072, .value=0x30, .type=IO_READ},
        {.addr=0x0073, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_004B) {
    const struct CPU_State initial_cpu = {.pc=0x8fb2, .a=0xff, .x=0x36, .y=0x82, .sp=0x44, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x8fb2, .value=0x30}, {.addr=0x8fb3, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x8f5d, .a=0xff, .x=0x36, .y=0x82, .sp=0x44, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x8fb2, .value=0x30}, {.addr=0x8fb3, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x8fb2, .value=0x30, .type=IO_READ},
        {.addr=0x8fb3, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_004C) {
    const struct CPU_State initial_cpu = {.pc=0x9498, .a=0x6a, .x=0xa9, .y=0xab, .sp=0xd3, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x9498, .value=0x30}, {.addr=0x9499, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x946b, .a=0x6a, .x=0xa9, .y=0xab, .sp=0xd3, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x9498, .value=0x30}, {.addr=0x9499, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x9498, .value=0x30, .type=IO_READ},
        {.addr=0x9499, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_004D) {
    const struct CPU_State initial_cpu = {.pc=0x162a, .a=0x38, .x=0xc1, .y=0xde, .sp=0x8e, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x162a, .value=0x30}, {.addr=0x162b, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x1623, .a=0x38, .x=0xc1, .y=0xde, .sp=0x8e, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x162a, .value=0x30}, {.addr=0x162b, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x162a, .value=0x30, .type=IO_READ},
        {.addr=0x162b, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_004E) {
    const struct CPU_State initial_cpu = {.pc=0xf2ff, .a=0x45, .x=0x38, .y=0xbb, .sp=0xfb, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xf2ff, .value=0x30}, {.addr=0xf300, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xf37f, .a=0x45, .x=0x38, .y=0xbb, .sp=0xfb, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xf2ff, .value=0x30}, {.addr=0xf300, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xf2ff, .value=0x30, .type=IO_READ},
        {.addr=0xf300, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_004F) {
    const struct CPU_State initial_cpu = {.pc=0x152a, .a=0x30, .x=0x82, .y=0x3b, .sp=0xa2, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x152a, .value=0x30}, {.addr=0x152b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x152c, .a=0x30, .x=0x82, .y=0x3b, .sp=0xa2, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x152a, .value=0x30}, {.addr=0x152b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x152a, .value=0x30, .type=IO_READ},
        {.addr=0x152b, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0050) {
    const struct CPU_State initial_cpu = {.pc=0x81bb, .a=0x44, .x=0x43, .y=0x9d, .sp=0x4b, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x81bb, .value=0x30}, {.addr=0x81bc, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x81bd, .a=0x44, .x=0x43, .y=0x9d, .sp=0x4b, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x81bb, .value=0x30}, {.addr=0x81bc, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x81bb, .value=0x30, .type=IO_READ},
        {.addr=0x81bc, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0051) {
    const struct CPU_State initial_cpu = {.pc=0x19b6, .a=0x44, .x=0x87, .y=0x35, .sp=0xec, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x19b6, .value=0x30}, {.addr=0x19b7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x19b8, .a=0x44, .x=0x87, .y=0x35, .sp=0xec, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x19b6, .value=0x30}, {.addr=0x19b7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x19b6, .value=0x30, .type=IO_READ},
        {.addr=0x19b7, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0052) {
    const struct CPU_State initial_cpu = {.pc=0x0ae8, .a=0x64, .x=0x3c, .y=0x3f, .sp=0xbc, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0ae8, .value=0x30}, {.addr=0x0ae9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0aa7, .a=0x64, .x=0x3c, .y=0x3f, .sp=0xbc, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0ae8, .value=0x30}, {.addr=0x0ae9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0ae8, .value=0x30, .type=IO_READ},
        {.addr=0x0ae9, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0053) {
    const struct CPU_State initial_cpu = {.pc=0x8b03, .a=0x4f, .x=0x6a, .y=0x06, .sp=0xc2, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x8b03, .value=0x30}, {.addr=0x8b04, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x8b05, .a=0x4f, .x=0x6a, .y=0x06, .sp=0xc2, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x8b03, .value=0x30}, {.addr=0x8b04, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x8b03, .value=0x30, .type=IO_READ},
        {.addr=0x8b04, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0054) {
    const struct CPU_State initial_cpu = {.pc=0x9d02, .a=0x05, .x=0xff, .y=0xdd, .sp=0xa1, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x9d02, .value=0x30}, {.addr=0x9d03, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x9c8f, .a=0x05, .x=0xff, .y=0xdd, .sp=0xa1, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x9d02, .value=0x30}, {.addr=0x9d03, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x9d02, .value=0x30, .type=IO_READ},
        {.addr=0x9d03, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0055) {
    const struct CPU_State initial_cpu = {.pc=0x122d, .a=0x7a, .x=0x56, .y=0xd3, .sp=0xf7, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x122d, .value=0x30}, {.addr=0x122e, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x122f, .a=0x7a, .x=0x56, .y=0xd3, .sp=0xf7, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x122d, .value=0x30}, {.addr=0x122e, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x122d, .value=0x30, .type=IO_READ},
        {.addr=0x122e, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0056) {
    const struct CPU_State initial_cpu = {.pc=0xa5f5, .a=0x33, .x=0x46, .y=0x1f, .sp=0xc2, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xa5f5, .value=0x30}, {.addr=0xa5f6, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xa60d, .a=0x33, .x=0x46, .y=0x1f, .sp=0xc2, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xa5f5, .value=0x30}, {.addr=0xa5f6, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xa5f5, .value=0x30, .type=IO_READ},
        {.addr=0xa5f6, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0057) {
    const struct CPU_State initial_cpu = {.pc=0x0ecd, .a=0x95, .x=0x67, .y=0xde, .sp=0x8c, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0ecd, .value=0x30}, {.addr=0x0ece, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x0e5f, .a=0x95, .x=0x67, .y=0xde, .sp=0x8c, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0ecd, .value=0x30}, {.addr=0x0ece, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x0ecd, .value=0x30, .type=IO_READ},
        {.addr=0x0ece, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0058) {
    const struct CPU_State initial_cpu = {.pc=0xe503, .a=0xa6, .x=0x02, .y=0xeb, .sp=0xb3, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xe503, .value=0x30}, {.addr=0xe504, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xe505, .a=0xa6, .x=0x02, .y=0xeb, .sp=0xb3, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xe503, .value=0x30}, {.addr=0xe504, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xe503, .value=0x30, .type=IO_READ},
        {.addr=0xe504, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0059) {
    const struct CPU_State initial_cpu = {.pc=0x00af, .a=0xa0, .x=0x98, .y=0xa4, .sp=0xc5, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0x30}, {.addr=0x00b0, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x00a4, .a=0xa0, .x=0x98, .y=0xa4, .sp=0xc5, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0x30}, {.addr=0x00b0, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x00af, .value=0x30, .type=IO_READ},
        {.addr=0x00b0, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_005A) {
    const struct CPU_State initial_cpu = {.pc=0xaa04, .a=0x48, .x=0x39, .y=0x03, .sp=0x94, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xaa04, .value=0x30}, {.addr=0xaa05, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xaa2d, .a=0x48, .x=0x39, .y=0x03, .sp=0x94, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xaa04, .value=0x30}, {.addr=0xaa05, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xaa04, .value=0x30, .type=IO_READ},
        {.addr=0xaa05, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_005B) {
    const struct CPU_State initial_cpu = {.pc=0x0eeb, .a=0xb8, .x=0x49, .y=0xd1, .sp=0xc5, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0eeb, .value=0x30}, {.addr=0x0eec, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x0f44, .a=0xb8, .x=0x49, .y=0xd1, .sp=0xc5, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0eeb, .value=0x30}, {.addr=0x0eec, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x0eeb, .value=0x30, .type=IO_READ},
        {.addr=0x0eec, .value=0x57, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_005C) {
    const struct CPU_State initial_cpu = {.pc=0xa7f6, .a=0xbb, .x=0x24, .y=0x2c, .sp=0x1d, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xa7f6, .value=0x30}, {.addr=0xa7f7, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xa839, .a=0xbb, .x=0x24, .y=0x2c, .sp=0x1d, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa7f6, .value=0x30}, {.addr=0xa7f7, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xa7f6, .value=0x30, .type=IO_READ},
        {.addr=0xa7f7, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_005D) {
    const struct CPU_State initial_cpu = {.pc=0xceed, .a=0xff, .x=0x63, .y=0x5d, .sp=0xb5, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xceed, .value=0x30}, {.addr=0xceee, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xceef, .a=0xff, .x=0x63, .y=0x5d, .sp=0xb5, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xceed, .value=0x30}, {.addr=0xceee, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xceed, .value=0x30, .type=IO_READ},
        {.addr=0xceee, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_005E) {
    const struct CPU_State initial_cpu = {.pc=0xae8c, .a=0x1b, .x=0x25, .y=0xe7, .sp=0xda, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xae8c, .value=0x30}, {.addr=0xae8d, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xaed8, .a=0x1b, .x=0x25, .y=0xe7, .sp=0xda, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0xae8c, .value=0x30}, {.addr=0xae8d, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xae8c, .value=0x30, .type=IO_READ},
        {.addr=0xae8d, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_005F) {
    const struct CPU_State initial_cpu = {.pc=0xb7b2, .a=0xbe, .x=0xc3, .y=0x3f, .sp=0x89, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xb7b2, .value=0x30}, {.addr=0xb7b3, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xb7a6, .a=0xbe, .x=0xc3, .y=0x3f, .sp=0x89, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xb7b2, .value=0x30}, {.addr=0xb7b3, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xb7b2, .value=0x30, .type=IO_READ},
        {.addr=0xb7b3, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0060) {
    const struct CPU_State initial_cpu = {.pc=0x6555, .a=0xda, .x=0x31, .y=0x94, .sp=0x1a, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x6555, .value=0x30}, {.addr=0x6556, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x6557, .a=0xda, .x=0x31, .y=0x94, .sp=0x1a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6555, .value=0x30}, {.addr=0x6556, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x6555, .value=0x30, .type=IO_READ},
        {.addr=0x6556, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0061) {
    const struct CPU_State initial_cpu = {.pc=0x7c68, .a=0x5b, .x=0x01, .y=0x52, .sp=0x2f, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x7c68, .value=0x30}, {.addr=0x7c69, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x7c6a, .a=0x5b, .x=0x01, .y=0x52, .sp=0x2f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x7c68, .value=0x30}, {.addr=0x7c69, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x7c68, .value=0x30, .type=IO_READ},
        {.addr=0x7c69, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0062) {
    const struct CPU_State initial_cpu = {.pc=0x3756, .a=0xaf, .x=0x52, .y=0x22, .sp=0x0f, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x3756, .value=0x30}, {.addr=0x3757, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x3758, .a=0xaf, .x=0x52, .y=0x22, .sp=0x0f, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x3756, .value=0x30}, {.addr=0x3757, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x3756, .value=0x30, .type=IO_READ},
        {.addr=0x3757, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0063) {
    const struct CPU_State initial_cpu = {.pc=0xafa0, .a=0x37, .x=0xa7, .y=0x9e, .sp=0x2b, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xafa0, .value=0x30}, {.addr=0xafa1, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xafa2, .a=0x37, .x=0xa7, .y=0x9e, .sp=0x2b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xafa0, .value=0x30}, {.addr=0xafa1, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xafa0, .value=0x30, .type=IO_READ},
        {.addr=0xafa1, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0064) {
    const struct CPU_State initial_cpu = {.pc=0xa551, .a=0xc3, .x=0x53, .y=0x1e, .sp=0xb4, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xa551, .value=0x30}, {.addr=0xa552, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xa553, .a=0xc3, .x=0x53, .y=0x1e, .sp=0xb4, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xa551, .value=0x30}, {.addr=0xa552, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xa551, .value=0x30, .type=IO_READ},
        {.addr=0xa552, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0065) {
    const struct CPU_State initial_cpu = {.pc=0xa176, .a=0xf6, .x=0xc2, .y=0xde, .sp=0x4b, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xa176, .value=0x30}, {.addr=0xa177, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xa0ff, .a=0xf6, .x=0xc2, .y=0xde, .sp=0x4b, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xa176, .value=0x30}, {.addr=0xa177, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xa176, .value=0x30, .type=IO_READ},
        {.addr=0xa177, .value=0x87, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0066) {
    const struct CPU_State initial_cpu = {.pc=0xde94, .a=0xce, .x=0xff, .y=0x3a, .sp=0xf1, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xde94, .value=0x30}, {.addr=0xde95, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xde96, .a=0xce, .x=0xff, .y=0x3a, .sp=0xf1, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xde94, .value=0x30}, {.addr=0xde95, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xde94, .value=0x30, .type=IO_READ},
        {.addr=0xde95, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0067) {
    const struct CPU_State initial_cpu = {.pc=0x792a, .a=0x79, .x=0x22, .y=0xbd, .sp=0xfc, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x792a, .value=0x30}, {.addr=0x792b, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x792c, .a=0x79, .x=0x22, .y=0xbd, .sp=0xfc, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x792a, .value=0x30}, {.addr=0x792b, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x792a, .value=0x30, .type=IO_READ},
        {.addr=0x792b, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0068) {
    const struct CPU_State initial_cpu = {.pc=0xf4d8, .a=0xef, .x=0x00, .y=0xdb, .sp=0x02, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xf4d8, .value=0x30}, {.addr=0xf4d9, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xf502, .a=0xef, .x=0x00, .y=0xdb, .sp=0x02, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xf4d8, .value=0x30}, {.addr=0xf4d9, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xf4d8, .value=0x30, .type=IO_READ},
        {.addr=0xf4d9, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0069) {
    const struct CPU_State initial_cpu = {.pc=0x96b0, .a=0x63, .x=0xfd, .y=0x88, .sp=0xa7, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x96b0, .value=0x30}, {.addr=0x96b1, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x96b2, .a=0x63, .x=0xfd, .y=0x88, .sp=0xa7, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x96b0, .value=0x30}, {.addr=0x96b1, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x96b0, .value=0x30, .type=IO_READ},
        {.addr=0x96b1, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_006A) {
    const struct CPU_State initial_cpu = {.pc=0xf6ba, .a=0xd0, .x=0x8d, .y=0x95, .sp=0x2b, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xf6ba, .value=0x30}, {.addr=0xf6bb, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xf6aa, .a=0xd0, .x=0x8d, .y=0x95, .sp=0x2b, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xf6ba, .value=0x30}, {.addr=0xf6bb, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xf6ba, .value=0x30, .type=IO_READ},
        {.addr=0xf6bb, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_006B) {
    const struct CPU_State initial_cpu = {.pc=0xfe50, .a=0x0c, .x=0x45, .y=0x00, .sp=0x16, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xfe50, .value=0x30}, {.addr=0xfe51, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xfe52, .a=0x0c, .x=0x45, .y=0x00, .sp=0x16, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xfe50, .value=0x30}, {.addr=0xfe51, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xfe50, .value=0x30, .type=IO_READ},
        {.addr=0xfe51, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_006C) {
    const struct CPU_State initial_cpu = {.pc=0x54ff, .a=0x8c, .x=0xcf, .y=0x06, .sp=0xc8, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x54ff, .value=0x30}, {.addr=0x5500, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x5501, .a=0x8c, .x=0xcf, .y=0x06, .sp=0xc8, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x54ff, .value=0x30}, {.addr=0x5500, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x54ff, .value=0x30, .type=IO_READ},
        {.addr=0x5500, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_006D) {
    const struct CPU_State initial_cpu = {.pc=0x99e8, .a=0x11, .x=0x63, .y=0xde, .sp=0xd2, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x99e8, .value=0x30}, {.addr=0x99e9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x99ca, .a=0x11, .x=0x63, .y=0xde, .sp=0xd2, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x99e8, .value=0x30}, {.addr=0x99e9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x99e8, .value=0x30, .type=IO_READ},
        {.addr=0x99e9, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_006E) {
    const struct CPU_State initial_cpu = {.pc=0x8947, .a=0xa5, .x=0x4a, .y=0x7b, .sp=0xbd, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x8947, .value=0x30}, {.addr=0x8948, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x8949, .a=0xa5, .x=0x4a, .y=0x7b, .sp=0xbd, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x8947, .value=0x30}, {.addr=0x8948, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x8947, .value=0x30, .type=IO_READ},
        {.addr=0x8948, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_006F) {
    const struct CPU_State initial_cpu = {.pc=0x0bf5, .a=0x9d, .x=0xb4, .y=0xd1, .sp=0x52, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0bf5, .value=0x30}, {.addr=0x0bf6, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x0bf7, .a=0x9d, .x=0xb4, .y=0xd1, .sp=0x52, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0bf5, .value=0x30}, {.addr=0x0bf6, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x0bf5, .value=0x30, .type=IO_READ},
        {.addr=0x0bf6, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0070) {
    const struct CPU_State initial_cpu = {.pc=0x6141, .a=0xbf, .x=0x22, .y=0xad, .sp=0x17, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x6141, .value=0x30}, {.addr=0x6142, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x6143, .a=0xbf, .x=0x22, .y=0xad, .sp=0x17, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x6141, .value=0x30}, {.addr=0x6142, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x6141, .value=0x30, .type=IO_READ},
        {.addr=0x6142, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0071) {
    const struct CPU_State initial_cpu = {.pc=0xae21, .a=0x4e, .x=0x87, .y=0x27, .sp=0x34, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xae21, .value=0x30}, {.addr=0xae22, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xae23, .a=0x4e, .x=0x87, .y=0x27, .sp=0x34, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xae21, .value=0x30}, {.addr=0xae22, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xae21, .value=0x30, .type=IO_READ},
        {.addr=0xae22, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0072) {
    const struct CPU_State initial_cpu = {.pc=0x7e91, .a=0x0c, .x=0x38, .y=0x7e, .sp=0x40, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x7e91, .value=0x30}, {.addr=0x7e92, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x7e67, .a=0x0c, .x=0x38, .y=0x7e, .sp=0x40, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x7e91, .value=0x30}, {.addr=0x7e92, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x7e91, .value=0x30, .type=IO_READ},
        {.addr=0x7e92, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0073) {
    const struct CPU_State initial_cpu = {.pc=0x4db3, .a=0xe1, .x=0xee, .y=0xfc, .sp=0x3e, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x4db3, .value=0x30}, {.addr=0x4db4, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x4e23, .a=0xe1, .x=0xee, .y=0xfc, .sp=0x3e, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x4db3, .value=0x30}, {.addr=0x4db4, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x4db3, .value=0x30, .type=IO_READ},
        {.addr=0x4db4, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0074) {
    const struct CPU_State initial_cpu = {.pc=0x5f09, .a=0xd0, .x=0xb5, .y=0x47, .sp=0x97, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x5f09, .value=0x30}, {.addr=0x5f0a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5f0b, .a=0xd0, .x=0xb5, .y=0x47, .sp=0x97, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x5f09, .value=0x30}, {.addr=0x5f0a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5f09, .value=0x30, .type=IO_READ},
        {.addr=0x5f0a, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0075) {
    const struct CPU_State initial_cpu = {.pc=0xd05d, .a=0xe1, .x=0x7c, .y=0xff, .sp=0x98, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xd05d, .value=0x30}, {.addr=0xd05e, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xd0b2, .a=0xe1, .x=0x7c, .y=0xff, .sp=0x98, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xd05d, .value=0x30}, {.addr=0xd05e, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xd05d, .value=0x30, .type=IO_READ},
        {.addr=0xd05e, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0076) {
    const struct CPU_State initial_cpu = {.pc=0x2311, .a=0x5f, .x=0xc7, .y=0x2a, .sp=0xd6, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x2311, .value=0x30}, {.addr=0x2312, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x2313, .a=0x5f, .x=0xc7, .y=0x2a, .sp=0xd6, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x2311, .value=0x30}, {.addr=0x2312, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x2311, .value=0x30, .type=IO_READ},
        {.addr=0x2312, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0077) {
    const struct CPU_State initial_cpu = {.pc=0xbdee, .a=0xdd, .x=0x1f, .y=0x02, .sp=0x3f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xbdee, .value=0x30}, {.addr=0xbdef, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xbdc4, .a=0xdd, .x=0x1f, .y=0x02, .sp=0x3f, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xbdee, .value=0x30}, {.addr=0xbdef, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xbdee, .value=0x30, .type=IO_READ},
        {.addr=0xbdef, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0078) {
    const struct CPU_State initial_cpu = {.pc=0xea29, .a=0xac, .x=0xe9, .y=0x7b, .sp=0xb9, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xea29, .value=0x30}, {.addr=0xea2a, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xea2b, .a=0xac, .x=0xe9, .y=0x7b, .sp=0xb9, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xea29, .value=0x30}, {.addr=0xea2a, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xea29, .value=0x30, .type=IO_READ},
        {.addr=0xea2a, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0079) {
    const struct CPU_State initial_cpu = {.pc=0xc1f5, .a=0x0e, .x=0xf9, .y=0xd3, .sp=0xa6, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xc1f5, .value=0x30}, {.addr=0xc1f6, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0xc260, .a=0x0e, .x=0xf9, .y=0xd3, .sp=0xa6, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xc1f5, .value=0x30}, {.addr=0xc1f6, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0xc1f5, .value=0x30, .type=IO_READ},
        {.addr=0xc1f6, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_007A) {
    const struct CPU_State initial_cpu = {.pc=0x6c83, .a=0xf9, .x=0x0e, .y=0x83, .sp=0x9f, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x6c83, .value=0x30}, {.addr=0x6c84, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x6cf8, .a=0xf9, .x=0x0e, .y=0x83, .sp=0x9f, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x6c83, .value=0x30}, {.addr=0x6c84, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x6c83, .value=0x30, .type=IO_READ},
        {.addr=0x6c84, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_007B) {
    const struct CPU_State initial_cpu = {.pc=0x945f, .a=0x0c, .x=0xd3, .y=0x30, .sp=0x34, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x945f, .value=0x30}, {.addr=0x9460, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x94c1, .a=0x0c, .x=0xd3, .y=0x30, .sp=0x34, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x945f, .value=0x30}, {.addr=0x9460, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x945f, .value=0x30, .type=IO_READ},
        {.addr=0x9460, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_007C) {
    const struct CPU_State initial_cpu = {.pc=0xe5f2, .a=0x10, .x=0x88, .y=0xe1, .sp=0x44, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xe5f2, .value=0x30}, {.addr=0xe5f3, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xe5f4, .a=0x10, .x=0x88, .y=0xe1, .sp=0x44, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xe5f2, .value=0x30}, {.addr=0xe5f3, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xe5f2, .value=0x30, .type=IO_READ},
        {.addr=0xe5f3, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_007D) {
    const struct CPU_State initial_cpu = {.pc=0x200c, .a=0x99, .x=0xec, .y=0xe0, .sp=0x66, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x200c, .value=0x30}, {.addr=0x200d, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x200e, .a=0x99, .x=0xec, .y=0xe0, .sp=0x66, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x200c, .value=0x30}, {.addr=0x200d, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x200c, .value=0x30, .type=IO_READ},
        {.addr=0x200d, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_007E) {
    const struct CPU_State initial_cpu = {.pc=0x5217, .a=0xe0, .x=0x5e, .y=0xd4, .sp=0x09, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x5217, .value=0x30}, {.addr=0x5218, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x5219, .a=0xe0, .x=0x5e, .y=0xd4, .sp=0x09, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x5217, .value=0x30}, {.addr=0x5218, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x5217, .value=0x30, .type=IO_READ},
        {.addr=0x5218, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_007F) {
    const struct CPU_State initial_cpu = {.pc=0x82b3, .a=0x66, .x=0x03, .y=0x21, .sp=0x94, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x82b3, .value=0x30}, {.addr=0x82b4, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x82b5, .a=0x66, .x=0x03, .y=0x21, .sp=0x94, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x82b3, .value=0x30}, {.addr=0x82b4, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x82b3, .value=0x30, .type=IO_READ},
        {.addr=0x82b4, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0080) {
    const struct CPU_State initial_cpu = {.pc=0x66a9, .a=0x52, .x=0xca, .y=0x5e, .sp=0xda, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x66a9, .value=0x30}, {.addr=0x66aa, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x66ab, .a=0x52, .x=0xca, .y=0x5e, .sp=0xda, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x66a9, .value=0x30}, {.addr=0x66aa, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x66a9, .value=0x30, .type=IO_READ},
        {.addr=0x66aa, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0081) {
    const struct CPU_State initial_cpu = {.pc=0x4ee3, .a=0x1d, .x=0x25, .y=0xab, .sp=0xab, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x4ee3, .value=0x30}, {.addr=0x4ee4, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x4f07, .a=0x1d, .x=0x25, .y=0xab, .sp=0xab, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x4ee3, .value=0x30}, {.addr=0x4ee4, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x4ee3, .value=0x30, .type=IO_READ},
        {.addr=0x4ee4, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0082) {
    const struct CPU_State initial_cpu = {.pc=0x4a9f, .a=0x52, .x=0xb4, .y=0x78, .sp=0xe9, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x4a9f, .value=0x30}, {.addr=0x4aa0, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x4aef, .a=0x52, .x=0xb4, .y=0x78, .sp=0xe9, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x4a9f, .value=0x30}, {.addr=0x4aa0, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x4a9f, .value=0x30, .type=IO_READ},
        {.addr=0x4aa0, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0083) {
    const struct CPU_State initial_cpu = {.pc=0xafc6, .a=0xb1, .x=0xe3, .y=0x18, .sp=0x67, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xafc6, .value=0x30}, {.addr=0xafc7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb00e, .a=0xb1, .x=0xe3, .y=0x18, .sp=0x67, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0xafc6, .value=0x30}, {.addr=0xafc7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xafc6, .value=0x30, .type=IO_READ},
        {.addr=0xafc7, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0084) {
    const struct CPU_State initial_cpu = {.pc=0x4969, .a=0x90, .x=0xdd, .y=0xd9, .sp=0x19, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x4969, .value=0x30}, {.addr=0x496a, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x496b, .a=0x90, .x=0xdd, .y=0xd9, .sp=0x19, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x4969, .value=0x30}, {.addr=0x496a, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x4969, .value=0x30, .type=IO_READ},
        {.addr=0x496a, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0085) {
    const struct CPU_State initial_cpu = {.pc=0x3a8e, .a=0x4a, .x=0x2a, .y=0x7e, .sp=0x68, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x3a8e, .value=0x30}, {.addr=0x3a8f, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x3a90, .a=0x4a, .x=0x2a, .y=0x7e, .sp=0x68, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x3a8e, .value=0x30}, {.addr=0x3a8f, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x3a8e, .value=0x30, .type=IO_READ},
        {.addr=0x3a8f, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0086) {
    const struct CPU_State initial_cpu = {.pc=0xf2b7, .a=0x7c, .x=0xd1, .y=0x3c, .sp=0x64, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xf2b7, .value=0x30}, {.addr=0xf2b8, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xf2b9, .a=0x7c, .x=0xd1, .y=0x3c, .sp=0x64, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xf2b7, .value=0x30}, {.addr=0xf2b8, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xf2b7, .value=0x30, .type=IO_READ},
        {.addr=0xf2b8, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0087) {
    const struct CPU_State initial_cpu = {.pc=0x43e2, .a=0x5e, .x=0x11, .y=0x5e, .sp=0x95, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x43e2, .value=0x30}, {.addr=0x43e3, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x43e4, .a=0x5e, .x=0x11, .y=0x5e, .sp=0x95, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x43e2, .value=0x30}, {.addr=0x43e3, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x43e2, .value=0x30, .type=IO_READ},
        {.addr=0x43e3, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0088) {
    const struct CPU_State initial_cpu = {.pc=0x28c1, .a=0x99, .x=0x70, .y=0x69, .sp=0x98, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x28c1, .value=0x30}, {.addr=0x28c2, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x28d2, .a=0x99, .x=0x70, .y=0x69, .sp=0x98, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x28c1, .value=0x30}, {.addr=0x28c2, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x28c1, .value=0x30, .type=IO_READ},
        {.addr=0x28c2, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0089) {
    const struct CPU_State initial_cpu = {.pc=0x556b, .a=0x32, .x=0xe9, .y=0x43, .sp=0x3c, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x556b, .value=0x30}, {.addr=0x556c, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x556d, .a=0x32, .x=0xe9, .y=0x43, .sp=0x3c, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x556b, .value=0x30}, {.addr=0x556c, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x556b, .value=0x30, .type=IO_READ},
        {.addr=0x556c, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_008A) {
    const struct CPU_State initial_cpu = {.pc=0x054c, .a=0x47, .x=0xd0, .y=0x9c, .sp=0x5a, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x054c, .value=0x30}, {.addr=0x054d, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x05a6, .a=0x47, .x=0xd0, .y=0x9c, .sp=0x5a, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x054c, .value=0x30}, {.addr=0x054d, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x054c, .value=0x30, .type=IO_READ},
        {.addr=0x054d, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_008B) {
    const struct CPU_State initial_cpu = {.pc=0xf6c0, .a=0x15, .x=0xb3, .y=0x4c, .sp=0xa2, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xf6c0, .value=0x30}, {.addr=0xf6c1, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xf6e0, .a=0x15, .x=0xb3, .y=0x4c, .sp=0xa2, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xf6c0, .value=0x30}, {.addr=0xf6c1, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xf6c0, .value=0x30, .type=IO_READ},
        {.addr=0xf6c1, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_008C) {
    const struct CPU_State initial_cpu = {.pc=0xed7d, .a=0x29, .x=0xcd, .y=0x6c, .sp=0x0c, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xed7d, .value=0x30}, {.addr=0xed7e, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xed7f, .a=0x29, .x=0xcd, .y=0x6c, .sp=0x0c, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xed7d, .value=0x30}, {.addr=0xed7e, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xed7d, .value=0x30, .type=IO_READ},
        {.addr=0xed7e, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_008D) {
    const struct CPU_State initial_cpu = {.pc=0x7466, .a=0xfb, .x=0x0f, .y=0x0b, .sp=0x36, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x7466, .value=0x30}, {.addr=0x7467, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x74c6, .a=0xfb, .x=0x0f, .y=0x0b, .sp=0x36, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x7466, .value=0x30}, {.addr=0x7467, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x7466, .value=0x30, .type=IO_READ},
        {.addr=0x7467, .value=0x5e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_008E) {
    const struct CPU_State initial_cpu = {.pc=0x664c, .a=0x4d, .x=0x6e, .y=0xfd, .sp=0xe4, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x664c, .value=0x30}, {.addr=0x664d, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x6603, .a=0x4d, .x=0x6e, .y=0xfd, .sp=0xe4, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x664c, .value=0x30}, {.addr=0x664d, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x664c, .value=0x30, .type=IO_READ},
        {.addr=0x664d, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_008F) {
    const struct CPU_State initial_cpu = {.pc=0xfe94, .a=0x29, .x=0x8d, .y=0x4f, .sp=0xa8, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xfe94, .value=0x30}, {.addr=0xfe95, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xfec4, .a=0x29, .x=0x8d, .y=0x4f, .sp=0xa8, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xfe94, .value=0x30}, {.addr=0xfe95, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xfe94, .value=0x30, .type=IO_READ},
        {.addr=0xfe95, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0090) {
    const struct CPU_State initial_cpu = {.pc=0x4365, .a=0x94, .x=0x75, .y=0xa0, .sp=0x5c, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x4365, .value=0x30}, {.addr=0x4366, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x4367, .a=0x94, .x=0x75, .y=0xa0, .sp=0x5c, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x4365, .value=0x30}, {.addr=0x4366, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x4365, .value=0x30, .type=IO_READ},
        {.addr=0x4366, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0091) {
    const struct CPU_State initial_cpu = {.pc=0x4fff, .a=0xe7, .x=0xaa, .y=0x8d, .sp=0x73, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x4fff, .value=0x30}, {.addr=0x5000, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x507e, .a=0xe7, .x=0xaa, .y=0x8d, .sp=0x73, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x4fff, .value=0x30}, {.addr=0x5000, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x4fff, .value=0x30, .type=IO_READ},
        {.addr=0x5000, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0092) {
    const struct CPU_State initial_cpu = {.pc=0x0547, .a=0x0e, .x=0x76, .y=0xb7, .sp=0x80, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0547, .value=0x30}, {.addr=0x0548, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x0563, .a=0x0e, .x=0x76, .y=0xb7, .sp=0x80, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0547, .value=0x30}, {.addr=0x0548, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x0547, .value=0x30, .type=IO_READ},
        {.addr=0x0548, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0093) {
    const struct CPU_State initial_cpu = {.pc=0xb5d6, .a=0x4f, .x=0x69, .y=0x01, .sp=0x6a, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xb5d6, .value=0x30}, {.addr=0xb5d7, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xb5cb, .a=0x4f, .x=0x69, .y=0x01, .sp=0x6a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xb5d6, .value=0x30}, {.addr=0xb5d7, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xb5d6, .value=0x30, .type=IO_READ},
        {.addr=0xb5d7, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0094) {
    const struct CPU_State initial_cpu = {.pc=0x222e, .a=0x29, .x=0xba, .y=0x46, .sp=0x43, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x222e, .value=0x30}, {.addr=0x222f, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x2230, .a=0x29, .x=0xba, .y=0x46, .sp=0x43, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x222e, .value=0x30}, {.addr=0x222f, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x222e, .value=0x30, .type=IO_READ},
        {.addr=0x222f, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0095) {
    const struct CPU_State initial_cpu = {.pc=0x1adc, .a=0x74, .x=0x74, .y=0xbe, .sp=0x5c, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x1adc, .value=0x30}, {.addr=0x1add, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x1ac6, .a=0x74, .x=0x74, .y=0xbe, .sp=0x5c, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x1adc, .value=0x30}, {.addr=0x1add, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x1adc, .value=0x30, .type=IO_READ},
        {.addr=0x1add, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0096) {
    const struct CPU_State initial_cpu = {.pc=0x7558, .a=0x95, .x=0x1b, .y=0x26, .sp=0x60, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x7558, .value=0x30}, {.addr=0x7559, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x755a, .a=0x95, .x=0x1b, .y=0x26, .sp=0x60, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x7558, .value=0x30}, {.addr=0x7559, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x7558, .value=0x30, .type=IO_READ},
        {.addr=0x7559, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0097) {
    const struct CPU_State initial_cpu = {.pc=0x181d, .a=0x49, .x=0x26, .y=0xb8, .sp=0x71, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x181d, .value=0x30}, {.addr=0x181e, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x181f, .a=0x49, .x=0x26, .y=0xb8, .sp=0x71, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x181d, .value=0x30}, {.addr=0x181e, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x181d, .value=0x30, .type=IO_READ},
        {.addr=0x181e, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0098) {
    const struct CPU_State initial_cpu = {.pc=0x76a2, .a=0xeb, .x=0x08, .y=0xc3, .sp=0xe7, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x76a2, .value=0x30}, {.addr=0x76a3, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x76da, .a=0xeb, .x=0x08, .y=0xc3, .sp=0xe7, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x76a2, .value=0x30}, {.addr=0x76a3, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x76a2, .value=0x30, .type=IO_READ},
        {.addr=0x76a3, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0099) {
    const struct CPU_State initial_cpu = {.pc=0x77e2, .a=0xd1, .x=0xab, .y=0xe8, .sp=0xa8, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x77e2, .value=0x30}, {.addr=0x77e3, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x77fe, .a=0xd1, .x=0xab, .y=0xe8, .sp=0xa8, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x77e2, .value=0x30}, {.addr=0x77e3, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x77e2, .value=0x30, .type=IO_READ},
        {.addr=0x77e3, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_009A) {
    const struct CPU_State initial_cpu = {.pc=0x62b7, .a=0x98, .x=0xb1, .y=0xdf, .sp=0xfd, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x62b7, .value=0x30}, {.addr=0x62b8, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x62b9, .a=0x98, .x=0xb1, .y=0xdf, .sp=0xfd, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x62b7, .value=0x30}, {.addr=0x62b8, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x62b7, .value=0x30, .type=IO_READ},
        {.addr=0x62b8, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_009B) {
    const struct CPU_State initial_cpu = {.pc=0xd49c, .a=0x5e, .x=0xbd, .y=0xef, .sp=0xd9, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xd49c, .value=0x30}, {.addr=0xd49d, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xd49e, .a=0x5e, .x=0xbd, .y=0xef, .sp=0xd9, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xd49c, .value=0x30}, {.addr=0xd49d, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xd49c, .value=0x30, .type=IO_READ},
        {.addr=0xd49d, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_009C) {
    const struct CPU_State initial_cpu = {.pc=0x3ecd, .a=0x6e, .x=0x7b, .y=0x36, .sp=0x9f, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x3ecd, .value=0x30}, {.addr=0x3ece, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x3ecf, .a=0x6e, .x=0x7b, .y=0x36, .sp=0x9f, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x3ecd, .value=0x30}, {.addr=0x3ece, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x3ecd, .value=0x30, .type=IO_READ},
        {.addr=0x3ece, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_009D) {
    const struct CPU_State initial_cpu = {.pc=0x5e6f, .a=0xc4, .x=0x6b, .y=0xe2, .sp=0x39, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x5e6f, .value=0x30}, {.addr=0x5e70, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5e5e, .a=0xc4, .x=0x6b, .y=0xe2, .sp=0x39, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x5e6f, .value=0x30}, {.addr=0x5e70, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5e6f, .value=0x30, .type=IO_READ},
        {.addr=0x5e70, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_009E) {
    const struct CPU_State initial_cpu = {.pc=0xc50c, .a=0x7c, .x=0x2e, .y=0x8b, .sp=0x66, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xc50c, .value=0x30}, {.addr=0xc50d, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xc50e, .a=0x7c, .x=0x2e, .y=0x8b, .sp=0x66, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xc50c, .value=0x30}, {.addr=0xc50d, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xc50c, .value=0x30, .type=IO_READ},
        {.addr=0xc50d, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_009F) {
    const struct CPU_State initial_cpu = {.pc=0xfd1d, .a=0x6f, .x=0xb2, .y=0xe9, .sp=0x6f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xfd1d, .value=0x30}, {.addr=0xfd1e, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xfd1f, .a=0x6f, .x=0xb2, .y=0xe9, .sp=0x6f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xfd1d, .value=0x30}, {.addr=0xfd1e, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xfd1d, .value=0x30, .type=IO_READ},
        {.addr=0xfd1e, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x2970, .a=0x5c, .x=0xe6, .y=0x4a, .sp=0x2d, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x2970, .value=0x30}, {.addr=0x2971, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x2972, .a=0x5c, .x=0xe6, .y=0x4a, .sp=0x2d, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x2970, .value=0x30}, {.addr=0x2971, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x2970, .value=0x30, .type=IO_READ},
        {.addr=0x2971, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xba9d, .a=0xf5, .x=0x02, .y=0x0e, .sp=0xc2, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xba9d, .value=0x30}, {.addr=0xba9e, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xbaa8, .a=0xf5, .x=0x02, .y=0x0e, .sp=0xc2, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xba9d, .value=0x30}, {.addr=0xba9e, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xba9d, .value=0x30, .type=IO_READ},
        {.addr=0xba9e, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x7c5a, .a=0x08, .x=0x07, .y=0xd4, .sp=0xe1, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x7c5a, .value=0x30}, {.addr=0x7c5b, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x7c21, .a=0x08, .x=0x07, .y=0xd4, .sp=0xe1, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x7c5a, .value=0x30}, {.addr=0x7c5b, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x7c5a, .value=0x30, .type=IO_READ},
        {.addr=0x7c5b, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xd8d7, .a=0x20, .x=0x4a, .y=0x6b, .sp=0x85, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xd8d7, .value=0x30}, {.addr=0xd8d8, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xd8d9, .a=0x20, .x=0x4a, .y=0x6b, .sp=0x85, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xd8d7, .value=0x30}, {.addr=0xd8d8, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xd8d7, .value=0x30, .type=IO_READ},
        {.addr=0xd8d8, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x7bea, .a=0x3c, .x=0x4d, .y=0x6e, .sp=0x67, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x7bea, .value=0x30}, {.addr=0x7beb, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x7bec, .a=0x3c, .x=0x4d, .y=0x6e, .sp=0x67, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x7bea, .value=0x30}, {.addr=0x7beb, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x7bea, .value=0x30, .type=IO_READ},
        {.addr=0x7beb, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x2073, .a=0x2a, .x=0x16, .y=0x02, .sp=0x63, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x2073, .value=0x30}, {.addr=0x2074, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2075, .a=0x2a, .x=0x16, .y=0x02, .sp=0x63, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x2073, .value=0x30}, {.addr=0x2074, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2073, .value=0x30, .type=IO_READ},
        {.addr=0x2074, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xc5db, .a=0xc8, .x=0x42, .y=0x96, .sp=0x89, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xc5db, .value=0x30}, {.addr=0xc5dc, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xc567, .a=0xc8, .x=0x42, .y=0x96, .sp=0x89, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xc5db, .value=0x30}, {.addr=0xc5dc, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xc5db, .value=0x30, .type=IO_READ},
        {.addr=0xc5dc, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xb32d, .a=0xc1, .x=0x3f, .y=0x3a, .sp=0xbd, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xb32d, .value=0x30}, {.addr=0xb32e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb2b5, .a=0xc1, .x=0x3f, .y=0x3a, .sp=0xbd, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xb32d, .value=0x30}, {.addr=0xb32e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb32d, .value=0x30, .type=IO_READ},
        {.addr=0xb32e, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x9d08, .a=0x4b, .x=0x4c, .y=0x8d, .sp=0x11, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x9d08, .value=0x30}, {.addr=0x9d09, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x9d39, .a=0x4b, .x=0x4c, .y=0x8d, .sp=0x11, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x9d08, .value=0x30}, {.addr=0x9d09, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x9d08, .value=0x30, .type=IO_READ},
        {.addr=0x9d09, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xae8f, .a=0x55, .x=0x23, .y=0x4e, .sp=0x02, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xae8f, .value=0x30}, {.addr=0xae90, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xaea0, .a=0x55, .x=0x23, .y=0x4e, .sp=0x02, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xae8f, .value=0x30}, {.addr=0xae90, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xae8f, .value=0x30, .type=IO_READ},
        {.addr=0xae90, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x9e4f, .a=0x2f, .x=0x34, .y=0xd8, .sp=0xf3, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x9e4f, .value=0x30}, {.addr=0x9e50, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x9e51, .a=0x2f, .x=0x34, .y=0xd8, .sp=0xf3, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x9e4f, .value=0x30}, {.addr=0x9e50, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x9e4f, .value=0x30, .type=IO_READ},
        {.addr=0x9e50, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x5182, .a=0x38, .x=0x94, .y=0xc6, .sp=0x74, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x5182, .value=0x30}, {.addr=0x5183, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x51ff, .a=0x38, .x=0x94, .y=0xc6, .sp=0x74, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x5182, .value=0x30}, {.addr=0x5183, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x5182, .value=0x30, .type=IO_READ},
        {.addr=0x5183, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x11e3, .a=0x1d, .x=0xe4, .y=0xf3, .sp=0x0b, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x11e3, .value=0x30}, {.addr=0x11e4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1241, .a=0x1d, .x=0xe4, .y=0xf3, .sp=0x0b, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x11e3, .value=0x30}, {.addr=0x11e4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x11e3, .value=0x30, .type=IO_READ},
        {.addr=0x11e4, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x864c, .a=0x1f, .x=0x16, .y=0x60, .sp=0x94, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x864c, .value=0x30}, {.addr=0x864d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x864e, .a=0x1f, .x=0x16, .y=0x60, .sp=0x94, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x864c, .value=0x30}, {.addr=0x864d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x864c, .value=0x30, .type=IO_READ},
        {.addr=0x864d, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xdc82, .a=0xad, .x=0x52, .y=0x53, .sp=0x8e, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xdc82, .value=0x30}, {.addr=0xdc83, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xdc84, .a=0xad, .x=0x52, .y=0x53, .sp=0x8e, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xdc82, .value=0x30}, {.addr=0xdc83, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xdc82, .value=0x30, .type=IO_READ},
        {.addr=0xdc83, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x0c24, .a=0xd9, .x=0x63, .y=0x57, .sp=0x02, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0c24, .value=0x30}, {.addr=0x0c25, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x0bb2, .a=0xd9, .x=0x63, .y=0x57, .sp=0x02, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0c24, .value=0x30}, {.addr=0x0c25, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x0c24, .value=0x30, .type=IO_READ},
        {.addr=0x0c25, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x19e2, .a=0xfc, .x=0x35, .y=0xda, .sp=0xe3, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x19e2, .value=0x30}, {.addr=0x19e3, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x19f9, .a=0xfc, .x=0x35, .y=0xda, .sp=0xe3, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x19e2, .value=0x30}, {.addr=0x19e3, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x19e2, .value=0x30, .type=IO_READ},
        {.addr=0x19e3, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x1937, .a=0xc2, .x=0xc4, .y=0xe0, .sp=0xf1, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x1937, .value=0x30}, {.addr=0x1938, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x1939, .a=0xc2, .x=0xc4, .y=0xe0, .sp=0xf1, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x1937, .value=0x30}, {.addr=0x1938, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x1937, .value=0x30, .type=IO_READ},
        {.addr=0x1938, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xe0e6, .a=0xe6, .x=0x07, .y=0x84, .sp=0xa6, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xe0e6, .value=0x30}, {.addr=0xe0e7, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xe14d, .a=0xe6, .x=0x07, .y=0x84, .sp=0xa6, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe0e6, .value=0x30}, {.addr=0xe0e7, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xe0e6, .value=0x30, .type=IO_READ},
        {.addr=0xe0e7, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x7897, .a=0x8c, .x=0x41, .y=0x68, .sp=0x8d, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x7897, .value=0x30}, {.addr=0x7898, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x781b, .a=0x8c, .x=0x41, .y=0x68, .sp=0x8d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x7897, .value=0x30}, {.addr=0x7898, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x7897, .value=0x30, .type=IO_READ},
        {.addr=0x7898, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xa75d, .a=0xdc, .x=0x13, .y=0x67, .sp=0x03, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xa75d, .value=0x30}, {.addr=0xa75e, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xa75a, .a=0xdc, .x=0x13, .y=0x67, .sp=0x03, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xa75d, .value=0x30}, {.addr=0xa75e, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xa75d, .value=0x30, .type=IO_READ},
        {.addr=0xa75e, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x50a3, .a=0x78, .x=0xf1, .y=0x70, .sp=0x4d, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x50a3, .value=0x30}, {.addr=0x50a4, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x50a5, .a=0x78, .x=0xf1, .y=0x70, .sp=0x4d, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x50a3, .value=0x30}, {.addr=0x50a4, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x50a3, .value=0x30, .type=IO_READ},
        {.addr=0x50a4, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xebd4, .a=0x3e, .x=0xde, .y=0x6b, .sp=0x36, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xebd4, .value=0x30}, {.addr=0xebd5, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xebd6, .a=0x3e, .x=0xde, .y=0x6b, .sp=0x36, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xebd4, .value=0x30}, {.addr=0xebd5, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xebd4, .value=0x30, .type=IO_READ},
        {.addr=0xebd5, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xf5ea, .a=0x01, .x=0xc6, .y=0x58, .sp=0x93, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xf5ea, .value=0x30}, {.addr=0xf5eb, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf5ec, .a=0x01, .x=0xc6, .y=0x58, .sp=0x93, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xf5ea, .value=0x30}, {.addr=0xf5eb, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf5ea, .value=0x30, .type=IO_READ},
        {.addr=0xf5eb, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x4a13, .a=0x6d, .x=0x4f, .y=0xd4, .sp=0x3f, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x4a13, .value=0x30}, {.addr=0x4a14, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x4a15, .a=0x6d, .x=0x4f, .y=0xd4, .sp=0x3f, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x4a13, .value=0x30}, {.addr=0x4a14, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x4a13, .value=0x30, .type=IO_READ},
        {.addr=0x4a14, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xc9f7, .a=0x03, .x=0x51, .y=0x3f, .sp=0x14, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xc9f7, .value=0x30}, {.addr=0xc9f8, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xc9f9, .a=0x03, .x=0x51, .y=0x3f, .sp=0x14, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xc9f7, .value=0x30}, {.addr=0xc9f8, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xc9f7, .value=0x30, .type=IO_READ},
        {.addr=0xc9f8, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xf3a5, .a=0x00, .x=0x6b, .y=0xb8, .sp=0x37, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xf3a5, .value=0x30}, {.addr=0xf3a6, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xf3a7, .a=0x00, .x=0x6b, .y=0xb8, .sp=0x37, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xf3a5, .value=0x30}, {.addr=0xf3a6, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xf3a5, .value=0x30, .type=IO_READ},
        {.addr=0xf3a6, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x3049, .a=0xe0, .x=0x22, .y=0xe2, .sp=0x0f, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x3049, .value=0x30}, {.addr=0x304a, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x304b, .a=0xe0, .x=0x22, .y=0xe2, .sp=0x0f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3049, .value=0x30}, {.addr=0x304a, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x3049, .value=0x30, .type=IO_READ},
        {.addr=0x304a, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x4eac, .a=0xdc, .x=0x2a, .y=0x5c, .sp=0x90, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x4eac, .value=0x30}, {.addr=0x4ead, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x4eae, .a=0xdc, .x=0x2a, .y=0x5c, .sp=0x90, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x4eac, .value=0x30}, {.addr=0x4ead, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x4eac, .value=0x30, .type=IO_READ},
        {.addr=0x4ead, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x1ab8, .a=0x14, .x=0x02, .y=0xe2, .sp=0xc0, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x1ab8, .value=0x30}, {.addr=0x1ab9, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x1aba, .a=0x14, .x=0x02, .y=0xe2, .sp=0xc0, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x1ab8, .value=0x30}, {.addr=0x1ab9, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x1ab8, .value=0x30, .type=IO_READ},
        {.addr=0x1ab9, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x1fe5, .a=0xa2, .x=0x13, .y=0x44, .sp=0x84, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x1fe5, .value=0x30}, {.addr=0x1fe6, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x1fe7, .a=0xa2, .x=0x13, .y=0x44, .sp=0x84, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1fe5, .value=0x30}, {.addr=0x1fe6, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x1fe5, .value=0x30, .type=IO_READ},
        {.addr=0x1fe6, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x816a, .a=0x09, .x=0x59, .y=0x2f, .sp=0x03, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x816a, .value=0x30}, {.addr=0x816b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x816c, .a=0x09, .x=0x59, .y=0x2f, .sp=0x03, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x816a, .value=0x30}, {.addr=0x816b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x816a, .value=0x30, .type=IO_READ},
        {.addr=0x816b, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x6fb3, .a=0xa6, .x=0x80, .y=0x22, .sp=0x23, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x6fb3, .value=0x30}, {.addr=0x6fb4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6fb5, .a=0xa6, .x=0x80, .y=0x22, .sp=0x23, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x6fb3, .value=0x30}, {.addr=0x6fb4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6fb3, .value=0x30, .type=IO_READ},
        {.addr=0x6fb4, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xe948, .a=0xeb, .x=0x6f, .y=0xdc, .sp=0xea, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xe948, .value=0x30}, {.addr=0xe949, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xe95a, .a=0xeb, .x=0x6f, .y=0xdc, .sp=0xea, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xe948, .value=0x30}, {.addr=0xe949, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xe948, .value=0x30, .type=IO_READ},
        {.addr=0xe949, .value=0x10, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x6c42, .a=0x53, .x=0x1c, .y=0x1c, .sp=0x17, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x6c42, .value=0x30}, {.addr=0x6c43, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x6c58, .a=0x53, .x=0x1c, .y=0x1c, .sp=0x17, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x6c42, .value=0x30}, {.addr=0x6c43, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x6c42, .value=0x30, .type=IO_READ},
        {.addr=0x6c43, .value=0x14, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xffa3, .a=0x4f, .x=0x41, .y=0x93, .sp=0x97, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xffa3, .value=0x30}, {.addr=0xffa4, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xffa5, .a=0x4f, .x=0x41, .y=0x93, .sp=0x97, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xffa3, .value=0x30}, {.addr=0xffa4, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xffa3, .value=0x30, .type=IO_READ},
        {.addr=0xffa4, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x5a8d, .a=0x56, .x=0x7b, .y=0x6b, .sp=0xbd, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x5a8d, .value=0x30}, {.addr=0x5a8e, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x5a8f, .a=0x56, .x=0x7b, .y=0x6b, .sp=0xbd, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x5a8d, .value=0x30}, {.addr=0x5a8e, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x5a8d, .value=0x30, .type=IO_READ},
        {.addr=0x5a8e, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x8171, .a=0x9c, .x=0xbf, .y=0xa6, .sp=0xc7, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x8171, .value=0x30}, {.addr=0x8172, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x80fa, .a=0x9c, .x=0xbf, .y=0xa6, .sp=0xc7, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x8171, .value=0x30}, {.addr=0x8172, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x8171, .value=0x30, .type=IO_READ},
        {.addr=0x8172, .value=0x87, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xf434, .a=0x95, .x=0xc7, .y=0x68, .sp=0xbd, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xf434, .value=0x30}, {.addr=0xf435, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xf4a7, .a=0x95, .x=0xc7, .y=0x68, .sp=0xbd, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xf434, .value=0x30}, {.addr=0xf435, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xf434, .value=0x30, .type=IO_READ},
        {.addr=0xf435, .value=0x71, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xa0c3, .a=0x16, .x=0x65, .y=0xe9, .sp=0x8e, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xa0c3, .value=0x30}, {.addr=0xa0c4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa0c5, .a=0x16, .x=0x65, .y=0xe9, .sp=0x8e, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xa0c3, .value=0x30}, {.addr=0xa0c4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa0c3, .value=0x30, .type=IO_READ},
        {.addr=0xa0c4, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x6360, .a=0xa0, .x=0x23, .y=0x6a, .sp=0x24, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x6360, .value=0x30}, {.addr=0x6361, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x6362, .a=0xa0, .x=0x23, .y=0x6a, .sp=0x24, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x6360, .value=0x30}, {.addr=0x6361, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x6360, .value=0x30, .type=IO_READ},
        {.addr=0x6361, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xa946, .a=0x51, .x=0x68, .y=0x67, .sp=0x7d, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xa946, .value=0x30}, {.addr=0xa947, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xa8f5, .a=0x51, .x=0x68, .y=0x67, .sp=0x7d, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xa946, .value=0x30}, {.addr=0xa947, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xa946, .value=0x30, .type=IO_READ},
        {.addr=0xa947, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x98d9, .a=0xb5, .x=0x8c, .y=0x91, .sp=0xa8, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x98d9, .value=0x30}, {.addr=0x98da, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x98e0, .a=0xb5, .x=0x8c, .y=0x91, .sp=0xa8, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x98d9, .value=0x30}, {.addr=0x98da, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x98d9, .value=0x30, .type=IO_READ},
        {.addr=0x98da, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x50f8, .a=0x25, .x=0x12, .y=0x43, .sp=0x1d, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x50f8, .value=0x30}, {.addr=0x50f9, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x50fa, .a=0x25, .x=0x12, .y=0x43, .sp=0x1d, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x50f8, .value=0x30}, {.addr=0x50f9, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x50f8, .value=0x30, .type=IO_READ},
        {.addr=0x50f9, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x4595, .a=0x61, .x=0x4b, .y=0xee, .sp=0x7a, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x4595, .value=0x30}, {.addr=0x4596, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4597, .a=0x61, .x=0x4b, .y=0xee, .sp=0x7a, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x4595, .value=0x30}, {.addr=0x4596, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4595, .value=0x30, .type=IO_READ},
        {.addr=0x4596, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x4884, .a=0x6e, .x=0xe0, .y=0xea, .sp=0xae, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x4884, .value=0x30}, {.addr=0x4885, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x48b4, .a=0x6e, .x=0xe0, .y=0xea, .sp=0xae, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x4884, .value=0x30}, {.addr=0x4885, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x4884, .value=0x30, .type=IO_READ},
        {.addr=0x4885, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xb69e, .a=0xa7, .x=0x34, .y=0x9b, .sp=0xcf, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xb69e, .value=0x30}, {.addr=0xb69f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb6a0, .a=0xa7, .x=0x34, .y=0x9b, .sp=0xcf, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb69e, .value=0x30}, {.addr=0xb69f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb69e, .value=0x30, .type=IO_READ},
        {.addr=0xb69f, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xa54c, .a=0xd5, .x=0xa3, .y=0x84, .sp=0x2c, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xa54c, .value=0x30}, {.addr=0xa54d, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xa4d1, .a=0xd5, .x=0xa3, .y=0x84, .sp=0x2c, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xa54c, .value=0x30}, {.addr=0xa54d, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xa54c, .value=0x30, .type=IO_READ},
        {.addr=0xa54d, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x5b84, .a=0xeb, .x=0x0d, .y=0xfe, .sp=0x36, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x5b84, .value=0x30}, {.addr=0x5b85, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5bec, .a=0xeb, .x=0x0d, .y=0xfe, .sp=0x36, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x5b84, .value=0x30}, {.addr=0x5b85, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5b84, .value=0x30, .type=IO_READ},
        {.addr=0x5b85, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x4fa1, .a=0xcd, .x=0x71, .y=0x55, .sp=0x4e, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x4fa1, .value=0x30}, {.addr=0x4fa2, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x4fa3, .a=0xcd, .x=0x71, .y=0x55, .sp=0x4e, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x4fa1, .value=0x30}, {.addr=0x4fa2, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x4fa1, .value=0x30, .type=IO_READ},
        {.addr=0x4fa2, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x1048, .a=0x58, .x=0x1e, .y=0xa5, .sp=0x8c, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x1048, .value=0x30}, {.addr=0x1049, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x104a, .a=0x58, .x=0x1e, .y=0xa5, .sp=0x8c, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x1048, .value=0x30}, {.addr=0x1049, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x1048, .value=0x30, .type=IO_READ},
        {.addr=0x1049, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x7500, .a=0xb1, .x=0x01, .y=0xd9, .sp=0xf7, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x7500, .value=0x30}, {.addr=0x7501, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x74ce, .a=0xb1, .x=0x01, .y=0xd9, .sp=0xf7, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x7500, .value=0x30}, {.addr=0x7501, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x7500, .value=0x30, .type=IO_READ},
        {.addr=0x7501, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x2498, .a=0x44, .x=0x30, .y=0x74, .sp=0x7a, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x2498, .value=0x30}, {.addr=0x2499, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x249a, .a=0x44, .x=0x30, .y=0x74, .sp=0x7a, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x2498, .value=0x30}, {.addr=0x2499, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x2498, .value=0x30, .type=IO_READ},
        {.addr=0x2499, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xa95a, .a=0xdf, .x=0xd3, .y=0x32, .sp=0x6a, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xa95a, .value=0x30}, {.addr=0xa95b, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xa95c, .a=0xdf, .x=0xd3, .y=0x32, .sp=0x6a, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xa95a, .value=0x30}, {.addr=0xa95b, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xa95a, .value=0x30, .type=IO_READ},
        {.addr=0xa95b, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x64d4, .a=0xb2, .x=0xff, .y=0xd4, .sp=0xc5, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x64d4, .value=0x30}, {.addr=0x64d5, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x64d6, .a=0xb2, .x=0xff, .y=0xd4, .sp=0xc5, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x64d4, .value=0x30}, {.addr=0x64d5, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x64d4, .value=0x30, .type=IO_READ},
        {.addr=0x64d5, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xfafc, .a=0x4c, .x=0x8b, .y=0x1f, .sp=0x53, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xfafc, .value=0x30}, {.addr=0xfafd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfabb, .a=0x4c, .x=0x8b, .y=0x1f, .sp=0x53, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xfafc, .value=0x30}, {.addr=0xfafd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfafc, .value=0x30, .type=IO_READ},
        {.addr=0xfafd, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xfe6c, .a=0xbe, .x=0x29, .y=0xb8, .sp=0x1a, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xfe6c, .value=0x30}, {.addr=0xfe6d, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xfe6e, .a=0xbe, .x=0x29, .y=0xb8, .sp=0x1a, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xfe6c, .value=0x30}, {.addr=0xfe6d, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xfe6c, .value=0x30, .type=IO_READ},
        {.addr=0xfe6d, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xde12, .a=0x26, .x=0xe0, .y=0x25, .sp=0x79, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xde12, .value=0x30}, {.addr=0xde13, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xde14, .a=0x26, .x=0xe0, .y=0x25, .sp=0x79, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xde12, .value=0x30}, {.addr=0xde13, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xde12, .value=0x30, .type=IO_READ},
        {.addr=0xde13, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x677d, .a=0xfc, .x=0x4e, .y=0xd9, .sp=0x37, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x677d, .value=0x30}, {.addr=0x677e, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x679a, .a=0xfc, .x=0x4e, .y=0xd9, .sp=0x37, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x677d, .value=0x30}, {.addr=0x677e, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x677d, .value=0x30, .type=IO_READ},
        {.addr=0x677e, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x491d, .a=0xb9, .x=0xe1, .y=0x86, .sp=0x8d, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x491d, .value=0x30}, {.addr=0x491e, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4905, .a=0xb9, .x=0xe1, .y=0x86, .sp=0x8d, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x491d, .value=0x30}, {.addr=0x491e, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x491d, .value=0x30, .type=IO_READ},
        {.addr=0x491e, .value=0xe6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xdb1a, .a=0xaf, .x=0xd7, .y=0x9d, .sp=0x31, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xdb1a, .value=0x30}, {.addr=0xdb1b, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xdab7, .a=0xaf, .x=0xd7, .y=0x9d, .sp=0x31, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xdb1a, .value=0x30}, {.addr=0xdb1b, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xdb1a, .value=0x30, .type=IO_READ},
        {.addr=0xdb1b, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x9aec, .a=0x12, .x=0x2a, .y=0xbf, .sp=0x2e, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x9aec, .value=0x30}, {.addr=0x9aed, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x9b25, .a=0x12, .x=0x2a, .y=0xbf, .sp=0x2e, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x9aec, .value=0x30}, {.addr=0x9aed, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x9aec, .value=0x30, .type=IO_READ},
        {.addr=0x9aed, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x50a5, .a=0x20, .x=0x4f, .y=0x26, .sp=0x8e, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x50a5, .value=0x30}, {.addr=0x50a6, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x5111, .a=0x20, .x=0x4f, .y=0x26, .sp=0x8e, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x50a5, .value=0x30}, {.addr=0x50a6, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x50a5, .value=0x30, .type=IO_READ},
        {.addr=0x50a6, .value=0x6a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x0672, .a=0xa8, .x=0x6d, .y=0x59, .sp=0xbe, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0672, .value=0x30}, {.addr=0x0673, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0674, .a=0xa8, .x=0x6d, .y=0x59, .sp=0xbe, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0672, .value=0x30}, {.addr=0x0673, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0672, .value=0x30, .type=IO_READ},
        {.addr=0x0673, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x0a94, .a=0x32, .x=0xe1, .y=0x41, .sp=0x60, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0a94, .value=0x30}, {.addr=0x0a95, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0ac3, .a=0x32, .x=0xe1, .y=0x41, .sp=0x60, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0a94, .value=0x30}, {.addr=0x0a95, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0a94, .value=0x30, .type=IO_READ},
        {.addr=0x0a95, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x68bf, .a=0x7f, .x=0x72, .y=0x64, .sp=0x2b, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x68bf, .value=0x30}, {.addr=0x68c0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x689d, .a=0x7f, .x=0x72, .y=0x64, .sp=0x2b, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x68bf, .value=0x30}, {.addr=0x68c0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x68bf, .value=0x30, .type=IO_READ},
        {.addr=0x68c0, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xd5bf, .a=0x0c, .x=0xb3, .y=0x0f, .sp=0x98, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xd5bf, .value=0x30}, {.addr=0xd5c0, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xd5a6, .a=0x0c, .x=0xb3, .y=0x0f, .sp=0x98, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd5bf, .value=0x30}, {.addr=0xd5c0, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xd5bf, .value=0x30, .type=IO_READ},
        {.addr=0xd5c0, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x713b, .a=0x6d, .x=0x8e, .y=0xbe, .sp=0xa0, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x713b, .value=0x30}, {.addr=0x713c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x713d, .a=0x6d, .x=0x8e, .y=0xbe, .sp=0xa0, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x713b, .value=0x30}, {.addr=0x713c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x713b, .value=0x30, .type=IO_READ},
        {.addr=0x713c, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x9690, .a=0xeb, .x=0x0a, .y=0x2e, .sp=0xe2, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x9690, .value=0x30}, {.addr=0x9691, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x9692, .a=0xeb, .x=0x0a, .y=0x2e, .sp=0xe2, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x9690, .value=0x30}, {.addr=0x9691, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x9690, .value=0x30, .type=IO_READ},
        {.addr=0x9691, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x2a67, .a=0x68, .x=0xa8, .y=0x31, .sp=0x92, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x2a67, .value=0x30}, {.addr=0x2a68, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x2a14, .a=0x68, .x=0xa8, .y=0x31, .sp=0x92, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x2a67, .value=0x30}, {.addr=0x2a68, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x2a67, .value=0x30, .type=IO_READ},
        {.addr=0x2a68, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x1e4e, .a=0x7f, .x=0x14, .y=0x85, .sp=0x3b, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x1e4e, .value=0x30}, {.addr=0x1e4f, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x1e8b, .a=0x7f, .x=0x14, .y=0x85, .sp=0x3b, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x1e4e, .value=0x30}, {.addr=0x1e4f, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x1e4e, .value=0x30, .type=IO_READ},
        {.addr=0x1e4f, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x6fa2, .a=0x76, .x=0x0d, .y=0x71, .sp=0xac, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x6fa2, .value=0x30}, {.addr=0x6fa3, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x6fde, .a=0x76, .x=0x0d, .y=0x71, .sp=0xac, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x6fa2, .value=0x30}, {.addr=0x6fa3, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x6fa2, .value=0x30, .type=IO_READ},
        {.addr=0x6fa3, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x79a7, .a=0x20, .x=0x54, .y=0xa2, .sp=0xc6, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x79a7, .value=0x30}, {.addr=0x79a8, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x79a9, .a=0x20, .x=0x54, .y=0xa2, .sp=0xc6, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x79a7, .value=0x30}, {.addr=0x79a8, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x79a7, .value=0x30, .type=IO_READ},
        {.addr=0x79a8, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x7d64, .a=0xbd, .x=0xef, .y=0xe6, .sp=0x47, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x7d64, .value=0x30}, {.addr=0x7d65, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7d05, .a=0xbd, .x=0xef, .y=0xe6, .sp=0x47, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x7d64, .value=0x30}, {.addr=0x7d65, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7d64, .value=0x30, .type=IO_READ},
        {.addr=0x7d65, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x764e, .a=0x57, .x=0x66, .y=0x81, .sp=0x08, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x764e, .value=0x30}, {.addr=0x764f, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x761c, .a=0x57, .x=0x66, .y=0x81, .sp=0x08, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x764e, .value=0x30}, {.addr=0x764f, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x764e, .value=0x30, .type=IO_READ},
        {.addr=0x764f, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xef61, .a=0xfd, .x=0x4f, .y=0x03, .sp=0xea, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xef61, .value=0x30}, {.addr=0xef62, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xef63, .a=0xfd, .x=0x4f, .y=0x03, .sp=0xea, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xef61, .value=0x30}, {.addr=0xef62, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xef61, .value=0x30, .type=IO_READ},
        {.addr=0xef62, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xadf0, .a=0x07, .x=0x18, .y=0x51, .sp=0xbd, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xadf0, .value=0x30}, {.addr=0xadf1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xadf2, .a=0x07, .x=0x18, .y=0x51, .sp=0xbd, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xadf0, .value=0x30}, {.addr=0xadf1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xadf0, .value=0x30, .type=IO_READ},
        {.addr=0xadf1, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xc257, .a=0xb2, .x=0x23, .y=0xd7, .sp=0xc9, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xc257, .value=0x30}, {.addr=0xc258, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xc259, .a=0xb2, .x=0x23, .y=0xd7, .sp=0xc9, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xc257, .value=0x30}, {.addr=0xc258, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xc257, .value=0x30, .type=IO_READ},
        {.addr=0xc258, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x579f, .a=0xc5, .x=0x4b, .y=0x73, .sp=0x26, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x579f, .value=0x30}, {.addr=0x57a0, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x57a1, .a=0xc5, .x=0x4b, .y=0x73, .sp=0x26, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x579f, .value=0x30}, {.addr=0x57a0, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x579f, .value=0x30, .type=IO_READ},
        {.addr=0x57a0, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xd202, .a=0xfa, .x=0x1e, .y=0xb1, .sp=0x03, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xd202, .value=0x30}, {.addr=0xd203, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xd278, .a=0xfa, .x=0x1e, .y=0xb1, .sp=0x03, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd202, .value=0x30}, {.addr=0xd203, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xd202, .value=0x30, .type=IO_READ},
        {.addr=0xd203, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xedfe, .a=0x46, .x=0xb9, .y=0x25, .sp=0xf8, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xedfe, .value=0x30}, {.addr=0xedff, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xedf1, .a=0x46, .x=0xb9, .y=0x25, .sp=0xf8, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xedfe, .value=0x30}, {.addr=0xedff, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xedfe, .value=0x30, .type=IO_READ},
        {.addr=0xedff, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x2dad, .a=0xd4, .x=0x96, .y=0x98, .sp=0xa0, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x2dad, .value=0x30}, {.addr=0x2dae, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x2daf, .a=0xd4, .x=0x96, .y=0x98, .sp=0xa0, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x2dad, .value=0x30}, {.addr=0x2dae, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x2dad, .value=0x30, .type=IO_READ},
        {.addr=0x2dae, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xc197, .a=0xcb, .x=0xc9, .y=0xde, .sp=0xef, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xc197, .value=0x30}, {.addr=0xc198, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc216, .a=0xcb, .x=0xc9, .y=0xde, .sp=0xef, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xc197, .value=0x30}, {.addr=0xc198, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc197, .value=0x30, .type=IO_READ},
        {.addr=0xc198, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xc3c4, .a=0xb5, .x=0x4e, .y=0x6b, .sp=0xc4, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xc3c4, .value=0x30}, {.addr=0xc3c5, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xc3b2, .a=0xb5, .x=0x4e, .y=0x6b, .sp=0xc4, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xc3c4, .value=0x30}, {.addr=0xc3c5, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xc3c4, .value=0x30, .type=IO_READ},
        {.addr=0xc3c5, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x3bb2, .a=0xf1, .x=0xd9, .y=0xff, .sp=0x0c, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x3bb2, .value=0x30}, {.addr=0x3bb3, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x3bb4, .a=0xf1, .x=0xd9, .y=0xff, .sp=0x0c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x3bb2, .value=0x30}, {.addr=0x3bb3, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x3bb2, .value=0x30, .type=IO_READ},
        {.addr=0x3bb3, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xc265, .a=0xbe, .x=0x64, .y=0xf9, .sp=0xd9, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xc265, .value=0x30}, {.addr=0xc266, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xc267, .a=0xbe, .x=0x64, .y=0xf9, .sp=0xd9, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xc265, .value=0x30}, {.addr=0xc266, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xc265, .value=0x30, .type=IO_READ},
        {.addr=0xc266, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x45b7, .a=0x6f, .x=0x29, .y=0xc2, .sp=0x6f, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x45b7, .value=0x30}, {.addr=0x45b8, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x4622, .a=0x6f, .x=0x29, .y=0xc2, .sp=0x6f, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x45b7, .value=0x30}, {.addr=0x45b8, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x45b7, .value=0x30, .type=IO_READ},
        {.addr=0x45b8, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x85da, .a=0xf9, .x=0xdc, .y=0x61, .sp=0xae, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x85da, .value=0x30}, {.addr=0x85db, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x85c1, .a=0xf9, .x=0xdc, .y=0x61, .sp=0xae, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x85da, .value=0x30}, {.addr=0x85db, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x85da, .value=0x30, .type=IO_READ},
        {.addr=0x85db, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xa221, .a=0x3b, .x=0x65, .y=0x44, .sp=0xc1, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xa221, .value=0x30}, {.addr=0xa222, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xa295, .a=0x3b, .x=0x65, .y=0x44, .sp=0xc1, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xa221, .value=0x30}, {.addr=0xa222, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xa221, .value=0x30, .type=IO_READ},
        {.addr=0xa222, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x166c, .a=0xc8, .x=0x6f, .y=0x84, .sp=0x5d, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x166c, .value=0x30}, {.addr=0x166d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x166e, .a=0xc8, .x=0x6f, .y=0x84, .sp=0x5d, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x166c, .value=0x30}, {.addr=0x166d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x166c, .value=0x30, .type=IO_READ},
        {.addr=0x166d, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x4474, .a=0x46, .x=0x4c, .y=0x1a, .sp=0x36, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x4474, .value=0x30}, {.addr=0x4475, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x448b, .a=0x46, .x=0x4c, .y=0x1a, .sp=0x36, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x4474, .value=0x30}, {.addr=0x4475, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x4474, .value=0x30, .type=IO_READ},
        {.addr=0x4475, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x8945, .a=0x79, .x=0xf3, .y=0x84, .sp=0x46, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x8945, .value=0x30}, {.addr=0x8946, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x896d, .a=0x79, .x=0xf3, .y=0x84, .sp=0x46, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x8945, .value=0x30}, {.addr=0x8946, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8945, .value=0x30, .type=IO_READ},
        {.addr=0x8946, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x7df0, .a=0xc8, .x=0x02, .y=0x15, .sp=0x51, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x7df0, .value=0x30}, {.addr=0x7df1, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x7d88, .a=0xc8, .x=0x02, .y=0x15, .sp=0x51, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x7df0, .value=0x30}, {.addr=0x7df1, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x7df0, .value=0x30, .type=IO_READ},
        {.addr=0x7df1, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x2878, .a=0x02, .x=0x0f, .y=0x7a, .sp=0x1f, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x2878, .value=0x30}, {.addr=0x2879, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x28a3, .a=0x02, .x=0x0f, .y=0x7a, .sp=0x1f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x2878, .value=0x30}, {.addr=0x2879, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x2878, .value=0x30, .type=IO_READ},
        {.addr=0x2879, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x3ea8, .a=0x98, .x=0x8f, .y=0x28, .sp=0x49, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x3ea8, .value=0x30}, {.addr=0x3ea9, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x3ef4, .a=0x98, .x=0x8f, .y=0x28, .sp=0x49, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x3ea8, .value=0x30}, {.addr=0x3ea9, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x3ea8, .value=0x30, .type=IO_READ},
        {.addr=0x3ea9, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0100) {
    const struct CPU_State initial_cpu = {.pc=0x4b8f, .a=0xfb, .x=0x29, .y=0x18, .sp=0x81, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x4b8f, .value=0x30}, {.addr=0x4b90, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x4bff, .a=0xfb, .x=0x29, .y=0x18, .sp=0x81, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x4b8f, .value=0x30}, {.addr=0x4b90, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x4b8f, .value=0x30, .type=IO_READ},
        {.addr=0x4b90, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0101) {
    const struct CPU_State initial_cpu = {.pc=0xf2b8, .a=0xda, .x=0x3c, .y=0x92, .sp=0x9a, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xf2b8, .value=0x30}, {.addr=0xf2b9, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xf313, .a=0xda, .x=0x3c, .y=0x92, .sp=0x9a, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xf2b8, .value=0x30}, {.addr=0xf2b9, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xf2b8, .value=0x30, .type=IO_READ},
        {.addr=0xf2b9, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0102) {
    const struct CPU_State initial_cpu = {.pc=0xd29e, .a=0x7d, .x=0x3d, .y=0x14, .sp=0xe6, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xd29e, .value=0x30}, {.addr=0xd29f, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xd247, .a=0x7d, .x=0x3d, .y=0x14, .sp=0xe6, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xd29e, .value=0x30}, {.addr=0xd29f, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xd29e, .value=0x30, .type=IO_READ},
        {.addr=0xd29f, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0103) {
    const struct CPU_State initial_cpu = {.pc=0x203a, .a=0x0e, .x=0x56, .y=0x85, .sp=0x8e, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x203a, .value=0x30}, {.addr=0x203b, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x2060, .a=0x0e, .x=0x56, .y=0x85, .sp=0x8e, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x203a, .value=0x30}, {.addr=0x203b, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x203a, .value=0x30, .type=IO_READ},
        {.addr=0x203b, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0104) {
    const struct CPU_State initial_cpu = {.pc=0x5a52, .a=0x07, .x=0xe8, .y=0x85, .sp=0x50, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x5a52, .value=0x30}, {.addr=0x5a53, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x5a93, .a=0x07, .x=0xe8, .y=0x85, .sp=0x50, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x5a52, .value=0x30}, {.addr=0x5a53, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x5a52, .value=0x30, .type=IO_READ},
        {.addr=0x5a53, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0105) {
    const struct CPU_State initial_cpu = {.pc=0x6e36, .a=0xa5, .x=0xc6, .y=0x57, .sp=0xa8, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x6e36, .value=0x30}, {.addr=0x6e37, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x6e38, .a=0xa5, .x=0xc6, .y=0x57, .sp=0xa8, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x6e36, .value=0x30}, {.addr=0x6e37, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x6e36, .value=0x30, .type=IO_READ},
        {.addr=0x6e37, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0106) {
    const struct CPU_State initial_cpu = {.pc=0x0089, .a=0x6c, .x=0xa9, .y=0xb0, .sp=0x98, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0089, .value=0x30}, {.addr=0x008a, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x004f, .a=0x6c, .x=0xa9, .y=0xb0, .sp=0x98, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x0089, .value=0x30}, {.addr=0x008a, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x0089, .value=0x30, .type=IO_READ},
        {.addr=0x008a, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0107) {
    const struct CPU_State initial_cpu = {.pc=0x846a, .a=0x12, .x=0xa0, .y=0x61, .sp=0x6b, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x846a, .value=0x30}, {.addr=0x846b, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x846c, .a=0x12, .x=0xa0, .y=0x61, .sp=0x6b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x846a, .value=0x30}, {.addr=0x846b, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x846a, .value=0x30, .type=IO_READ},
        {.addr=0x846b, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0108) {
    const struct CPU_State initial_cpu = {.pc=0xbcd2, .a=0x0d, .x=0xd3, .y=0xc6, .sp=0xe3, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xbcd2, .value=0x30}, {.addr=0xbcd3, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xbcd4, .a=0x0d, .x=0xd3, .y=0xc6, .sp=0xe3, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xbcd2, .value=0x30}, {.addr=0xbcd3, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xbcd2, .value=0x30, .type=IO_READ},
        {.addr=0xbcd3, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0109) {
    const struct CPU_State initial_cpu = {.pc=0x053e, .a=0x9d, .x=0xbc, .y=0xfc, .sp=0x4d, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x053e, .value=0x30}, {.addr=0x053f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x05ad, .a=0x9d, .x=0xbc, .y=0xfc, .sp=0x4d, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x053e, .value=0x30}, {.addr=0x053f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x053e, .value=0x30, .type=IO_READ},
        {.addr=0x053f, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_010A) {
    const struct CPU_State initial_cpu = {.pc=0x5015, .a=0xf6, .x=0xe4, .y=0x6c, .sp=0x08, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x5015, .value=0x30}, {.addr=0x5016, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x5017, .a=0xf6, .x=0xe4, .y=0x6c, .sp=0x08, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x5015, .value=0x30}, {.addr=0x5016, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x5015, .value=0x30, .type=IO_READ},
        {.addr=0x5016, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_010B) {
    const struct CPU_State initial_cpu = {.pc=0x9154, .a=0xa9, .x=0xe5, .y=0x70, .sp=0x2e, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x9154, .value=0x30}, {.addr=0x9155, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x918e, .a=0xa9, .x=0xe5, .y=0x70, .sp=0x2e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x9154, .value=0x30}, {.addr=0x9155, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x9154, .value=0x30, .type=IO_READ},
        {.addr=0x9155, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_010C) {
    const struct CPU_State initial_cpu = {.pc=0xf12c, .a=0x9d, .x=0x33, .y=0x80, .sp=0x05, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xf12c, .value=0x30}, {.addr=0xf12d, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xf189, .a=0x9d, .x=0x33, .y=0x80, .sp=0x05, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0xf12c, .value=0x30}, {.addr=0xf12d, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xf12c, .value=0x30, .type=IO_READ},
        {.addr=0xf12d, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_010D) {
    const struct CPU_State initial_cpu = {.pc=0x6436, .a=0x43, .x=0x8e, .y=0x9f, .sp=0xbe, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x6436, .value=0x30}, {.addr=0x6437, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x648a, .a=0x43, .x=0x8e, .y=0x9f, .sp=0xbe, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x6436, .value=0x30}, {.addr=0x6437, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x6436, .value=0x30, .type=IO_READ},
        {.addr=0x6437, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_010E) {
    const struct CPU_State initial_cpu = {.pc=0x32cc, .a=0x90, .x=0xea, .y=0x89, .sp=0x50, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x32cc, .value=0x30}, {.addr=0x32cd, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x32ce, .a=0x90, .x=0xea, .y=0x89, .sp=0x50, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x32cc, .value=0x30}, {.addr=0x32cd, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x32cc, .value=0x30, .type=IO_READ},
        {.addr=0x32cd, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_010F) {
    const struct CPU_State initial_cpu = {.pc=0xa0ba, .a=0x8c, .x=0x25, .y=0x68, .sp=0x6b, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xa0ba, .value=0x30}, {.addr=0xa0bb, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xa0bc, .a=0x8c, .x=0x25, .y=0x68, .sp=0x6b, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xa0ba, .value=0x30}, {.addr=0xa0bb, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xa0ba, .value=0x30, .type=IO_READ},
        {.addr=0xa0bb, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0110) {
    const struct CPU_State initial_cpu = {.pc=0x6c5f, .a=0xc6, .x=0xa6, .y=0x66, .sp=0x8c, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x6c5f, .value=0x30}, {.addr=0x6c60, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x6c61, .a=0xc6, .x=0xa6, .y=0x66, .sp=0x8c, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x6c5f, .value=0x30}, {.addr=0x6c60, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x6c5f, .value=0x30, .type=IO_READ},
        {.addr=0x6c60, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0111) {
    const struct CPU_State initial_cpu = {.pc=0xf51d, .a=0x56, .x=0x90, .y=0x5b, .sp=0x39, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xf51d, .value=0x30}, {.addr=0xf51e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf51f, .a=0x56, .x=0x90, .y=0x5b, .sp=0x39, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xf51d, .value=0x30}, {.addr=0xf51e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf51d, .value=0x30, .type=IO_READ},
        {.addr=0xf51e, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0112) {
    const struct CPU_State initial_cpu = {.pc=0x050f, .a=0x43, .x=0xaa, .y=0x93, .sp=0x12, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x050f, .value=0x30}, {.addr=0x0510, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x0498, .a=0x43, .x=0xaa, .y=0x93, .sp=0x12, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x050f, .value=0x30}, {.addr=0x0510, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x050f, .value=0x30, .type=IO_READ},
        {.addr=0x0510, .value=0x87, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0113) {
    const struct CPU_State initial_cpu = {.pc=0x2385, .a=0xc1, .x=0xf2, .y=0x02, .sp=0x69, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x2385, .value=0x30}, {.addr=0x2386, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x234d, .a=0xc1, .x=0xf2, .y=0x02, .sp=0x69, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x2385, .value=0x30}, {.addr=0x2386, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2385, .value=0x30, .type=IO_READ},
        {.addr=0x2386, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0114) {
    const struct CPU_State initial_cpu = {.pc=0x28f8, .a=0xc6, .x=0x8f, .y=0xfa, .sp=0xf2, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x28f8, .value=0x30}, {.addr=0x28f9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x28c8, .a=0xc6, .x=0x8f, .y=0xfa, .sp=0xf2, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x28f8, .value=0x30}, {.addr=0x28f9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x28f8, .value=0x30, .type=IO_READ},
        {.addr=0x28f9, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0115) {
    const struct CPU_State initial_cpu = {.pc=0xd101, .a=0x96, .x=0xec, .y=0xa6, .sp=0x84, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xd101, .value=0x30}, {.addr=0xd102, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xd0f9, .a=0x96, .x=0xec, .y=0xa6, .sp=0x84, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xd101, .value=0x30}, {.addr=0xd102, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xd101, .value=0x30, .type=IO_READ},
        {.addr=0xd102, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0116) {
    const struct CPU_State initial_cpu = {.pc=0x88ab, .a=0xbe, .x=0xa4, .y=0x7f, .sp=0x7b, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x88ab, .value=0x30}, {.addr=0x88ac, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x8915, .a=0xbe, .x=0xa4, .y=0x7f, .sp=0x7b, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x88ab, .value=0x30}, {.addr=0x88ac, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x88ab, .value=0x30, .type=IO_READ},
        {.addr=0x88ac, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0117) {
    const struct CPU_State initial_cpu = {.pc=0x4838, .a=0xe1, .x=0x3f, .y=0x73, .sp=0x80, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x4838, .value=0x30}, {.addr=0x4839, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x4811, .a=0xe1, .x=0x3f, .y=0x73, .sp=0x80, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x4838, .value=0x30}, {.addr=0x4839, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x4838, .value=0x30, .type=IO_READ},
        {.addr=0x4839, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0118) {
    const struct CPU_State initial_cpu = {.pc=0x174a, .a=0x8c, .x=0x35, .y=0x06, .sp=0xa9, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x174a, .value=0x30}, {.addr=0x174b, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x174c, .a=0x8c, .x=0x35, .y=0x06, .sp=0xa9, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x174a, .value=0x30}, {.addr=0x174b, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x174a, .value=0x30, .type=IO_READ},
        {.addr=0x174b, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0119) {
    const struct CPU_State initial_cpu = {.pc=0x3555, .a=0xd8, .x=0xbc, .y=0x80, .sp=0x48, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x3555, .value=0x30}, {.addr=0x3556, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x3557, .a=0xd8, .x=0xbc, .y=0x80, .sp=0x48, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x3555, .value=0x30}, {.addr=0x3556, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x3555, .value=0x30, .type=IO_READ},
        {.addr=0x3556, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_011A) {
    const struct CPU_State initial_cpu = {.pc=0x854b, .a=0x5c, .x=0x2b, .y=0xc7, .sp=0xc5, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x854b, .value=0x30}, {.addr=0x854c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x854d, .a=0x5c, .x=0x2b, .y=0xc7, .sp=0xc5, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x854b, .value=0x30}, {.addr=0x854c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x854b, .value=0x30, .type=IO_READ},
        {.addr=0x854c, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_011B) {
    const struct CPU_State initial_cpu = {.pc=0x040b, .a=0x71, .x=0x85, .y=0x84, .sp=0xe0, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x040b, .value=0x30}, {.addr=0x040c, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x03b2, .a=0x71, .x=0x85, .y=0x84, .sp=0xe0, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x040b, .value=0x30}, {.addr=0x040c, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x040b, .value=0x30, .type=IO_READ},
        {.addr=0x040c, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_011C) {
    const struct CPU_State initial_cpu = {.pc=0x56ce, .a=0x72, .x=0xc6, .y=0x38, .sp=0xb6, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x56ce, .value=0x30}, {.addr=0x56cf, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x5685, .a=0x72, .x=0xc6, .y=0x38, .sp=0xb6, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x56ce, .value=0x30}, {.addr=0x56cf, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x56ce, .value=0x30, .type=IO_READ},
        {.addr=0x56cf, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_011D) {
    const struct CPU_State initial_cpu = {.pc=0xd422, .a=0x79, .x=0x9a, .y=0xd9, .sp=0x46, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xd422, .value=0x30}, {.addr=0xd423, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xd424, .a=0x79, .x=0x9a, .y=0xd9, .sp=0x46, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xd422, .value=0x30}, {.addr=0xd423, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xd422, .value=0x30, .type=IO_READ},
        {.addr=0xd423, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_011E) {
    const struct CPU_State initial_cpu = {.pc=0xed63, .a=0x55, .x=0xb7, .y=0x36, .sp=0x25, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xed63, .value=0x30}, {.addr=0xed64, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xed65, .a=0x55, .x=0xb7, .y=0x36, .sp=0x25, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xed63, .value=0x30}, {.addr=0xed64, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xed63, .value=0x30, .type=IO_READ},
        {.addr=0xed64, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_011F) {
    const struct CPU_State initial_cpu = {.pc=0x215b, .a=0x3f, .x=0x4c, .y=0x5e, .sp=0xd5, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x215b, .value=0x30}, {.addr=0x215c, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x215d, .a=0x3f, .x=0x4c, .y=0x5e, .sp=0xd5, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x215b, .value=0x30}, {.addr=0x215c, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x215b, .value=0x30, .type=IO_READ},
        {.addr=0x215c, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0120) {
    const struct CPU_State initial_cpu = {.pc=0x1509, .a=0x9e, .x=0x18, .y=0x32, .sp=0x1d, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x1509, .value=0x30}, {.addr=0x150a, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x150b, .a=0x9e, .x=0x18, .y=0x32, .sp=0x1d, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x1509, .value=0x30}, {.addr=0x150a, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1509, .value=0x30, .type=IO_READ},
        {.addr=0x150a, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0121) {
    const struct CPU_State initial_cpu = {.pc=0x8430, .a=0x92, .x=0x6c, .y=0xb4, .sp=0x2b, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x8430, .value=0x30}, {.addr=0x8431, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x8432, .a=0x92, .x=0x6c, .y=0xb4, .sp=0x2b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x8430, .value=0x30}, {.addr=0x8431, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x8430, .value=0x30, .type=IO_READ},
        {.addr=0x8431, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0122) {
    const struct CPU_State initial_cpu = {.pc=0xf34f, .a=0xde, .x=0xbe, .y=0xd1, .sp=0x3e, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xf34f, .value=0x30}, {.addr=0xf350, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xf351, .a=0xde, .x=0xbe, .y=0xd1, .sp=0x3e, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xf34f, .value=0x30}, {.addr=0xf350, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xf34f, .value=0x30, .type=IO_READ},
        {.addr=0xf350, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0123) {
    const struct CPU_State initial_cpu = {.pc=0x113c, .a=0xf1, .x=0x9b, .y=0x2f, .sp=0x64, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x113c, .value=0x30}, {.addr=0x113d, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x1198, .a=0xf1, .x=0x9b, .y=0x2f, .sp=0x64, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x113c, .value=0x30}, {.addr=0x113d, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x113c, .value=0x30, .type=IO_READ},
        {.addr=0x113d, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0124) {
    const struct CPU_State initial_cpu = {.pc=0xf960, .a=0x84, .x=0x3b, .y=0x9c, .sp=0x50, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xf960, .value=0x30}, {.addr=0xf961, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xf962, .a=0x84, .x=0x3b, .y=0x9c, .sp=0x50, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xf960, .value=0x30}, {.addr=0xf961, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xf960, .value=0x30, .type=IO_READ},
        {.addr=0xf961, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0125) {
    const struct CPU_State initial_cpu = {.pc=0xddf7, .a=0x6f, .x=0x44, .y=0xd7, .sp=0x1d, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xddf7, .value=0x30}, {.addr=0xddf8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xddf9, .a=0x6f, .x=0x44, .y=0xd7, .sp=0x1d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xddf7, .value=0x30}, {.addr=0xddf8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xddf7, .value=0x30, .type=IO_READ},
        {.addr=0xddf8, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0126) {
    const struct CPU_State initial_cpu = {.pc=0xa7ea, .a=0x69, .x=0x87, .y=0x12, .sp=0x70, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xa7ea, .value=0x30}, {.addr=0xa7eb, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xa7ec, .a=0x69, .x=0x87, .y=0x12, .sp=0x70, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xa7ea, .value=0x30}, {.addr=0xa7eb, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xa7ea, .value=0x30, .type=IO_READ},
        {.addr=0xa7eb, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0127) {
    const struct CPU_State initial_cpu = {.pc=0xa702, .a=0x57, .x=0x30, .y=0xb5, .sp=0x72, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xa702, .value=0x30}, {.addr=0xa703, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xa704, .a=0x57, .x=0x30, .y=0xb5, .sp=0x72, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa702, .value=0x30}, {.addr=0xa703, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xa702, .value=0x30, .type=IO_READ},
        {.addr=0xa703, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0128) {
    const struct CPU_State initial_cpu = {.pc=0x3d90, .a=0xcd, .x=0xd9, .y=0x7f, .sp=0x48, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x3d90, .value=0x30}, {.addr=0x3d91, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x3d92, .a=0xcd, .x=0xd9, .y=0x7f, .sp=0x48, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x3d90, .value=0x30}, {.addr=0x3d91, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x3d90, .value=0x30, .type=IO_READ},
        {.addr=0x3d91, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0129) {
    const struct CPU_State initial_cpu = {.pc=0x02b9, .a=0x5a, .x=0x47, .y=0x92, .sp=0xe4, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x02b9, .value=0x30}, {.addr=0x02ba, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x02bb, .a=0x5a, .x=0x47, .y=0x92, .sp=0xe4, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x02b9, .value=0x30}, {.addr=0x02ba, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x02b9, .value=0x30, .type=IO_READ},
        {.addr=0x02ba, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_012A) {
    const struct CPU_State initial_cpu = {.pc=0xdd3a, .a=0x95, .x=0xca, .y=0x6d, .sp=0xaa, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xdd3a, .value=0x30}, {.addr=0xdd3b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdd3c, .a=0x95, .x=0xca, .y=0x6d, .sp=0xaa, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xdd3a, .value=0x30}, {.addr=0xdd3b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdd3a, .value=0x30, .type=IO_READ},
        {.addr=0xdd3b, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_012B) {
    const struct CPU_State initial_cpu = {.pc=0x7464, .a=0xa2, .x=0x9b, .y=0x61, .sp=0xac, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x7464, .value=0x30}, {.addr=0x7465, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x73f2, .a=0xa2, .x=0x9b, .y=0x61, .sp=0xac, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7464, .value=0x30}, {.addr=0x7465, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x7464, .value=0x30, .type=IO_READ},
        {.addr=0x7465, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_012C) {
    const struct CPU_State initial_cpu = {.pc=0xc3d4, .a=0x6c, .x=0xc6, .y=0x84, .sp=0x53, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xc3d4, .value=0x30}, {.addr=0xc3d5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc3d6, .a=0x6c, .x=0xc6, .y=0x84, .sp=0x53, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xc3d4, .value=0x30}, {.addr=0xc3d5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc3d4, .value=0x30, .type=IO_READ},
        {.addr=0xc3d5, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_012D) {
    const struct CPU_State initial_cpu = {.pc=0x91e5, .a=0x7f, .x=0xb1, .y=0x93, .sp=0xdf, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x91e5, .value=0x30}, {.addr=0x91e6, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x9217, .a=0x7f, .x=0xb1, .y=0x93, .sp=0xdf, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x91e5, .value=0x30}, {.addr=0x91e6, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x91e5, .value=0x30, .type=IO_READ},
        {.addr=0x91e6, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_012E) {
    const struct CPU_State initial_cpu = {.pc=0xff14, .a=0x9d, .x=0x98, .y=0x20, .sp=0x97, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xff14, .value=0x30}, {.addr=0xff15, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xfea1, .a=0x9d, .x=0x98, .y=0x20, .sp=0x97, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xff14, .value=0x30}, {.addr=0xff15, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xff14, .value=0x30, .type=IO_READ},
        {.addr=0xff15, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_012F) {
    const struct CPU_State initial_cpu = {.pc=0x99a4, .a=0x0e, .x=0xf8, .y=0x8c, .sp=0xa3, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x99a4, .value=0x30}, {.addr=0x99a5, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x99a6, .a=0x0e, .x=0xf8, .y=0x8c, .sp=0xa3, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x99a4, .value=0x30}, {.addr=0x99a5, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x99a4, .value=0x30, .type=IO_READ},
        {.addr=0x99a5, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0130) {
    const struct CPU_State initial_cpu = {.pc=0x51fa, .a=0x7c, .x=0x68, .y=0x19, .sp=0xb8, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x51fa, .value=0x30}, {.addr=0x51fb, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x51a0, .a=0x7c, .x=0x68, .y=0x19, .sp=0xb8, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x51fa, .value=0x30}, {.addr=0x51fb, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x51fa, .value=0x30, .type=IO_READ},
        {.addr=0x51fb, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0131) {
    const struct CPU_State initial_cpu = {.pc=0xc000, .a=0xeb, .x=0x65, .y=0x0f, .sp=0x38, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xc000, .value=0x30}, {.addr=0xc001, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc002, .a=0xeb, .x=0x65, .y=0x0f, .sp=0x38, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xc000, .value=0x30}, {.addr=0xc001, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc000, .value=0x30, .type=IO_READ},
        {.addr=0xc001, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0132) {
    const struct CPU_State initial_cpu = {.pc=0xefe4, .a=0xb6, .x=0x33, .y=0xca, .sp=0xef, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xefe4, .value=0x30}, {.addr=0xefe5, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xefe6, .a=0xb6, .x=0x33, .y=0xca, .sp=0xef, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xefe4, .value=0x30}, {.addr=0xefe5, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xefe4, .value=0x30, .type=IO_READ},
        {.addr=0xefe5, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0133) {
    const struct CPU_State initial_cpu = {.pc=0xfc70, .a=0xba, .x=0x57, .y=0x29, .sp=0x63, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xfc70, .value=0x30}, {.addr=0xfc71, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xfce3, .a=0xba, .x=0x57, .y=0x29, .sp=0x63, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xfc70, .value=0x30}, {.addr=0xfc71, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xfc70, .value=0x30, .type=IO_READ},
        {.addr=0xfc71, .value=0x71, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0134) {
    const struct CPU_State initial_cpu = {.pc=0xb734, .a=0x55, .x=0x75, .y=0x2f, .sp=0xdb, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xb734, .value=0x30}, {.addr=0xb735, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xb736, .a=0x55, .x=0x75, .y=0x2f, .sp=0xdb, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xb734, .value=0x30}, {.addr=0xb735, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xb734, .value=0x30, .type=IO_READ},
        {.addr=0xb735, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0135) {
    const struct CPU_State initial_cpu = {.pc=0x0ccd, .a=0x6f, .x=0x8c, .y=0xa8, .sp=0x67, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0ccd, .value=0x30}, {.addr=0x0cce, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x0c59, .a=0x6f, .x=0x8c, .y=0xa8, .sp=0x67, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0ccd, .value=0x30}, {.addr=0x0cce, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x0ccd, .value=0x30, .type=IO_READ},
        {.addr=0x0cce, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0136) {
    const struct CPU_State initial_cpu = {.pc=0x8c18, .a=0x5e, .x=0x0e, .y=0xe8, .sp=0xba, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x8c18, .value=0x30}, {.addr=0x8c19, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x8c1a, .a=0x5e, .x=0x0e, .y=0xe8, .sp=0xba, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x8c18, .value=0x30}, {.addr=0x8c19, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x8c18, .value=0x30, .type=IO_READ},
        {.addr=0x8c19, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0137) {
    const struct CPU_State initial_cpu = {.pc=0x8231, .a=0xce, .x=0x5b, .y=0x1a, .sp=0x0a, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x8231, .value=0x30}, {.addr=0x8232, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x8233, .a=0xce, .x=0x5b, .y=0x1a, .sp=0x0a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x8231, .value=0x30}, {.addr=0x8232, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x8231, .value=0x30, .type=IO_READ},
        {.addr=0x8232, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0138) {
    const struct CPU_State initial_cpu = {.pc=0x2522, .a=0x0e, .x=0x75, .y=0x58, .sp=0xfd, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x2522, .value=0x30}, {.addr=0x2523, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2524, .a=0x0e, .x=0x75, .y=0x58, .sp=0xfd, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x2522, .value=0x30}, {.addr=0x2523, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2522, .value=0x30, .type=IO_READ},
        {.addr=0x2523, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0139) {
    const struct CPU_State initial_cpu = {.pc=0x40b6, .a=0x16, .x=0xc3, .y=0xd9, .sp=0xeb, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x40b6, .value=0x30}, {.addr=0x40b7, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x403b, .a=0x16, .x=0xc3, .y=0xd9, .sp=0xeb, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x40b6, .value=0x30}, {.addr=0x40b7, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x40b6, .value=0x30, .type=IO_READ},
        {.addr=0x40b7, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_013A) {
    const struct CPU_State initial_cpu = {.pc=0x0053, .a=0x98, .x=0xb5, .y=0x27, .sp=0x4a, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0053, .value=0x30}, {.addr=0x0054, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x00bb, .a=0x98, .x=0xb5, .y=0x27, .sp=0x4a, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0053, .value=0x30}, {.addr=0x0054, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0053, .value=0x30, .type=IO_READ},
        {.addr=0x0054, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_013B) {
    const struct CPU_State initial_cpu = {.pc=0x59c8, .a=0x6d, .x=0x61, .y=0x1b, .sp=0xcf, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x59c8, .value=0x30}, {.addr=0x59c9, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x59ab, .a=0x6d, .x=0x61, .y=0x1b, .sp=0xcf, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x59c8, .value=0x30}, {.addr=0x59c9, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x59c8, .value=0x30, .type=IO_READ},
        {.addr=0x59c9, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_013C) {
    const struct CPU_State initial_cpu = {.pc=0x7f2d, .a=0x51, .x=0x88, .y=0xd4, .sp=0xea, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x7f2d, .value=0x30}, {.addr=0x7f2e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7ede, .a=0x51, .x=0x88, .y=0xd4, .sp=0xea, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x7f2d, .value=0x30}, {.addr=0x7f2e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7f2d, .value=0x30, .type=IO_READ},
        {.addr=0x7f2e, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_013D) {
    const struct CPU_State initial_cpu = {.pc=0xe24e, .a=0x46, .x=0x18, .y=0x29, .sp=0xe7, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xe24e, .value=0x30}, {.addr=0xe24f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe250, .a=0x46, .x=0x18, .y=0x29, .sp=0xe7, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xe24e, .value=0x30}, {.addr=0xe24f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe24e, .value=0x30, .type=IO_READ},
        {.addr=0xe24f, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_013E) {
    const struct CPU_State initial_cpu = {.pc=0x2b1b, .a=0x53, .x=0x65, .y=0xe3, .sp=0x05, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x2b1b, .value=0x30}, {.addr=0x2b1c, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x2b1d, .a=0x53, .x=0x65, .y=0xe3, .sp=0x05, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x2b1b, .value=0x30}, {.addr=0x2b1c, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x2b1b, .value=0x30, .type=IO_READ},
        {.addr=0x2b1c, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_013F) {
    const struct CPU_State initial_cpu = {.pc=0xd552, .a=0x37, .x=0x51, .y=0x44, .sp=0x67, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xd552, .value=0x30}, {.addr=0xd553, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xd54f, .a=0x37, .x=0x51, .y=0x44, .sp=0x67, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xd552, .value=0x30}, {.addr=0xd553, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xd552, .value=0x30, .type=IO_READ},
        {.addr=0xd553, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0140) {
    const struct CPU_State initial_cpu = {.pc=0xf612, .a=0xd7, .x=0xfb, .y=0x23, .sp=0xcc, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xf612, .value=0x30}, {.addr=0xf613, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xf5cb, .a=0xd7, .x=0xfb, .y=0x23, .sp=0xcc, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xf612, .value=0x30}, {.addr=0xf613, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xf612, .value=0x30, .type=IO_READ},
        {.addr=0xf613, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0141) {
    const struct CPU_State initial_cpu = {.pc=0xdd37, .a=0x61, .x=0x41, .y=0xa7, .sp=0x6e, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xdd37, .value=0x30}, {.addr=0xdd38, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xdcfa, .a=0x61, .x=0x41, .y=0xa7, .sp=0x6e, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xdd37, .value=0x30}, {.addr=0xdd38, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xdd37, .value=0x30, .type=IO_READ},
        {.addr=0xdd38, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0142) {
    const struct CPU_State initial_cpu = {.pc=0xe52c, .a=0x7a, .x=0x53, .y=0xb7, .sp=0x38, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xe52c, .value=0x30}, {.addr=0xe52d, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xe52e, .a=0x7a, .x=0x53, .y=0xb7, .sp=0x38, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0xe52c, .value=0x30}, {.addr=0xe52d, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xe52c, .value=0x30, .type=IO_READ},
        {.addr=0xe52d, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0143) {
    const struct CPU_State initial_cpu = {.pc=0x91fc, .a=0xba, .x=0x27, .y=0x9e, .sp=0xa1, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x91fc, .value=0x30}, {.addr=0x91fd, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x91fe, .a=0xba, .x=0x27, .y=0x9e, .sp=0xa1, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x91fc, .value=0x30}, {.addr=0x91fd, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x91fc, .value=0x30, .type=IO_READ},
        {.addr=0x91fd, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0144) {
    const struct CPU_State initial_cpu = {.pc=0x09c1, .a=0x47, .x=0x5d, .y=0x8b, .sp=0x8d, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x09c1, .value=0x30}, {.addr=0x09c2, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x0a18, .a=0x47, .x=0x5d, .y=0x8b, .sp=0x8d, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x09c1, .value=0x30}, {.addr=0x09c2, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x09c1, .value=0x30, .type=IO_READ},
        {.addr=0x09c2, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0145) {
    const struct CPU_State initial_cpu = {.pc=0x99c6, .a=0x7f, .x=0x5a, .y=0x52, .sp=0xc2, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x99c6, .value=0x30}, {.addr=0x99c7, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x9a07, .a=0x7f, .x=0x5a, .y=0x52, .sp=0xc2, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x99c6, .value=0x30}, {.addr=0x99c7, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x99c6, .value=0x30, .type=IO_READ},
        {.addr=0x99c7, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0146) {
    const struct CPU_State initial_cpu = {.pc=0x8046, .a=0xbe, .x=0x50, .y=0xbb, .sp=0x25, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x8046, .value=0x30}, {.addr=0x8047, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x8048, .a=0xbe, .x=0x50, .y=0xbb, .sp=0x25, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x8046, .value=0x30}, {.addr=0x8047, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x8046, .value=0x30, .type=IO_READ},
        {.addr=0x8047, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0147) {
    const struct CPU_State initial_cpu = {.pc=0x9c0a, .a=0xa0, .x=0xfc, .y=0xc5, .sp=0xa2, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x9c0a, .value=0x30}, {.addr=0x9c0b, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x9c82, .a=0xa0, .x=0xfc, .y=0xc5, .sp=0xa2, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x9c0a, .value=0x30}, {.addr=0x9c0b, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x9c0a, .value=0x30, .type=IO_READ},
        {.addr=0x9c0b, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0148) {
    const struct CPU_State initial_cpu = {.pc=0xd9c7, .a=0xa9, .x=0x55, .y=0x91, .sp=0xb8, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xd9c7, .value=0x30}, {.addr=0xd9c8, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xd9c9, .a=0xa9, .x=0x55, .y=0x91, .sp=0xb8, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xd9c7, .value=0x30}, {.addr=0xd9c8, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xd9c7, .value=0x30, .type=IO_READ},
        {.addr=0xd9c8, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0149) {
    const struct CPU_State initial_cpu = {.pc=0x7951, .a=0x10, .x=0xac, .y=0x09, .sp=0x13, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x7951, .value=0x30}, {.addr=0x7952, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x7953, .a=0x10, .x=0xac, .y=0x09, .sp=0x13, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x7951, .value=0x30}, {.addr=0x7952, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x7951, .value=0x30, .type=IO_READ},
        {.addr=0x7952, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_014A) {
    const struct CPU_State initial_cpu = {.pc=0x93e5, .a=0xab, .x=0xc5, .y=0x8c, .sp=0x21, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x93e5, .value=0x30}, {.addr=0x93e6, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x936e, .a=0xab, .x=0xc5, .y=0x8c, .sp=0x21, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x93e5, .value=0x30}, {.addr=0x93e6, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x93e5, .value=0x30, .type=IO_READ},
        {.addr=0x93e6, .value=0x87, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_014B) {
    const struct CPU_State initial_cpu = {.pc=0x2b7e, .a=0xa6, .x=0x75, .y=0x1a, .sp=0x7b, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x2b7e, .value=0x30}, {.addr=0x2b7f, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x2b16, .a=0xa6, .x=0x75, .y=0x1a, .sp=0x7b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x2b7e, .value=0x30}, {.addr=0x2b7f, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x2b7e, .value=0x30, .type=IO_READ},
        {.addr=0x2b7f, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_014C) {
    const struct CPU_State initial_cpu = {.pc=0xd0ed, .a=0xec, .x=0x3a, .y=0xcb, .sp=0xb0, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xd0ed, .value=0x30}, {.addr=0xd0ee, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xd084, .a=0xec, .x=0x3a, .y=0xcb, .sp=0xb0, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xd0ed, .value=0x30}, {.addr=0xd0ee, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xd0ed, .value=0x30, .type=IO_READ},
        {.addr=0xd0ee, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_014D) {
    const struct CPU_State initial_cpu = {.pc=0x9ee6, .a=0x38, .x=0x9b, .y=0x3d, .sp=0xf0, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x9ee6, .value=0x30}, {.addr=0x9ee7, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9ec5, .a=0x38, .x=0x9b, .y=0x3d, .sp=0xf0, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x9ee6, .value=0x30}, {.addr=0x9ee7, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9ee6, .value=0x30, .type=IO_READ},
        {.addr=0x9ee7, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_014E) {
    const struct CPU_State initial_cpu = {.pc=0x75b3, .a=0xc2, .x=0x92, .y=0x43, .sp=0x12, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x75b3, .value=0x30}, {.addr=0x75b4, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x75fd, .a=0xc2, .x=0x92, .y=0x43, .sp=0x12, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x75b3, .value=0x30}, {.addr=0x75b4, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x75b3, .value=0x30, .type=IO_READ},
        {.addr=0x75b4, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_014F) {
    const struct CPU_State initial_cpu = {.pc=0x4216, .a=0x9a, .x=0x78, .y=0x57, .sp=0x94, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x4216, .value=0x30}, {.addr=0x4217, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x41d1, .a=0x9a, .x=0x78, .y=0x57, .sp=0x94, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x4216, .value=0x30}, {.addr=0x4217, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x4216, .value=0x30, .type=IO_READ},
        {.addr=0x4217, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0150) {
    const struct CPU_State initial_cpu = {.pc=0x8937, .a=0xad, .x=0x7f, .y=0x79, .sp=0xa7, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x8937, .value=0x30}, {.addr=0x8938, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8939, .a=0xad, .x=0x7f, .y=0x79, .sp=0xa7, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x8937, .value=0x30}, {.addr=0x8938, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8937, .value=0x30, .type=IO_READ},
        {.addr=0x8938, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0151) {
    const struct CPU_State initial_cpu = {.pc=0xc490, .a=0xb4, .x=0xbf, .y=0x8f, .sp=0xd7, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xc490, .value=0x30}, {.addr=0xc491, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc492, .a=0xb4, .x=0xbf, .y=0x8f, .sp=0xd7, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xc490, .value=0x30}, {.addr=0xc491, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc490, .value=0x30, .type=IO_READ},
        {.addr=0xc491, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0152) {
    const struct CPU_State initial_cpu = {.pc=0x142e, .a=0xf9, .x=0xd6, .y=0x7a, .sp=0xb3, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x142e, .value=0x30}, {.addr=0x142f, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x1430, .a=0xf9, .x=0xd6, .y=0x7a, .sp=0xb3, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x142e, .value=0x30}, {.addr=0x142f, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x142e, .value=0x30, .type=IO_READ},
        {.addr=0x142f, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0153) {
    const struct CPU_State initial_cpu = {.pc=0xaf8f, .a=0x0c, .x=0x40, .y=0xa3, .sp=0xb1, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xaf8f, .value=0x30}, {.addr=0xaf90, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xaf9d, .a=0x0c, .x=0x40, .y=0xa3, .sp=0xb1, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xaf8f, .value=0x30}, {.addr=0xaf90, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xaf8f, .value=0x30, .type=IO_READ},
        {.addr=0xaf90, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0154) {
    const struct CPU_State initial_cpu = {.pc=0xe8fa, .a=0xbd, .x=0xcc, .y=0xb0, .sp=0x34, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xe8fa, .value=0x30}, {.addr=0xe8fb, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xe926, .a=0xbd, .x=0xcc, .y=0xb0, .sp=0x34, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xe8fa, .value=0x30}, {.addr=0xe8fb, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xe8fa, .value=0x30, .type=IO_READ},
        {.addr=0xe8fb, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0155) {
    const struct CPU_State initial_cpu = {.pc=0x31ae, .a=0x65, .x=0x7a, .y=0x18, .sp=0x7f, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x31ae, .value=0x30}, {.addr=0x31af, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x3202, .a=0x65, .x=0x7a, .y=0x18, .sp=0x7f, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x31ae, .value=0x30}, {.addr=0x31af, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x31ae, .value=0x30, .type=IO_READ},
        {.addr=0x31af, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0156) {
    const struct CPU_State initial_cpu = {.pc=0xce2c, .a=0xb9, .x=0x35, .y=0x1e, .sp=0x73, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xce2c, .value=0x30}, {.addr=0xce2d, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xce02, .a=0xb9, .x=0x35, .y=0x1e, .sp=0x73, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xce2c, .value=0x30}, {.addr=0xce2d, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xce2c, .value=0x30, .type=IO_READ},
        {.addr=0xce2d, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0157) {
    const struct CPU_State initial_cpu = {.pc=0xdc55, .a=0x2c, .x=0x43, .y=0x81, .sp=0xc3, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xdc55, .value=0x30}, {.addr=0xdc56, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xdc43, .a=0x2c, .x=0x43, .y=0x81, .sp=0xc3, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xdc55, .value=0x30}, {.addr=0xdc56, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xdc55, .value=0x30, .type=IO_READ},
        {.addr=0xdc56, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0158) {
    const struct CPU_State initial_cpu = {.pc=0xada1, .a=0x27, .x=0x3a, .y=0x54, .sp=0x43, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xada1, .value=0x30}, {.addr=0xada2, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xad7b, .a=0x27, .x=0x3a, .y=0x54, .sp=0x43, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xada1, .value=0x30}, {.addr=0xada2, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xada1, .value=0x30, .type=IO_READ},
        {.addr=0xada2, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0159) {
    const struct CPU_State initial_cpu = {.pc=0xb9b7, .a=0x21, .x=0xfa, .y=0xd9, .sp=0xa8, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xb9b7, .value=0x30}, {.addr=0xb9b8, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xb9e1, .a=0x21, .x=0xfa, .y=0xd9, .sp=0xa8, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xb9b7, .value=0x30}, {.addr=0xb9b8, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xb9b7, .value=0x30, .type=IO_READ},
        {.addr=0xb9b8, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_015A) {
    const struct CPU_State initial_cpu = {.pc=0x7987, .a=0xaf, .x=0xd3, .y=0xd9, .sp=0xb8, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x7987, .value=0x30}, {.addr=0x7988, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x7989, .a=0xaf, .x=0xd3, .y=0xd9, .sp=0xb8, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x7987, .value=0x30}, {.addr=0x7988, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x7987, .value=0x30, .type=IO_READ},
        {.addr=0x7988, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_015B) {
    const struct CPU_State initial_cpu = {.pc=0x9493, .a=0xfc, .x=0x74, .y=0x2e, .sp=0x0d, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x9493, .value=0x30}, {.addr=0x9494, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x9495, .a=0xfc, .x=0x74, .y=0x2e, .sp=0x0d, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x9493, .value=0x30}, {.addr=0x9494, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x9493, .value=0x30, .type=IO_READ},
        {.addr=0x9494, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_015C) {
    const struct CPU_State initial_cpu = {.pc=0xf733, .a=0x76, .x=0x43, .y=0xdf, .sp=0x09, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xf733, .value=0x30}, {.addr=0xf734, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xf735, .a=0x76, .x=0x43, .y=0xdf, .sp=0x09, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xf733, .value=0x30}, {.addr=0xf734, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xf733, .value=0x30, .type=IO_READ},
        {.addr=0xf734, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_015D) {
    const struct CPU_State initial_cpu = {.pc=0x7318, .a=0x0d, .x=0x8e, .y=0x9a, .sp=0xef, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x7318, .value=0x30}, {.addr=0x7319, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x72ff, .a=0x0d, .x=0x8e, .y=0x9a, .sp=0xef, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7318, .value=0x30}, {.addr=0x7319, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x7318, .value=0x30, .type=IO_READ},
        {.addr=0x7319, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_015E) {
    const struct CPU_State initial_cpu = {.pc=0x86b2, .a=0x51, .x=0x70, .y=0x6e, .sp=0xd5, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x86b2, .value=0x30}, {.addr=0x86b3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x86f4, .a=0x51, .x=0x70, .y=0x6e, .sp=0xd5, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x86b2, .value=0x30}, {.addr=0x86b3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x86b2, .value=0x30, .type=IO_READ},
        {.addr=0x86b3, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_015F) {
    const struct CPU_State initial_cpu = {.pc=0x8ff1, .a=0xe4, .x=0x66, .y=0x35, .sp=0xa2, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x8ff1, .value=0x30}, {.addr=0x8ff2, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x8fff, .a=0xe4, .x=0x66, .y=0x35, .sp=0xa2, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x8ff1, .value=0x30}, {.addr=0x8ff2, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x8ff1, .value=0x30, .type=IO_READ},
        {.addr=0x8ff2, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0160) {
    const struct CPU_State initial_cpu = {.pc=0x3a80, .a=0x36, .x=0x23, .y=0x27, .sp=0x11, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x3a80, .value=0x30}, {.addr=0x3a81, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x3a82, .a=0x36, .x=0x23, .y=0x27, .sp=0x11, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x3a80, .value=0x30}, {.addr=0x3a81, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x3a80, .value=0x30, .type=IO_READ},
        {.addr=0x3a81, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0161) {
    const struct CPU_State initial_cpu = {.pc=0xb9e4, .a=0xeb, .x=0xc5, .y=0x69, .sp=0xc9, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xb9e4, .value=0x30}, {.addr=0xb9e5, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xb9e6, .a=0xeb, .x=0xc5, .y=0x69, .sp=0xc9, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xb9e4, .value=0x30}, {.addr=0xb9e5, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xb9e4, .value=0x30, .type=IO_READ},
        {.addr=0xb9e5, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0162) {
    const struct CPU_State initial_cpu = {.pc=0x4870, .a=0x41, .x=0x00, .y=0x34, .sp=0xfe, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x4870, .value=0x30}, {.addr=0x4871, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x4872, .a=0x41, .x=0x00, .y=0x34, .sp=0xfe, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x4870, .value=0x30}, {.addr=0x4871, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x4870, .value=0x30, .type=IO_READ},
        {.addr=0x4871, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0163) {
    const struct CPU_State initial_cpu = {.pc=0xd4da, .a=0x28, .x=0x83, .y=0x4c, .sp=0xe2, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xd4da, .value=0x30}, {.addr=0xd4db, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xd4dc, .a=0x28, .x=0x83, .y=0x4c, .sp=0xe2, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xd4da, .value=0x30}, {.addr=0xd4db, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xd4da, .value=0x30, .type=IO_READ},
        {.addr=0xd4db, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0164) {
    const struct CPU_State initial_cpu = {.pc=0xca1a, .a=0x6d, .x=0xe9, .y=0x05, .sp=0xc2, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xca1a, .value=0x30}, {.addr=0xca1b, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xca1c, .a=0x6d, .x=0xe9, .y=0x05, .sp=0xc2, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xca1a, .value=0x30}, {.addr=0xca1b, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xca1a, .value=0x30, .type=IO_READ},
        {.addr=0xca1b, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0165) {
    const struct CPU_State initial_cpu = {.pc=0x30c2, .a=0x92, .x=0xeb, .y=0x57, .sp=0x07, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x30c2, .value=0x30}, {.addr=0x30c3, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x30c4, .a=0x92, .x=0xeb, .y=0x57, .sp=0x07, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x30c2, .value=0x30}, {.addr=0x30c3, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x30c2, .value=0x30, .type=IO_READ},
        {.addr=0x30c3, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0166) {
    const struct CPU_State initial_cpu = {.pc=0xb35b, .a=0xee, .x=0xf5, .y=0x0f, .sp=0x59, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xb35b, .value=0x30}, {.addr=0xb35c, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xb3b6, .a=0xee, .x=0xf5, .y=0x0f, .sp=0x59, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xb35b, .value=0x30}, {.addr=0xb35c, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xb35b, .value=0x30, .type=IO_READ},
        {.addr=0xb35c, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0167) {
    const struct CPU_State initial_cpu = {.pc=0x8c3e, .a=0x8f, .x=0xe1, .y=0xc8, .sp=0xf0, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x8c3e, .value=0x30}, {.addr=0x8c3f, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x8ca3, .a=0x8f, .x=0xe1, .y=0xc8, .sp=0xf0, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x8c3e, .value=0x30}, {.addr=0x8c3f, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x8c3e, .value=0x30, .type=IO_READ},
        {.addr=0x8c3f, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0168) {
    const struct CPU_State initial_cpu = {.pc=0x5dc9, .a=0x42, .x=0x2b, .y=0x20, .sp=0xf0, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x5dc9, .value=0x30}, {.addr=0x5dca, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x5d57, .a=0x42, .x=0x2b, .y=0x20, .sp=0xf0, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x5dc9, .value=0x30}, {.addr=0x5dca, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x5dc9, .value=0x30, .type=IO_READ},
        {.addr=0x5dca, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0169) {
    const struct CPU_State initial_cpu = {.pc=0xc2a8, .a=0x78, .x=0xea, .y=0xf0, .sp=0xf1, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xc2a8, .value=0x30}, {.addr=0xc2a9, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xc2aa, .a=0x78, .x=0xea, .y=0xf0, .sp=0xf1, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xc2a8, .value=0x30}, {.addr=0xc2a9, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xc2a8, .value=0x30, .type=IO_READ},
        {.addr=0xc2a9, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_016A) {
    const struct CPU_State initial_cpu = {.pc=0x6f7d, .a=0xff, .x=0x33, .y=0xc9, .sp=0xa6, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x6f7d, .value=0x30}, {.addr=0x6f7e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6f7f, .a=0xff, .x=0x33, .y=0xc9, .sp=0xa6, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x6f7d, .value=0x30}, {.addr=0x6f7e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6f7d, .value=0x30, .type=IO_READ},
        {.addr=0x6f7e, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_016B) {
    const struct CPU_State initial_cpu = {.pc=0x9b7d, .a=0x41, .x=0x4f, .y=0x1e, .sp=0x8c, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x9b7d, .value=0x30}, {.addr=0x9b7e, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x9b7f, .a=0x41, .x=0x4f, .y=0x1e, .sp=0x8c, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x9b7d, .value=0x30}, {.addr=0x9b7e, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x9b7d, .value=0x30, .type=IO_READ},
        {.addr=0x9b7e, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_016C) {
    const struct CPU_State initial_cpu = {.pc=0x9cf9, .a=0xe0, .x=0x25, .y=0x4e, .sp=0x86, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x9cf9, .value=0x30}, {.addr=0x9cfa, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x9ca4, .a=0xe0, .x=0x25, .y=0x4e, .sp=0x86, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x9cf9, .value=0x30}, {.addr=0x9cfa, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x9cf9, .value=0x30, .type=IO_READ},
        {.addr=0x9cfa, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_016D) {
    const struct CPU_State initial_cpu = {.pc=0x06f5, .a=0xa2, .x=0x45, .y=0x20, .sp=0xfc, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x06f5, .value=0x30}, {.addr=0x06f6, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x071e, .a=0xa2, .x=0x45, .y=0x20, .sp=0xfc, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x06f5, .value=0x30}, {.addr=0x06f6, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x06f5, .value=0x30, .type=IO_READ},
        {.addr=0x06f6, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_016E) {
    const struct CPU_State initial_cpu = {.pc=0x6dd6, .a=0x11, .x=0x7f, .y=0x13, .sp=0x92, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x6dd6, .value=0x30}, {.addr=0x6dd7, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x6e52, .a=0x11, .x=0x7f, .y=0x13, .sp=0x92, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x6dd6, .value=0x30}, {.addr=0x6dd7, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x6dd6, .value=0x30, .type=IO_READ},
        {.addr=0x6dd7, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_016F) {
    const struct CPU_State initial_cpu = {.pc=0x9f64, .a=0x1f, .x=0x28, .y=0xcd, .sp=0x84, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x9f64, .value=0x30}, {.addr=0x9f65, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x9fcb, .a=0x1f, .x=0x28, .y=0xcd, .sp=0x84, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x9f64, .value=0x30}, {.addr=0x9f65, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x9f64, .value=0x30, .type=IO_READ},
        {.addr=0x9f65, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0170) {
    const struct CPU_State initial_cpu = {.pc=0x85f3, .a=0x14, .x=0x98, .y=0x6b, .sp=0xf4, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x85f3, .value=0x30}, {.addr=0x85f4, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8595, .a=0x14, .x=0x98, .y=0x6b, .sp=0xf4, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x85f3, .value=0x30}, {.addr=0x85f4, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x85f3, .value=0x30, .type=IO_READ},
        {.addr=0x85f4, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0171) {
    const struct CPU_State initial_cpu = {.pc=0xda80, .a=0x82, .x=0x23, .y=0x3c, .sp=0x9b, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xda80, .value=0x30}, {.addr=0xda81, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xda82, .a=0x82, .x=0x23, .y=0x3c, .sp=0x9b, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xda80, .value=0x30}, {.addr=0xda81, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xda80, .value=0x30, .type=IO_READ},
        {.addr=0xda81, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0172) {
    const struct CPU_State initial_cpu = {.pc=0x2ed7, .a=0x32, .x=0xb6, .y=0xe9, .sp=0xa0, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x2ed7, .value=0x30}, {.addr=0x2ed8, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x2eee, .a=0x32, .x=0xb6, .y=0xe9, .sp=0xa0, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x2ed7, .value=0x30}, {.addr=0x2ed8, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x2ed7, .value=0x30, .type=IO_READ},
        {.addr=0x2ed8, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0174) {
    const struct CPU_State initial_cpu = {.pc=0x3f14, .a=0x26, .x=0x71, .y=0x94, .sp=0xa8, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x3f14, .value=0x30}, {.addr=0x3f15, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x3f58, .a=0x26, .x=0x71, .y=0x94, .sp=0xa8, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x3f14, .value=0x30}, {.addr=0x3f15, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x3f14, .value=0x30, .type=IO_READ},
        {.addr=0x3f15, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0175) {
    const struct CPU_State initial_cpu = {.pc=0xcde6, .a=0x58, .x=0xbe, .y=0x26, .sp=0x40, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xcde6, .value=0x30}, {.addr=0xcde7, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xce34, .a=0x58, .x=0xbe, .y=0x26, .sp=0x40, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xcde6, .value=0x30}, {.addr=0xcde7, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xcde6, .value=0x30, .type=IO_READ},
        {.addr=0xcde7, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0176) {
    const struct CPU_State initial_cpu = {.pc=0xbd64, .a=0xd5, .x=0x14, .y=0x6c, .sp=0xf7, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xbd64, .value=0x30}, {.addr=0xbd65, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xbd66, .a=0xd5, .x=0x14, .y=0x6c, .sp=0xf7, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xbd64, .value=0x30}, {.addr=0xbd65, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xbd64, .value=0x30, .type=IO_READ},
        {.addr=0xbd65, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0177) {
    const struct CPU_State initial_cpu = {.pc=0x7ceb, .a=0x5a, .x=0x31, .y=0x67, .sp=0x5e, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x7ceb, .value=0x30}, {.addr=0x7cec, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x7ced, .a=0x5a, .x=0x31, .y=0x67, .sp=0x5e, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x7ceb, .value=0x30}, {.addr=0x7cec, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x7ceb, .value=0x30, .type=IO_READ},
        {.addr=0x7cec, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0178) {
    const struct CPU_State initial_cpu = {.pc=0x497a, .a=0x37, .x=0x65, .y=0x59, .sp=0xd7, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x497a, .value=0x30}, {.addr=0x497b, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x48fd, .a=0x37, .x=0x65, .y=0x59, .sp=0xd7, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x497a, .value=0x30}, {.addr=0x497b, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x497a, .value=0x30, .type=IO_READ},
        {.addr=0x497b, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0179) {
    const struct CPU_State initial_cpu = {.pc=0xadfb, .a=0xaa, .x=0x4a, .y=0x98, .sp=0x21, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xadfb, .value=0x30}, {.addr=0xadfc, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xae03, .a=0xaa, .x=0x4a, .y=0x98, .sp=0x21, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xadfb, .value=0x30}, {.addr=0xadfc, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xadfb, .value=0x30, .type=IO_READ},
        {.addr=0xadfc, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_017A) {
    const struct CPU_State initial_cpu = {.pc=0x5ea4, .a=0x39, .x=0x1f, .y=0x36, .sp=0x02, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x5ea4, .value=0x30}, {.addr=0x5ea5, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x5e3c, .a=0x39, .x=0x1f, .y=0x36, .sp=0x02, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x5ea4, .value=0x30}, {.addr=0x5ea5, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x5ea4, .value=0x30, .type=IO_READ},
        {.addr=0x5ea5, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_017B) {
    const struct CPU_State initial_cpu = {.pc=0x8c7b, .a=0x3a, .x=0xf3, .y=0x91, .sp=0xda, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x8c7b, .value=0x30}, {.addr=0x8c7c, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x8c7d, .a=0x3a, .x=0xf3, .y=0x91, .sp=0xda, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x8c7b, .value=0x30}, {.addr=0x8c7c, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x8c7b, .value=0x30, .type=IO_READ},
        {.addr=0x8c7c, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_017C) {
    const struct CPU_State initial_cpu = {.pc=0xb776, .a=0x9f, .x=0xb4, .y=0x2c, .sp=0x89, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xb776, .value=0x30}, {.addr=0xb777, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xb786, .a=0x9f, .x=0xb4, .y=0x2c, .sp=0x89, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xb776, .value=0x30}, {.addr=0xb777, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xb776, .value=0x30, .type=IO_READ},
        {.addr=0xb777, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_017D) {
    const struct CPU_State initial_cpu = {.pc=0x4b3f, .a=0x9d, .x=0xb5, .y=0x24, .sp=0x13, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x4b3f, .value=0x30}, {.addr=0x4b40, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x4b37, .a=0x9d, .x=0xb5, .y=0x24, .sp=0x13, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x4b3f, .value=0x30}, {.addr=0x4b40, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x4b3f, .value=0x30, .type=IO_READ},
        {.addr=0x4b40, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_017E) {
    const struct CPU_State initial_cpu = {.pc=0x38fb, .a=0x46, .x=0x59, .y=0x9e, .sp=0x1e, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x38fb, .value=0x30}, {.addr=0x38fc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x38fd, .a=0x46, .x=0x59, .y=0x9e, .sp=0x1e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x38fb, .value=0x30}, {.addr=0x38fc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x38fb, .value=0x30, .type=IO_READ},
        {.addr=0x38fc, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_017F) {
    const struct CPU_State initial_cpu = {.pc=0x5556, .a=0x71, .x=0x2c, .y=0xcf, .sp=0x08, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x5556, .value=0x30}, {.addr=0x5557, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x550e, .a=0x71, .x=0x2c, .y=0xcf, .sp=0x08, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x5556, .value=0x30}, {.addr=0x5557, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x5556, .value=0x30, .type=IO_READ},
        {.addr=0x5557, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0180) {
    const struct CPU_State initial_cpu = {.pc=0x6941, .a=0x70, .x=0x5a, .y=0xec, .sp=0xdf, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x6941, .value=0x30}, {.addr=0x6942, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x6943, .a=0x70, .x=0x5a, .y=0xec, .sp=0xdf, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x6941, .value=0x30}, {.addr=0x6942, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x6941, .value=0x30, .type=IO_READ},
        {.addr=0x6942, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0181) {
    const struct CPU_State initial_cpu = {.pc=0x08de, .a=0xb4, .x=0x31, .y=0x14, .sp=0xc0, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x08de, .value=0x30}, {.addr=0x08df, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x08e0, .a=0xb4, .x=0x31, .y=0x14, .sp=0xc0, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x08de, .value=0x30}, {.addr=0x08df, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x08de, .value=0x30, .type=IO_READ},
        {.addr=0x08df, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0182) {
    const struct CPU_State initial_cpu = {.pc=0xcddc, .a=0x13, .x=0x01, .y=0x85, .sp=0x6c, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xcddc, .value=0x30}, {.addr=0xcddd, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xcdde, .a=0x13, .x=0x01, .y=0x85, .sp=0x6c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xcddc, .value=0x30}, {.addr=0xcddd, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xcddc, .value=0x30, .type=IO_READ},
        {.addr=0xcddd, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0183) {
    const struct CPU_State initial_cpu = {.pc=0xdd51, .a=0x39, .x=0x6f, .y=0xcb, .sp=0x38, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xdd51, .value=0x30}, {.addr=0xdd52, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xdd53, .a=0x39, .x=0x6f, .y=0xcb, .sp=0x38, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xdd51, .value=0x30}, {.addr=0xdd52, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xdd51, .value=0x30, .type=IO_READ},
        {.addr=0xdd52, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0184) {
    const struct CPU_State initial_cpu = {.pc=0x800a, .a=0x9d, .x=0x41, .y=0x02, .sp=0xab, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x800a, .value=0x30}, {.addr=0x800b, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x800c, .a=0x9d, .x=0x41, .y=0x02, .sp=0xab, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x800a, .value=0x30}, {.addr=0x800b, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x800a, .value=0x30, .type=IO_READ},
        {.addr=0x800b, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0185) {
    const struct CPU_State initial_cpu = {.pc=0x47d7, .a=0xfc, .x=0xd2, .y=0xa1, .sp=0x46, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x47d7, .value=0x30}, {.addr=0x47d8, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x47d9, .a=0xfc, .x=0xd2, .y=0xa1, .sp=0x46, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x47d7, .value=0x30}, {.addr=0x47d8, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x47d7, .value=0x30, .type=IO_READ},
        {.addr=0x47d8, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0186) {
    const struct CPU_State initial_cpu = {.pc=0x2b1f, .a=0x60, .x=0x7a, .y=0xc0, .sp=0x01, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x2b1f, .value=0x30}, {.addr=0x2b20, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x2b21, .a=0x60, .x=0x7a, .y=0xc0, .sp=0x01, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x2b1f, .value=0x30}, {.addr=0x2b20, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x2b1f, .value=0x30, .type=IO_READ},
        {.addr=0x2b20, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0187) {
    const struct CPU_State initial_cpu = {.pc=0x8b04, .a=0xea, .x=0x74, .y=0xa4, .sp=0xbd, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x8b04, .value=0x30}, {.addr=0x8b05, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x8b06, .a=0xea, .x=0x74, .y=0xa4, .sp=0xbd, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x8b04, .value=0x30}, {.addr=0x8b05, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x8b04, .value=0x30, .type=IO_READ},
        {.addr=0x8b05, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0188) {
    const struct CPU_State initial_cpu = {.pc=0x38e2, .a=0xb5, .x=0xa2, .y=0x2e, .sp=0xdd, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x38e2, .value=0x30}, {.addr=0x38e3, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x38e4, .a=0xb5, .x=0xa2, .y=0x2e, .sp=0xdd, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x38e2, .value=0x30}, {.addr=0x38e3, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x38e2, .value=0x30, .type=IO_READ},
        {.addr=0x38e3, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0189) {
    const struct CPU_State initial_cpu = {.pc=0x9fb7, .a=0x55, .x=0x03, .y=0x47, .sp=0x79, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x9fb7, .value=0x30}, {.addr=0x9fb8, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x9f83, .a=0x55, .x=0x03, .y=0x47, .sp=0x79, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9fb7, .value=0x30}, {.addr=0x9fb8, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x9fb7, .value=0x30, .type=IO_READ},
        {.addr=0x9fb8, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_018A) {
    const struct CPU_State initial_cpu = {.pc=0xd4e6, .a=0x46, .x=0xb2, .y=0xcb, .sp=0xef, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xd4e6, .value=0x30}, {.addr=0xd4e7, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xd4e8, .a=0x46, .x=0xb2, .y=0xcb, .sp=0xef, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xd4e6, .value=0x30}, {.addr=0xd4e7, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xd4e6, .value=0x30, .type=IO_READ},
        {.addr=0xd4e7, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_018B) {
    const struct CPU_State initial_cpu = {.pc=0x0ff7, .a=0x14, .x=0xd3, .y=0x91, .sp=0xbe, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0ff7, .value=0x30}, {.addr=0x0ff8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0f99, .a=0x14, .x=0xd3, .y=0x91, .sp=0xbe, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0ff7, .value=0x30}, {.addr=0x0ff8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0ff7, .value=0x30, .type=IO_READ},
        {.addr=0x0ff8, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_018C) {
    const struct CPU_State initial_cpu = {.pc=0x7650, .a=0xa6, .x=0xea, .y=0xa1, .sp=0x62, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x7650, .value=0x30}, {.addr=0x7651, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x7652, .a=0xa6, .x=0xea, .y=0xa1, .sp=0x62, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7650, .value=0x30}, {.addr=0x7651, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x7650, .value=0x30, .type=IO_READ},
        {.addr=0x7651, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_018D) {
    const struct CPU_State initial_cpu = {.pc=0x26d7, .a=0x78, .x=0xad, .y=0x45, .sp=0x56, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x26d7, .value=0x30}, {.addr=0x26d8, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x26d9, .a=0x78, .x=0xad, .y=0x45, .sp=0x56, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x26d7, .value=0x30}, {.addr=0x26d8, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x26d7, .value=0x30, .type=IO_READ},
        {.addr=0x26d8, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_018E) {
    const struct CPU_State initial_cpu = {.pc=0xf091, .a=0x72, .x=0x33, .y=0x68, .sp=0x33, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xf091, .value=0x30}, {.addr=0xf092, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xf093, .a=0x72, .x=0x33, .y=0x68, .sp=0x33, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xf091, .value=0x30}, {.addr=0xf092, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xf091, .value=0x30, .type=IO_READ},
        {.addr=0xf092, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_018F) {
    const struct CPU_State initial_cpu = {.pc=0x342a, .a=0x58, .x=0xe2, .y=0xa3, .sp=0x43, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x342a, .value=0x30}, {.addr=0x342b, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x349a, .a=0x58, .x=0xe2, .y=0xa3, .sp=0x43, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x342a, .value=0x30}, {.addr=0x342b, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x342a, .value=0x30, .type=IO_READ},
        {.addr=0x342b, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0190) {
    const struct CPU_State initial_cpu = {.pc=0x3fca, .a=0xf8, .x=0x5b, .y=0xeb, .sp=0x30, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x3fca, .value=0x30}, {.addr=0x3fcb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3fe9, .a=0xf8, .x=0x5b, .y=0xeb, .sp=0x30, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x3fca, .value=0x30}, {.addr=0x3fcb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3fca, .value=0x30, .type=IO_READ},
        {.addr=0x3fcb, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0191) {
    const struct CPU_State initial_cpu = {.pc=0x77e9, .a=0x82, .x=0x16, .y=0xb8, .sp=0x92, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x77e9, .value=0x30}, {.addr=0x77ea, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x77eb, .a=0x82, .x=0x16, .y=0xb8, .sp=0x92, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x77e9, .value=0x30}, {.addr=0x77ea, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x77e9, .value=0x30, .type=IO_READ},
        {.addr=0x77ea, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0192) {
    const struct CPU_State initial_cpu = {.pc=0x575c, .a=0x32, .x=0x01, .y=0x14, .sp=0xd6, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x575c, .value=0x30}, {.addr=0x575d, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x57ca, .a=0x32, .x=0x01, .y=0x14, .sp=0xd6, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x575c, .value=0x30}, {.addr=0x575d, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x575c, .value=0x30, .type=IO_READ},
        {.addr=0x575d, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0193) {
    const struct CPU_State initial_cpu = {.pc=0x8ea1, .a=0x06, .x=0x63, .y=0x0f, .sp=0x7d, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x8ea1, .value=0x30}, {.addr=0x8ea2, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x8ea3, .a=0x06, .x=0x63, .y=0x0f, .sp=0x7d, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x8ea1, .value=0x30}, {.addr=0x8ea2, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x8ea1, .value=0x30, .type=IO_READ},
        {.addr=0x8ea2, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0194) {
    const struct CPU_State initial_cpu = {.pc=0x3e03, .a=0x93, .x=0x81, .y=0x79, .sp=0xd7, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x3e03, .value=0x30}, {.addr=0x3e04, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x3e37, .a=0x93, .x=0x81, .y=0x79, .sp=0xd7, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x3e03, .value=0x30}, {.addr=0x3e04, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x3e03, .value=0x30, .type=IO_READ},
        {.addr=0x3e04, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0195) {
    const struct CPU_State initial_cpu = {.pc=0xb62b, .a=0x4c, .x=0x77, .y=0x52, .sp=0x7e, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xb62b, .value=0x30}, {.addr=0xb62c, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xb676, .a=0x4c, .x=0x77, .y=0x52, .sp=0x7e, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xb62b, .value=0x30}, {.addr=0xb62c, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xb62b, .value=0x30, .type=IO_READ},
        {.addr=0xb62c, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0196) {
    const struct CPU_State initial_cpu = {.pc=0xf8ab, .a=0x9b, .x=0xa9, .y=0x3a, .sp=0xd0, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xf8ab, .value=0x30}, {.addr=0xf8ac, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xf8ad, .a=0x9b, .x=0xa9, .y=0x3a, .sp=0xd0, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xf8ab, .value=0x30}, {.addr=0xf8ac, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xf8ab, .value=0x30, .type=IO_READ},
        {.addr=0xf8ac, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0197) {
    const struct CPU_State initial_cpu = {.pc=0xdda8, .a=0xe0, .x=0xfb, .y=0x74, .sp=0x76, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xdda8, .value=0x30}, {.addr=0xdda9, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xddaa, .a=0xe0, .x=0xfb, .y=0x74, .sp=0x76, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xdda8, .value=0x30}, {.addr=0xdda9, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xdda8, .value=0x30, .type=IO_READ},
        {.addr=0xdda9, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0198) {
    const struct CPU_State initial_cpu = {.pc=0x2cc6, .a=0x24, .x=0xd4, .y=0x05, .sp=0xc5, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x2cc6, .value=0x30}, {.addr=0x2cc7, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x2d10, .a=0x24, .x=0xd4, .y=0x05, .sp=0xc5, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2cc6, .value=0x30}, {.addr=0x2cc7, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x2cc6, .value=0x30, .type=IO_READ},
        {.addr=0x2cc7, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0199) {
    const struct CPU_State initial_cpu = {.pc=0x885a, .a=0xe4, .x=0xe6, .y=0x9c, .sp=0x70, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x885a, .value=0x30}, {.addr=0x885b, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x887a, .a=0xe4, .x=0xe6, .y=0x9c, .sp=0x70, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x885a, .value=0x30}, {.addr=0x885b, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x885a, .value=0x30, .type=IO_READ},
        {.addr=0x885b, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_019A) {
    const struct CPU_State initial_cpu = {.pc=0x0c67, .a=0x42, .x=0xe3, .y=0x90, .sp=0xdb, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0c67, .value=0x30}, {.addr=0x0c68, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x0ca3, .a=0x42, .x=0xe3, .y=0x90, .sp=0xdb, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0c67, .value=0x30}, {.addr=0x0c68, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x0c67, .value=0x30, .type=IO_READ},
        {.addr=0x0c68, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_019B) {
    const struct CPU_State initial_cpu = {.pc=0x4ea3, .a=0x78, .x=0x09, .y=0x49, .sp=0x14, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x4ea3, .value=0x30}, {.addr=0x4ea4, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x4ea5, .a=0x78, .x=0x09, .y=0x49, .sp=0x14, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x4ea3, .value=0x30}, {.addr=0x4ea4, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x4ea3, .value=0x30, .type=IO_READ},
        {.addr=0x4ea4, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_019C) {
    const struct CPU_State initial_cpu = {.pc=0x6a93, .a=0x8d, .x=0x02, .y=0xbc, .sp=0x5c, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x6a93, .value=0x30}, {.addr=0x6a94, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x6a88, .a=0x8d, .x=0x02, .y=0xbc, .sp=0x5c, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x6a93, .value=0x30}, {.addr=0x6a94, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x6a93, .value=0x30, .type=IO_READ},
        {.addr=0x6a94, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_019D) {
    const struct CPU_State initial_cpu = {.pc=0x5555, .a=0xa5, .x=0xbe, .y=0x56, .sp=0x36, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x5555, .value=0x30}, {.addr=0x5556, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x5596, .a=0xa5, .x=0xbe, .y=0x56, .sp=0x36, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x5555, .value=0x30}, {.addr=0x5556, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x5555, .value=0x30, .type=IO_READ},
        {.addr=0x5556, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_019E) {
    const struct CPU_State initial_cpu = {.pc=0xe816, .a=0x4f, .x=0xdb, .y=0xde, .sp=0x79, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xe816, .value=0x30}, {.addr=0xe817, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xe857, .a=0x4f, .x=0xdb, .y=0xde, .sp=0x79, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xe816, .value=0x30}, {.addr=0xe817, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xe816, .value=0x30, .type=IO_READ},
        {.addr=0xe817, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_019F) {
    const struct CPU_State initial_cpu = {.pc=0xe478, .a=0x7d, .x=0x73, .y=0xd0, .sp=0x4e, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xe478, .value=0x30}, {.addr=0xe479, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xe475, .a=0x7d, .x=0x73, .y=0xd0, .sp=0x4e, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xe478, .value=0x30}, {.addr=0xe479, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xe478, .value=0x30, .type=IO_READ},
        {.addr=0xe479, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x67e7, .a=0xcb, .x=0x2b, .y=0x98, .sp=0x52, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x67e7, .value=0x30}, {.addr=0x67e8, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x67e9, .a=0xcb, .x=0x2b, .y=0x98, .sp=0x52, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x67e7, .value=0x30}, {.addr=0x67e8, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x67e7, .value=0x30, .type=IO_READ},
        {.addr=0x67e8, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xd40f, .a=0x9f, .x=0xb9, .y=0xb0, .sp=0x08, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xd40f, .value=0x30}, {.addr=0xd410, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd411, .a=0x9f, .x=0xb9, .y=0xb0, .sp=0x08, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xd40f, .value=0x30}, {.addr=0xd410, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd40f, .value=0x30, .type=IO_READ},
        {.addr=0xd410, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xc5fb, .a=0xa4, .x=0x33, .y=0x74, .sp=0xc1, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xc5fb, .value=0x30}, {.addr=0xc5fc, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xc645, .a=0xa4, .x=0x33, .y=0x74, .sp=0xc1, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xc5fb, .value=0x30}, {.addr=0xc5fc, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xc5fb, .value=0x30, .type=IO_READ},
        {.addr=0xc5fc, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xdaac, .a=0xc3, .x=0xe5, .y=0xad, .sp=0x7c, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xdaac, .value=0x30}, {.addr=0xdaad, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xdaae, .a=0xc3, .x=0xe5, .y=0xad, .sp=0x7c, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xdaac, .value=0x30}, {.addr=0xdaad, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xdaac, .value=0x30, .type=IO_READ},
        {.addr=0xdaad, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xfdab, .a=0xce, .x=0x29, .y=0x32, .sp=0xc5, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xfdab, .value=0x30}, {.addr=0xfdac, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xfdbb, .a=0xce, .x=0x29, .y=0x32, .sp=0xc5, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xfdab, .value=0x30}, {.addr=0xfdac, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xfdab, .value=0x30, .type=IO_READ},
        {.addr=0xfdac, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x09a6, .a=0x94, .x=0x33, .y=0x98, .sp=0x21, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x09a6, .value=0x30}, {.addr=0x09a7, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x0963, .a=0x94, .x=0x33, .y=0x98, .sp=0x21, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x09a6, .value=0x30}, {.addr=0x09a7, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x09a6, .value=0x30, .type=IO_READ},
        {.addr=0x09a7, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x8d84, .a=0x7b, .x=0x95, .y=0x94, .sp=0x88, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x8d84, .value=0x30}, {.addr=0x8d85, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x8d68, .a=0x7b, .x=0x95, .y=0x94, .sp=0x88, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x8d84, .value=0x30}, {.addr=0x8d85, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x8d84, .value=0x30, .type=IO_READ},
        {.addr=0x8d85, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x300f, .a=0xe3, .x=0xa2, .y=0x72, .sp=0x63, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x300f, .value=0x30}, {.addr=0x3010, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x3011, .a=0xe3, .x=0xa2, .y=0x72, .sp=0x63, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x300f, .value=0x30}, {.addr=0x3010, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x300f, .value=0x30, .type=IO_READ},
        {.addr=0x3010, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x602e, .a=0x7b, .x=0x27, .y=0xf1, .sp=0x0d, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x602e, .value=0x30}, {.addr=0x602f, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x6030, .a=0x7b, .x=0x27, .y=0xf1, .sp=0x0d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x602e, .value=0x30}, {.addr=0x602f, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x602e, .value=0x30, .type=IO_READ},
        {.addr=0x602f, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x3e2f, .a=0x12, .x=0x81, .y=0x2f, .sp=0x42, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x3e2f, .value=0x30}, {.addr=0x3e30, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x3e31, .a=0x12, .x=0x81, .y=0x2f, .sp=0x42, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x3e2f, .value=0x30}, {.addr=0x3e30, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x3e2f, .value=0x30, .type=IO_READ},
        {.addr=0x3e30, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x4f14, .a=0x6f, .x=0x11, .y=0x9a, .sp=0xb2, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x4f14, .value=0x30}, {.addr=0x4f15, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x4f27, .a=0x6f, .x=0x11, .y=0x9a, .sp=0xb2, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x4f14, .value=0x30}, {.addr=0x4f15, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x4f14, .value=0x30, .type=IO_READ},
        {.addr=0x4f15, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x956b, .a=0x20, .x=0x10, .y=0xc2, .sp=0x0c, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x956b, .value=0x30}, {.addr=0x956c, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x95bc, .a=0x20, .x=0x10, .y=0xc2, .sp=0x0c, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x956b, .value=0x30}, {.addr=0x956c, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x956b, .value=0x30, .type=IO_READ},
        {.addr=0x956c, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xf48d, .a=0xae, .x=0x60, .y=0xdf, .sp=0x54, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xf48d, .value=0x30}, {.addr=0xf48e, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xf50a, .a=0xae, .x=0x60, .y=0xdf, .sp=0x54, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xf48d, .value=0x30}, {.addr=0xf48e, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xf48d, .value=0x30, .type=IO_READ},
        {.addr=0xf48e, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x3e3f, .a=0x05, .x=0x8c, .y=0x48, .sp=0xac, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x3e3f, .value=0x30}, {.addr=0x3e40, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x3e7c, .a=0x05, .x=0x8c, .y=0x48, .sp=0xac, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x3e3f, .value=0x30}, {.addr=0x3e40, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x3e3f, .value=0x30, .type=IO_READ},
        {.addr=0x3e40, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x0996, .a=0x13, .x=0xe5, .y=0xb5, .sp=0x39, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0996, .value=0x30}, {.addr=0x0997, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x0998, .a=0x13, .x=0xe5, .y=0xb5, .sp=0x39, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0996, .value=0x30}, {.addr=0x0997, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x0996, .value=0x30, .type=IO_READ},
        {.addr=0x0997, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x161e, .a=0x86, .x=0xe9, .y=0x02, .sp=0x1f, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x161e, .value=0x30}, {.addr=0x161f, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x1694, .a=0x86, .x=0xe9, .y=0x02, .sp=0x1f, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x161e, .value=0x30}, {.addr=0x161f, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x161e, .value=0x30, .type=IO_READ},
        {.addr=0x161f, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x02be, .a=0x90, .x=0x1b, .y=0xa9, .sp=0x62, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x02be, .value=0x30}, {.addr=0x02bf, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x02e4, .a=0x90, .x=0x1b, .y=0xa9, .sp=0x62, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x02be, .value=0x30}, {.addr=0x02bf, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x02be, .value=0x30, .type=IO_READ},
        {.addr=0x02bf, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xc00c, .a=0x4d, .x=0xe2, .y=0xa2, .sp=0x6a, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xc00c, .value=0x30}, {.addr=0xc00d, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xc039, .a=0x4d, .x=0xe2, .y=0xa2, .sp=0x6a, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xc00c, .value=0x30}, {.addr=0xc00d, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xc00c, .value=0x30, .type=IO_READ},
        {.addr=0xc00d, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x3070, .a=0x64, .x=0x27, .y=0x3a, .sp=0x71, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x3070, .value=0x30}, {.addr=0x3071, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x304f, .a=0x64, .x=0x27, .y=0x3a, .sp=0x71, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x3070, .value=0x30}, {.addr=0x3071, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3070, .value=0x30, .type=IO_READ},
        {.addr=0x3071, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xac6e, .a=0x7b, .x=0x88, .y=0x03, .sp=0x58, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xac6e, .value=0x30}, {.addr=0xac6f, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xac1b, .a=0x7b, .x=0x88, .y=0x03, .sp=0x58, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xac6e, .value=0x30}, {.addr=0xac6f, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xac6e, .value=0x30, .type=IO_READ},
        {.addr=0xac6f, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xcf44, .a=0x85, .x=0xb6, .y=0x7a, .sp=0xfe, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xcf44, .value=0x30}, {.addr=0xcf45, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xcf47, .a=0x85, .x=0xb6, .y=0x7a, .sp=0xfe, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0xcf44, .value=0x30}, {.addr=0xcf45, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xcf44, .value=0x30, .type=IO_READ},
        {.addr=0xcf45, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x3cd0, .a=0x55, .x=0x9e, .y=0xb2, .sp=0x65, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x3cd0, .value=0x30}, {.addr=0x3cd1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3cd2, .a=0x55, .x=0x9e, .y=0xb2, .sp=0x65, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x3cd0, .value=0x30}, {.addr=0x3cd1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3cd0, .value=0x30, .type=IO_READ},
        {.addr=0x3cd1, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x1aae, .a=0xd5, .x=0x6d, .y=0xfe, .sp=0xfe, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x1aae, .value=0x30}, {.addr=0x1aaf, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x1ad8, .a=0xd5, .x=0x6d, .y=0xfe, .sp=0xfe, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x1aae, .value=0x30}, {.addr=0x1aaf, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x1aae, .value=0x30, .type=IO_READ},
        {.addr=0x1aaf, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x6070, .a=0xb9, .x=0xc5, .y=0x66, .sp=0xd9, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x6070, .value=0x30}, {.addr=0x6071, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x607e, .a=0xb9, .x=0xc5, .y=0x66, .sp=0xd9, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x6070, .value=0x30}, {.addr=0x6071, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x6070, .value=0x30, .type=IO_READ},
        {.addr=0x6071, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xec00, .a=0x5c, .x=0x0c, .y=0xc8, .sp=0xbe, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xec00, .value=0x30}, {.addr=0xec01, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xebba, .a=0x5c, .x=0x0c, .y=0xc8, .sp=0xbe, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xec00, .value=0x30}, {.addr=0xec01, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xec00, .value=0x30, .type=IO_READ},
        {.addr=0xec01, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xe62e, .a=0x38, .x=0xd2, .y=0xa5, .sp=0xe4, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xe62e, .value=0x30}, {.addr=0xe62f, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xe68f, .a=0x38, .x=0xd2, .y=0xa5, .sp=0xe4, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xe62e, .value=0x30}, {.addr=0xe62f, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xe62e, .value=0x30, .type=IO_READ},
        {.addr=0xe62f, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x7922, .a=0x68, .x=0x60, .y=0x96, .sp=0x22, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x7922, .value=0x30}, {.addr=0x7923, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x7924, .a=0x68, .x=0x60, .y=0x96, .sp=0x22, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x7922, .value=0x30}, {.addr=0x7923, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x7922, .value=0x30, .type=IO_READ},
        {.addr=0x7923, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x609d, .a=0x1f, .x=0xfc, .y=0x40, .sp=0x97, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x609d, .value=0x30}, {.addr=0x609e, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x609f, .a=0x1f, .x=0xfc, .y=0x40, .sp=0x97, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x609d, .value=0x30}, {.addr=0x609e, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x609d, .value=0x30, .type=IO_READ},
        {.addr=0x609e, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x0569, .a=0xa2, .x=0xad, .y=0x38, .sp=0x32, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0569, .value=0x30}, {.addr=0x056a, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x0582, .a=0xa2, .x=0xad, .y=0x38, .sp=0x32, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0569, .value=0x30}, {.addr=0x056a, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x0569, .value=0x30, .type=IO_READ},
        {.addr=0x056a, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xecd1, .a=0x46, .x=0xa0, .y=0x9f, .sp=0x46, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xecd1, .value=0x30}, {.addr=0xecd2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xecd3, .a=0x46, .x=0xa0, .y=0x9f, .sp=0x46, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xecd1, .value=0x30}, {.addr=0xecd2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xecd1, .value=0x30, .type=IO_READ},
        {.addr=0xecd2, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xd560, .a=0x2a, .x=0x84, .y=0x12, .sp=0x8e, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xd560, .value=0x30}, {.addr=0xd561, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xd4f9, .a=0x2a, .x=0x84, .y=0x12, .sp=0x8e, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xd560, .value=0x30}, {.addr=0xd561, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xd560, .value=0x30, .type=IO_READ},
        {.addr=0xd561, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x6fdd, .a=0x90, .x=0xe1, .y=0x05, .sp=0x4f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x6fdd, .value=0x30}, {.addr=0x6fde, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6f5f, .a=0x90, .x=0xe1, .y=0x05, .sp=0x4f, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x6fdd, .value=0x30}, {.addr=0x6fde, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6fdd, .value=0x30, .type=IO_READ},
        {.addr=0x6fde, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x6b86, .a=0x2b, .x=0x2b, .y=0xc1, .sp=0x1b, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x6b86, .value=0x30}, {.addr=0x6b87, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x6b88, .a=0x2b, .x=0x2b, .y=0xc1, .sp=0x1b, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x6b86, .value=0x30}, {.addr=0x6b87, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x6b86, .value=0x30, .type=IO_READ},
        {.addr=0x6b87, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x2648, .a=0xa7, .x=0x14, .y=0x95, .sp=0x70, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x2648, .value=0x30}, {.addr=0x2649, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x264a, .a=0xa7, .x=0x14, .y=0x95, .sp=0x70, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x2648, .value=0x30}, {.addr=0x2649, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x2648, .value=0x30, .type=IO_READ},
        {.addr=0x2649, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x3160, .a=0xbe, .x=0x75, .y=0x3f, .sp=0xc0, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x3160, .value=0x30}, {.addr=0x3161, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x3162, .a=0xbe, .x=0x75, .y=0x3f, .sp=0xc0, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x3160, .value=0x30}, {.addr=0x3161, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x3160, .value=0x30, .type=IO_READ},
        {.addr=0x3161, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x0279, .a=0xd4, .x=0xf0, .y=0xd4, .sp=0x22, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0279, .value=0x30}, {.addr=0x027a, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x027b, .a=0xd4, .x=0xf0, .y=0xd4, .sp=0x22, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0279, .value=0x30}, {.addr=0x027a, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x0279, .value=0x30, .type=IO_READ},
        {.addr=0x027a, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x8a99, .a=0x71, .x=0x2d, .y=0x09, .sp=0x1f, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x8a99, .value=0x30}, {.addr=0x8a9a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8a9b, .a=0x71, .x=0x2d, .y=0x09, .sp=0x1f, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x8a99, .value=0x30}, {.addr=0x8a9a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8a99, .value=0x30, .type=IO_READ},
        {.addr=0x8a9a, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x173e, .a=0x06, .x=0xe8, .y=0xb9, .sp=0xb6, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x173e, .value=0x30}, {.addr=0x173f, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x1740, .a=0x06, .x=0xe8, .y=0xb9, .sp=0xb6, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x173e, .value=0x30}, {.addr=0x173f, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x173e, .value=0x30, .type=IO_READ},
        {.addr=0x173f, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x81d9, .a=0xe3, .x=0xd7, .y=0x3d, .sp=0x97, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x81d9, .value=0x30}, {.addr=0x81da, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x81e3, .a=0xe3, .x=0xd7, .y=0x3d, .sp=0x97, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x81d9, .value=0x30}, {.addr=0x81da, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x81d9, .value=0x30, .type=IO_READ},
        {.addr=0x81da, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x3821, .a=0xda, .x=0x6c, .y=0xc5, .sp=0x99, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x3821, .value=0x30}, {.addr=0x3822, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x3823, .a=0xda, .x=0x6c, .y=0xc5, .sp=0x99, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x3821, .value=0x30}, {.addr=0x3822, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x3821, .value=0x30, .type=IO_READ},
        {.addr=0x3822, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xca65, .a=0x87, .x=0x12, .y=0xcc, .sp=0x10, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xca65, .value=0x30}, {.addr=0xca66, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xca67, .a=0x87, .x=0x12, .y=0xcc, .sp=0x10, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xca65, .value=0x30}, {.addr=0xca66, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xca65, .value=0x30, .type=IO_READ},
        {.addr=0xca66, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xb808, .a=0xbe, .x=0x81, .y=0x44, .sp=0x27, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xb808, .value=0x30}, {.addr=0xb809, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xb80a, .a=0xbe, .x=0x81, .y=0x44, .sp=0x27, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xb808, .value=0x30}, {.addr=0xb809, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xb808, .value=0x30, .type=IO_READ},
        {.addr=0xb809, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x8ddb, .a=0xef, .x=0x79, .y=0x29, .sp=0x4f, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x8ddb, .value=0x30}, {.addr=0x8ddc, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x8ddd, .a=0xef, .x=0x79, .y=0x29, .sp=0x4f, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x8ddb, .value=0x30}, {.addr=0x8ddc, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x8ddb, .value=0x30, .type=IO_READ},
        {.addr=0x8ddc, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x24ae, .a=0x8d, .x=0x07, .y=0x15, .sp=0xb1, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x24ae, .value=0x30}, {.addr=0x24af, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x2524, .a=0x8d, .x=0x07, .y=0x15, .sp=0xb1, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x24ae, .value=0x30}, {.addr=0x24af, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x24ae, .value=0x30, .type=IO_READ},
        {.addr=0x24af, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x456d, .a=0x53, .x=0x72, .y=0xb9, .sp=0x9d, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x456d, .value=0x30}, {.addr=0x456e, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x45b4, .a=0x53, .x=0x72, .y=0xb9, .sp=0x9d, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x456d, .value=0x30}, {.addr=0x456e, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x456d, .value=0x30, .type=IO_READ},
        {.addr=0x456e, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x2699, .a=0xe2, .x=0x46, .y=0xa0, .sp=0x5b, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x2699, .value=0x30}, {.addr=0x269a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x269b, .a=0xe2, .x=0x46, .y=0xa0, .sp=0x5b, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x2699, .value=0x30}, {.addr=0x269a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2699, .value=0x30, .type=IO_READ},
        {.addr=0x269a, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xb0c3, .a=0x63, .x=0x7f, .y=0x71, .sp=0x5a, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xb0c3, .value=0x30}, {.addr=0xb0c4, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xb11d, .a=0x63, .x=0x7f, .y=0x71, .sp=0x5a, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xb0c3, .value=0x30}, {.addr=0xb0c4, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xb0c3, .value=0x30, .type=IO_READ},
        {.addr=0xb0c4, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x3a52, .a=0xd4, .x=0x15, .y=0x8a, .sp=0xc9, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x3a52, .value=0x30}, {.addr=0x3a53, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x39f0, .a=0xd4, .x=0x15, .y=0x8a, .sp=0xc9, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x3a52, .value=0x30}, {.addr=0x3a53, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3a52, .value=0x30, .type=IO_READ},
        {.addr=0x3a53, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x6a22, .a=0x9e, .x=0x66, .y=0x11, .sp=0xf9, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x6a22, .value=0x30}, {.addr=0x6a23, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x6a24, .a=0x9e, .x=0x66, .y=0x11, .sp=0xf9, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x6a22, .value=0x30}, {.addr=0x6a23, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x6a22, .value=0x30, .type=IO_READ},
        {.addr=0x6a23, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xf15b, .a=0x4d, .x=0x7c, .y=0xf7, .sp=0x92, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xf15b, .value=0x30}, {.addr=0xf15c, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xf15d, .a=0x4d, .x=0x7c, .y=0xf7, .sp=0x92, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xf15b, .value=0x30}, {.addr=0xf15c, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xf15b, .value=0x30, .type=IO_READ},
        {.addr=0xf15c, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x6abe, .a=0xb9, .x=0x7b, .y=0x41, .sp=0xb6, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x6abe, .value=0x30}, {.addr=0x6abf, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x6a49, .a=0xb9, .x=0x7b, .y=0x41, .sp=0xb6, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x6abe, .value=0x30}, {.addr=0x6abf, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x6abe, .value=0x30, .type=IO_READ},
        {.addr=0x6abf, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xbc37, .a=0x0b, .x=0xe2, .y=0xdd, .sp=0x5e, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xbc37, .value=0x30}, {.addr=0xbc38, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xbc39, .a=0x0b, .x=0xe2, .y=0xdd, .sp=0x5e, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xbc37, .value=0x30}, {.addr=0xbc38, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xbc37, .value=0x30, .type=IO_READ},
        {.addr=0xbc38, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x5935, .a=0xdd, .x=0x26, .y=0x87, .sp=0x4a, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x5935, .value=0x30}, {.addr=0x5936, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x5965, .a=0xdd, .x=0x26, .y=0x87, .sp=0x4a, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x5935, .value=0x30}, {.addr=0x5936, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x5935, .value=0x30, .type=IO_READ},
        {.addr=0x5936, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x2628, .a=0x0c, .x=0x55, .y=0xcd, .sp=0x0b, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x2628, .value=0x30}, {.addr=0x2629, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x2601, .a=0x0c, .x=0x55, .y=0xcd, .sp=0x0b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2628, .value=0x30}, {.addr=0x2629, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x2628, .value=0x30, .type=IO_READ},
        {.addr=0x2629, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xcf14, .a=0xc9, .x=0xc7, .y=0x8f, .sp=0x4c, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xcf14, .value=0x30}, {.addr=0xcf15, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xced6, .a=0xc9, .x=0xc7, .y=0x8f, .sp=0x4c, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xcf14, .value=0x30}, {.addr=0xcf15, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xcf14, .value=0x30, .type=IO_READ},
        {.addr=0xcf15, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xdb2b, .a=0xcd, .x=0xbc, .y=0x69, .sp=0x60, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xdb2b, .value=0x30}, {.addr=0xdb2c, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xdb2d, .a=0xcd, .x=0xbc, .y=0x69, .sp=0x60, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xdb2b, .value=0x30}, {.addr=0xdb2c, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xdb2b, .value=0x30, .type=IO_READ},
        {.addr=0xdb2c, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xdf6a, .a=0xeb, .x=0x8b, .y=0x98, .sp=0x33, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xdf6a, .value=0x30}, {.addr=0xdf6b, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xdf6c, .a=0xeb, .x=0x8b, .y=0x98, .sp=0x33, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xdf6a, .value=0x30}, {.addr=0xdf6b, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xdf6a, .value=0x30, .type=IO_READ},
        {.addr=0xdf6b, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x7c97, .a=0x33, .x=0x9a, .y=0x9b, .sp=0x55, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x7c97, .value=0x30}, {.addr=0x7c98, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x7c99, .a=0x33, .x=0x9a, .y=0x9b, .sp=0x55, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x7c97, .value=0x30}, {.addr=0x7c98, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x7c97, .value=0x30, .type=IO_READ},
        {.addr=0x7c98, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x0a11, .a=0x9e, .x=0x22, .y=0x4b, .sp=0x7f, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0a11, .value=0x30}, {.addr=0x0a12, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x0a1c, .a=0x9e, .x=0x22, .y=0x4b, .sp=0x7f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0a11, .value=0x30}, {.addr=0x0a12, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x0a11, .value=0x30, .type=IO_READ},
        {.addr=0x0a12, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xc53f, .a=0xc0, .x=0x68, .y=0xd3, .sp=0x58, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xc53f, .value=0x30}, {.addr=0xc540, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xc5b3, .a=0xc0, .x=0x68, .y=0xd3, .sp=0x58, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xc53f, .value=0x30}, {.addr=0xc540, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xc53f, .value=0x30, .type=IO_READ},
        {.addr=0xc540, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xa0ef, .a=0x76, .x=0xc6, .y=0x13, .sp=0x38, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xa0ef, .value=0x30}, {.addr=0xa0f0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa0f1, .a=0x76, .x=0xc6, .y=0x13, .sp=0x38, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xa0ef, .value=0x30}, {.addr=0xa0f0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa0ef, .value=0x30, .type=IO_READ},
        {.addr=0xa0f0, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x5384, .a=0xb7, .x=0xfc, .y=0x2a, .sp=0x50, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x5384, .value=0x30}, {.addr=0x5385, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5346, .a=0xb7, .x=0xfc, .y=0x2a, .sp=0x50, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x5384, .value=0x30}, {.addr=0x5385, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5384, .value=0x30, .type=IO_READ},
        {.addr=0x5385, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x6e5c, .a=0xca, .x=0xc0, .y=0x43, .sp=0x72, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x6e5c, .value=0x30}, {.addr=0x6e5d, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x6e5e, .a=0xca, .x=0xc0, .y=0x43, .sp=0x72, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x6e5c, .value=0x30}, {.addr=0x6e5d, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x6e5c, .value=0x30, .type=IO_READ},
        {.addr=0x6e5d, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x8b13, .a=0x75, .x=0xc4, .y=0x3c, .sp=0xc2, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x8b13, .value=0x30}, {.addr=0x8b14, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x8ae6, .a=0x75, .x=0xc4, .y=0x3c, .sp=0xc2, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x8b13, .value=0x30}, {.addr=0x8b14, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x8b13, .value=0x30, .type=IO_READ},
        {.addr=0x8b14, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x72b1, .a=0x97, .x=0xeb, .y=0x54, .sp=0x71, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x72b1, .value=0x30}, {.addr=0x72b2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x72b3, .a=0x97, .x=0xeb, .y=0x54, .sp=0x71, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x72b1, .value=0x30}, {.addr=0x72b2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x72b1, .value=0x30, .type=IO_READ},
        {.addr=0x72b2, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x37ef, .a=0x5c, .x=0x4a, .y=0x58, .sp=0xc9, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x37ef, .value=0x30}, {.addr=0x37f0, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x37f1, .a=0x5c, .x=0x4a, .y=0x58, .sp=0xc9, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x37ef, .value=0x30}, {.addr=0x37f0, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x37ef, .value=0x30, .type=IO_READ},
        {.addr=0x37f0, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x1b55, .a=0x59, .x=0x59, .y=0x3d, .sp=0xb3, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x1b55, .value=0x30}, {.addr=0x1b56, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x1b61, .a=0x59, .x=0x59, .y=0x3d, .sp=0xb3, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x1b55, .value=0x30}, {.addr=0x1b56, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x1b55, .value=0x30, .type=IO_READ},
        {.addr=0x1b56, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xafde, .a=0x81, .x=0x82, .y=0x93, .sp=0x0b, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xafde, .value=0x30}, {.addr=0xafdf, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xaf9a, .a=0x81, .x=0x82, .y=0x93, .sp=0x0b, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xafde, .value=0x30}, {.addr=0xafdf, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xafde, .value=0x30, .type=IO_READ},
        {.addr=0xafdf, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x058f, .a=0x91, .x=0x5b, .y=0xfa, .sp=0x0e, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x058f, .value=0x30}, {.addr=0x0590, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x0591, .a=0x91, .x=0x5b, .y=0xfa, .sp=0x0e, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x058f, .value=0x30}, {.addr=0x0590, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x058f, .value=0x30, .type=IO_READ},
        {.addr=0x0590, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xe0f6, .a=0xad, .x=0x99, .y=0x21, .sp=0x5d, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xe0f6, .value=0x30}, {.addr=0xe0f7, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xe0f8, .a=0xad, .x=0x99, .y=0x21, .sp=0x5d, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xe0f6, .value=0x30}, {.addr=0xe0f7, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xe0f6, .value=0x30, .type=IO_READ},
        {.addr=0xe0f7, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xa69d, .a=0x57, .x=0xc8, .y=0x75, .sp=0xf2, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xa69d, .value=0x30}, {.addr=0xa69e, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xa67d, .a=0x57, .x=0xc8, .y=0x75, .sp=0xf2, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xa69d, .value=0x30}, {.addr=0xa69e, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xa69d, .value=0x30, .type=IO_READ},
        {.addr=0xa69e, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xac4e, .a=0xa1, .x=0xc6, .y=0x94, .sp=0xe1, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xac4e, .value=0x30}, {.addr=0xac4f, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xac2e, .a=0xa1, .x=0xc6, .y=0x94, .sp=0xe1, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xac4e, .value=0x30}, {.addr=0xac4f, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xac4e, .value=0x30, .type=IO_READ},
        {.addr=0xac4f, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xb238, .a=0xd8, .x=0xd0, .y=0xa7, .sp=0xa5, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xb238, .value=0x30}, {.addr=0xb239, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb2b6, .a=0xd8, .x=0xd0, .y=0xa7, .sp=0xa5, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xb238, .value=0x30}, {.addr=0xb239, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb238, .value=0x30, .type=IO_READ},
        {.addr=0xb239, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xef70, .a=0xcc, .x=0x73, .y=0xf2, .sp=0x0d, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xef70, .value=0x30}, {.addr=0xef71, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xefda, .a=0xcc, .x=0x73, .y=0xf2, .sp=0x0d, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xef70, .value=0x30}, {.addr=0xef71, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xef70, .value=0x30, .type=IO_READ},
        {.addr=0xef71, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x4c99, .a=0x03, .x=0x54, .y=0x46, .sp=0x61, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x4c99, .value=0x30}, {.addr=0x4c9a, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x4c83, .a=0x03, .x=0x54, .y=0x46, .sp=0x61, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x4c99, .value=0x30}, {.addr=0x4c9a, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x4c99, .value=0x30, .type=IO_READ},
        {.addr=0x4c9a, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xcf89, .a=0x8c, .x=0xab, .y=0x13, .sp=0x7d, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xcf89, .value=0x30}, {.addr=0xcf8a, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xcf5a, .a=0x8c, .x=0xab, .y=0x13, .sp=0x7d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xcf89, .value=0x30}, {.addr=0xcf8a, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xcf89, .value=0x30, .type=IO_READ},
        {.addr=0xcf8a, .value=0xcf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x3a20, .a=0xc1, .x=0x60, .y=0xd9, .sp=0xd8, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x3a20, .value=0x30}, {.addr=0x3a21, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x3a54, .a=0xc1, .x=0x60, .y=0xd9, .sp=0xd8, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x3a20, .value=0x30}, {.addr=0x3a21, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x3a20, .value=0x30, .type=IO_READ},
        {.addr=0x3a21, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x5f3e, .a=0x9d, .x=0x7f, .y=0x43, .sp=0x51, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x5f3e, .value=0x30}, {.addr=0x5f3f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5f40, .a=0x9d, .x=0x7f, .y=0x43, .sp=0x51, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x5f3e, .value=0x30}, {.addr=0x5f3f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5f3e, .value=0x30, .type=IO_READ},
        {.addr=0x5f3f, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xdf1e, .a=0xb1, .x=0x2e, .y=0xc2, .sp=0x51, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xdf1e, .value=0x30}, {.addr=0xdf1f, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xdf14, .a=0xb1, .x=0x2e, .y=0xc2, .sp=0x51, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xdf1e, .value=0x30}, {.addr=0xdf1f, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xdf1e, .value=0x30, .type=IO_READ},
        {.addr=0xdf1f, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x2290, .a=0xcf, .x=0xc5, .y=0xb8, .sp=0x62, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x2290, .value=0x30}, {.addr=0x2291, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x2292, .a=0xcf, .x=0xc5, .y=0xb8, .sp=0x62, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x2290, .value=0x30}, {.addr=0x2291, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x2290, .value=0x30, .type=IO_READ},
        {.addr=0x2291, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x3492, .a=0x9b, .x=0x54, .y=0xbc, .sp=0xc7, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x3492, .value=0x30}, {.addr=0x3493, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x344c, .a=0x9b, .x=0x54, .y=0xbc, .sp=0xc7, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x3492, .value=0x30}, {.addr=0x3493, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x3492, .value=0x30, .type=IO_READ},
        {.addr=0x3493, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x8632, .a=0x1c, .x=0x2d, .y=0x73, .sp=0xae, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x8632, .value=0x30}, {.addr=0x8633, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x864d, .a=0x1c, .x=0x2d, .y=0x73, .sp=0xae, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x8632, .value=0x30}, {.addr=0x8633, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x8632, .value=0x30, .type=IO_READ},
        {.addr=0x8633, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x1e65, .a=0x3b, .x=0x2c, .y=0x25, .sp=0xee, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x1e65, .value=0x30}, {.addr=0x1e66, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x1e62, .a=0x3b, .x=0x2c, .y=0x25, .sp=0xee, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x1e65, .value=0x30}, {.addr=0x1e66, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x1e65, .value=0x30, .type=IO_READ},
        {.addr=0x1e66, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x76fa, .a=0xdd, .x=0x2b, .y=0x0c, .sp=0xa1, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x76fa, .value=0x30}, {.addr=0x76fb, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x776f, .a=0xdd, .x=0x2b, .y=0x0c, .sp=0xa1, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x76fa, .value=0x30}, {.addr=0x76fb, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x76fa, .value=0x30, .type=IO_READ},
        {.addr=0x76fb, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xc315, .a=0x3e, .x=0x49, .y=0x01, .sp=0x16, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xc315, .value=0x30}, {.addr=0xc316, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xc317, .a=0x3e, .x=0x49, .y=0x01, .sp=0x16, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xc315, .value=0x30}, {.addr=0xc316, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xc315, .value=0x30, .type=IO_READ},
        {.addr=0xc316, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x669a, .a=0x99, .x=0x9f, .y=0x0f, .sp=0x90, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x669a, .value=0x30}, {.addr=0x669b, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x669c, .a=0x99, .x=0x9f, .y=0x0f, .sp=0x90, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x669a, .value=0x30}, {.addr=0x669b, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x669a, .value=0x30, .type=IO_READ},
        {.addr=0x669b, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x2f83, .a=0x0d, .x=0x1b, .y=0xbe, .sp=0x82, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x2f83, .value=0x30}, {.addr=0x2f84, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2f64, .a=0x0d, .x=0x1b, .y=0xbe, .sp=0x82, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x2f83, .value=0x30}, {.addr=0x2f84, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2f83, .value=0x30, .type=IO_READ},
        {.addr=0x2f84, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xe013, .a=0x96, .x=0x83, .y=0x9d, .sp=0xc0, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xe013, .value=0x30}, {.addr=0xe014, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xe077, .a=0x96, .x=0x83, .y=0x9d, .sp=0xc0, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xe013, .value=0x30}, {.addr=0xe014, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xe013, .value=0x30, .type=IO_READ},
        {.addr=0xe014, .value=0x62, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x1de2, .a=0xdc, .x=0x0c, .y=0x06, .sp=0x4d, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x1de2, .value=0x30}, {.addr=0x1de3, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x1de4, .a=0xdc, .x=0x0c, .y=0x06, .sp=0x4d, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x1de2, .value=0x30}, {.addr=0x1de3, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x1de2, .value=0x30, .type=IO_READ},
        {.addr=0x1de3, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x74e8, .a=0x7a, .x=0xac, .y=0xc8, .sp=0x2c, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x74e8, .value=0x30}, {.addr=0x74e9, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x74ea, .a=0x7a, .x=0xac, .y=0xc8, .sp=0x2c, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x74e8, .value=0x30}, {.addr=0x74e9, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x74e8, .value=0x30, .type=IO_READ},
        {.addr=0x74e9, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x1a3a, .a=0x06, .x=0x28, .y=0x51, .sp=0x27, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x1a3a, .value=0x30}, {.addr=0x1a3b, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x19f3, .a=0x06, .x=0x28, .y=0x51, .sp=0x27, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x1a3a, .value=0x30}, {.addr=0x1a3b, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x1a3a, .value=0x30, .type=IO_READ},
        {.addr=0x1a3b, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x646a, .a=0x41, .x=0x8f, .y=0x91, .sp=0xa8, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x646a, .value=0x30}, {.addr=0x646b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x646c, .a=0x41, .x=0x8f, .y=0x91, .sp=0xa8, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x646a, .value=0x30}, {.addr=0x646b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x646a, .value=0x30, .type=IO_READ},
        {.addr=0x646b, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x75cf, .a=0x32, .x=0x68, .y=0xdc, .sp=0xae, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x75cf, .value=0x30}, {.addr=0x75d0, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x75d1, .a=0x32, .x=0x68, .y=0xdc, .sp=0xae, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x75cf, .value=0x30}, {.addr=0x75d0, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x75cf, .value=0x30, .type=IO_READ},
        {.addr=0x75d0, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x265a, .a=0x98, .x=0xa1, .y=0xcd, .sp=0xd3, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x265a, .value=0x30}, {.addr=0x265b, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x265c, .a=0x98, .x=0xa1, .y=0xcd, .sp=0xd3, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x265a, .value=0x30}, {.addr=0x265b, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x265a, .value=0x30, .type=IO_READ},
        {.addr=0x265b, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x6ae1, .a=0xa1, .x=0x3d, .y=0xa7, .sp=0x69, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x6ae1, .value=0x30}, {.addr=0x6ae2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6ae3, .a=0xa1, .x=0x3d, .y=0xa7, .sp=0x69, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6ae1, .value=0x30}, {.addr=0x6ae2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6ae1, .value=0x30, .type=IO_READ},
        {.addr=0x6ae2, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xd522, .a=0xa3, .x=0x9c, .y=0xb9, .sp=0xb6, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xd522, .value=0x30}, {.addr=0xd523, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xd582, .a=0xa3, .x=0x9c, .y=0xb9, .sp=0xb6, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xd522, .value=0x30}, {.addr=0xd523, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xd522, .value=0x30, .type=IO_READ},
        {.addr=0xd523, .value=0x5e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0200) {
    const struct CPU_State initial_cpu = {.pc=0x8505, .a=0x9b, .x=0xc9, .y=0x69, .sp=0xea, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x8505, .value=0x30}, {.addr=0x8506, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x848c, .a=0x9b, .x=0xc9, .y=0x69, .sp=0xea, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x8505, .value=0x30}, {.addr=0x8506, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x8505, .value=0x30, .type=IO_READ},
        {.addr=0x8506, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0201) {
    const struct CPU_State initial_cpu = {.pc=0x6eac, .a=0xac, .x=0xcc, .y=0x98, .sp=0x3a, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x6eac, .value=0x30}, {.addr=0x6ead, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x6e7e, .a=0xac, .x=0xcc, .y=0x98, .sp=0x3a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x6eac, .value=0x30}, {.addr=0x6ead, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x6eac, .value=0x30, .type=IO_READ},
        {.addr=0x6ead, .value=0xd0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0202) {
    const struct CPU_State initial_cpu = {.pc=0xb16c, .a=0x93, .x=0xc8, .y=0x6d, .sp=0x8e, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xb16c, .value=0x30}, {.addr=0xb16d, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xb1cf, .a=0x93, .x=0xc8, .y=0x6d, .sp=0x8e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xb16c, .value=0x30}, {.addr=0xb16d, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xb16c, .value=0x30, .type=IO_READ},
        {.addr=0xb16d, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0203) {
    const struct CPU_State initial_cpu = {.pc=0x9691, .a=0xc1, .x=0xff, .y=0x88, .sp=0x3b, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x9691, .value=0x30}, {.addr=0x9692, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x9693, .a=0xc1, .x=0xff, .y=0x88, .sp=0x3b, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x9691, .value=0x30}, {.addr=0x9692, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x9691, .value=0x30, .type=IO_READ},
        {.addr=0x9692, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0204) {
    const struct CPU_State initial_cpu = {.pc=0xe1dd, .a=0xb8, .x=0x9c, .y=0xc7, .sp=0xa5, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xe1dd, .value=0x30}, {.addr=0xe1de, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xe174, .a=0xb8, .x=0x9c, .y=0xc7, .sp=0xa5, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xe1dd, .value=0x30}, {.addr=0xe1de, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xe1dd, .value=0x30, .type=IO_READ},
        {.addr=0xe1de, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0205) {
    const struct CPU_State initial_cpu = {.pc=0xdee5, .a=0xb3, .x=0x29, .y=0xe4, .sp=0x3b, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xdee5, .value=0x30}, {.addr=0xdee6, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xdee7, .a=0xb3, .x=0x29, .y=0xe4, .sp=0x3b, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xdee5, .value=0x30}, {.addr=0xdee6, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xdee5, .value=0x30, .type=IO_READ},
        {.addr=0xdee6, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0206) {
    const struct CPU_State initial_cpu = {.pc=0x7ada, .a=0x1c, .x=0xe9, .y=0x0d, .sp=0x5b, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x7ada, .value=0x30}, {.addr=0x7adb, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x7ad0, .a=0x1c, .x=0xe9, .y=0x0d, .sp=0x5b, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x7ada, .value=0x30}, {.addr=0x7adb, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x7ada, .value=0x30, .type=IO_READ},
        {.addr=0x7adb, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0207) {
    const struct CPU_State initial_cpu = {.pc=0xc96f, .a=0x5a, .x=0xf2, .y=0x2f, .sp=0xcf, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xc96f, .value=0x30}, {.addr=0xc970, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xc971, .a=0x5a, .x=0xf2, .y=0x2f, .sp=0xcf, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xc96f, .value=0x30}, {.addr=0xc970, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xc96f, .value=0x30, .type=IO_READ},
        {.addr=0xc970, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0208) {
    const struct CPU_State initial_cpu = {.pc=0x1bf9, .a=0xff, .x=0xf9, .y=0x3b, .sp=0x34, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x1bf9, .value=0x30}, {.addr=0x1bfa, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x1c2e, .a=0xff, .x=0xf9, .y=0x3b, .sp=0x34, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x1bf9, .value=0x30}, {.addr=0x1bfa, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x1bf9, .value=0x30, .type=IO_READ},
        {.addr=0x1bfa, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0209) {
    const struct CPU_State initial_cpu = {.pc=0xed02, .a=0x45, .x=0x01, .y=0xea, .sp=0x8a, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xed02, .value=0x30}, {.addr=0xed03, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xed04, .a=0x45, .x=0x01, .y=0xea, .sp=0x8a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xed02, .value=0x30}, {.addr=0xed03, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xed02, .value=0x30, .type=IO_READ},
        {.addr=0xed03, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_020A) {
    const struct CPU_State initial_cpu = {.pc=0x206e, .a=0x3e, .x=0x7b, .y=0xed, .sp=0x05, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x206e, .value=0x30}, {.addr=0x206f, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x2070, .a=0x3e, .x=0x7b, .y=0xed, .sp=0x05, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x206e, .value=0x30}, {.addr=0x206f, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x206e, .value=0x30, .type=IO_READ},
        {.addr=0x206f, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_020B) {
    const struct CPU_State initial_cpu = {.pc=0xc8d8, .a=0x87, .x=0x25, .y=0xac, .sp=0x4c, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xc8d8, .value=0x30}, {.addr=0xc8d9, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xc8da, .a=0x87, .x=0x25, .y=0xac, .sp=0x4c, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xc8d8, .value=0x30}, {.addr=0xc8d9, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xc8d8, .value=0x30, .type=IO_READ},
        {.addr=0xc8d9, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_020C) {
    const struct CPU_State initial_cpu = {.pc=0x2a01, .a=0x43, .x=0x8f, .y=0xbe, .sp=0x7b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x2a01, .value=0x30}, {.addr=0x2a02, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x2a03, .a=0x43, .x=0x8f, .y=0xbe, .sp=0x7b, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x2a01, .value=0x30}, {.addr=0x2a02, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x2a01, .value=0x30, .type=IO_READ},
        {.addr=0x2a02, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_020D) {
    const struct CPU_State initial_cpu = {.pc=0x6952, .a=0xb6, .x=0x8d, .y=0x0a, .sp=0xd3, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x6952, .value=0x30}, {.addr=0x6953, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x6954, .a=0xb6, .x=0x8d, .y=0x0a, .sp=0xd3, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x6952, .value=0x30}, {.addr=0x6953, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x6952, .value=0x30, .type=IO_READ},
        {.addr=0x6953, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_020E) {
    const struct CPU_State initial_cpu = {.pc=0x0421, .a=0x1a, .x=0x03, .y=0x0b, .sp=0x92, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0421, .value=0x30}, {.addr=0x0422, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x0423, .a=0x1a, .x=0x03, .y=0x0b, .sp=0x92, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0421, .value=0x30}, {.addr=0x0422, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x0421, .value=0x30, .type=IO_READ},
        {.addr=0x0422, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_020F) {
    const struct CPU_State initial_cpu = {.pc=0xb5e8, .a=0x82, .x=0x9f, .y=0xe0, .sp=0xbc, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xb5e8, .value=0x30}, {.addr=0xb5e9, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xb5ae, .a=0x82, .x=0x9f, .y=0xe0, .sp=0xbc, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xb5e8, .value=0x30}, {.addr=0xb5e9, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xb5e8, .value=0x30, .type=IO_READ},
        {.addr=0xb5e9, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0210) {
    const struct CPU_State initial_cpu = {.pc=0x8f88, .a=0x8c, .x=0xb9, .y=0x43, .sp=0xfe, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x8f88, .value=0x30}, {.addr=0x8f89, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x8f8a, .a=0x8c, .x=0xb9, .y=0x43, .sp=0xfe, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x8f88, .value=0x30}, {.addr=0x8f89, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x8f88, .value=0x30, .type=IO_READ},
        {.addr=0x8f89, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0211) {
    const struct CPU_State initial_cpu = {.pc=0x4120, .a=0xbe, .x=0xc3, .y=0xec, .sp=0x36, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x4120, .value=0x30}, {.addr=0x4121, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x4122, .a=0xbe, .x=0xc3, .y=0xec, .sp=0x36, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x4120, .value=0x30}, {.addr=0x4121, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x4120, .value=0x30, .type=IO_READ},
        {.addr=0x4121, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0212) {
    const struct CPU_State initial_cpu = {.pc=0x3be2, .a=0xfd, .x=0xc9, .y=0xd9, .sp=0xfa, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x3be2, .value=0x30}, {.addr=0x3be3, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x3be4, .a=0xfd, .x=0xc9, .y=0xd9, .sp=0xfa, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x3be2, .value=0x30}, {.addr=0x3be3, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3be2, .value=0x30, .type=IO_READ},
        {.addr=0x3be3, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0213) {
    const struct CPU_State initial_cpu = {.pc=0x58cb, .a=0x39, .x=0x90, .y=0x49, .sp=0x95, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x58cb, .value=0x30}, {.addr=0x58cc, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x58cd, .a=0x39, .x=0x90, .y=0x49, .sp=0x95, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x58cb, .value=0x30}, {.addr=0x58cc, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x58cb, .value=0x30, .type=IO_READ},
        {.addr=0x58cc, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0214) {
    const struct CPU_State initial_cpu = {.pc=0xb60a, .a=0x54, .x=0xaf, .y=0xab, .sp=0x08, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xb60a, .value=0x30}, {.addr=0xb60b, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xb5b6, .a=0x54, .x=0xaf, .y=0xab, .sp=0x08, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb60a, .value=0x30}, {.addr=0xb60b, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xb60a, .value=0x30, .type=IO_READ},
        {.addr=0xb60b, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0215) {
    const struct CPU_State initial_cpu = {.pc=0x7035, .a=0xa6, .x=0x2c, .y=0x24, .sp=0x87, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x7035, .value=0x30}, {.addr=0x7036, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x7036, .a=0xa6, .x=0x2c, .y=0x24, .sp=0x87, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x7035, .value=0x30}, {.addr=0x7036, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x7035, .value=0x30, .type=IO_READ},
        {.addr=0x7036, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0216) {
    const struct CPU_State initial_cpu = {.pc=0x6974, .a=0xdf, .x=0xaa, .y=0x1e, .sp=0x48, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x6974, .value=0x30}, {.addr=0x6975, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x695c, .a=0xdf, .x=0xaa, .y=0x1e, .sp=0x48, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x6974, .value=0x30}, {.addr=0x6975, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x6974, .value=0x30, .type=IO_READ},
        {.addr=0x6975, .value=0xe6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0217) {
    const struct CPU_State initial_cpu = {.pc=0x92aa, .a=0x53, .x=0x9e, .y=0xc5, .sp=0x6b, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x92aa, .value=0x30}, {.addr=0x92ab, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x92ac, .a=0x53, .x=0x9e, .y=0xc5, .sp=0x6b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x92aa, .value=0x30}, {.addr=0x92ab, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x92aa, .value=0x30, .type=IO_READ},
        {.addr=0x92ab, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0218) {
    const struct CPU_State initial_cpu = {.pc=0x4389, .a=0xbf, .x=0x56, .y=0x43, .sp=0x4f, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x4389, .value=0x30}, {.addr=0x438a, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x438c, .a=0xbf, .x=0x56, .y=0x43, .sp=0x4f, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x4389, .value=0x30}, {.addr=0x438a, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x4389, .value=0x30, .type=IO_READ},
        {.addr=0x438a, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0219) {
    const struct CPU_State initial_cpu = {.pc=0x8ae5, .a=0x38, .x=0xe8, .y=0xf1, .sp=0xac, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x8ae5, .value=0x30}, {.addr=0x8ae6, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x8ae7, .a=0x38, .x=0xe8, .y=0xf1, .sp=0xac, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x8ae5, .value=0x30}, {.addr=0x8ae6, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x8ae5, .value=0x30, .type=IO_READ},
        {.addr=0x8ae6, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_021A) {
    const struct CPU_State initial_cpu = {.pc=0x62a5, .a=0x69, .x=0xb7, .y=0x96, .sp=0xee, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x62a5, .value=0x30}, {.addr=0x62a6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x62a4, .a=0x69, .x=0xb7, .y=0x96, .sp=0xee, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x62a5, .value=0x30}, {.addr=0x62a6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x62a5, .value=0x30, .type=IO_READ},
        {.addr=0x62a6, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_021B) {
    const struct CPU_State initial_cpu = {.pc=0x8d02, .a=0x66, .x=0xc9, .y=0xff, .sp=0x5e, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x8d02, .value=0x30}, {.addr=0x8d03, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x8c93, .a=0x66, .x=0xc9, .y=0xff, .sp=0x5e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8d02, .value=0x30}, {.addr=0x8d03, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x8d02, .value=0x30, .type=IO_READ},
        {.addr=0x8d03, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_021C) {
    const struct CPU_State initial_cpu = {.pc=0xc0d1, .a=0x66, .x=0x08, .y=0x7a, .sp=0xe8, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xc0d1, .value=0x30}, {.addr=0xc0d2, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xc0b1, .a=0x66, .x=0x08, .y=0x7a, .sp=0xe8, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xc0d1, .value=0x30}, {.addr=0xc0d2, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xc0d1, .value=0x30, .type=IO_READ},
        {.addr=0xc0d2, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_021D) {
    const struct CPU_State initial_cpu = {.pc=0xe2c9, .a=0x74, .x=0xb7, .y=0x47, .sp=0x32, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xe2c9, .value=0x30}, {.addr=0xe2ca, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xe2cb, .a=0x74, .x=0xb7, .y=0x47, .sp=0x32, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xe2c9, .value=0x30}, {.addr=0xe2ca, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xe2c9, .value=0x30, .type=IO_READ},
        {.addr=0xe2ca, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_021E) {
    const struct CPU_State initial_cpu = {.pc=0xcedd, .a=0xb4, .x=0xd2, .y=0xf6, .sp=0x31, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xcedd, .value=0x30}, {.addr=0xcede, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xcee2, .a=0xb4, .x=0xd2, .y=0xf6, .sp=0x31, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xcedd, .value=0x30}, {.addr=0xcede, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xcedd, .value=0x30, .type=IO_READ},
        {.addr=0xcede, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_021F) {
    const struct CPU_State initial_cpu = {.pc=0x721d, .a=0x14, .x=0x10, .y=0x20, .sp=0xae, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x721d, .value=0x30}, {.addr=0x721e, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x728d, .a=0x14, .x=0x10, .y=0x20, .sp=0xae, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x721d, .value=0x30}, {.addr=0x721e, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x721d, .value=0x30, .type=IO_READ},
        {.addr=0x721e, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0220) {
    const struct CPU_State initial_cpu = {.pc=0xbd48, .a=0x8d, .x=0x58, .y=0x75, .sp=0x2b, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xbd48, .value=0x30}, {.addr=0xbd49, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xbd4a, .a=0x8d, .x=0x58, .y=0x75, .sp=0x2b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xbd48, .value=0x30}, {.addr=0xbd49, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xbd48, .value=0x30, .type=IO_READ},
        {.addr=0xbd49, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0221) {
    const struct CPU_State initial_cpu = {.pc=0xe600, .a=0x3f, .x=0x6c, .y=0x3e, .sp=0x0b, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xe600, .value=0x30}, {.addr=0xe601, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xe602, .a=0x3f, .x=0x6c, .y=0x3e, .sp=0x0b, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xe600, .value=0x30}, {.addr=0xe601, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xe600, .value=0x30, .type=IO_READ},
        {.addr=0xe601, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0222) {
    const struct CPU_State initial_cpu = {.pc=0xfd7e, .a=0xdd, .x=0xe8, .y=0x84, .sp=0xd0, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xfd7e, .value=0x30}, {.addr=0xfd7f, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xfd01, .a=0xdd, .x=0xe8, .y=0x84, .sp=0xd0, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xfd7e, .value=0x30}, {.addr=0xfd7f, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xfd7e, .value=0x30, .type=IO_READ},
        {.addr=0xfd7f, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0223) {
    const struct CPU_State initial_cpu = {.pc=0x1837, .a=0x5b, .x=0x21, .y=0x41, .sp=0x1e, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x1837, .value=0x30}, {.addr=0x1838, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x1839, .a=0x5b, .x=0x21, .y=0x41, .sp=0x1e, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x1837, .value=0x30}, {.addr=0x1838, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x1837, .value=0x30, .type=IO_READ},
        {.addr=0x1838, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0224) {
    const struct CPU_State initial_cpu = {.pc=0x2fdf, .a=0x2a, .x=0x20, .y=0xa8, .sp=0x01, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x2fdf, .value=0x30}, {.addr=0x2fe0, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x2ff7, .a=0x2a, .x=0x20, .y=0xa8, .sp=0x01, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x2fdf, .value=0x30}, {.addr=0x2fe0, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x2fdf, .value=0x30, .type=IO_READ},
        {.addr=0x2fe0, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0225) {
    const struct CPU_State initial_cpu = {.pc=0xd92a, .a=0xd9, .x=0xc9, .y=0xb4, .sp=0xd7, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xd92a, .value=0x30}, {.addr=0xd92b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd94c, .a=0xd9, .x=0xc9, .y=0xb4, .sp=0xd7, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xd92a, .value=0x30}, {.addr=0xd92b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd92a, .value=0x30, .type=IO_READ},
        {.addr=0xd92b, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0226) {
    const struct CPU_State initial_cpu = {.pc=0xedcc, .a=0x23, .x=0x94, .y=0x4c, .sp=0x99, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xedcc, .value=0x30}, {.addr=0xedcd, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xedce, .a=0x23, .x=0x94, .y=0x4c, .sp=0x99, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xedcc, .value=0x30}, {.addr=0xedcd, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xedcc, .value=0x30, .type=IO_READ},
        {.addr=0xedcd, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0227) {
    const struct CPU_State initial_cpu = {.pc=0x03c8, .a=0xa1, .x=0xc8, .y=0x18, .sp=0x9f, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x03c8, .value=0x30}, {.addr=0x03c9, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x03ca, .a=0xa1, .x=0xc8, .y=0x18, .sp=0x9f, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x03c8, .value=0x30}, {.addr=0x03c9, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x03c8, .value=0x30, .type=IO_READ},
        {.addr=0x03c9, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0228) {
    const struct CPU_State initial_cpu = {.pc=0x777a, .a=0x4a, .x=0x86, .y=0x8a, .sp=0xfe, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x777a, .value=0x30}, {.addr=0x777b, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x7788, .a=0x4a, .x=0x86, .y=0x8a, .sp=0xfe, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x777a, .value=0x30}, {.addr=0x777b, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x777a, .value=0x30, .type=IO_READ},
        {.addr=0x777b, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0229) {
    const struct CPU_State initial_cpu = {.pc=0x5e53, .a=0xe4, .x=0xdc, .y=0x45, .sp=0x67, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x5e53, .value=0x30}, {.addr=0x5e54, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x5e41, .a=0xe4, .x=0xdc, .y=0x45, .sp=0x67, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x5e53, .value=0x30}, {.addr=0x5e54, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x5e53, .value=0x30, .type=IO_READ},
        {.addr=0x5e54, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_022A) {
    const struct CPU_State initial_cpu = {.pc=0x8316, .a=0x9f, .x=0x0f, .y=0xb9, .sp=0x1e, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x8316, .value=0x30}, {.addr=0x8317, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8318, .a=0x9f, .x=0x0f, .y=0xb9, .sp=0x1e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x8316, .value=0x30}, {.addr=0x8317, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8316, .value=0x30, .type=IO_READ},
        {.addr=0x8317, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_022B) {
    const struct CPU_State initial_cpu = {.pc=0xbf11, .a=0xb8, .x=0x4c, .y=0x40, .sp=0xb0, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xbf11, .value=0x30}, {.addr=0xbf12, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xbf13, .a=0xb8, .x=0x4c, .y=0x40, .sp=0xb0, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xbf11, .value=0x30}, {.addr=0xbf12, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xbf11, .value=0x30, .type=IO_READ},
        {.addr=0xbf12, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_022C) {
    const struct CPU_State initial_cpu = {.pc=0x2898, .a=0xe9, .x=0x7f, .y=0x92, .sp=0xfe, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x2898, .value=0x30}, {.addr=0x2899, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x2866, .a=0xe9, .x=0x7f, .y=0x92, .sp=0xfe, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x2898, .value=0x30}, {.addr=0x2899, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x2898, .value=0x30, .type=IO_READ},
        {.addr=0x2899, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_022D) {
    const struct CPU_State initial_cpu = {.pc=0xd931, .a=0xbc, .x=0x92, .y=0x77, .sp=0xa1, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xd931, .value=0x30}, {.addr=0xd932, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xd933, .a=0xbc, .x=0x92, .y=0x77, .sp=0xa1, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xd931, .value=0x30}, {.addr=0xd932, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xd931, .value=0x30, .type=IO_READ},
        {.addr=0xd932, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_022E) {
    const struct CPU_State initial_cpu = {.pc=0xd4ab, .a=0x03, .x=0x72, .y=0xd0, .sp=0xbb, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xd4ab, .value=0x30}, {.addr=0xd4ac, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xd450, .a=0x03, .x=0x72, .y=0xd0, .sp=0xbb, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xd4ab, .value=0x30}, {.addr=0xd4ac, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xd4ab, .value=0x30, .type=IO_READ},
        {.addr=0xd4ac, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_022F) {
    const struct CPU_State initial_cpu = {.pc=0x5f41, .a=0x5a, .x=0x44, .y=0x6f, .sp=0xb0, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x5f41, .value=0x30}, {.addr=0x5f42, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x5f4e, .a=0x5a, .x=0x44, .y=0x6f, .sp=0xb0, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x5f41, .value=0x30}, {.addr=0x5f42, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x5f41, .value=0x30, .type=IO_READ},
        {.addr=0x5f42, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0230) {
    const struct CPU_State initial_cpu = {.pc=0x9994, .a=0x3d, .x=0x44, .y=0xec, .sp=0x5e, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x9994, .value=0x30}, {.addr=0x9995, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x99e0, .a=0x3d, .x=0x44, .y=0xec, .sp=0x5e, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x9994, .value=0x30}, {.addr=0x9995, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x9994, .value=0x30, .type=IO_READ},
        {.addr=0x9995, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0231) {
    const struct CPU_State initial_cpu = {.pc=0xe7a1, .a=0xe0, .x=0xce, .y=0x71, .sp=0xbd, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xe7a1, .value=0x30}, {.addr=0xe7a2, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xe7a3, .a=0xe0, .x=0xce, .y=0x71, .sp=0xbd, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xe7a1, .value=0x30}, {.addr=0xe7a2, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xe7a1, .value=0x30, .type=IO_READ},
        {.addr=0xe7a2, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0232) {
    const struct CPU_State initial_cpu = {.pc=0x6216, .a=0xf5, .x=0x41, .y=0x8a, .sp=0x16, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x6216, .value=0x30}, {.addr=0x6217, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x6218, .a=0xf5, .x=0x41, .y=0x8a, .sp=0x16, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x6216, .value=0x30}, {.addr=0x6217, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x6216, .value=0x30, .type=IO_READ},
        {.addr=0x6217, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0233) {
    const struct CPU_State initial_cpu = {.pc=0xacad, .a=0x86, .x=0xc1, .y=0xcb, .sp=0xdc, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xacad, .value=0x30}, {.addr=0xacae, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xacaf, .a=0x86, .x=0xc1, .y=0xcb, .sp=0xdc, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xacad, .value=0x30}, {.addr=0xacae, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xacad, .value=0x30, .type=IO_READ},
        {.addr=0xacae, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0234) {
    const struct CPU_State initial_cpu = {.pc=0x70dd, .a=0xa2, .x=0x4a, .y=0xd1, .sp=0xe1, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x70dd, .value=0x30}, {.addr=0x70de, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x70df, .a=0xa2, .x=0x4a, .y=0xd1, .sp=0xe1, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x70dd, .value=0x30}, {.addr=0x70de, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x70dd, .value=0x30, .type=IO_READ},
        {.addr=0x70de, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0235) {
    const struct CPU_State initial_cpu = {.pc=0xbba0, .a=0xa7, .x=0xf4, .y=0x45, .sp=0x1c, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xbba0, .value=0x30}, {.addr=0xbba1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbbef, .a=0xa7, .x=0xf4, .y=0x45, .sp=0x1c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xbba0, .value=0x30}, {.addr=0xbba1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbba0, .value=0x30, .type=IO_READ},
        {.addr=0xbba1, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0236) {
    const struct CPU_State initial_cpu = {.pc=0x2053, .a=0xa7, .x=0x66, .y=0xbd, .sp=0x5f, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x2053, .value=0x30}, {.addr=0x2054, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x2055, .a=0xa7, .x=0x66, .y=0xbd, .sp=0x5f, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x2053, .value=0x30}, {.addr=0x2054, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x2053, .value=0x30, .type=IO_READ},
        {.addr=0x2054, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0237) {
    const struct CPU_State initial_cpu = {.pc=0xfe61, .a=0x72, .x=0xcc, .y=0x54, .sp=0xc8, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xfe61, .value=0x30}, {.addr=0xfe62, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xfe15, .a=0x72, .x=0xcc, .y=0x54, .sp=0xc8, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xfe61, .value=0x30}, {.addr=0xfe62, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xfe61, .value=0x30, .type=IO_READ},
        {.addr=0xfe62, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0238) {
    const struct CPU_State initial_cpu = {.pc=0x82a1, .a=0xd3, .x=0xd1, .y=0xfc, .sp=0x91, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x82a1, .value=0x30}, {.addr=0x82a2, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x823e, .a=0xd3, .x=0xd1, .y=0xfc, .sp=0x91, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x82a1, .value=0x30}, {.addr=0x82a2, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x82a1, .value=0x30, .type=IO_READ},
        {.addr=0x82a2, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0239) {
    const struct CPU_State initial_cpu = {.pc=0xb60e, .a=0x4c, .x=0x9a, .y=0x88, .sp=0xcb, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xb60e, .value=0x30}, {.addr=0xb60f, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xb610, .a=0x4c, .x=0x9a, .y=0x88, .sp=0xcb, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xb60e, .value=0x30}, {.addr=0xb60f, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xb60e, .value=0x30, .type=IO_READ},
        {.addr=0xb60f, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_023A) {
    const struct CPU_State initial_cpu = {.pc=0x1235, .a=0xb5, .x=0xea, .y=0xee, .sp=0x03, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x1235, .value=0x30}, {.addr=0x1236, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x1237, .a=0xb5, .x=0xea, .y=0xee, .sp=0x03, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x1235, .value=0x30}, {.addr=0x1236, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x1235, .value=0x30, .type=IO_READ},
        {.addr=0x1236, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_023B) {
    const struct CPU_State initial_cpu = {.pc=0x9507, .a=0x82, .x=0xfb, .y=0x18, .sp=0xfe, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x9507, .value=0x30}, {.addr=0x9508, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x94b9, .a=0x82, .x=0xfb, .y=0x18, .sp=0xfe, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x9507, .value=0x30}, {.addr=0x9508, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x9507, .value=0x30, .type=IO_READ},
        {.addr=0x9508, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_023C) {
    const struct CPU_State initial_cpu = {.pc=0x27aa, .a=0xea, .x=0xbf, .y=0x46, .sp=0xc3, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x27aa, .value=0x30}, {.addr=0x27ab, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x2764, .a=0xea, .x=0xbf, .y=0x46, .sp=0xc3, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x27aa, .value=0x30}, {.addr=0x27ab, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x27aa, .value=0x30, .type=IO_READ},
        {.addr=0x27ab, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_023D) {
    const struct CPU_State initial_cpu = {.pc=0x8542, .a=0xd2, .x=0x4b, .y=0x2c, .sp=0xe5, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x8542, .value=0x30}, {.addr=0x8543, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8544, .a=0xd2, .x=0x4b, .y=0x2c, .sp=0xe5, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x8542, .value=0x30}, {.addr=0x8543, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8542, .value=0x30, .type=IO_READ},
        {.addr=0x8543, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_023E) {
    const struct CPU_State initial_cpu = {.pc=0x2248, .a=0xba, .x=0xdb, .y=0x29, .sp=0xa9, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x2248, .value=0x30}, {.addr=0x2249, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x224a, .a=0xba, .x=0xdb, .y=0x29, .sp=0xa9, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x2248, .value=0x30}, {.addr=0x2249, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2248, .value=0x30, .type=IO_READ},
        {.addr=0x2249, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_023F) {
    const struct CPU_State initial_cpu = {.pc=0xf11f, .a=0x27, .x=0x1c, .y=0xe1, .sp=0x31, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xf11f, .value=0x30}, {.addr=0xf120, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf187, .a=0x27, .x=0x1c, .y=0xe1, .sp=0x31, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xf11f, .value=0x30}, {.addr=0xf120, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf11f, .value=0x30, .type=IO_READ},
        {.addr=0xf120, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0240) {
    const struct CPU_State initial_cpu = {.pc=0xb06a, .a=0xce, .x=0xea, .y=0xb6, .sp=0xdb, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xb06a, .value=0x30}, {.addr=0xb06b, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xb027, .a=0xce, .x=0xea, .y=0xb6, .sp=0xdb, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xb06a, .value=0x30}, {.addr=0xb06b, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xb06a, .value=0x30, .type=IO_READ},
        {.addr=0xb06b, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0241) {
    const struct CPU_State initial_cpu = {.pc=0x4538, .a=0xed, .x=0x5a, .y=0x46, .sp=0x30, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x4538, .value=0x30}, {.addr=0x4539, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x459b, .a=0xed, .x=0x5a, .y=0x46, .sp=0x30, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x4538, .value=0x30}, {.addr=0x4539, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x4538, .value=0x30, .type=IO_READ},
        {.addr=0x4539, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0242) {
    const struct CPU_State initial_cpu = {.pc=0xfe4e, .a=0x8e, .x=0x41, .y=0x2a, .sp=0x99, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xfe4e, .value=0x30}, {.addr=0xfe4f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xfe50, .a=0x8e, .x=0x41, .y=0x2a, .sp=0x99, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xfe4e, .value=0x30}, {.addr=0xfe4f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xfe4e, .value=0x30, .type=IO_READ},
        {.addr=0xfe4f, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0243) {
    const struct CPU_State initial_cpu = {.pc=0xd0a0, .a=0xb2, .x=0x7c, .y=0xbb, .sp=0x54, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xd0a0, .value=0x30}, {.addr=0xd0a1, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xd0a2, .a=0xb2, .x=0x7c, .y=0xbb, .sp=0x54, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd0a0, .value=0x30}, {.addr=0xd0a1, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xd0a0, .value=0x30, .type=IO_READ},
        {.addr=0xd0a1, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0244) {
    const struct CPU_State initial_cpu = {.pc=0x9e2c, .a=0x61, .x=0x0c, .y=0xf4, .sp=0x94, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x9e2c, .value=0x30}, {.addr=0x9e2d, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x9e2e, .a=0x61, .x=0x0c, .y=0xf4, .sp=0x94, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9e2c, .value=0x30}, {.addr=0x9e2d, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x9e2c, .value=0x30, .type=IO_READ},
        {.addr=0x9e2d, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0245) {
    const struct CPU_State initial_cpu = {.pc=0x7a04, .a=0x06, .x=0xe1, .y=0x76, .sp=0x4d, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x7a04, .value=0x30}, {.addr=0x7a05, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x7987, .a=0x06, .x=0xe1, .y=0x76, .sp=0x4d, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x7a04, .value=0x30}, {.addr=0x7a05, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x7a04, .value=0x30, .type=IO_READ},
        {.addr=0x7a05, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0246) {
    const struct CPU_State initial_cpu = {.pc=0xe290, .a=0xea, .x=0x6a, .y=0xf7, .sp=0x0e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xe290, .value=0x30}, {.addr=0xe291, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe22f, .a=0xea, .x=0x6a, .y=0xf7, .sp=0x0e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xe290, .value=0x30}, {.addr=0xe291, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe290, .value=0x30, .type=IO_READ},
        {.addr=0xe291, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0247) {
    const struct CPU_State initial_cpu = {.pc=0xb271, .a=0x98, .x=0xce, .y=0x39, .sp=0x52, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xb271, .value=0x30}, {.addr=0xb272, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xb273, .a=0x98, .x=0xce, .y=0x39, .sp=0x52, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xb271, .value=0x30}, {.addr=0xb272, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xb271, .value=0x30, .type=IO_READ},
        {.addr=0xb272, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0248) {
    const struct CPU_State initial_cpu = {.pc=0x6c24, .a=0xf7, .x=0xcd, .y=0xb2, .sp=0xd2, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x6c24, .value=0x30}, {.addr=0x6c25, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x6c26, .a=0xf7, .x=0xcd, .y=0xb2, .sp=0xd2, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x6c24, .value=0x30}, {.addr=0x6c25, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x6c24, .value=0x30, .type=IO_READ},
        {.addr=0x6c25, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0249) {
    const struct CPU_State initial_cpu = {.pc=0xf887, .a=0x53, .x=0x10, .y=0x52, .sp=0xc5, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xf887, .value=0x30}, {.addr=0xf888, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf8a6, .a=0x53, .x=0x10, .y=0x52, .sp=0xc5, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xf887, .value=0x30}, {.addr=0xf888, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf887, .value=0x30, .type=IO_READ},
        {.addr=0xf888, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_024A) {
    const struct CPU_State initial_cpu = {.pc=0x8e41, .a=0xd3, .x=0x04, .y=0x78, .sp=0xb1, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x8e41, .value=0x30}, {.addr=0x8e42, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x8e43, .a=0xd3, .x=0x04, .y=0x78, .sp=0xb1, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x8e41, .value=0x30}, {.addr=0x8e42, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x8e41, .value=0x30, .type=IO_READ},
        {.addr=0x8e42, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_024B) {
    const struct CPU_State initial_cpu = {.pc=0x69e8, .a=0x99, .x=0xef, .y=0x00, .sp=0xc1, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x69e8, .value=0x30}, {.addr=0x69e9, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x6a18, .a=0x99, .x=0xef, .y=0x00, .sp=0xc1, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x69e8, .value=0x30}, {.addr=0x69e9, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x69e8, .value=0x30, .type=IO_READ},
        {.addr=0x69e9, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_024C) {
    const struct CPU_State initial_cpu = {.pc=0x8978, .a=0x04, .x=0x24, .y=0xcf, .sp=0x38, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x8978, .value=0x30}, {.addr=0x8979, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x890f, .a=0x04, .x=0x24, .y=0xcf, .sp=0x38, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x8978, .value=0x30}, {.addr=0x8979, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x8978, .value=0x30, .type=IO_READ},
        {.addr=0x8979, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_024D) {
    const struct CPU_State initial_cpu = {.pc=0x271a, .a=0x44, .x=0x50, .y=0xec, .sp=0x85, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x271a, .value=0x30}, {.addr=0x271b, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x271c, .a=0x44, .x=0x50, .y=0xec, .sp=0x85, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x271a, .value=0x30}, {.addr=0x271b, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x271a, .value=0x30, .type=IO_READ},
        {.addr=0x271b, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_024E) {
    const struct CPU_State initial_cpu = {.pc=0x91e6, .a=0x88, .x=0x72, .y=0xe5, .sp=0xba, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x91e6, .value=0x30}, {.addr=0x91e7, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x91e8, .a=0x88, .x=0x72, .y=0xe5, .sp=0xba, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x91e6, .value=0x30}, {.addr=0x91e7, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x91e6, .value=0x30, .type=IO_READ},
        {.addr=0x91e7, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_024F) {
    const struct CPU_State initial_cpu = {.pc=0x62ee, .a=0x34, .x=0x3e, .y=0x3b, .sp=0x98, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x62ee, .value=0x30}, {.addr=0x62ef, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x62f0, .a=0x34, .x=0x3e, .y=0x3b, .sp=0x98, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x62ee, .value=0x30}, {.addr=0x62ef, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x62ee, .value=0x30, .type=IO_READ},
        {.addr=0x62ef, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0250) {
    const struct CPU_State initial_cpu = {.pc=0x7437, .a=0xe2, .x=0x78, .y=0x8f, .sp=0xb8, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x7437, .value=0x30}, {.addr=0x7438, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x7439, .a=0xe2, .x=0x78, .y=0x8f, .sp=0xb8, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x7437, .value=0x30}, {.addr=0x7438, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x7437, .value=0x30, .type=IO_READ},
        {.addr=0x7438, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0251) {
    const struct CPU_State initial_cpu = {.pc=0x20f7, .a=0xa3, .x=0x50, .y=0x2c, .sp=0x03, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x20f7, .value=0x30}, {.addr=0x20f8, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x2147, .a=0xa3, .x=0x50, .y=0x2c, .sp=0x03, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x20f7, .value=0x30}, {.addr=0x20f8, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x20f7, .value=0x30, .type=IO_READ},
        {.addr=0x20f8, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0252) {
    const struct CPU_State initial_cpu = {.pc=0x35e9, .a=0xd8, .x=0xbc, .y=0x75, .sp=0x82, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x35e9, .value=0x30}, {.addr=0x35ea, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x3619, .a=0xd8, .x=0xbc, .y=0x75, .sp=0x82, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x35e9, .value=0x30}, {.addr=0x35ea, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x35e9, .value=0x30, .type=IO_READ},
        {.addr=0x35ea, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0253) {
    const struct CPU_State initial_cpu = {.pc=0x7f10, .a=0xc4, .x=0x30, .y=0x9f, .sp=0x44, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x7f10, .value=0x30}, {.addr=0x7f11, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x7f12, .a=0xc4, .x=0x30, .y=0x9f, .sp=0x44, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x7f10, .value=0x30}, {.addr=0x7f11, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x7f10, .value=0x30, .type=IO_READ},
        {.addr=0x7f11, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0254) {
    const struct CPU_State initial_cpu = {.pc=0xb714, .a=0x65, .x=0xb4, .y=0xef, .sp=0x4e, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xb714, .value=0x30}, {.addr=0xb715, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xb716, .a=0x65, .x=0xb4, .y=0xef, .sp=0x4e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xb714, .value=0x30}, {.addr=0xb715, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xb714, .value=0x30, .type=IO_READ},
        {.addr=0xb715, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0255) {
    const struct CPU_State initial_cpu = {.pc=0xbc85, .a=0xd2, .x=0x87, .y=0x00, .sp=0xdd, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xbc85, .value=0x30}, {.addr=0xbc86, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xbcfe, .a=0xd2, .x=0x87, .y=0x00, .sp=0xdd, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xbc85, .value=0x30}, {.addr=0xbc86, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xbc85, .value=0x30, .type=IO_READ},
        {.addr=0xbc86, .value=0x77, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0256) {
    const struct CPU_State initial_cpu = {.pc=0x51f1, .a=0xae, .x=0x1f, .y=0xc4, .sp=0xe3, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x51f1, .value=0x30}, {.addr=0x51f2, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x51f3, .a=0xae, .x=0x1f, .y=0xc4, .sp=0xe3, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x51f1, .value=0x30}, {.addr=0x51f2, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x51f1, .value=0x30, .type=IO_READ},
        {.addr=0x51f2, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0257) {
    const struct CPU_State initial_cpu = {.pc=0x9bdb, .a=0xaf, .x=0x4f, .y=0xae, .sp=0xa0, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x9bdb, .value=0x30}, {.addr=0x9bdc, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x9c4b, .a=0xaf, .x=0x4f, .y=0xae, .sp=0xa0, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x9bdb, .value=0x30}, {.addr=0x9bdc, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x9bdb, .value=0x30, .type=IO_READ},
        {.addr=0x9bdc, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0258) {
    const struct CPU_State initial_cpu = {.pc=0x2534, .a=0x91, .x=0x8b, .y=0xd5, .sp=0x96, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x2534, .value=0x30}, {.addr=0x2535, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x2584, .a=0x91, .x=0x8b, .y=0xd5, .sp=0x96, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x2534, .value=0x30}, {.addr=0x2535, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x2534, .value=0x30, .type=IO_READ},
        {.addr=0x2535, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0259) {
    const struct CPU_State initial_cpu = {.pc=0x8368, .a=0x5e, .x=0x7e, .y=0x8a, .sp=0x36, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x8368, .value=0x30}, {.addr=0x8369, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x836a, .a=0x5e, .x=0x7e, .y=0x8a, .sp=0x36, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x8368, .value=0x30}, {.addr=0x8369, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x8368, .value=0x30, .type=IO_READ},
        {.addr=0x8369, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_025A) {
    const struct CPU_State initial_cpu = {.pc=0x4117, .a=0x7f, .x=0xde, .y=0x34, .sp=0x92, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x4117, .value=0x30}, {.addr=0x4118, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x4119, .a=0x7f, .x=0xde, .y=0x34, .sp=0x92, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x4117, .value=0x30}, {.addr=0x4118, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x4117, .value=0x30, .type=IO_READ},
        {.addr=0x4118, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_025B) {
    const struct CPU_State initial_cpu = {.pc=0x71ae, .a=0xcf, .x=0xd7, .y=0x51, .sp=0xad, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x71ae, .value=0x30}, {.addr=0x71af, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x71b0, .a=0xcf, .x=0xd7, .y=0x51, .sp=0xad, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x71ae, .value=0x30}, {.addr=0x71af, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x71ae, .value=0x30, .type=IO_READ},
        {.addr=0x71af, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_025C) {
    const struct CPU_State initial_cpu = {.pc=0x254d, .a=0x2c, .x=0xb7, .y=0x0f, .sp=0x15, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x254d, .value=0x30}, {.addr=0x254e, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x25c9, .a=0x2c, .x=0xb7, .y=0x0f, .sp=0x15, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x254d, .value=0x30}, {.addr=0x254e, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x254d, .value=0x30, .type=IO_READ},
        {.addr=0x254e, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_025D) {
    const struct CPU_State initial_cpu = {.pc=0x0bfe, .a=0xed, .x=0xb4, .y=0x33, .sp=0x95, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0bfe, .value=0x30}, {.addr=0x0bff, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x0c53, .a=0xed, .x=0xb4, .y=0x33, .sp=0x95, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0bfe, .value=0x30}, {.addr=0x0bff, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x0bfe, .value=0x30, .type=IO_READ},
        {.addr=0x0bff, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_025E) {
    const struct CPU_State initial_cpu = {.pc=0x9752, .a=0x89, .x=0x4c, .y=0x60, .sp=0xdf, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x9752, .value=0x30}, {.addr=0x9753, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x96f7, .a=0x89, .x=0x4c, .y=0x60, .sp=0xdf, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x9752, .value=0x30}, {.addr=0x9753, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x9752, .value=0x30, .type=IO_READ},
        {.addr=0x9753, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_025F) {
    const struct CPU_State initial_cpu = {.pc=0x0ef9, .a=0x11, .x=0xff, .y=0xf7, .sp=0xca, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0ef9, .value=0x30}, {.addr=0x0efa, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0efb, .a=0x11, .x=0xff, .y=0xf7, .sp=0xca, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0ef9, .value=0x30}, {.addr=0x0efa, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0ef9, .value=0x30, .type=IO_READ},
        {.addr=0x0efa, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0260) {
    const struct CPU_State initial_cpu = {.pc=0xe697, .a=0x00, .x=0x06, .y=0x08, .sp=0x01, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xe697, .value=0x30}, {.addr=0xe698, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xe682, .a=0x00, .x=0x06, .y=0x08, .sp=0x01, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xe697, .value=0x30}, {.addr=0xe698, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xe697, .value=0x30, .type=IO_READ},
        {.addr=0xe698, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0261) {
    const struct CPU_State initial_cpu = {.pc=0x93f4, .a=0x3e, .x=0x2f, .y=0xa7, .sp=0x1b, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x93f4, .value=0x30}, {.addr=0x93f5, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x9383, .a=0x3e, .x=0x2f, .y=0xa7, .sp=0x1b, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x93f4, .value=0x30}, {.addr=0x93f5, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x93f4, .value=0x30, .type=IO_READ},
        {.addr=0x93f5, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0262) {
    const struct CPU_State initial_cpu = {.pc=0xda43, .a=0x91, .x=0x37, .y=0x95, .sp=0xb9, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xda43, .value=0x30}, {.addr=0xda44, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xdaa2, .a=0x91, .x=0x37, .y=0x95, .sp=0xb9, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xda43, .value=0x30}, {.addr=0xda44, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xda43, .value=0x30, .type=IO_READ},
        {.addr=0xda44, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0263) {
    const struct CPU_State initial_cpu = {.pc=0x8491, .a=0xbf, .x=0xd5, .y=0x2d, .sp=0x82, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x8491, .value=0x30}, {.addr=0x8492, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x8493, .a=0xbf, .x=0xd5, .y=0x2d, .sp=0x82, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x8491, .value=0x30}, {.addr=0x8492, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x8491, .value=0x30, .type=IO_READ},
        {.addr=0x8492, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0264) {
    const struct CPU_State initial_cpu = {.pc=0x10a5, .a=0x73, .x=0x82, .y=0xe1, .sp=0x68, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x10a5, .value=0x30}, {.addr=0x10a6, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x10a7, .a=0x73, .x=0x82, .y=0xe1, .sp=0x68, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x10a5, .value=0x30}, {.addr=0x10a6, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x10a5, .value=0x30, .type=IO_READ},
        {.addr=0x10a6, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0265) {
    const struct CPU_State initial_cpu = {.pc=0xec9a, .a=0xca, .x=0x24, .y=0xdd, .sp=0x29, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xec9a, .value=0x30}, {.addr=0xec9b, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xec9c, .a=0xca, .x=0x24, .y=0xdd, .sp=0x29, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xec9a, .value=0x30}, {.addr=0xec9b, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xec9a, .value=0x30, .type=IO_READ},
        {.addr=0xec9b, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0266) {
    const struct CPU_State initial_cpu = {.pc=0xadc1, .a=0x68, .x=0x25, .y=0xe4, .sp=0x9d, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xadc1, .value=0x30}, {.addr=0xadc2, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xadc3, .a=0x68, .x=0x25, .y=0xe4, .sp=0x9d, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xadc1, .value=0x30}, {.addr=0xadc2, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xadc1, .value=0x30, .type=IO_READ},
        {.addr=0xadc2, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0267) {
    const struct CPU_State initial_cpu = {.pc=0x85ec, .a=0x86, .x=0xcf, .y=0xdf, .sp=0xf9, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x85ec, .value=0x30}, {.addr=0x85ed, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x85ee, .a=0x86, .x=0xcf, .y=0xdf, .sp=0xf9, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x85ec, .value=0x30}, {.addr=0x85ed, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x85ec, .value=0x30, .type=IO_READ},
        {.addr=0x85ed, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0268) {
    const struct CPU_State initial_cpu = {.pc=0x88ca, .a=0x3f, .x=0x89, .y=0xca, .sp=0xfc, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x88ca, .value=0x30}, {.addr=0x88cb, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x8866, .a=0x3f, .x=0x89, .y=0xca, .sp=0xfc, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x88ca, .value=0x30}, {.addr=0x88cb, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x88ca, .value=0x30, .type=IO_READ},
        {.addr=0x88cb, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0269) {
    const struct CPU_State initial_cpu = {.pc=0xcb62, .a=0xa5, .x=0xb2, .y=0x85, .sp=0x70, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xcb62, .value=0x30}, {.addr=0xcb63, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xcb64, .a=0xa5, .x=0xb2, .y=0x85, .sp=0x70, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xcb62, .value=0x30}, {.addr=0xcb63, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xcb62, .value=0x30, .type=IO_READ},
        {.addr=0xcb63, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_026A) {
    const struct CPU_State initial_cpu = {.pc=0xa00e, .a=0x42, .x=0x90, .y=0x30, .sp=0x65, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xa00e, .value=0x30}, {.addr=0xa00f, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xa05b, .a=0x42, .x=0x90, .y=0x30, .sp=0x65, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xa00e, .value=0x30}, {.addr=0xa00f, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xa00e, .value=0x30, .type=IO_READ},
        {.addr=0xa00f, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_026B) {
    const struct CPU_State initial_cpu = {.pc=0x8a7a, .a=0xbb, .x=0xb7, .y=0x6c, .sp=0x45, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x8a7a, .value=0x30}, {.addr=0x8a7b, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x8a10, .a=0xbb, .x=0xb7, .y=0x6c, .sp=0x45, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x8a7a, .value=0x30}, {.addr=0x8a7b, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x8a7a, .value=0x30, .type=IO_READ},
        {.addr=0x8a7b, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_026C) {
    const struct CPU_State initial_cpu = {.pc=0x93c2, .a=0x9e, .x=0x09, .y=0x12, .sp=0x00, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x93c2, .value=0x30}, {.addr=0x93c3, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x93c7, .a=0x9e, .x=0x09, .y=0x12, .sp=0x00, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x93c2, .value=0x30}, {.addr=0x93c3, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x93c2, .value=0x30, .type=IO_READ},
        {.addr=0x93c3, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_026D) {
    const struct CPU_State initial_cpu = {.pc=0x22a8, .a=0xf0, .x=0xac, .y=0x4d, .sp=0x47, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x22a8, .value=0x30}, {.addr=0x22a9, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x22aa, .a=0xf0, .x=0xac, .y=0x4d, .sp=0x47, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x22a8, .value=0x30}, {.addr=0x22a9, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x22a8, .value=0x30, .type=IO_READ},
        {.addr=0x22a9, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_026E) {
    const struct CPU_State initial_cpu = {.pc=0x92f9, .a=0x6b, .x=0xfd, .y=0xdb, .sp=0xc0, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x92f9, .value=0x30}, {.addr=0x92fa, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x92fb, .a=0x6b, .x=0xfd, .y=0xdb, .sp=0xc0, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x92f9, .value=0x30}, {.addr=0x92fa, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x92f9, .value=0x30, .type=IO_READ},
        {.addr=0x92fa, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_026F) {
    const struct CPU_State initial_cpu = {.pc=0x340b, .a=0x4e, .x=0x8c, .y=0x94, .sp=0xa8, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x340b, .value=0x30}, {.addr=0x340c, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x33c6, .a=0x4e, .x=0x8c, .y=0x94, .sp=0xa8, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x340b, .value=0x30}, {.addr=0x340c, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x340b, .value=0x30, .type=IO_READ},
        {.addr=0x340c, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0270) {
    const struct CPU_State initial_cpu = {.pc=0x6d50, .a=0xe4, .x=0x90, .y=0x20, .sp=0x8e, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x6d50, .value=0x30}, {.addr=0x6d51, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x6dc8, .a=0xe4, .x=0x90, .y=0x20, .sp=0x8e, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x6d50, .value=0x30}, {.addr=0x6d51, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x6d50, .value=0x30, .type=IO_READ},
        {.addr=0x6d51, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0271) {
    const struct CPU_State initial_cpu = {.pc=0x0213, .a=0x0c, .x=0x1c, .y=0xad, .sp=0x17, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0213, .value=0x30}, {.addr=0x0214, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x0215, .a=0x0c, .x=0x1c, .y=0xad, .sp=0x17, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0213, .value=0x30}, {.addr=0x0214, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x0213, .value=0x30, .type=IO_READ},
        {.addr=0x0214, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0272) {
    const struct CPU_State initial_cpu = {.pc=0xb572, .a=0xe9, .x=0x5a, .y=0x3c, .sp=0x7e, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xb572, .value=0x30}, {.addr=0xb573, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xb5bb, .a=0xe9, .x=0x5a, .y=0x3c, .sp=0x7e, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xb572, .value=0x30}, {.addr=0xb573, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xb572, .value=0x30, .type=IO_READ},
        {.addr=0xb573, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0273) {
    const struct CPU_State initial_cpu = {.pc=0x5334, .a=0x77, .x=0x78, .y=0xef, .sp=0xd1, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x5334, .value=0x30}, {.addr=0x5335, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5336, .a=0x77, .x=0x78, .y=0xef, .sp=0xd1, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x5334, .value=0x30}, {.addr=0x5335, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5334, .value=0x30, .type=IO_READ},
        {.addr=0x5335, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0274) {
    const struct CPU_State initial_cpu = {.pc=0x6bf3, .a=0x2b, .x=0x68, .y=0xf7, .sp=0x08, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x6bf3, .value=0x30}, {.addr=0x6bf4, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x6bf5, .a=0x2b, .x=0x68, .y=0xf7, .sp=0x08, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x6bf3, .value=0x30}, {.addr=0x6bf4, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x6bf3, .value=0x30, .type=IO_READ},
        {.addr=0x6bf4, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0275) {
    const struct CPU_State initial_cpu = {.pc=0xaec6, .a=0x97, .x=0x75, .y=0xf9, .sp=0xa1, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xaec6, .value=0x30}, {.addr=0xaec7, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xaec8, .a=0x97, .x=0x75, .y=0xf9, .sp=0xa1, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xaec6, .value=0x30}, {.addr=0xaec7, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xaec6, .value=0x30, .type=IO_READ},
        {.addr=0xaec7, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0276) {
    const struct CPU_State initial_cpu = {.pc=0x3e39, .a=0x00, .x=0xf1, .y=0xbd, .sp=0x51, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x3e39, .value=0x30}, {.addr=0x3e3a, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x3e87, .a=0x00, .x=0xf1, .y=0xbd, .sp=0x51, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x3e39, .value=0x30}, {.addr=0x3e3a, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x3e39, .value=0x30, .type=IO_READ},
        {.addr=0x3e3a, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0277) {
    const struct CPU_State initial_cpu = {.pc=0x3bd1, .a=0x05, .x=0x85, .y=0x8c, .sp=0x93, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x3bd1, .value=0x30}, {.addr=0x3bd2, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3b79, .a=0x05, .x=0x85, .y=0x8c, .sp=0x93, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x3bd1, .value=0x30}, {.addr=0x3bd2, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3bd1, .value=0x30, .type=IO_READ},
        {.addr=0x3bd2, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0278) {
    const struct CPU_State initial_cpu = {.pc=0xd9f4, .a=0x35, .x=0xa5, .y=0x45, .sp=0x89, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xd9f4, .value=0x30}, {.addr=0xd9f5, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xda63, .a=0x35, .x=0xa5, .y=0x45, .sp=0x89, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xd9f4, .value=0x30}, {.addr=0xd9f5, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd9f4, .value=0x30, .type=IO_READ},
        {.addr=0xd9f5, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0279) {
    const struct CPU_State initial_cpu = {.pc=0x2ac8, .a=0xf4, .x=0x2a, .y=0x33, .sp=0xd6, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x2ac8, .value=0x30}, {.addr=0x2ac9, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x2ad9, .a=0xf4, .x=0x2a, .y=0x33, .sp=0xd6, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x2ac8, .value=0x30}, {.addr=0x2ac9, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x2ac8, .value=0x30, .type=IO_READ},
        {.addr=0x2ac9, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_027A) {
    const struct CPU_State initial_cpu = {.pc=0x16d8, .a=0x8a, .x=0xa5, .y=0x56, .sp=0x18, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x16d8, .value=0x30}, {.addr=0x16d9, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x16da, .a=0x8a, .x=0xa5, .y=0x56, .sp=0x18, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x16d8, .value=0x30}, {.addr=0x16d9, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x16d8, .value=0x30, .type=IO_READ},
        {.addr=0x16d9, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_027B) {
    const struct CPU_State initial_cpu = {.pc=0xeaed, .a=0xd4, .x=0x07, .y=0xf8, .sp=0xfc, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xeaed, .value=0x30}, {.addr=0xeaee, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xeaef, .a=0xd4, .x=0x07, .y=0xf8, .sp=0xfc, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xeaed, .value=0x30}, {.addr=0xeaee, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xeaed, .value=0x30, .type=IO_READ},
        {.addr=0xeaee, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_027C) {
    const struct CPU_State initial_cpu = {.pc=0xa6ba, .a=0xd1, .x=0x7c, .y=0x9f, .sp=0xc5, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xa6ba, .value=0x30}, {.addr=0xa6bb, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa6bc, .a=0xd1, .x=0x7c, .y=0x9f, .sp=0xc5, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xa6ba, .value=0x30}, {.addr=0xa6bb, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa6ba, .value=0x30, .type=IO_READ},
        {.addr=0xa6bb, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_027D) {
    const struct CPU_State initial_cpu = {.pc=0xeebd, .a=0x19, .x=0x0c, .y=0xfc, .sp=0xa3, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xeebd, .value=0x30}, {.addr=0xeebe, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xeea1, .a=0x19, .x=0x0c, .y=0xfc, .sp=0xa3, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xeebd, .value=0x30}, {.addr=0xeebe, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xeebd, .value=0x30, .type=IO_READ},
        {.addr=0xeebe, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_027E) {
    const struct CPU_State initial_cpu = {.pc=0xc925, .a=0xfb, .x=0x47, .y=0x42, .sp=0x36, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xc925, .value=0x30}, {.addr=0xc926, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xc925, .a=0xfb, .x=0x47, .y=0x42, .sp=0x36, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xc925, .value=0x30}, {.addr=0xc926, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xc925, .value=0x30, .type=IO_READ},
        {.addr=0xc926, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_027F) {
    const struct CPU_State initial_cpu = {.pc=0xeec1, .a=0xa2, .x=0xc2, .y=0xa3, .sp=0x83, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xeec1, .value=0x30}, {.addr=0xeec2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xee5f, .a=0xa2, .x=0xc2, .y=0xa3, .sp=0x83, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xeec1, .value=0x30}, {.addr=0xeec2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xeec1, .value=0x30, .type=IO_READ},
        {.addr=0xeec2, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0280) {
    const struct CPU_State initial_cpu = {.pc=0x0ecb, .a=0x3c, .x=0x81, .y=0xcd, .sp=0xee, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0ecb, .value=0x30}, {.addr=0x0ecc, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x0ecd, .a=0x3c, .x=0x81, .y=0xcd, .sp=0xee, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0ecb, .value=0x30}, {.addr=0x0ecc, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x0ecb, .value=0x30, .type=IO_READ},
        {.addr=0x0ecc, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0281) {
    const struct CPU_State initial_cpu = {.pc=0x6e39, .a=0x99, .x=0xf2, .y=0x6e, .sp=0x18, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x6e39, .value=0x30}, {.addr=0x6e3a, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x6e3b, .a=0x99, .x=0xf2, .y=0x6e, .sp=0x18, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x6e39, .value=0x30}, {.addr=0x6e3a, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x6e39, .value=0x30, .type=IO_READ},
        {.addr=0x6e3a, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0282) {
    const struct CPU_State initial_cpu = {.pc=0x51df, .a=0x54, .x=0xc9, .y=0xb5, .sp=0x88, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x51df, .value=0x30}, {.addr=0x51e0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x51e1, .a=0x54, .x=0xc9, .y=0xb5, .sp=0x88, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x51df, .value=0x30}, {.addr=0x51e0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x51df, .value=0x30, .type=IO_READ},
        {.addr=0x51e0, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0283) {
    const struct CPU_State initial_cpu = {.pc=0x6359, .a=0xd9, .x=0xff, .y=0x9d, .sp=0xfd, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x6359, .value=0x30}, {.addr=0x635a, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x635b, .a=0xd9, .x=0xff, .y=0x9d, .sp=0xfd, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x6359, .value=0x30}, {.addr=0x635a, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x6359, .value=0x30, .type=IO_READ},
        {.addr=0x635a, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0284) {
    const struct CPU_State initial_cpu = {.pc=0x9884, .a=0xca, .x=0xad, .y=0x2a, .sp=0x0b, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x9884, .value=0x30}, {.addr=0x9885, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9866, .a=0xca, .x=0xad, .y=0x2a, .sp=0x0b, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x9884, .value=0x30}, {.addr=0x9885, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9884, .value=0x30, .type=IO_READ},
        {.addr=0x9885, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0285) {
    const struct CPU_State initial_cpu = {.pc=0xdb38, .a=0x3c, .x=0x58, .y=0xc9, .sp=0xc5, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xdb38, .value=0x30}, {.addr=0xdb39, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xdb3a, .a=0x3c, .x=0x58, .y=0xc9, .sp=0xc5, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xdb38, .value=0x30}, {.addr=0xdb39, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xdb38, .value=0x30, .type=IO_READ},
        {.addr=0xdb39, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0286) {
    const struct CPU_State initial_cpu = {.pc=0xdae1, .a=0x27, .x=0xa2, .y=0x8a, .sp=0xe6, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xdae1, .value=0x30}, {.addr=0xdae2, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xda87, .a=0x27, .x=0xa2, .y=0x8a, .sp=0xe6, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xdae1, .value=0x30}, {.addr=0xdae2, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xdae1, .value=0x30, .type=IO_READ},
        {.addr=0xdae2, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0287) {
    const struct CPU_State initial_cpu = {.pc=0x729e, .a=0x7b, .x=0xd0, .y=0x23, .sp=0x80, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x729e, .value=0x30}, {.addr=0x729f, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x72a0, .a=0x7b, .x=0xd0, .y=0x23, .sp=0x80, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x729e, .value=0x30}, {.addr=0x729f, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x729e, .value=0x30, .type=IO_READ},
        {.addr=0x729f, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0288) {
    const struct CPU_State initial_cpu = {.pc=0xcfd5, .a=0x59, .x=0x8c, .y=0xf0, .sp=0x54, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xcfd5, .value=0x30}, {.addr=0xcfd6, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xcfd7, .a=0x59, .x=0x8c, .y=0xf0, .sp=0x54, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xcfd5, .value=0x30}, {.addr=0xcfd6, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xcfd5, .value=0x30, .type=IO_READ},
        {.addr=0xcfd6, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0289) {
    const struct CPU_State initial_cpu = {.pc=0xb2d1, .a=0xdc, .x=0xcd, .y=0xbf, .sp=0xd9, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xb2d1, .value=0x30}, {.addr=0xb2d2, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xb2d3, .a=0xdc, .x=0xcd, .y=0xbf, .sp=0xd9, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xb2d1, .value=0x30}, {.addr=0xb2d2, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xb2d1, .value=0x30, .type=IO_READ},
        {.addr=0xb2d2, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_028A) {
    const struct CPU_State initial_cpu = {.pc=0xcdbe, .a=0xa2, .x=0xeb, .y=0xc8, .sp=0x4c, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xcdbe, .value=0x30}, {.addr=0xcdbf, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xcd8b, .a=0xa2, .x=0xeb, .y=0xc8, .sp=0x4c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xcdbe, .value=0x30}, {.addr=0xcdbf, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xcdbe, .value=0x30, .type=IO_READ},
        {.addr=0xcdbf, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_028B) {
    const struct CPU_State initial_cpu = {.pc=0x45d7, .a=0x43, .x=0x07, .y=0x13, .sp=0x75, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x45d7, .value=0x30}, {.addr=0x45d8, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x45d9, .a=0x43, .x=0x07, .y=0x13, .sp=0x75, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x45d7, .value=0x30}, {.addr=0x45d8, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x45d7, .value=0x30, .type=IO_READ},
        {.addr=0x45d8, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_028C) {
    const struct CPU_State initial_cpu = {.pc=0xd051, .a=0x2f, .x=0x60, .y=0x4b, .sp=0x18, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xd051, .value=0x30}, {.addr=0xd052, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xd075, .a=0x2f, .x=0x60, .y=0x4b, .sp=0x18, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xd051, .value=0x30}, {.addr=0xd052, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xd051, .value=0x30, .type=IO_READ},
        {.addr=0xd052, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_028D) {
    const struct CPU_State initial_cpu = {.pc=0x8240, .a=0xad, .x=0x4d, .y=0x6e, .sp=0xff, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x8240, .value=0x30}, {.addr=0x8241, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x81f1, .a=0xad, .x=0x4d, .y=0x6e, .sp=0xff, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x8240, .value=0x30}, {.addr=0x8241, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8240, .value=0x30, .type=IO_READ},
        {.addr=0x8241, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_028E) {
    const struct CPU_State initial_cpu = {.pc=0xb3ea, .a=0xb6, .x=0x37, .y=0x80, .sp=0x65, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xb3ea, .value=0x30}, {.addr=0xb3eb, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xb3b3, .a=0xb6, .x=0x37, .y=0x80, .sp=0x65, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xb3ea, .value=0x30}, {.addr=0xb3eb, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xb3ea, .value=0x30, .type=IO_READ},
        {.addr=0xb3eb, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_028F) {
    const struct CPU_State initial_cpu = {.pc=0x6c6f, .a=0x24, .x=0xb0, .y=0x8a, .sp=0xbd, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x6c6f, .value=0x30}, {.addr=0x6c70, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x6c71, .a=0x24, .x=0xb0, .y=0x8a, .sp=0xbd, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x6c6f, .value=0x30}, {.addr=0x6c70, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x6c6f, .value=0x30, .type=IO_READ},
        {.addr=0x6c70, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0290) {
    const struct CPU_State initial_cpu = {.pc=0x2923, .a=0x55, .x=0xef, .y=0x27, .sp=0x09, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x2923, .value=0x30}, {.addr=0x2924, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x2914, .a=0x55, .x=0xef, .y=0x27, .sp=0x09, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x2923, .value=0x30}, {.addr=0x2924, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x2923, .value=0x30, .type=IO_READ},
        {.addr=0x2924, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0291) {
    const struct CPU_State initial_cpu = {.pc=0x95ff, .a=0x70, .x=0x8c, .y=0x49, .sp=0xd3, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x95ff, .value=0x30}, {.addr=0x9600, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x9601, .a=0x70, .x=0x8c, .y=0x49, .sp=0xd3, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x95ff, .value=0x30}, {.addr=0x9600, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x95ff, .value=0x30, .type=IO_READ},
        {.addr=0x9600, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0292) {
    const struct CPU_State initial_cpu = {.pc=0xe59e, .a=0x03, .x=0x1c, .y=0x6a, .sp=0x47, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xe59e, .value=0x30}, {.addr=0xe59f, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xe5a0, .a=0x03, .x=0x1c, .y=0x6a, .sp=0x47, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xe59e, .value=0x30}, {.addr=0xe59f, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xe59e, .value=0x30, .type=IO_READ},
        {.addr=0xe59f, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0293) {
    const struct CPU_State initial_cpu = {.pc=0xf948, .a=0xa4, .x=0x88, .y=0xf1, .sp=0x41, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xf948, .value=0x30}, {.addr=0xf949, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xf94a, .a=0xa4, .x=0x88, .y=0xf1, .sp=0x41, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xf948, .value=0x30}, {.addr=0xf949, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xf948, .value=0x30, .type=IO_READ},
        {.addr=0xf949, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0294) {
    const struct CPU_State initial_cpu = {.pc=0x3457, .a=0x9e, .x=0xff, .y=0xf1, .sp=0xf3, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x3457, .value=0x30}, {.addr=0x3458, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x3459, .a=0x9e, .x=0xff, .y=0xf1, .sp=0xf3, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x3457, .value=0x30}, {.addr=0x3458, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x3457, .value=0x30, .type=IO_READ},
        {.addr=0x3458, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0295) {
    const struct CPU_State initial_cpu = {.pc=0xe14e, .a=0x1e, .x=0xd2, .y=0xf7, .sp=0xca, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xe14e, .value=0x30}, {.addr=0xe14f, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xe15e, .a=0x1e, .x=0xd2, .y=0xf7, .sp=0xca, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe14e, .value=0x30}, {.addr=0xe14f, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xe14e, .value=0x30, .type=IO_READ},
        {.addr=0xe14f, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0296) {
    const struct CPU_State initial_cpu = {.pc=0x3dcb, .a=0x43, .x=0x55, .y=0x6a, .sp=0xb3, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x3dcb, .value=0x30}, {.addr=0x3dcc, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x3e25, .a=0x43, .x=0x55, .y=0x6a, .sp=0xb3, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x3dcb, .value=0x30}, {.addr=0x3dcc, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x3dcb, .value=0x30, .type=IO_READ},
        {.addr=0x3dcc, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0297) {
    const struct CPU_State initial_cpu = {.pc=0x54e2, .a=0xa1, .x=0xe0, .y=0x7c, .sp=0xfb, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x54e2, .value=0x30}, {.addr=0x54e3, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x54e4, .a=0xa1, .x=0xe0, .y=0x7c, .sp=0xfb, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x54e2, .value=0x30}, {.addr=0x54e3, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x54e2, .value=0x30, .type=IO_READ},
        {.addr=0x54e3, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0298) {
    const struct CPU_State initial_cpu = {.pc=0x03c2, .a=0x4e, .x=0xa4, .y=0x1e, .sp=0x1f, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x03c2, .value=0x30}, {.addr=0x03c3, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x03c4, .a=0x4e, .x=0xa4, .y=0x1e, .sp=0x1f, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x03c2, .value=0x30}, {.addr=0x03c3, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x03c2, .value=0x30, .type=IO_READ},
        {.addr=0x03c3, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0299) {
    const struct CPU_State initial_cpu = {.pc=0x6d31, .a=0x4b, .x=0x82, .y=0x78, .sp=0x53, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x6d31, .value=0x30}, {.addr=0x6d32, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x6d33, .a=0x4b, .x=0x82, .y=0x78, .sp=0x53, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x6d31, .value=0x30}, {.addr=0x6d32, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x6d31, .value=0x30, .type=IO_READ},
        {.addr=0x6d32, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_029A) {
    const struct CPU_State initial_cpu = {.pc=0x9790, .a=0x64, .x=0x59, .y=0x40, .sp=0xac, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x9790, .value=0x30}, {.addr=0x9791, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x9757, .a=0x64, .x=0x59, .y=0x40, .sp=0xac, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x9790, .value=0x30}, {.addr=0x9791, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x9790, .value=0x30, .type=IO_READ},
        {.addr=0x9791, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_029B) {
    const struct CPU_State initial_cpu = {.pc=0x0dd1, .a=0xfe, .x=0x64, .y=0xea, .sp=0x79, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0dd1, .value=0x30}, {.addr=0x0dd2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0dd3, .a=0xfe, .x=0x64, .y=0xea, .sp=0x79, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0dd1, .value=0x30}, {.addr=0x0dd2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0dd1, .value=0x30, .type=IO_READ},
        {.addr=0x0dd2, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_029C) {
    const struct CPU_State initial_cpu = {.pc=0x9e3a, .a=0x8e, .x=0xcb, .y=0xca, .sp=0x8e, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x9e3a, .value=0x30}, {.addr=0x9e3b, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x9e40, .a=0x8e, .x=0xcb, .y=0xca, .sp=0x8e, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x9e3a, .value=0x30}, {.addr=0x9e3b, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x9e3a, .value=0x30, .type=IO_READ},
        {.addr=0x9e3b, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_029D) {
    const struct CPU_State initial_cpu = {.pc=0x9593, .a=0x4b, .x=0x1e, .y=0x4e, .sp=0x7b, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x9593, .value=0x30}, {.addr=0x9594, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9595, .a=0x4b, .x=0x1e, .y=0x4e, .sp=0x7b, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x9593, .value=0x30}, {.addr=0x9594, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9593, .value=0x30, .type=IO_READ},
        {.addr=0x9594, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_029E) {
    const struct CPU_State initial_cpu = {.pc=0xa06e, .a=0xb3, .x=0x44, .y=0xd7, .sp=0x0e, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xa06e, .value=0x30}, {.addr=0xa06f, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xa070, .a=0xb3, .x=0x44, .y=0xd7, .sp=0x0e, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa06e, .value=0x30}, {.addr=0xa06f, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xa06e, .value=0x30, .type=IO_READ},
        {.addr=0xa06f, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_029F) {
    const struct CPU_State initial_cpu = {.pc=0xbcf6, .a=0xba, .x=0xe5, .y=0xdf, .sp=0x08, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xbcf6, .value=0x30}, {.addr=0xbcf7, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xbd2c, .a=0xba, .x=0xe5, .y=0xdf, .sp=0x08, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xbcf6, .value=0x30}, {.addr=0xbcf7, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xbcf6, .value=0x30, .type=IO_READ},
        {.addr=0xbcf7, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x6fc4, .a=0x17, .x=0xad, .y=0x6e, .sp=0x14, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x6fc4, .value=0x30}, {.addr=0x6fc5, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x6fc6, .a=0x17, .x=0xad, .y=0x6e, .sp=0x14, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x6fc4, .value=0x30}, {.addr=0x6fc5, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x6fc4, .value=0x30, .type=IO_READ},
        {.addr=0x6fc5, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x7048, .a=0x74, .x=0x16, .y=0x23, .sp=0x69, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x7048, .value=0x30}, {.addr=0x7049, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6fd0, .a=0x74, .x=0x16, .y=0x23, .sp=0x69, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x7048, .value=0x30}, {.addr=0x7049, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7048, .value=0x30, .type=IO_READ},
        {.addr=0x7049, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x6e12, .a=0x01, .x=0xc9, .y=0x20, .sp=0x71, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x6e12, .value=0x30}, {.addr=0x6e13, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x6e55, .a=0x01, .x=0xc9, .y=0x20, .sp=0x71, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x6e12, .value=0x30}, {.addr=0x6e13, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x6e12, .value=0x30, .type=IO_READ},
        {.addr=0x6e13, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x0591, .a=0x49, .x=0x74, .y=0x64, .sp=0xc3, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0591, .value=0x30}, {.addr=0x0592, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x05ff, .a=0x49, .x=0x74, .y=0x64, .sp=0xc3, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0591, .value=0x30}, {.addr=0x0592, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x0591, .value=0x30, .type=IO_READ},
        {.addr=0x0592, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x4394, .a=0x66, .x=0xa9, .y=0x81, .sp=0x3e, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x4394, .value=0x30}, {.addr=0x4395, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x4319, .a=0x66, .x=0xa9, .y=0x81, .sp=0x3e, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x4394, .value=0x30}, {.addr=0x4395, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x4394, .value=0x30, .type=IO_READ},
        {.addr=0x4395, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x12e3, .a=0x21, .x=0xd0, .y=0xb7, .sp=0xf6, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x12e3, .value=0x30}, {.addr=0x12e4, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x12e5, .a=0x21, .x=0xd0, .y=0xb7, .sp=0xf6, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x12e3, .value=0x30}, {.addr=0x12e4, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x12e3, .value=0x30, .type=IO_READ},
        {.addr=0x12e4, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x4060, .a=0x6c, .x=0x9e, .y=0xba, .sp=0x04, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x4060, .value=0x30}, {.addr=0x4061, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x403c, .a=0x6c, .x=0x9e, .y=0xba, .sp=0x04, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x4060, .value=0x30}, {.addr=0x4061, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x4060, .value=0x30, .type=IO_READ},
        {.addr=0x4061, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xddbf, .a=0xcf, .x=0x02, .y=0xf7, .sp=0x62, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xddbf, .value=0x30}, {.addr=0xddc0, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xddc1, .a=0xcf, .x=0x02, .y=0xf7, .sp=0x62, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xddbf, .value=0x30}, {.addr=0xddc0, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xddbf, .value=0x30, .type=IO_READ},
        {.addr=0xddc0, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xbace, .a=0xb5, .x=0x62, .y=0xd8, .sp=0x1f, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xbace, .value=0x30}, {.addr=0xbacf, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xbad0, .a=0xb5, .x=0x62, .y=0xd8, .sp=0x1f, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xbace, .value=0x30}, {.addr=0xbacf, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xbace, .value=0x30, .type=IO_READ},
        {.addr=0xbacf, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xdef3, .a=0x94, .x=0x39, .y=0x91, .sp=0x5c, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xdef3, .value=0x30}, {.addr=0xdef4, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xdef5, .a=0x94, .x=0x39, .y=0x91, .sp=0x5c, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xdef3, .value=0x30}, {.addr=0xdef4, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xdef3, .value=0x30, .type=IO_READ},
        {.addr=0xdef4, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x6970, .a=0x1b, .x=0x9e, .y=0x26, .sp=0x40, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x6970, .value=0x30}, {.addr=0x6971, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x6984, .a=0x1b, .x=0x9e, .y=0x26, .sp=0x40, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x6970, .value=0x30}, {.addr=0x6971, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x6970, .value=0x30, .type=IO_READ},
        {.addr=0x6971, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x7b83, .a=0x0b, .x=0xca, .y=0x9b, .sp=0xa3, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x7b83, .value=0x30}, {.addr=0x7b84, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x7b75, .a=0x0b, .x=0xca, .y=0x9b, .sp=0xa3, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x7b83, .value=0x30}, {.addr=0x7b84, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x7b83, .value=0x30, .type=IO_READ},
        {.addr=0x7b84, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x854e, .a=0xb7, .x=0xde, .y=0xa0, .sp=0x68, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x854e, .value=0x30}, {.addr=0x854f, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x8598, .a=0xb7, .x=0xde, .y=0xa0, .sp=0x68, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x854e, .value=0x30}, {.addr=0x854f, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x854e, .value=0x30, .type=IO_READ},
        {.addr=0x854f, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x647a, .a=0xe2, .x=0xf5, .y=0xd2, .sp=0x1b, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x647a, .value=0x30}, {.addr=0x647b, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x647c, .a=0xe2, .x=0xf5, .y=0xd2, .sp=0x1b, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x647a, .value=0x30}, {.addr=0x647b, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x647a, .value=0x30, .type=IO_READ},
        {.addr=0x647b, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x3716, .a=0x08, .x=0xdb, .y=0xa7, .sp=0xe2, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x3716, .value=0x30}, {.addr=0x3717, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x3718, .a=0x08, .x=0xdb, .y=0xa7, .sp=0xe2, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x3716, .value=0x30}, {.addr=0x3717, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x3716, .value=0x30, .type=IO_READ},
        {.addr=0x3717, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xf65e, .a=0x32, .x=0x3e, .y=0x2b, .sp=0x4b, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xf65e, .value=0x30}, {.addr=0xf65f, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xf665, .a=0x32, .x=0x3e, .y=0x2b, .sp=0x4b, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xf65e, .value=0x30}, {.addr=0xf65f, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xf65e, .value=0x30, .type=IO_READ},
        {.addr=0xf65f, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xd5ad, .a=0xad, .x=0xe2, .y=0x92, .sp=0x93, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xd5ad, .value=0x30}, {.addr=0xd5ae, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xd571, .a=0xad, .x=0xe2, .y=0x92, .sp=0x93, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xd5ad, .value=0x30}, {.addr=0xd5ae, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xd5ad, .value=0x30, .type=IO_READ},
        {.addr=0xd5ae, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x3d84, .a=0xae, .x=0x18, .y=0x4d, .sp=0x35, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x3d84, .value=0x30}, {.addr=0x3d85, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x3dca, .a=0xae, .x=0x18, .y=0x4d, .sp=0x35, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x3d84, .value=0x30}, {.addr=0x3d85, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x3d84, .value=0x30, .type=IO_READ},
        {.addr=0x3d85, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x839b, .a=0x01, .x=0x51, .y=0x1a, .sp=0x49, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x839b, .value=0x30}, {.addr=0x839c, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x8412, .a=0x01, .x=0x51, .y=0x1a, .sp=0x49, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x839b, .value=0x30}, {.addr=0x839c, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x839b, .value=0x30, .type=IO_READ},
        {.addr=0x839c, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x978d, .a=0x03, .x=0xd2, .y=0x74, .sp=0x6d, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x978d, .value=0x30}, {.addr=0x978e, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x978f, .a=0x03, .x=0xd2, .y=0x74, .sp=0x6d, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x978d, .value=0x30}, {.addr=0x978e, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x978d, .value=0x30, .type=IO_READ},
        {.addr=0x978e, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xa59c, .a=0x6c, .x=0xd2, .y=0x06, .sp=0x2c, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xa59c, .value=0x30}, {.addr=0xa59d, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xa540, .a=0x6c, .x=0xd2, .y=0x06, .sp=0x2c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xa59c, .value=0x30}, {.addr=0xa59d, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xa59c, .value=0x30, .type=IO_READ},
        {.addr=0xa59d, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xa19f, .a=0x11, .x=0x9a, .y=0x71, .sp=0xb4, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xa19f, .value=0x30}, {.addr=0xa1a0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa13e, .a=0x11, .x=0x9a, .y=0x71, .sp=0xb4, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xa19f, .value=0x30}, {.addr=0xa1a0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa19f, .value=0x30, .type=IO_READ},
        {.addr=0xa1a0, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x7cf7, .a=0x43, .x=0x85, .y=0x92, .sp=0x68, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x7cf7, .value=0x30}, {.addr=0x7cf8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7cf9, .a=0x43, .x=0x85, .y=0x92, .sp=0x68, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x7cf7, .value=0x30}, {.addr=0x7cf8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7cf7, .value=0x30, .type=IO_READ},
        {.addr=0x7cf8, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x78f6, .a=0xe5, .x=0x4d, .y=0x2d, .sp=0xdc, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x78f6, .value=0x30}, {.addr=0x78f7, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x7960, .a=0xe5, .x=0x4d, .y=0x2d, .sp=0xdc, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x78f6, .value=0x30}, {.addr=0x78f7, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x78f6, .value=0x30, .type=IO_READ},
        {.addr=0x78f7, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xd82e, .a=0x7c, .x=0x20, .y=0x8c, .sp=0x63, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xd82e, .value=0x30}, {.addr=0xd82f, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xd830, .a=0x7c, .x=0x20, .y=0x8c, .sp=0x63, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xd82e, .value=0x30}, {.addr=0xd82f, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xd82e, .value=0x30, .type=IO_READ},
        {.addr=0xd82f, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x9bfc, .a=0x82, .x=0xe1, .y=0x94, .sp=0x4d, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x9bfc, .value=0x30}, {.addr=0x9bfd, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x9c35, .a=0x82, .x=0xe1, .y=0x94, .sp=0x4d, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x9bfc, .value=0x30}, {.addr=0x9bfd, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x9bfc, .value=0x30, .type=IO_READ},
        {.addr=0x9bfd, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xb3fc, .a=0x59, .x=0xa4, .y=0x8f, .sp=0x1b, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xb3fc, .value=0x30}, {.addr=0xb3fd, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xb3fe, .a=0x59, .x=0xa4, .y=0x8f, .sp=0x1b, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xb3fc, .value=0x30}, {.addr=0xb3fd, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xb3fc, .value=0x30, .type=IO_READ},
        {.addr=0xb3fd, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xf05d, .a=0x20, .x=0x18, .y=0x18, .sp=0x63, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xf05d, .value=0x30}, {.addr=0xf05e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf05f, .a=0x20, .x=0x18, .y=0x18, .sp=0x63, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xf05d, .value=0x30}, {.addr=0xf05e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf05d, .value=0x30, .type=IO_READ},
        {.addr=0xf05e, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xb737, .a=0xc5, .x=0xab, .y=0x5e, .sp=0x16, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xb737, .value=0x30}, {.addr=0xb738, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xb785, .a=0xc5, .x=0xab, .y=0x5e, .sp=0x16, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb737, .value=0x30}, {.addr=0xb738, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xb737, .value=0x30, .type=IO_READ},
        {.addr=0xb738, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xf231, .a=0xec, .x=0xad, .y=0x34, .sp=0x31, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xf231, .value=0x30}, {.addr=0xf232, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xf27d, .a=0xec, .x=0xad, .y=0x34, .sp=0x31, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xf231, .value=0x30}, {.addr=0xf232, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xf231, .value=0x30, .type=IO_READ},
        {.addr=0xf232, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x4972, .a=0xd2, .x=0x6f, .y=0x99, .sp=0x21, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x4972, .value=0x30}, {.addr=0x4973, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x4927, .a=0xd2, .x=0x6f, .y=0x99, .sp=0x21, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x4972, .value=0x30}, {.addr=0x4973, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x4972, .value=0x30, .type=IO_READ},
        {.addr=0x4973, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xee7c, .a=0xe0, .x=0x3f, .y=0x17, .sp=0x6b, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xee7c, .value=0x30}, {.addr=0xee7d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xee7e, .a=0xe0, .x=0x3f, .y=0x17, .sp=0x6b, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xee7c, .value=0x30}, {.addr=0xee7d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xee7c, .value=0x30, .type=IO_READ},
        {.addr=0xee7d, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xfeac, .a=0x3d, .x=0xd4, .y=0x75, .sp=0x31, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xfeac, .value=0x30}, {.addr=0xfead, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xff1a, .a=0x3d, .x=0xd4, .y=0x75, .sp=0x31, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xfeac, .value=0x30}, {.addr=0xfead, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xfeac, .value=0x30, .type=IO_READ},
        {.addr=0xfead, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x6bc9, .a=0xfd, .x=0x77, .y=0x3a, .sp=0xef, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x6bc9, .value=0x30}, {.addr=0x6bca, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x6b5d, .a=0xfd, .x=0x77, .y=0x3a, .sp=0xef, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x6bc9, .value=0x30}, {.addr=0x6bca, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x6bc9, .value=0x30, .type=IO_READ},
        {.addr=0x6bca, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x986a, .a=0xd1, .x=0x5a, .y=0xbb, .sp=0x37, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x986a, .value=0x30}, {.addr=0x986b, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x98a4, .a=0xd1, .x=0x5a, .y=0xbb, .sp=0x37, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x986a, .value=0x30}, {.addr=0x986b, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x986a, .value=0x30, .type=IO_READ},
        {.addr=0x986b, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x08d8, .a=0xde, .x=0x7a, .y=0x14, .sp=0x3b, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x08d8, .value=0x30}, {.addr=0x08d9, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x08da, .a=0xde, .x=0x7a, .y=0x14, .sp=0x3b, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x08d8, .value=0x30}, {.addr=0x08d9, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x08d8, .value=0x30, .type=IO_READ},
        {.addr=0x08d9, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x50ba, .a=0xc4, .x=0xbf, .y=0xc4, .sp=0xcd, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x50ba, .value=0x30}, {.addr=0x50bb, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x50bc, .a=0xc4, .x=0xbf, .y=0xc4, .sp=0xcd, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x50ba, .value=0x30}, {.addr=0x50bb, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x50ba, .value=0x30, .type=IO_READ},
        {.addr=0x50bb, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x3a1d, .a=0xcf, .x=0xa2, .y=0x75, .sp=0x67, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x3a1d, .value=0x30}, {.addr=0x3a1e, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x3a1f, .a=0xcf, .x=0xa2, .y=0x75, .sp=0x67, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x3a1d, .value=0x30}, {.addr=0x3a1e, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x3a1d, .value=0x30, .type=IO_READ},
        {.addr=0x3a1e, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xe5dc, .a=0xcd, .x=0x8f, .y=0xaf, .sp=0x5d, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xe5dc, .value=0x30}, {.addr=0xe5dd, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xe5de, .a=0xcd, .x=0x8f, .y=0xaf, .sp=0x5d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xe5dc, .value=0x30}, {.addr=0xe5dd, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xe5dc, .value=0x30, .type=IO_READ},
        {.addr=0xe5dd, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x0df0, .a=0xc1, .x=0x46, .y=0x2f, .sp=0x65, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0df0, .value=0x30}, {.addr=0x0df1, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x0df2, .a=0xc1, .x=0x46, .y=0x2f, .sp=0x65, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0df0, .value=0x30}, {.addr=0x0df1, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x0df0, .value=0x30, .type=IO_READ},
        {.addr=0x0df1, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xd541, .a=0x0a, .x=0xb1, .y=0x34, .sp=0xe9, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xd541, .value=0x30}, {.addr=0xd542, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xd5b5, .a=0x0a, .x=0xb1, .y=0x34, .sp=0xe9, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xd541, .value=0x30}, {.addr=0xd542, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xd541, .value=0x30, .type=IO_READ},
        {.addr=0xd542, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x65ed, .a=0x80, .x=0x9f, .y=0x55, .sp=0x9a, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x65ed, .value=0x30}, {.addr=0x65ee, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x65ef, .a=0x80, .x=0x9f, .y=0x55, .sp=0x9a, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x65ed, .value=0x30}, {.addr=0x65ee, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x65ed, .value=0x30, .type=IO_READ},
        {.addr=0x65ee, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x902e, .a=0x93, .x=0x20, .y=0x20, .sp=0x5b, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x902e, .value=0x30}, {.addr=0x902f, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x9030, .a=0x93, .x=0x20, .y=0x20, .sp=0x5b, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x902e, .value=0x30}, {.addr=0x902f, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x902e, .value=0x30, .type=IO_READ},
        {.addr=0x902f, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xd3d0, .a=0x5c, .x=0x7e, .y=0xa2, .sp=0x69, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xd3d0, .value=0x30}, {.addr=0xd3d1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd3ee, .a=0x5c, .x=0x7e, .y=0xa2, .sp=0x69, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xd3d0, .value=0x30}, {.addr=0xd3d1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd3d0, .value=0x30, .type=IO_READ},
        {.addr=0xd3d1, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xa0ac, .a=0xeb, .x=0x9d, .y=0x44, .sp=0xe0, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xa0ac, .value=0x30}, {.addr=0xa0ad, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa0ae, .a=0xeb, .x=0x9d, .y=0x44, .sp=0xe0, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xa0ac, .value=0x30}, {.addr=0xa0ad, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa0ac, .value=0x30, .type=IO_READ},
        {.addr=0xa0ad, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x5292, .a=0x73, .x=0x8b, .y=0xb6, .sp=0x62, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x5292, .value=0x30}, {.addr=0x5293, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x5294, .a=0x73, .x=0x8b, .y=0xb6, .sp=0x62, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x5292, .value=0x30}, {.addr=0x5293, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x5292, .value=0x30, .type=IO_READ},
        {.addr=0x5293, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x27de, .a=0xf1, .x=0x02, .y=0x65, .sp=0x6d, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x27de, .value=0x30}, {.addr=0x27df, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x27e0, .a=0xf1, .x=0x02, .y=0x65, .sp=0x6d, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x27de, .value=0x30}, {.addr=0x27df, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x27de, .value=0x30, .type=IO_READ},
        {.addr=0x27df, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xfb77, .a=0x4e, .x=0x00, .y=0x90, .sp=0x45, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xfb77, .value=0x30}, {.addr=0xfb78, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xfb8c, .a=0x4e, .x=0x00, .y=0x90, .sp=0x45, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xfb77, .value=0x30}, {.addr=0xfb78, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xfb77, .value=0x30, .type=IO_READ},
        {.addr=0xfb78, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xcd11, .a=0xa5, .x=0xab, .y=0x7f, .sp=0xf9, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xcd11, .value=0x30}, {.addr=0xcd12, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcd20, .a=0xa5, .x=0xab, .y=0x7f, .sp=0xf9, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xcd11, .value=0x30}, {.addr=0xcd12, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcd11, .value=0x30, .type=IO_READ},
        {.addr=0xcd12, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x156f, .a=0x3b, .x=0x4e, .y=0x71, .sp=0xe6, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x156f, .value=0x30}, {.addr=0x1570, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x14f1, .a=0x3b, .x=0x4e, .y=0x71, .sp=0xe6, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x156f, .value=0x30}, {.addr=0x1570, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x156f, .value=0x30, .type=IO_READ},
        {.addr=0x1570, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x0018, .a=0x97, .x=0x8f, .y=0xbb, .sp=0xfe, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0x30}, {.addr=0x0019, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x001a, .a=0x97, .x=0x8f, .y=0xbb, .sp=0xfe, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0x30}, {.addr=0x0019, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x0018, .value=0x30, .type=IO_READ},
        {.addr=0x0019, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x641a, .a=0x9e, .x=0xea, .y=0x86, .sp=0x67, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x641a, .value=0x30}, {.addr=0x641b, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x642d, .a=0x9e, .x=0xea, .y=0x86, .sp=0x67, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x641a, .value=0x30}, {.addr=0x641b, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x641a, .value=0x30, .type=IO_READ},
        {.addr=0x641b, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xfc02, .a=0xf7, .x=0x65, .y=0x6f, .sp=0xf7, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xfc02, .value=0x30}, {.addr=0xfc03, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xfc68, .a=0xf7, .x=0x65, .y=0x6f, .sp=0xf7, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xfc02, .value=0x30}, {.addr=0xfc03, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xfc02, .value=0x30, .type=IO_READ},
        {.addr=0xfc03, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x65a2, .a=0x99, .x=0x90, .y=0x85, .sp=0x60, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x65a2, .value=0x30}, {.addr=0x65a3, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x6548, .a=0x99, .x=0x90, .y=0x85, .sp=0x60, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x65a2, .value=0x30}, {.addr=0x65a3, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x65a2, .value=0x30, .type=IO_READ},
        {.addr=0x65a3, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x9321, .a=0x5d, .x=0xc4, .y=0x40, .sp=0x55, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x9321, .value=0x30}, {.addr=0x9322, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x9332, .a=0x5d, .x=0xc4, .y=0x40, .sp=0x55, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x9321, .value=0x30}, {.addr=0x9322, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x9321, .value=0x30, .type=IO_READ},
        {.addr=0x9322, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x94ed, .a=0xf8, .x=0xb0, .y=0x43, .sp=0x35, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x94ed, .value=0x30}, {.addr=0x94ee, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x94ef, .a=0xf8, .x=0xb0, .y=0x43, .sp=0x35, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x94ed, .value=0x30}, {.addr=0x94ee, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x94ed, .value=0x30, .type=IO_READ},
        {.addr=0x94ee, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x54de, .a=0x11, .x=0xdb, .y=0x83, .sp=0x34, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x54de, .value=0x30}, {.addr=0x54df, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x54e0, .a=0x11, .x=0xdb, .y=0x83, .sp=0x34, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x54de, .value=0x30}, {.addr=0x54df, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x54de, .value=0x30, .type=IO_READ},
        {.addr=0x54df, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xb2d7, .a=0xaf, .x=0x00, .y=0x58, .sp=0xbf, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xb2d7, .value=0x30}, {.addr=0xb2d8, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xb29d, .a=0xaf, .x=0x00, .y=0x58, .sp=0xbf, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xb2d7, .value=0x30}, {.addr=0xb2d8, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xb2d7, .value=0x30, .type=IO_READ},
        {.addr=0xb2d8, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x5c65, .a=0xbe, .x=0xaa, .y=0x65, .sp=0xf7, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x5c65, .value=0x30}, {.addr=0x5c66, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x5c67, .a=0xbe, .x=0xaa, .y=0x65, .sp=0xf7, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x5c65, .value=0x30}, {.addr=0x5c66, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x5c65, .value=0x30, .type=IO_READ},
        {.addr=0x5c66, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x91df, .a=0x5c, .x=0xaf, .y=0x8b, .sp=0x82, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x91df, .value=0x30}, {.addr=0x91e0, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x9191, .a=0x5c, .x=0xaf, .y=0x8b, .sp=0x82, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x91df, .value=0x30}, {.addr=0x91e0, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x91df, .value=0x30, .type=IO_READ},
        {.addr=0x91e0, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x40a3, .a=0x53, .x=0x3a, .y=0x4a, .sp=0xad, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x40a3, .value=0x30}, {.addr=0x40a4, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x40a5, .a=0x53, .x=0x3a, .y=0x4a, .sp=0xad, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x40a3, .value=0x30}, {.addr=0x40a4, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x40a3, .value=0x30, .type=IO_READ},
        {.addr=0x40a4, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xe561, .a=0x51, .x=0x97, .y=0x86, .sp=0x7d, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xe561, .value=0x30}, {.addr=0xe562, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xe563, .a=0x51, .x=0x97, .y=0x86, .sp=0x7d, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xe561, .value=0x30}, {.addr=0xe562, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xe561, .value=0x30, .type=IO_READ},
        {.addr=0xe562, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x782f, .a=0x63, .x=0x30, .y=0xac, .sp=0x28, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x782f, .value=0x30}, {.addr=0x7830, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7831, .a=0x63, .x=0x30, .y=0xac, .sp=0x28, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x782f, .value=0x30}, {.addr=0x7830, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x782f, .value=0x30, .type=IO_READ},
        {.addr=0x7830, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x1906, .a=0x39, .x=0x42, .y=0xda, .sp=0xb2, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x1906, .value=0x30}, {.addr=0x1907, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x18de, .a=0x39, .x=0x42, .y=0xda, .sp=0xb2, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x1906, .value=0x30}, {.addr=0x1907, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x1906, .value=0x30, .type=IO_READ},
        {.addr=0x1907, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x43e3, .a=0xe6, .x=0xe7, .y=0x0a, .sp=0x4b, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x43e3, .value=0x30}, {.addr=0x43e4, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x4436, .a=0xe6, .x=0xe7, .y=0x0a, .sp=0x4b, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x43e3, .value=0x30}, {.addr=0x43e4, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x43e3, .value=0x30, .type=IO_READ},
        {.addr=0x43e4, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xc02e, .a=0x06, .x=0x75, .y=0xd2, .sp=0x74, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xc02e, .value=0x30}, {.addr=0xc02f, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xc030, .a=0x06, .x=0x75, .y=0xd2, .sp=0x74, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xc02e, .value=0x30}, {.addr=0xc02f, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xc02e, .value=0x30, .type=IO_READ},
        {.addr=0xc02f, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x7ce6, .a=0xf0, .x=0x47, .y=0x09, .sp=0xf5, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x7ce6, .value=0x30}, {.addr=0x7ce7, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x7ce8, .a=0xf0, .x=0x47, .y=0x09, .sp=0xf5, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x7ce6, .value=0x30}, {.addr=0x7ce7, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x7ce6, .value=0x30, .type=IO_READ},
        {.addr=0x7ce7, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xef50, .a=0x0b, .x=0x5d, .y=0x9b, .sp=0xf9, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xef50, .value=0x30}, {.addr=0xef51, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xef52, .a=0x0b, .x=0x5d, .y=0x9b, .sp=0xf9, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xef50, .value=0x30}, {.addr=0xef51, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xef50, .value=0x30, .type=IO_READ},
        {.addr=0xef51, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xc305, .a=0xf4, .x=0x26, .y=0xf5, .sp=0x82, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xc305, .value=0x30}, {.addr=0xc306, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xc2c1, .a=0xf4, .x=0x26, .y=0xf5, .sp=0x82, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xc305, .value=0x30}, {.addr=0xc306, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xc305, .value=0x30, .type=IO_READ},
        {.addr=0xc306, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x8a94, .a=0xe5, .x=0x47, .y=0xce, .sp=0x58, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x8a94, .value=0x30}, {.addr=0x8a95, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x8a99, .a=0xe5, .x=0x47, .y=0xce, .sp=0x58, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x8a94, .value=0x30}, {.addr=0x8a95, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x8a94, .value=0x30, .type=IO_READ},
        {.addr=0x8a95, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xf56a, .a=0xa8, .x=0x84, .y=0xc0, .sp=0x04, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xf56a, .value=0x30}, {.addr=0xf56b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf4f2, .a=0xa8, .x=0x84, .y=0xc0, .sp=0x04, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xf56a, .value=0x30}, {.addr=0xf56b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf56a, .value=0x30, .type=IO_READ},
        {.addr=0xf56b, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xa734, .a=0x4e, .x=0xd3, .y=0x4c, .sp=0x29, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xa734, .value=0x30}, {.addr=0xa735, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa736, .a=0x4e, .x=0xd3, .y=0x4c, .sp=0x29, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xa734, .value=0x30}, {.addr=0xa735, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa734, .value=0x30, .type=IO_READ},
        {.addr=0xa735, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xd907, .a=0x44, .x=0x52, .y=0x90, .sp=0x82, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xd907, .value=0x30}, {.addr=0xd908, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xd8ed, .a=0x44, .x=0x52, .y=0x90, .sp=0x82, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xd907, .value=0x30}, {.addr=0xd908, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xd907, .value=0x30, .type=IO_READ},
        {.addr=0xd908, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x2f96, .a=0x43, .x=0x74, .y=0x4d, .sp=0xad, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x2f96, .value=0x30}, {.addr=0x2f97, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x2f4b, .a=0x43, .x=0x74, .y=0x4d, .sp=0xad, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x2f96, .value=0x30}, {.addr=0x2f97, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x2f96, .value=0x30, .type=IO_READ},
        {.addr=0x2f97, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xe698, .a=0x3b, .x=0x79, .y=0x17, .sp=0xc0, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xe698, .value=0x30}, {.addr=0xe699, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xe69a, .a=0x3b, .x=0x79, .y=0x17, .sp=0xc0, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xe698, .value=0x30}, {.addr=0xe699, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xe698, .value=0x30, .type=IO_READ},
        {.addr=0xe699, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x0bbb, .a=0x58, .x=0xaa, .y=0x6c, .sp=0xaa, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0bbb, .value=0x30}, {.addr=0x0bbc, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x0bbd, .a=0x58, .x=0xaa, .y=0x6c, .sp=0xaa, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0bbb, .value=0x30}, {.addr=0x0bbc, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x0bbb, .value=0x30, .type=IO_READ},
        {.addr=0x0bbc, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x4f1d, .a=0x12, .x=0xd3, .y=0x79, .sp=0xd5, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x4f1d, .value=0x30}, {.addr=0x4f1e, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x4f1f, .a=0x12, .x=0xd3, .y=0x79, .sp=0xd5, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x4f1d, .value=0x30}, {.addr=0x4f1e, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x4f1d, .value=0x30, .type=IO_READ},
        {.addr=0x4f1e, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x4e0b, .a=0x7d, .x=0x8b, .y=0xe8, .sp=0x67, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x4e0b, .value=0x30}, {.addr=0x4e0c, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x4df1, .a=0x7d, .x=0x8b, .y=0xe8, .sp=0x67, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x4e0b, .value=0x30}, {.addr=0x4e0c, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x4e0b, .value=0x30, .type=IO_READ},
        {.addr=0x4e0c, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x7df5, .a=0x4b, .x=0xbe, .y=0xd2, .sp=0x0d, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x7df5, .value=0x30}, {.addr=0x7df6, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x7e0c, .a=0x4b, .x=0xbe, .y=0xd2, .sp=0x0d, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x7df5, .value=0x30}, {.addr=0x7df6, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x7df5, .value=0x30, .type=IO_READ},
        {.addr=0x7df6, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x8018, .a=0x3c, .x=0x34, .y=0xe8, .sp=0xda, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x8018, .value=0x30}, {.addr=0x8019, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x801a, .a=0x3c, .x=0x34, .y=0xe8, .sp=0xda, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x8018, .value=0x30}, {.addr=0x8019, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x8018, .value=0x30, .type=IO_READ},
        {.addr=0x8019, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xfe7e, .a=0x26, .x=0x75, .y=0x9f, .sp=0x4f, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xfe7e, .value=0x30}, {.addr=0xfe7f, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xfe80, .a=0x26, .x=0x75, .y=0x9f, .sp=0x4f, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xfe7e, .value=0x30}, {.addr=0xfe7f, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xfe7e, .value=0x30, .type=IO_READ},
        {.addr=0xfe7f, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x9595, .a=0x60, .x=0x15, .y=0x56, .sp=0x9d, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x9595, .value=0x30}, {.addr=0x9596, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x9597, .a=0x60, .x=0x15, .y=0x56, .sp=0x9d, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x9595, .value=0x30}, {.addr=0x9596, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x9595, .value=0x30, .type=IO_READ},
        {.addr=0x9596, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xd4d8, .a=0x05, .x=0x4b, .y=0xca, .sp=0x2c, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xd4d8, .value=0x30}, {.addr=0xd4d9, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xd4c1, .a=0x05, .x=0x4b, .y=0xca, .sp=0x2c, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xd4d8, .value=0x30}, {.addr=0xd4d9, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xd4d8, .value=0x30, .type=IO_READ},
        {.addr=0xd4d9, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xb17b, .a=0xff, .x=0xef, .y=0xdb, .sp=0x7a, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xb17b, .value=0x30}, {.addr=0xb17c, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xb1e9, .a=0xff, .x=0xef, .y=0xdb, .sp=0x7a, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xb17b, .value=0x30}, {.addr=0xb17c, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xb17b, .value=0x30, .type=IO_READ},
        {.addr=0xb17c, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xa42f, .a=0xfb, .x=0x7a, .y=0x9d, .sp=0xd0, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xa42f, .value=0x30}, {.addr=0xa430, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xa41c, .a=0xfb, .x=0x7a, .y=0x9d, .sp=0xd0, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xa42f, .value=0x30}, {.addr=0xa430, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xa42f, .value=0x30, .type=IO_READ},
        {.addr=0xa430, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xaf91, .a=0x92, .x=0xff, .y=0x8d, .sp=0x70, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xaf91, .value=0x30}, {.addr=0xaf92, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xaf93, .a=0x92, .x=0xff, .y=0x8d, .sp=0x70, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xaf91, .value=0x30}, {.addr=0xaf92, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xaf91, .value=0x30, .type=IO_READ},
        {.addr=0xaf92, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x26c2, .a=0x48, .x=0x7e, .y=0x95, .sp=0x0a, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x26c2, .value=0x30}, {.addr=0x26c3, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x268e, .a=0x48, .x=0x7e, .y=0x95, .sp=0x0a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x26c2, .value=0x30}, {.addr=0x26c3, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x26c2, .value=0x30, .type=IO_READ},
        {.addr=0x26c3, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xe7eb, .a=0x3e, .x=0x03, .y=0xa2, .sp=0x84, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xe7eb, .value=0x30}, {.addr=0xe7ec, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xe7ed, .a=0x3e, .x=0x03, .y=0xa2, .sp=0x84, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xe7eb, .value=0x30}, {.addr=0xe7ec, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xe7eb, .value=0x30, .type=IO_READ},
        {.addr=0xe7ec, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x68b7, .a=0xdf, .x=0xc5, .y=0x50, .sp=0x91, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x68b7, .value=0x30}, {.addr=0x68b8, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x68b9, .a=0xdf, .x=0xc5, .y=0x50, .sp=0x91, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x68b7, .value=0x30}, {.addr=0x68b8, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x68b7, .value=0x30, .type=IO_READ},
        {.addr=0x68b8, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x836f, .a=0x7e, .x=0x3b, .y=0x2a, .sp=0xfa, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x836f, .value=0x30}, {.addr=0x8370, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x8371, .a=0x7e, .x=0x3b, .y=0x2a, .sp=0xfa, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x836f, .value=0x30}, {.addr=0x8370, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x836f, .value=0x30, .type=IO_READ},
        {.addr=0x8370, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x0a6f, .a=0x5a, .x=0x02, .y=0xf6, .sp=0x1c, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0a6f, .value=0x30}, {.addr=0x0a70, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x0a3d, .a=0x5a, .x=0x02, .y=0xf6, .sp=0x1c, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0a6f, .value=0x30}, {.addr=0x0a70, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x0a6f, .value=0x30, .type=IO_READ},
        {.addr=0x0a70, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xc42e, .a=0x0a, .x=0xe4, .y=0xbf, .sp=0x81, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xc42e, .value=0x30}, {.addr=0xc42f, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xc430, .a=0x0a, .x=0xe4, .y=0xbf, .sp=0x81, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xc42e, .value=0x30}, {.addr=0xc42f, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xc42e, .value=0x30, .type=IO_READ},
        {.addr=0xc42f, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xa84b, .a=0xa1, .x=0xdc, .y=0x87, .sp=0xa9, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xa84b, .value=0x30}, {.addr=0xa84c, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xa7f6, .a=0xa1, .x=0xdc, .y=0x87, .sp=0xa9, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xa84b, .value=0x30}, {.addr=0xa84c, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xa84b, .value=0x30, .type=IO_READ},
        {.addr=0xa84c, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x0ff4, .a=0xc0, .x=0xf0, .y=0xa8, .sp=0xef, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0ff4, .value=0x30}, {.addr=0x0ff5, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x0fbc, .a=0xc0, .x=0xf0, .y=0xa8, .sp=0xef, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0ff4, .value=0x30}, {.addr=0x0ff5, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x0ff4, .value=0x30, .type=IO_READ},
        {.addr=0x0ff5, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x54f2, .a=0x2e, .x=0x7a, .y=0x6e, .sp=0xd3, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x54f2, .value=0x30}, {.addr=0x54f3, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x553c, .a=0x2e, .x=0x7a, .y=0x6e, .sp=0xd3, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x54f2, .value=0x30}, {.addr=0x54f3, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x54f2, .value=0x30, .type=IO_READ},
        {.addr=0x54f3, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x5112, .a=0xfe, .x=0x13, .y=0xc8, .sp=0x87, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x5112, .value=0x30}, {.addr=0x5113, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x5114, .a=0xfe, .x=0x13, .y=0xc8, .sp=0x87, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5112, .value=0x30}, {.addr=0x5113, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x5112, .value=0x30, .type=IO_READ},
        {.addr=0x5113, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0300) {
    const struct CPU_State initial_cpu = {.pc=0x9d0c, .a=0xaa, .x=0xc7, .y=0x4e, .sp=0xfe, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x9d0c, .value=0x30}, {.addr=0x9d0d, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x9d0e, .a=0xaa, .x=0xc7, .y=0x4e, .sp=0xfe, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x9d0c, .value=0x30}, {.addr=0x9d0d, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x9d0c, .value=0x30, .type=IO_READ},
        {.addr=0x9d0d, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0301) {
    const struct CPU_State initial_cpu = {.pc=0xc71f, .a=0x09, .x=0x4e, .y=0x16, .sp=0x73, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xc71f, .value=0x30}, {.addr=0xc720, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xc721, .a=0x09, .x=0x4e, .y=0x16, .sp=0x73, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xc71f, .value=0x30}, {.addr=0xc720, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xc71f, .value=0x30, .type=IO_READ},
        {.addr=0xc720, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0302) {
    const struct CPU_State initial_cpu = {.pc=0x29ad, .a=0xe4, .x=0x13, .y=0x06, .sp=0x6d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x29ad, .value=0x30}, {.addr=0x29ae, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x29af, .a=0xe4, .x=0x13, .y=0x06, .sp=0x6d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x29ad, .value=0x30}, {.addr=0x29ae, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x29ad, .value=0x30, .type=IO_READ},
        {.addr=0x29ae, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0303) {
    const struct CPU_State initial_cpu = {.pc=0x6e0e, .a=0x18, .x=0xe6, .y=0x0b, .sp=0x17, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x6e0e, .value=0x30}, {.addr=0x6e0f, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x6d94, .a=0x18, .x=0xe6, .y=0x0b, .sp=0x17, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x6e0e, .value=0x30}, {.addr=0x6e0f, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x6e0e, .value=0x30, .type=IO_READ},
        {.addr=0x6e0f, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0304) {
    const struct CPU_State initial_cpu = {.pc=0x8abc, .a=0xf5, .x=0x29, .y=0x68, .sp=0x39, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x8abc, .value=0x30}, {.addr=0x8abd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8aab, .a=0xf5, .x=0x29, .y=0x68, .sp=0x39, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x8abc, .value=0x30}, {.addr=0x8abd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8abc, .value=0x30, .type=IO_READ},
        {.addr=0x8abd, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0305) {
    const struct CPU_State initial_cpu = {.pc=0x3c76, .a=0x9f, .x=0x73, .y=0x2b, .sp=0xf9, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x3c76, .value=0x30}, {.addr=0x3c77, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x3c63, .a=0x9f, .x=0x73, .y=0x2b, .sp=0xf9, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x3c76, .value=0x30}, {.addr=0x3c77, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x3c76, .value=0x30, .type=IO_READ},
        {.addr=0x3c77, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0306) {
    const struct CPU_State initial_cpu = {.pc=0x7fe5, .a=0x8c, .x=0x6d, .y=0xd1, .sp=0x84, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x7fe5, .value=0x30}, {.addr=0x7fe6, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x7fe7, .a=0x8c, .x=0x6d, .y=0xd1, .sp=0x84, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x7fe5, .value=0x30}, {.addr=0x7fe6, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x7fe5, .value=0x30, .type=IO_READ},
        {.addr=0x7fe6, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0307) {
    const struct CPU_State initial_cpu = {.pc=0xa7ed, .a=0xef, .x=0x03, .y=0x35, .sp=0xaa, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xa7ed, .value=0x30}, {.addr=0xa7ee, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa7ef, .a=0xef, .x=0x03, .y=0x35, .sp=0xaa, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xa7ed, .value=0x30}, {.addr=0xa7ee, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa7ed, .value=0x30, .type=IO_READ},
        {.addr=0xa7ee, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0308) {
    const struct CPU_State initial_cpu = {.pc=0x6ef4, .a=0xa5, .x=0x03, .y=0x8e, .sp=0xff, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x6ef4, .value=0x30}, {.addr=0x6ef5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6efc, .a=0xa5, .x=0x03, .y=0x8e, .sp=0xff, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x6ef4, .value=0x30}, {.addr=0x6ef5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6ef4, .value=0x30, .type=IO_READ},
        {.addr=0x6ef5, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0309) {
    const struct CPU_State initial_cpu = {.pc=0x838c, .a=0x0e, .x=0x66, .y=0x48, .sp=0xff, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x838c, .value=0x30}, {.addr=0x838d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x834b, .a=0x0e, .x=0x66, .y=0x48, .sp=0xff, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x838c, .value=0x30}, {.addr=0x838d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x838c, .value=0x30, .type=IO_READ},
        {.addr=0x838d, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_030A) {
    const struct CPU_State initial_cpu = {.pc=0xbdfd, .a=0xac, .x=0xf9, .y=0x9e, .sp=0x29, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xbdfd, .value=0x30}, {.addr=0xbdfe, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xbe5a, .a=0xac, .x=0xf9, .y=0x9e, .sp=0x29, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xbdfd, .value=0x30}, {.addr=0xbdfe, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xbdfd, .value=0x30, .type=IO_READ},
        {.addr=0xbdfe, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_030B) {
    const struct CPU_State initial_cpu = {.pc=0x5a44, .a=0xe5, .x=0xeb, .y=0x0f, .sp=0xda, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x5a44, .value=0x30}, {.addr=0x5a45, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x59d7, .a=0xe5, .x=0xeb, .y=0x0f, .sp=0xda, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x5a44, .value=0x30}, {.addr=0x5a45, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x5a44, .value=0x30, .type=IO_READ},
        {.addr=0x5a45, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_030C) {
    const struct CPU_State initial_cpu = {.pc=0x3148, .a=0xc6, .x=0xa6, .y=0xf4, .sp=0x7e, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x3148, .value=0x30}, {.addr=0x3149, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x314a, .a=0xc6, .x=0xa6, .y=0xf4, .sp=0x7e, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x3148, .value=0x30}, {.addr=0x3149, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x3148, .value=0x30, .type=IO_READ},
        {.addr=0x3149, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_030D) {
    const struct CPU_State initial_cpu = {.pc=0xdd4f, .a=0x46, .x=0xe3, .y=0x09, .sp=0x70, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xdd4f, .value=0x30}, {.addr=0xdd50, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xdd49, .a=0x46, .x=0xe3, .y=0x09, .sp=0x70, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xdd4f, .value=0x30}, {.addr=0xdd50, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xdd4f, .value=0x30, .type=IO_READ},
        {.addr=0xdd50, .value=0xf8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_030E) {
    const struct CPU_State initial_cpu = {.pc=0xbe34, .a=0xa5, .x=0xa6, .y=0xc2, .sp=0x4c, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xbe34, .value=0x30}, {.addr=0xbe35, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xbe6e, .a=0xa5, .x=0xa6, .y=0xc2, .sp=0x4c, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xbe34, .value=0x30}, {.addr=0xbe35, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xbe34, .value=0x30, .type=IO_READ},
        {.addr=0xbe35, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_030F) {
    const struct CPU_State initial_cpu = {.pc=0x9fa8, .a=0xef, .x=0x75, .y=0xc0, .sp=0xff, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x9fa8, .value=0x30}, {.addr=0x9fa9, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x9ff8, .a=0xef, .x=0x75, .y=0xc0, .sp=0xff, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x9fa8, .value=0x30}, {.addr=0x9fa9, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x9fa8, .value=0x30, .type=IO_READ},
        {.addr=0x9fa9, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0310) {
    const struct CPU_State initial_cpu = {.pc=0x3323, .a=0x7f, .x=0x68, .y=0x79, .sp=0x55, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x3323, .value=0x30}, {.addr=0x3324, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x333c, .a=0x7f, .x=0x68, .y=0x79, .sp=0x55, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x3323, .value=0x30}, {.addr=0x3324, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x3323, .value=0x30, .type=IO_READ},
        {.addr=0x3324, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0311) {
    const struct CPU_State initial_cpu = {.pc=0x9f4a, .a=0x89, .x=0x7f, .y=0xdd, .sp=0xce, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x9f4a, .value=0x30}, {.addr=0x9f4b, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x9f4f, .a=0x89, .x=0x7f, .y=0xdd, .sp=0xce, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x9f4a, .value=0x30}, {.addr=0x9f4b, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x9f4a, .value=0x30, .type=IO_READ},
        {.addr=0x9f4b, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0312) {
    const struct CPU_State initial_cpu = {.pc=0x8cd1, .a=0x90, .x=0x3a, .y=0x93, .sp=0x98, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x8cd1, .value=0x30}, {.addr=0x8cd2, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x8cd3, .a=0x90, .x=0x3a, .y=0x93, .sp=0x98, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x8cd1, .value=0x30}, {.addr=0x8cd2, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x8cd1, .value=0x30, .type=IO_READ},
        {.addr=0x8cd2, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0313) {
    const struct CPU_State initial_cpu = {.pc=0xc9c7, .a=0xc6, .x=0x79, .y=0x28, .sp=0x3f, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xc9c7, .value=0x30}, {.addr=0xc9c8, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xc9c9, .a=0xc6, .x=0x79, .y=0x28, .sp=0x3f, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xc9c7, .value=0x30}, {.addr=0xc9c8, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xc9c7, .value=0x30, .type=IO_READ},
        {.addr=0xc9c8, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0314) {
    const struct CPU_State initial_cpu = {.pc=0x1c1a, .a=0xa7, .x=0xd8, .y=0x05, .sp=0x98, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x1c1a, .value=0x30}, {.addr=0x1c1b, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x1c06, .a=0xa7, .x=0xd8, .y=0x05, .sp=0x98, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x1c1a, .value=0x30}, {.addr=0x1c1b, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x1c1a, .value=0x30, .type=IO_READ},
        {.addr=0x1c1b, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0315) {
    const struct CPU_State initial_cpu = {.pc=0x8d6d, .a=0xae, .x=0x97, .y=0x9e, .sp=0x63, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x8d6d, .value=0x30}, {.addr=0x8d6e, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x8d6f, .a=0xae, .x=0x97, .y=0x9e, .sp=0x63, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x8d6d, .value=0x30}, {.addr=0x8d6e, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x8d6d, .value=0x30, .type=IO_READ},
        {.addr=0x8d6e, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0316) {
    const struct CPU_State initial_cpu = {.pc=0xcd45, .a=0xa8, .x=0x59, .y=0x04, .sp=0x4d, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xcd45, .value=0x30}, {.addr=0xcd46, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcd47, .a=0xa8, .x=0x59, .y=0x04, .sp=0x4d, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xcd45, .value=0x30}, {.addr=0xcd46, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcd45, .value=0x30, .type=IO_READ},
        {.addr=0xcd46, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0317) {
    const struct CPU_State initial_cpu = {.pc=0x2f54, .a=0xf7, .x=0xe6, .y=0xfe, .sp=0xc5, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x2f54, .value=0x30}, {.addr=0x2f55, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x2f56, .a=0xf7, .x=0xe6, .y=0xfe, .sp=0xc5, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x2f54, .value=0x30}, {.addr=0x2f55, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x2f54, .value=0x30, .type=IO_READ},
        {.addr=0x2f55, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0318) {
    const struct CPU_State initial_cpu = {.pc=0x5bd4, .a=0x2a, .x=0xda, .y=0xa8, .sp=0x4f, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x5bd4, .value=0x30}, {.addr=0x5bd5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5bf2, .a=0x2a, .x=0xda, .y=0xa8, .sp=0x4f, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x5bd4, .value=0x30}, {.addr=0x5bd5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5bd4, .value=0x30, .type=IO_READ},
        {.addr=0x5bd5, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0319) {
    const struct CPU_State initial_cpu = {.pc=0x2b9f, .a=0xab, .x=0x7b, .y=0x2e, .sp=0xae, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x2b9f, .value=0x30}, {.addr=0x2ba0, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x2ba1, .a=0xab, .x=0x7b, .y=0x2e, .sp=0xae, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x2b9f, .value=0x30}, {.addr=0x2ba0, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x2b9f, .value=0x30, .type=IO_READ},
        {.addr=0x2ba0, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_031A) {
    const struct CPU_State initial_cpu = {.pc=0xafa5, .a=0x41, .x=0x5a, .y=0x65, .sp=0x14, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xafa5, .value=0x30}, {.addr=0xafa6, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xafa7, .a=0x41, .x=0x5a, .y=0x65, .sp=0x14, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xafa5, .value=0x30}, {.addr=0xafa6, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xafa5, .value=0x30, .type=IO_READ},
        {.addr=0xafa6, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_031B) {
    const struct CPU_State initial_cpu = {.pc=0x33ba, .a=0x3f, .x=0xde, .y=0x59, .sp=0x51, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x33ba, .value=0x30}, {.addr=0x33bb, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x33bc, .a=0x3f, .x=0xde, .y=0x59, .sp=0x51, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x33ba, .value=0x30}, {.addr=0x33bb, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x33ba, .value=0x30, .type=IO_READ},
        {.addr=0x33bb, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_031C) {
    const struct CPU_State initial_cpu = {.pc=0x5502, .a=0xf0, .x=0xe9, .y=0xa7, .sp=0x5b, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x5502, .value=0x30}, {.addr=0x5503, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x5504, .a=0xf0, .x=0xe9, .y=0xa7, .sp=0x5b, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x5502, .value=0x30}, {.addr=0x5503, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x5502, .value=0x30, .type=IO_READ},
        {.addr=0x5503, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_031D) {
    const struct CPU_State initial_cpu = {.pc=0x2571, .a=0x25, .x=0xbe, .y=0xdc, .sp=0x4b, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x2571, .value=0x30}, {.addr=0x2572, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x25d9, .a=0x25, .x=0xbe, .y=0xdc, .sp=0x4b, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x2571, .value=0x30}, {.addr=0x2572, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2571, .value=0x30, .type=IO_READ},
        {.addr=0x2572, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_031E) {
    const struct CPU_State initial_cpu = {.pc=0x08c6, .a=0xc2, .x=0xae, .y=0x41, .sp=0x60, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x08c6, .value=0x30}, {.addr=0x08c7, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x08c8, .a=0xc2, .x=0xae, .y=0x41, .sp=0x60, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x08c6, .value=0x30}, {.addr=0x08c7, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x08c6, .value=0x30, .type=IO_READ},
        {.addr=0x08c7, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_031F) {
    const struct CPU_State initial_cpu = {.pc=0x9c8e, .a=0x57, .x=0x00, .y=0x8c, .sp=0x7c, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x9c8e, .value=0x30}, {.addr=0x9c8f, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x9c2b, .a=0x57, .x=0x00, .y=0x8c, .sp=0x7c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9c8e, .value=0x30}, {.addr=0x9c8f, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x9c8e, .value=0x30, .type=IO_READ},
        {.addr=0x9c8f, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0320) {
    const struct CPU_State initial_cpu = {.pc=0x393c, .a=0xb7, .x=0x8c, .y=0x45, .sp=0xb9, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x393c, .value=0x30}, {.addr=0x393d, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x3916, .a=0xb7, .x=0x8c, .y=0x45, .sp=0xb9, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x393c, .value=0x30}, {.addr=0x393d, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x393c, .value=0x30, .type=IO_READ},
        {.addr=0x393d, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0321) {
    const struct CPU_State initial_cpu = {.pc=0x7e21, .a=0x92, .x=0x11, .y=0xaf, .sp=0x1d, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x7e21, .value=0x30}, {.addr=0x7e22, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x7e8b, .a=0x92, .x=0x11, .y=0xaf, .sp=0x1d, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7e21, .value=0x30}, {.addr=0x7e22, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x7e21, .value=0x30, .type=IO_READ},
        {.addr=0x7e22, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0322) {
    const struct CPU_State initial_cpu = {.pc=0xfd37, .a=0x9f, .x=0x18, .y=0xc0, .sp=0x53, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xfd37, .value=0x30}, {.addr=0xfd38, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xfd39, .a=0x9f, .x=0x18, .y=0xc0, .sp=0x53, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xfd37, .value=0x30}, {.addr=0xfd38, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xfd37, .value=0x30, .type=IO_READ},
        {.addr=0xfd38, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0323) {
    const struct CPU_State initial_cpu = {.pc=0x915d, .a=0x36, .x=0xd1, .y=0xb5, .sp=0x05, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x915d, .value=0x30}, {.addr=0x915e, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x9142, .a=0x36, .x=0xd1, .y=0xb5, .sp=0x05, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x915d, .value=0x30}, {.addr=0x915e, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x915d, .value=0x30, .type=IO_READ},
        {.addr=0x915e, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0324) {
    const struct CPU_State initial_cpu = {.pc=0x3bcd, .a=0xb5, .x=0x1d, .y=0x2a, .sp=0x24, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x3bcd, .value=0x30}, {.addr=0x3bce, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x3bcf, .a=0xb5, .x=0x1d, .y=0x2a, .sp=0x24, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x3bcd, .value=0x30}, {.addr=0x3bce, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x3bcd, .value=0x30, .type=IO_READ},
        {.addr=0x3bce, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0325) {
    const struct CPU_State initial_cpu = {.pc=0x5e34, .a=0x96, .x=0xc5, .y=0x80, .sp=0x9b, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x5e34, .value=0x30}, {.addr=0x5e35, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x5e36, .a=0x96, .x=0xc5, .y=0x80, .sp=0x9b, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x5e34, .value=0x30}, {.addr=0x5e35, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x5e34, .value=0x30, .type=IO_READ},
        {.addr=0x5e35, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0326) {
    const struct CPU_State initial_cpu = {.pc=0x0716, .a=0xea, .x=0x83, .y=0x8a, .sp=0x43, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0716, .value=0x30}, {.addr=0x0717, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x0718, .a=0xea, .x=0x83, .y=0x8a, .sp=0x43, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x0716, .value=0x30}, {.addr=0x0717, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x0716, .value=0x30, .type=IO_READ},
        {.addr=0x0717, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0327) {
    const struct CPU_State initial_cpu = {.pc=0x7d59, .a=0xc7, .x=0xbe, .y=0x5d, .sp=0x81, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x7d59, .value=0x30}, {.addr=0x7d5a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x7d1b, .a=0xc7, .x=0xbe, .y=0x5d, .sp=0x81, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x7d59, .value=0x30}, {.addr=0x7d5a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x7d59, .value=0x30, .type=IO_READ},
        {.addr=0x7d5a, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0328) {
    const struct CPU_State initial_cpu = {.pc=0x5b2e, .a=0xa0, .x=0x3c, .y=0xe6, .sp=0xe3, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x5b2e, .value=0x30}, {.addr=0x5b2f, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x5b30, .a=0xa0, .x=0x3c, .y=0xe6, .sp=0xe3, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x5b2e, .value=0x30}, {.addr=0x5b2f, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x5b2e, .value=0x30, .type=IO_READ},
        {.addr=0x5b2f, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0329) {
    const struct CPU_State initial_cpu = {.pc=0x8801, .a=0xe6, .x=0x88, .y=0x0b, .sp=0x78, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x8801, .value=0x30}, {.addr=0x8802, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8803, .a=0xe6, .x=0x88, .y=0x0b, .sp=0x78, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x8801, .value=0x30}, {.addr=0x8802, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8801, .value=0x30, .type=IO_READ},
        {.addr=0x8802, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_032A) {
    const struct CPU_State initial_cpu = {.pc=0xf1f3, .a=0x8f, .x=0x09, .y=0x57, .sp=0xa7, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xf1f3, .value=0x30}, {.addr=0xf1f4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf1f5, .a=0x8f, .x=0x09, .y=0x57, .sp=0xa7, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xf1f3, .value=0x30}, {.addr=0xf1f4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf1f3, .value=0x30, .type=IO_READ},
        {.addr=0xf1f4, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_032B) {
    const struct CPU_State initial_cpu = {.pc=0x2a91, .a=0x6c, .x=0xed, .y=0xa3, .sp=0xd6, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x2a91, .value=0x30}, {.addr=0x2a92, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x2aed, .a=0x6c, .x=0xed, .y=0xa3, .sp=0xd6, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x2a91, .value=0x30}, {.addr=0x2a92, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x2a91, .value=0x30, .type=IO_READ},
        {.addr=0x2a92, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_032C) {
    const struct CPU_State initial_cpu = {.pc=0x5e28, .a=0xdd, .x=0x54, .y=0x8e, .sp=0x4b, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x5e28, .value=0x30}, {.addr=0x5e29, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x5e2a, .a=0xdd, .x=0x54, .y=0x8e, .sp=0x4b, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x5e28, .value=0x30}, {.addr=0x5e29, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x5e28, .value=0x30, .type=IO_READ},
        {.addr=0x5e29, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_032D) {
    const struct CPU_State initial_cpu = {.pc=0x0311, .a=0xab, .x=0x34, .y=0xbd, .sp=0x6d, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0311, .value=0x30}, {.addr=0x0312, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x0371, .a=0xab, .x=0x34, .y=0xbd, .sp=0x6d, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0311, .value=0x30}, {.addr=0x0312, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x0311, .value=0x30, .type=IO_READ},
        {.addr=0x0312, .value=0x5e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_032E) {
    const struct CPU_State initial_cpu = {.pc=0x0c7d, .a=0x50, .x=0x6d, .y=0x9f, .sp=0xb0, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0c7d, .value=0x30}, {.addr=0x0c7e, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x0c37, .a=0x50, .x=0x6d, .y=0x9f, .sp=0xb0, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0c7d, .value=0x30}, {.addr=0x0c7e, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x0c7d, .value=0x30, .type=IO_READ},
        {.addr=0x0c7e, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_032F) {
    const struct CPU_State initial_cpu = {.pc=0xc1d6, .a=0xd8, .x=0xc1, .y=0xca, .sp=0xdf, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xc1d6, .value=0x30}, {.addr=0xc1d7, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xc1ce, .a=0xd8, .x=0xc1, .y=0xca, .sp=0xdf, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc1d6, .value=0x30}, {.addr=0xc1d7, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xc1d6, .value=0x30, .type=IO_READ},
        {.addr=0xc1d7, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0330) {
    const struct CPU_State initial_cpu = {.pc=0x2a73, .a=0x2a, .x=0x9d, .y=0xa2, .sp=0xfc, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x2a73, .value=0x30}, {.addr=0x2a74, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2a75, .a=0x2a, .x=0x9d, .y=0xa2, .sp=0xfc, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x2a73, .value=0x30}, {.addr=0x2a74, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2a73, .value=0x30, .type=IO_READ},
        {.addr=0x2a74, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0331) {
    const struct CPU_State initial_cpu = {.pc=0x1848, .a=0x5f, .x=0xe5, .y=0x6a, .sp=0x5f, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x1848, .value=0x30}, {.addr=0x1849, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x1814, .a=0x5f, .x=0xe5, .y=0x6a, .sp=0x5f, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x1848, .value=0x30}, {.addr=0x1849, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x1848, .value=0x30, .type=IO_READ},
        {.addr=0x1849, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0332) {
    const struct CPU_State initial_cpu = {.pc=0xda29, .a=0x69, .x=0x9d, .y=0xa1, .sp=0xee, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xda29, .value=0x30}, {.addr=0xda2a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xda67, .a=0x69, .x=0x9d, .y=0xa1, .sp=0xee, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xda29, .value=0x30}, {.addr=0xda2a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xda29, .value=0x30, .type=IO_READ},
        {.addr=0xda2a, .value=0x3c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0333) {
    const struct CPU_State initial_cpu = {.pc=0xd122, .a=0x5f, .x=0x92, .y=0x28, .sp=0xee, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xd122, .value=0x30}, {.addr=0xd123, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd124, .a=0x5f, .x=0x92, .y=0x28, .sp=0xee, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0xd122, .value=0x30}, {.addr=0xd123, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd122, .value=0x30, .type=IO_READ},
        {.addr=0xd123, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0334) {
    const struct CPU_State initial_cpu = {.pc=0xde03, .a=0x95, .x=0x87, .y=0x7f, .sp=0x97, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xde03, .value=0x30}, {.addr=0xde04, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xde05, .a=0x95, .x=0x87, .y=0x7f, .sp=0x97, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xde03, .value=0x30}, {.addr=0xde04, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xde03, .value=0x30, .type=IO_READ},
        {.addr=0xde04, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0335) {
    const struct CPU_State initial_cpu = {.pc=0x6d5b, .a=0xc8, .x=0xb6, .y=0x50, .sp=0x78, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x6d5b, .value=0x30}, {.addr=0x6d5c, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x6d5d, .a=0xc8, .x=0xb6, .y=0x50, .sp=0x78, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x6d5b, .value=0x30}, {.addr=0x6d5c, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x6d5b, .value=0x30, .type=IO_READ},
        {.addr=0x6d5c, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0336) {
    const struct CPU_State initial_cpu = {.pc=0xf45a, .a=0x73, .x=0x3c, .y=0x1b, .sp=0xa6, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xf45a, .value=0x30}, {.addr=0xf45b, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xf484, .a=0x73, .x=0x3c, .y=0x1b, .sp=0xa6, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xf45a, .value=0x30}, {.addr=0xf45b, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xf45a, .value=0x30, .type=IO_READ},
        {.addr=0xf45b, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0337) {
    const struct CPU_State initial_cpu = {.pc=0xe6f1, .a=0xf0, .x=0xc1, .y=0x8d, .sp=0x3b, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xe6f1, .value=0x30}, {.addr=0xe6f2, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe6f3, .a=0xf0, .x=0xc1, .y=0x8d, .sp=0x3b, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xe6f1, .value=0x30}, {.addr=0xe6f2, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe6f1, .value=0x30, .type=IO_READ},
        {.addr=0xe6f2, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0338) {
    const struct CPU_State initial_cpu = {.pc=0x6753, .a=0x9f, .x=0xb5, .y=0x22, .sp=0x4c, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x6753, .value=0x30}, {.addr=0x6754, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x6755, .a=0x9f, .x=0xb5, .y=0x22, .sp=0x4c, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x6753, .value=0x30}, {.addr=0x6754, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x6753, .value=0x30, .type=IO_READ},
        {.addr=0x6754, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0339) {
    const struct CPU_State initial_cpu = {.pc=0x317d, .a=0x1e, .x=0xfd, .y=0xb1, .sp=0x1d, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x317d, .value=0x30}, {.addr=0x317e, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x3188, .a=0x1e, .x=0xfd, .y=0xb1, .sp=0x1d, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x317d, .value=0x30}, {.addr=0x317e, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x317d, .value=0x30, .type=IO_READ},
        {.addr=0x317e, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_033A) {
    const struct CPU_State initial_cpu = {.pc=0x6f4c, .a=0x2a, .x=0xa7, .y=0xd4, .sp=0x2c, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x6f4c, .value=0x30}, {.addr=0x6f4d, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x6fcc, .a=0x2a, .x=0xa7, .y=0xd4, .sp=0x2c, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x6f4c, .value=0x30}, {.addr=0x6f4d, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x6f4c, .value=0x30, .type=IO_READ},
        {.addr=0x6f4d, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_033B) {
    const struct CPU_State initial_cpu = {.pc=0x8be3, .a=0xa1, .x=0x23, .y=0xf3, .sp=0xa7, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x8be3, .value=0x30}, {.addr=0x8be4, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x8bfd, .a=0xa1, .x=0x23, .y=0xf3, .sp=0xa7, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x8be3, .value=0x30}, {.addr=0x8be4, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x8be3, .value=0x30, .type=IO_READ},
        {.addr=0x8be4, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_033C) {
    const struct CPU_State initial_cpu = {.pc=0x9f0b, .a=0xc5, .x=0xb4, .y=0x5b, .sp=0xc1, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x9f0b, .value=0x30}, {.addr=0x9f0c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9f0d, .a=0xc5, .x=0xb4, .y=0x5b, .sp=0xc1, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x9f0b, .value=0x30}, {.addr=0x9f0c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9f0b, .value=0x30, .type=IO_READ},
        {.addr=0x9f0c, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_033D) {
    const struct CPU_State initial_cpu = {.pc=0x9e16, .a=0xee, .x=0x81, .y=0xae, .sp=0x0b, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x9e16, .value=0x30}, {.addr=0x9e17, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x9e18, .a=0xee, .x=0x81, .y=0xae, .sp=0x0b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x9e16, .value=0x30}, {.addr=0x9e17, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x9e16, .value=0x30, .type=IO_READ},
        {.addr=0x9e17, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_033E) {
    const struct CPU_State initial_cpu = {.pc=0x7b01, .a=0x51, .x=0x8e, .y=0xe8, .sp=0x00, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x7b01, .value=0x30}, {.addr=0x7b02, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x7b12, .a=0x51, .x=0x8e, .y=0xe8, .sp=0x00, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x7b01, .value=0x30}, {.addr=0x7b02, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x7b01, .value=0x30, .type=IO_READ},
        {.addr=0x7b02, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_033F) {
    const struct CPU_State initial_cpu = {.pc=0x03df, .a=0x8d, .x=0xca, .y=0x81, .sp=0x86, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x03df, .value=0x30}, {.addr=0x03e0, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x03f6, .a=0x8d, .x=0xca, .y=0x81, .sp=0x86, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x03df, .value=0x30}, {.addr=0x03e0, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x03df, .value=0x30, .type=IO_READ},
        {.addr=0x03e0, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0340) {
    const struct CPU_State initial_cpu = {.pc=0x5c83, .a=0xce, .x=0x35, .y=0x01, .sp=0x1d, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x5c83, .value=0x30}, {.addr=0x5c84, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x5c59, .a=0xce, .x=0x35, .y=0x01, .sp=0x1d, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x5c83, .value=0x30}, {.addr=0x5c84, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x5c83, .value=0x30, .type=IO_READ},
        {.addr=0x5c84, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0341) {
    const struct CPU_State initial_cpu = {.pc=0x82e9, .a=0x69, .x=0xbb, .y=0x2e, .sp=0xe0, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x82e9, .value=0x30}, {.addr=0x82ea, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x82eb, .a=0x69, .x=0xbb, .y=0x2e, .sp=0xe0, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x82e9, .value=0x30}, {.addr=0x82ea, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x82e9, .value=0x30, .type=IO_READ},
        {.addr=0x82ea, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0342) {
    const struct CPU_State initial_cpu = {.pc=0xa5a0, .a=0x6a, .x=0x42, .y=0xe4, .sp=0xfd, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xa5a0, .value=0x30}, {.addr=0xa5a1, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xa5a2, .a=0x6a, .x=0x42, .y=0xe4, .sp=0xfd, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xa5a0, .value=0x30}, {.addr=0xa5a1, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xa5a0, .value=0x30, .type=IO_READ},
        {.addr=0xa5a1, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0343) {
    const struct CPU_State initial_cpu = {.pc=0x3c59, .a=0x73, .x=0xa8, .y=0xd4, .sp=0xe0, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x3c59, .value=0x30}, {.addr=0x3c5a, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x3c5b, .a=0x73, .x=0xa8, .y=0xd4, .sp=0xe0, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x3c59, .value=0x30}, {.addr=0x3c5a, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x3c59, .value=0x30, .type=IO_READ},
        {.addr=0x3c5a, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0344) {
    const struct CPU_State initial_cpu = {.pc=0xdd58, .a=0x10, .x=0x10, .y=0xc2, .sp=0xb5, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xdd58, .value=0x30}, {.addr=0xdd59, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xdd32, .a=0x10, .x=0x10, .y=0xc2, .sp=0xb5, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xdd58, .value=0x30}, {.addr=0xdd59, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xdd58, .value=0x30, .type=IO_READ},
        {.addr=0xdd59, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0345) {
    const struct CPU_State initial_cpu = {.pc=0xb193, .a=0x50, .x=0xbf, .y=0xfb, .sp=0x5b, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xb193, .value=0x30}, {.addr=0xb194, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xb195, .a=0x50, .x=0xbf, .y=0xfb, .sp=0x5b, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xb193, .value=0x30}, {.addr=0xb194, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xb193, .value=0x30, .type=IO_READ},
        {.addr=0xb194, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0346) {
    const struct CPU_State initial_cpu = {.pc=0xe154, .a=0x42, .x=0x98, .y=0x2f, .sp=0xb7, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xe154, .value=0x30}, {.addr=0xe155, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xe146, .a=0x42, .x=0x98, .y=0x2f, .sp=0xb7, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xe154, .value=0x30}, {.addr=0xe155, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xe154, .value=0x30, .type=IO_READ},
        {.addr=0xe155, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0347) {
    const struct CPU_State initial_cpu = {.pc=0x00ab, .a=0xc3, .x=0x73, .y=0x39, .sp=0x74, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0x30}, {.addr=0x00ac, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x006d, .a=0xc3, .x=0x73, .y=0x39, .sp=0x74, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0x30}, {.addr=0x00ac, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x00ab, .value=0x30, .type=IO_READ},
        {.addr=0x00ac, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0348) {
    const struct CPU_State initial_cpu = {.pc=0xde89, .a=0x2b, .x=0x6d, .y=0x99, .sp=0x97, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xde89, .value=0x30}, {.addr=0xde8a, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xde21, .a=0x2b, .x=0x6d, .y=0x99, .sp=0x97, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xde89, .value=0x30}, {.addr=0xde8a, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xde89, .value=0x30, .type=IO_READ},
        {.addr=0xde8a, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0349) {
    const struct CPU_State initial_cpu = {.pc=0x3352, .a=0xe7, .x=0xba, .y=0x84, .sp=0xd9, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x3352, .value=0x30}, {.addr=0x3353, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x338a, .a=0xe7, .x=0xba, .y=0x84, .sp=0xd9, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x3352, .value=0x30}, {.addr=0x3353, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x3352, .value=0x30, .type=IO_READ},
        {.addr=0x3353, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_034A) {
    const struct CPU_State initial_cpu = {.pc=0xe3b0, .a=0x54, .x=0xd4, .y=0x74, .sp=0x72, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xe3b0, .value=0x30}, {.addr=0xe3b1, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xe3b2, .a=0x54, .x=0xd4, .y=0x74, .sp=0x72, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xe3b0, .value=0x30}, {.addr=0xe3b1, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xe3b0, .value=0x30, .type=IO_READ},
        {.addr=0xe3b1, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_034B) {
    const struct CPU_State initial_cpu = {.pc=0x1cd9, .a=0xd4, .x=0x99, .y=0xd3, .sp=0x83, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x1cd9, .value=0x30}, {.addr=0x1cda, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x1cd0, .a=0xd4, .x=0x99, .y=0xd3, .sp=0x83, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x1cd9, .value=0x30}, {.addr=0x1cda, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x1cd9, .value=0x30, .type=IO_READ},
        {.addr=0x1cda, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_034C) {
    const struct CPU_State initial_cpu = {.pc=0xe220, .a=0xc8, .x=0x88, .y=0x0e, .sp=0xbd, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xe220, .value=0x30}, {.addr=0xe221, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xe29b, .a=0xc8, .x=0x88, .y=0x0e, .sp=0xbd, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xe220, .value=0x30}, {.addr=0xe221, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xe220, .value=0x30, .type=IO_READ},
        {.addr=0xe221, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_034D) {
    const struct CPU_State initial_cpu = {.pc=0x2e8f, .a=0xac, .x=0x50, .y=0xf3, .sp=0x53, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x2e8f, .value=0x30}, {.addr=0x2e90, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x2e91, .a=0xac, .x=0x50, .y=0xf3, .sp=0x53, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x2e8f, .value=0x30}, {.addr=0x2e90, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x2e8f, .value=0x30, .type=IO_READ},
        {.addr=0x2e90, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_034E) {
    const struct CPU_State initial_cpu = {.pc=0xcb46, .a=0x86, .x=0x88, .y=0x7b, .sp=0x0b, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xcb46, .value=0x30}, {.addr=0xcb47, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcb48, .a=0x86, .x=0x88, .y=0x7b, .sp=0x0b, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xcb46, .value=0x30}, {.addr=0xcb47, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcb46, .value=0x30, .type=IO_READ},
        {.addr=0xcb47, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_034F) {
    const struct CPU_State initial_cpu = {.pc=0x684b, .a=0xf4, .x=0xca, .y=0x56, .sp=0xba, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x684b, .value=0x30}, {.addr=0x684c, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x684d, .a=0xf4, .x=0xca, .y=0x56, .sp=0xba, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x684b, .value=0x30}, {.addr=0x684c, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x684b, .value=0x30, .type=IO_READ},
        {.addr=0x684c, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0350) {
    const struct CPU_State initial_cpu = {.pc=0x679d, .a=0xb2, .x=0x27, .y=0xca, .sp=0x0a, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x679d, .value=0x30}, {.addr=0x679e, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x679f, .a=0xb2, .x=0x27, .y=0xca, .sp=0x0a, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x679d, .value=0x30}, {.addr=0x679e, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x679d, .value=0x30, .type=IO_READ},
        {.addr=0x679e, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0351) {
    const struct CPU_State initial_cpu = {.pc=0x9927, .a=0xc2, .x=0x77, .y=0xa4, .sp=0x01, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x9927, .value=0x30}, {.addr=0x9928, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x98c2, .a=0xc2, .x=0x77, .y=0xa4, .sp=0x01, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x9927, .value=0x30}, {.addr=0x9928, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x9927, .value=0x30, .type=IO_READ},
        {.addr=0x9928, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0352) {
    const struct CPU_State initial_cpu = {.pc=0x7440, .a=0xde, .x=0xb1, .y=0xc3, .sp=0x66, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x7440, .value=0x30}, {.addr=0x7441, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x73f9, .a=0xde, .x=0xb1, .y=0xc3, .sp=0x66, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x7440, .value=0x30}, {.addr=0x7441, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x7440, .value=0x30, .type=IO_READ},
        {.addr=0x7441, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0353) {
    const struct CPU_State initial_cpu = {.pc=0xb253, .a=0x6c, .x=0x7e, .y=0x5c, .sp=0x4f, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xb253, .value=0x30}, {.addr=0xb254, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xb20b, .a=0x6c, .x=0x7e, .y=0x5c, .sp=0x4f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xb253, .value=0x30}, {.addr=0xb254, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xb253, .value=0x30, .type=IO_READ},
        {.addr=0xb254, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0354) {
    const struct CPU_State initial_cpu = {.pc=0x4d9f, .a=0xff, .x=0x00, .y=0x7f, .sp=0xda, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x4d9f, .value=0x30}, {.addr=0x4da0, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x4d52, .a=0xff, .x=0x00, .y=0x7f, .sp=0xda, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x4d9f, .value=0x30}, {.addr=0x4da0, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x4d9f, .value=0x30, .type=IO_READ},
        {.addr=0x4da0, .value=0xb1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0355) {
    const struct CPU_State initial_cpu = {.pc=0xa6f8, .a=0x69, .x=0x32, .y=0x1b, .sp=0x2f, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xa6f8, .value=0x30}, {.addr=0xa6f9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa6fa, .a=0x69, .x=0x32, .y=0x1b, .sp=0x2f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xa6f8, .value=0x30}, {.addr=0xa6f9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa6f8, .value=0x30, .type=IO_READ},
        {.addr=0xa6f9, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0356) {
    const struct CPU_State initial_cpu = {.pc=0x817f, .a=0xf9, .x=0x4e, .y=0x2c, .sp=0x77, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x817f, .value=0x30}, {.addr=0x8180, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x81f4, .a=0xf9, .x=0x4e, .y=0x2c, .sp=0x77, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x817f, .value=0x30}, {.addr=0x8180, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x817f, .value=0x30, .type=IO_READ},
        {.addr=0x8180, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0357) {
    const struct CPU_State initial_cpu = {.pc=0x6826, .a=0x22, .x=0xd9, .y=0x2d, .sp=0xde, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x6826, .value=0x30}, {.addr=0x6827, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6828, .a=0x22, .x=0xd9, .y=0x2d, .sp=0xde, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x6826, .value=0x30}, {.addr=0x6827, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6826, .value=0x30, .type=IO_READ},
        {.addr=0x6827, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0358) {
    const struct CPU_State initial_cpu = {.pc=0xfb09, .a=0xd8, .x=0x00, .y=0x62, .sp=0x48, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xfb09, .value=0x30}, {.addr=0xfb0a, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xfb0b, .a=0xd8, .x=0x00, .y=0x62, .sp=0x48, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xfb09, .value=0x30}, {.addr=0xfb0a, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xfb09, .value=0x30, .type=IO_READ},
        {.addr=0xfb0a, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0359) {
    const struct CPU_State initial_cpu = {.pc=0x3446, .a=0x62, .x=0x62, .y=0xcb, .sp=0x8a, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x3446, .value=0x30}, {.addr=0x3447, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x3450, .a=0x62, .x=0x62, .y=0xcb, .sp=0x8a, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x3446, .value=0x30}, {.addr=0x3447, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x3446, .value=0x30, .type=IO_READ},
        {.addr=0x3447, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_035A) {
    const struct CPU_State initial_cpu = {.pc=0xad4c, .a=0xe9, .x=0x3f, .y=0x01, .sp=0xfc, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xad4c, .value=0x30}, {.addr=0xad4d, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xadac, .a=0xe9, .x=0x3f, .y=0x01, .sp=0xfc, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xad4c, .value=0x30}, {.addr=0xad4d, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xad4c, .value=0x30, .type=IO_READ},
        {.addr=0xad4d, .value=0x5e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_035B) {
    const struct CPU_State initial_cpu = {.pc=0x32d7, .a=0xff, .x=0x77, .y=0x89, .sp=0xde, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x32d7, .value=0x30}, {.addr=0x32d8, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x3302, .a=0xff, .x=0x77, .y=0x89, .sp=0xde, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x32d7, .value=0x30}, {.addr=0x32d8, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x32d7, .value=0x30, .type=IO_READ},
        {.addr=0x32d8, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_035C) {
    const struct CPU_State initial_cpu = {.pc=0x5466, .a=0x33, .x=0xd0, .y=0xcb, .sp=0x25, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x5466, .value=0x30}, {.addr=0x5467, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x54e0, .a=0x33, .x=0xd0, .y=0xcb, .sp=0x25, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x5466, .value=0x30}, {.addr=0x5467, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x5466, .value=0x30, .type=IO_READ},
        {.addr=0x5467, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_035D) {
    const struct CPU_State initial_cpu = {.pc=0x95d1, .a=0x73, .x=0xec, .y=0x31, .sp=0x23, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x95d1, .value=0x30}, {.addr=0x95d2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x95d3, .a=0x73, .x=0xec, .y=0x31, .sp=0x23, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x95d1, .value=0x30}, {.addr=0x95d2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x95d1, .value=0x30, .type=IO_READ},
        {.addr=0x95d2, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_035E) {
    const struct CPU_State initial_cpu = {.pc=0x084e, .a=0x03, .x=0x40, .y=0xf0, .sp=0xf7, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x084e, .value=0x30}, {.addr=0x084f, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x0850, .a=0x03, .x=0x40, .y=0xf0, .sp=0xf7, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x084e, .value=0x30}, {.addr=0x084f, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x084e, .value=0x30, .type=IO_READ},
        {.addr=0x084f, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_035F) {
    const struct CPU_State initial_cpu = {.pc=0xadd9, .a=0xc8, .x=0x76, .y=0xa0, .sp=0x7b, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xadd9, .value=0x30}, {.addr=0xadda, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xaddb, .a=0xc8, .x=0x76, .y=0xa0, .sp=0x7b, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xadd9, .value=0x30}, {.addr=0xadda, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xadd9, .value=0x30, .type=IO_READ},
        {.addr=0xadda, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0360) {
    const struct CPU_State initial_cpu = {.pc=0x7b07, .a=0x76, .x=0x3d, .y=0x31, .sp=0x3a, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x7b07, .value=0x30}, {.addr=0x7b08, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7a89, .a=0x76, .x=0x3d, .y=0x31, .sp=0x3a, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x7b07, .value=0x30}, {.addr=0x7b08, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7b07, .value=0x30, .type=IO_READ},
        {.addr=0x7b08, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0361) {
    const struct CPU_State initial_cpu = {.pc=0x0a9e, .a=0xa9, .x=0x41, .y=0xa4, .sp=0x41, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0a9e, .value=0x30}, {.addr=0x0a9f, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x0aa0, .a=0xa9, .x=0x41, .y=0xa4, .sp=0x41, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0a9e, .value=0x30}, {.addr=0x0a9f, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x0a9e, .value=0x30, .type=IO_READ},
        {.addr=0x0a9f, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0362) {
    const struct CPU_State initial_cpu = {.pc=0x9af4, .a=0x17, .x=0xee, .y=0xbd, .sp=0x42, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x9af4, .value=0x30}, {.addr=0x9af5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9b13, .a=0x17, .x=0xee, .y=0xbd, .sp=0x42, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x9af4, .value=0x30}, {.addr=0x9af5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9af4, .value=0x30, .type=IO_READ},
        {.addr=0x9af5, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0363) {
    const struct CPU_State initial_cpu = {.pc=0xcfaa, .a=0x7f, .x=0x36, .y=0x7a, .sp=0xfa, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xcfaa, .value=0x30}, {.addr=0xcfab, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xcfac, .a=0x7f, .x=0x36, .y=0x7a, .sp=0xfa, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xcfaa, .value=0x30}, {.addr=0xcfab, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xcfaa, .value=0x30, .type=IO_READ},
        {.addr=0xcfab, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0364) {
    const struct CPU_State initial_cpu = {.pc=0xe152, .a=0x46, .x=0xdd, .y=0x23, .sp=0x07, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xe152, .value=0x30}, {.addr=0xe153, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xe19b, .a=0x46, .x=0xdd, .y=0x23, .sp=0x07, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xe152, .value=0x30}, {.addr=0xe153, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xe152, .value=0x30, .type=IO_READ},
        {.addr=0xe153, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0365) {
    const struct CPU_State initial_cpu = {.pc=0xf6dc, .a=0xd0, .x=0x07, .y=0xef, .sp=0xc7, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xf6dc, .value=0x30}, {.addr=0xf6dd, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf6de, .a=0xd0, .x=0x07, .y=0xef, .sp=0xc7, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xf6dc, .value=0x30}, {.addr=0xf6dd, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf6dc, .value=0x30, .type=IO_READ},
        {.addr=0xf6dd, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0366) {
    const struct CPU_State initial_cpu = {.pc=0x371d, .a=0xd3, .x=0x3c, .y=0x72, .sp=0xe6, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x371d, .value=0x30}, {.addr=0x371e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x36ed, .a=0xd3, .x=0x3c, .y=0x72, .sp=0xe6, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x371d, .value=0x30}, {.addr=0x371e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x371d, .value=0x30, .type=IO_READ},
        {.addr=0x371e, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0367) {
    const struct CPU_State initial_cpu = {.pc=0x12ed, .a=0x14, .x=0x06, .y=0x41, .sp=0x12, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x12ed, .value=0x30}, {.addr=0x12ee, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x12a7, .a=0x14, .x=0x06, .y=0x41, .sp=0x12, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x12ed, .value=0x30}, {.addr=0x12ee, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x12ed, .value=0x30, .type=IO_READ},
        {.addr=0x12ee, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0368) {
    const struct CPU_State initial_cpu = {.pc=0x940d, .a=0x33, .x=0x4f, .y=0x74, .sp=0x15, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x940d, .value=0x30}, {.addr=0x940e, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x9487, .a=0x33, .x=0x4f, .y=0x74, .sp=0x15, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x940d, .value=0x30}, {.addr=0x940e, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x940d, .value=0x30, .type=IO_READ},
        {.addr=0x940e, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0369) {
    const struct CPU_State initial_cpu = {.pc=0xb963, .a=0xd8, .x=0x25, .y=0xc0, .sp=0xb0, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xb963, .value=0x30}, {.addr=0xb964, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xb965, .a=0xd8, .x=0x25, .y=0xc0, .sp=0xb0, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xb963, .value=0x30}, {.addr=0xb964, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xb963, .value=0x30, .type=IO_READ},
        {.addr=0xb964, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_036A) {
    const struct CPU_State initial_cpu = {.pc=0x0944, .a=0xca, .x=0xad, .y=0x8f, .sp=0x66, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0944, .value=0x30}, {.addr=0x0945, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x0946, .a=0xca, .x=0xad, .y=0x8f, .sp=0x66, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0944, .value=0x30}, {.addr=0x0945, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x0944, .value=0x30, .type=IO_READ},
        {.addr=0x0945, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_036B) {
    const struct CPU_State initial_cpu = {.pc=0x404c, .a=0x10, .x=0x26, .y=0xbf, .sp=0x0e, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x404c, .value=0x30}, {.addr=0x404d, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x404e, .a=0x10, .x=0x26, .y=0xbf, .sp=0x0e, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x404c, .value=0x30}, {.addr=0x404d, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x404c, .value=0x30, .type=IO_READ},
        {.addr=0x404d, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_036C) {
    const struct CPU_State initial_cpu = {.pc=0x1aea, .a=0x48, .x=0x62, .y=0xa7, .sp=0xc8, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x1aea, .value=0x30}, {.addr=0x1aeb, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x1ace, .a=0x48, .x=0x62, .y=0xa7, .sp=0xc8, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x1aea, .value=0x30}, {.addr=0x1aeb, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x1aea, .value=0x30, .type=IO_READ},
        {.addr=0x1aeb, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_036D) {
    const struct CPU_State initial_cpu = {.pc=0xef07, .a=0x78, .x=0xfe, .y=0x43, .sp=0x3f, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xef07, .value=0x30}, {.addr=0xef08, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xef2f, .a=0x78, .x=0xfe, .y=0x43, .sp=0x3f, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xef07, .value=0x30}, {.addr=0xef08, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xef07, .value=0x30, .type=IO_READ},
        {.addr=0xef08, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_036E) {
    const struct CPU_State initial_cpu = {.pc=0xdf36, .a=0x62, .x=0xbe, .y=0x94, .sp=0xe1, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xdf36, .value=0x30}, {.addr=0xdf37, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xdf6b, .a=0x62, .x=0xbe, .y=0x94, .sp=0xe1, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xdf36, .value=0x30}, {.addr=0xdf37, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xdf36, .value=0x30, .type=IO_READ},
        {.addr=0xdf37, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_036F) {
    const struct CPU_State initial_cpu = {.pc=0x6d2e, .a=0x98, .x=0x24, .y=0x04, .sp=0x78, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x6d2e, .value=0x30}, {.addr=0x6d2f, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x6d30, .a=0x98, .x=0x24, .y=0x04, .sp=0x78, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x6d2e, .value=0x30}, {.addr=0x6d2f, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x6d2e, .value=0x30, .type=IO_READ},
        {.addr=0x6d2f, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0370) {
    const struct CPU_State initial_cpu = {.pc=0x1e47, .a=0xe4, .x=0xc4, .y=0xd8, .sp=0xcf, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x1e47, .value=0x30}, {.addr=0x1e48, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x1e49, .a=0xe4, .x=0xc4, .y=0xd8, .sp=0xcf, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x1e47, .value=0x30}, {.addr=0x1e48, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x1e47, .value=0x30, .type=IO_READ},
        {.addr=0x1e48, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0371) {
    const struct CPU_State initial_cpu = {.pc=0x0e45, .a=0xf5, .x=0x01, .y=0x72, .sp=0x0a, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0e45, .value=0x30}, {.addr=0x0e46, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x0e36, .a=0xf5, .x=0x01, .y=0x72, .sp=0x0a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0e45, .value=0x30}, {.addr=0x0e46, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x0e45, .value=0x30, .type=IO_READ},
        {.addr=0x0e46, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0372) {
    const struct CPU_State initial_cpu = {.pc=0x202f, .a=0x8f, .x=0xbb, .y=0xac, .sp=0xcb, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x202f, .value=0x30}, {.addr=0x2030, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x2031, .a=0x8f, .x=0xbb, .y=0xac, .sp=0xcb, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x202f, .value=0x30}, {.addr=0x2030, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x202f, .value=0x30, .type=IO_READ},
        {.addr=0x2030, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0373) {
    const struct CPU_State initial_cpu = {.pc=0x331f, .a=0x99, .x=0xb2, .y=0xae, .sp=0xfc, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x331f, .value=0x30}, {.addr=0x3320, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x3321, .a=0x99, .x=0xb2, .y=0xae, .sp=0xfc, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x331f, .value=0x30}, {.addr=0x3320, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x331f, .value=0x30, .type=IO_READ},
        {.addr=0x3320, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0374) {
    const struct CPU_State initial_cpu = {.pc=0xb170, .a=0x23, .x=0x0a, .y=0xa5, .sp=0x62, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xb170, .value=0x30}, {.addr=0xb171, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xb0fe, .a=0x23, .x=0x0a, .y=0xa5, .sp=0x62, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xb170, .value=0x30}, {.addr=0xb171, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xb170, .value=0x30, .type=IO_READ},
        {.addr=0xb171, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0375) {
    const struct CPU_State initial_cpu = {.pc=0xc82d, .a=0x3d, .x=0x3b, .y=0x9c, .sp=0x24, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xc82d, .value=0x30}, {.addr=0xc82e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc81c, .a=0x3d, .x=0x3b, .y=0x9c, .sp=0x24, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xc82d, .value=0x30}, {.addr=0xc82e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc82d, .value=0x30, .type=IO_READ},
        {.addr=0xc82e, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0376) {
    const struct CPU_State initial_cpu = {.pc=0x12df, .a=0x8e, .x=0x4d, .y=0xa8, .sp=0x1c, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x12df, .value=0x30}, {.addr=0x12e0, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x12e1, .a=0x8e, .x=0x4d, .y=0xa8, .sp=0x1c, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x12df, .value=0x30}, {.addr=0x12e0, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x12df, .value=0x30, .type=IO_READ},
        {.addr=0x12e0, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0377) {
    const struct CPU_State initial_cpu = {.pc=0x939d, .a=0x2e, .x=0x05, .y=0xcf, .sp=0xa3, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x939d, .value=0x30}, {.addr=0x939e, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x93d2, .a=0x2e, .x=0x05, .y=0xcf, .sp=0xa3, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x939d, .value=0x30}, {.addr=0x939e, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x939d, .value=0x30, .type=IO_READ},
        {.addr=0x939e, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0378) {
    const struct CPU_State initial_cpu = {.pc=0xcbf5, .a=0xbf, .x=0x9b, .y=0x76, .sp=0x39, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xcbf5, .value=0x30}, {.addr=0xcbf6, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xcbf7, .a=0xbf, .x=0x9b, .y=0x76, .sp=0x39, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xcbf5, .value=0x30}, {.addr=0xcbf6, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xcbf5, .value=0x30, .type=IO_READ},
        {.addr=0xcbf6, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0379) {
    const struct CPU_State initial_cpu = {.pc=0xf81f, .a=0x92, .x=0x9c, .y=0xc9, .sp=0x95, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xf81f, .value=0x30}, {.addr=0xf820, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf821, .a=0x92, .x=0x9c, .y=0xc9, .sp=0x95, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xf81f, .value=0x30}, {.addr=0xf820, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf81f, .value=0x30, .type=IO_READ},
        {.addr=0xf820, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_037A) {
    const struct CPU_State initial_cpu = {.pc=0x3ce6, .a=0xa8, .x=0xd0, .y=0x2f, .sp=0x1a, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x3ce6, .value=0x30}, {.addr=0x3ce7, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x3ce8, .a=0xa8, .x=0xd0, .y=0x2f, .sp=0x1a, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x3ce6, .value=0x30}, {.addr=0x3ce7, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x3ce6, .value=0x30, .type=IO_READ},
        {.addr=0x3ce7, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_037B) {
    const struct CPU_State initial_cpu = {.pc=0xdcbf, .a=0x01, .x=0xee, .y=0xe7, .sp=0xb8, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xdcbf, .value=0x30}, {.addr=0xdcc0, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xdcc1, .a=0x01, .x=0xee, .y=0xe7, .sp=0xb8, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xdcbf, .value=0x30}, {.addr=0xdcc0, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xdcbf, .value=0x30, .type=IO_READ},
        {.addr=0xdcc0, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_037C) {
    const struct CPU_State initial_cpu = {.pc=0x3451, .a=0x72, .x=0x70, .y=0xfd, .sp=0x53, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x3451, .value=0x30}, {.addr=0x3452, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x3453, .a=0x72, .x=0x70, .y=0xfd, .sp=0x53, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x3451, .value=0x30}, {.addr=0x3452, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x3451, .value=0x30, .type=IO_READ},
        {.addr=0x3452, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_037D) {
    const struct CPU_State initial_cpu = {.pc=0x290e, .a=0x76, .x=0xcb, .y=0x1e, .sp=0x8e, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x290e, .value=0x30}, {.addr=0x290f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2910, .a=0x76, .x=0xcb, .y=0x1e, .sp=0x8e, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x290e, .value=0x30}, {.addr=0x290f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x290e, .value=0x30, .type=IO_READ},
        {.addr=0x290f, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_037E) {
    const struct CPU_State initial_cpu = {.pc=0xeae1, .a=0xc1, .x=0x99, .y=0x43, .sp=0x4d, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xeae1, .value=0x30}, {.addr=0xeae2, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xeae3, .a=0xc1, .x=0x99, .y=0x43, .sp=0x4d, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xeae1, .value=0x30}, {.addr=0xeae2, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xeae1, .value=0x30, .type=IO_READ},
        {.addr=0xeae2, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_037F) {
    const struct CPU_State initial_cpu = {.pc=0xee8a, .a=0xea, .x=0xbc, .y=0x6d, .sp=0x13, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xee8a, .value=0x30}, {.addr=0xee8b, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xeebd, .a=0xea, .x=0xbc, .y=0x6d, .sp=0x13, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xee8a, .value=0x30}, {.addr=0xee8b, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xee8a, .value=0x30, .type=IO_READ},
        {.addr=0xee8b, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0380) {
    const struct CPU_State initial_cpu = {.pc=0xa665, .a=0x9e, .x=0x59, .y=0xc5, .sp=0xa8, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xa665, .value=0x30}, {.addr=0xa666, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xa648, .a=0x9e, .x=0x59, .y=0xc5, .sp=0xa8, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xa665, .value=0x30}, {.addr=0xa666, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xa665, .value=0x30, .type=IO_READ},
        {.addr=0xa666, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0381) {
    const struct CPU_State initial_cpu = {.pc=0x8f81, .a=0x4b, .x=0x70, .y=0x29, .sp=0xc5, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x8f81, .value=0x30}, {.addr=0x8f82, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8f83, .a=0x4b, .x=0x70, .y=0x29, .sp=0xc5, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x8f81, .value=0x30}, {.addr=0x8f82, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8f81, .value=0x30, .type=IO_READ},
        {.addr=0x8f82, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0382) {
    const struct CPU_State initial_cpu = {.pc=0x213a, .a=0xa6, .x=0x23, .y=0x71, .sp=0x39, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x213a, .value=0x30}, {.addr=0x213b, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x213c, .a=0xa6, .x=0x23, .y=0x71, .sp=0x39, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x213a, .value=0x30}, {.addr=0x213b, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x213a, .value=0x30, .type=IO_READ},
        {.addr=0x213b, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0383) {
    const struct CPU_State initial_cpu = {.pc=0x1a0b, .a=0xb8, .x=0x1b, .y=0x9b, .sp=0xad, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x1a0b, .value=0x30}, {.addr=0x1a0c, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x1a85, .a=0xb8, .x=0x1b, .y=0x9b, .sp=0xad, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x1a0b, .value=0x30}, {.addr=0x1a0c, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x1a0b, .value=0x30, .type=IO_READ},
        {.addr=0x1a0c, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0384) {
    const struct CPU_State initial_cpu = {.pc=0xb61a, .a=0xba, .x=0x44, .y=0xb3, .sp=0x5e, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xb61a, .value=0x30}, {.addr=0xb61b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb61c, .a=0xba, .x=0x44, .y=0xb3, .sp=0x5e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xb61a, .value=0x30}, {.addr=0xb61b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb61a, .value=0x30, .type=IO_READ},
        {.addr=0xb61b, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0385) {
    const struct CPU_State initial_cpu = {.pc=0x0ed9, .a=0x5f, .x=0x2a, .y=0xfd, .sp=0x86, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0ed9, .value=0x30}, {.addr=0x0eda, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x0e9d, .a=0x5f, .x=0x2a, .y=0xfd, .sp=0x86, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0ed9, .value=0x30}, {.addr=0x0eda, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x0ed9, .value=0x30, .type=IO_READ},
        {.addr=0x0eda, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0386) {
    const struct CPU_State initial_cpu = {.pc=0x46f2, .a=0x0f, .x=0x06, .y=0xb0, .sp=0x26, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x46f2, .value=0x30}, {.addr=0x46f3, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x46f4, .a=0x0f, .x=0x06, .y=0xb0, .sp=0x26, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x46f2, .value=0x30}, {.addr=0x46f3, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x46f2, .value=0x30, .type=IO_READ},
        {.addr=0x46f3, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0387) {
    const struct CPU_State initial_cpu = {.pc=0xd4c7, .a=0x9f, .x=0x80, .y=0xe7, .sp=0x24, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xd4c7, .value=0x30}, {.addr=0xd4c8, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xd4aa, .a=0x9f, .x=0x80, .y=0xe7, .sp=0x24, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xd4c7, .value=0x30}, {.addr=0xd4c8, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xd4c7, .value=0x30, .type=IO_READ},
        {.addr=0xd4c8, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0388) {
    const struct CPU_State initial_cpu = {.pc=0x5ae7, .a=0x0b, .x=0x99, .y=0x89, .sp=0x7f, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x5ae7, .value=0x30}, {.addr=0x5ae8, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x5ae9, .a=0x0b, .x=0x99, .y=0x89, .sp=0x7f, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x5ae7, .value=0x30}, {.addr=0x5ae8, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x5ae7, .value=0x30, .type=IO_READ},
        {.addr=0x5ae8, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0389) {
    const struct CPU_State initial_cpu = {.pc=0x8f8c, .a=0x63, .x=0x67, .y=0xbb, .sp=0x6c, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x8f8c, .value=0x30}, {.addr=0x8f8d, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x8f8e, .a=0x63, .x=0x67, .y=0xbb, .sp=0x6c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x8f8c, .value=0x30}, {.addr=0x8f8d, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x8f8c, .value=0x30, .type=IO_READ},
        {.addr=0x8f8d, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_038A) {
    const struct CPU_State initial_cpu = {.pc=0xa2db, .a=0xdf, .x=0xaf, .y=0x90, .sp=0x76, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xa2db, .value=0x30}, {.addr=0xa2dc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xa2dd, .a=0xdf, .x=0xaf, .y=0x90, .sp=0x76, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xa2db, .value=0x30}, {.addr=0xa2dc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xa2db, .value=0x30, .type=IO_READ},
        {.addr=0xa2dc, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_038B) {
    const struct CPU_State initial_cpu = {.pc=0xb147, .a=0x84, .x=0x6f, .y=0x78, .sp=0x09, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xb147, .value=0x30}, {.addr=0xb148, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xb0e3, .a=0x84, .x=0x6f, .y=0x78, .sp=0x09, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xb147, .value=0x30}, {.addr=0xb148, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xb147, .value=0x30, .type=IO_READ},
        {.addr=0xb148, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_038C) {
    const struct CPU_State initial_cpu = {.pc=0x2b48, .a=0x4f, .x=0xaa, .y=0x16, .sp=0x74, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x2b48, .value=0x30}, {.addr=0x2b49, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x2b4a, .a=0x4f, .x=0xaa, .y=0x16, .sp=0x74, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x2b48, .value=0x30}, {.addr=0x2b49, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x2b48, .value=0x30, .type=IO_READ},
        {.addr=0x2b49, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_038D) {
    const struct CPU_State initial_cpu = {.pc=0xa9c4, .a=0x49, .x=0x3a, .y=0xd5, .sp=0x34, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xa9c4, .value=0x30}, {.addr=0xa9c5, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xa9c6, .a=0x49, .x=0x3a, .y=0xd5, .sp=0x34, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xa9c4, .value=0x30}, {.addr=0xa9c5, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xa9c4, .value=0x30, .type=IO_READ},
        {.addr=0xa9c5, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_038E) {
    const struct CPU_State initial_cpu = {.pc=0x855a, .a=0xec, .x=0x3e, .y=0x10, .sp=0x89, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x855a, .value=0x30}, {.addr=0x855b, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x85c4, .a=0xec, .x=0x3e, .y=0x10, .sp=0x89, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x855a, .value=0x30}, {.addr=0x855b, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x855a, .value=0x30, .type=IO_READ},
        {.addr=0x855b, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_038F) {
    const struct CPU_State initial_cpu = {.pc=0x5811, .a=0xb9, .x=0x15, .y=0xc0, .sp=0x0d, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x5811, .value=0x30}, {.addr=0x5812, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x5813, .a=0xb9, .x=0x15, .y=0xc0, .sp=0x0d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5811, .value=0x30}, {.addr=0x5812, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x5811, .value=0x30, .type=IO_READ},
        {.addr=0x5812, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0390) {
    const struct CPU_State initial_cpu = {.pc=0xcd06, .a=0x01, .x=0xd7, .y=0x22, .sp=0xc0, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xcd06, .value=0x30}, {.addr=0xcd07, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xcd2f, .a=0x01, .x=0xd7, .y=0x22, .sp=0xc0, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xcd06, .value=0x30}, {.addr=0xcd07, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xcd06, .value=0x30, .type=IO_READ},
        {.addr=0xcd07, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0391) {
    const struct CPU_State initial_cpu = {.pc=0xe0d8, .a=0xdf, .x=0x3f, .y=0xfc, .sp=0x88, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xe0d8, .value=0x30}, {.addr=0xe0d9, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xe0da, .a=0xdf, .x=0x3f, .y=0xfc, .sp=0x88, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xe0d8, .value=0x30}, {.addr=0xe0d9, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xe0d8, .value=0x30, .type=IO_READ},
        {.addr=0xe0d9, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0392) {
    const struct CPU_State initial_cpu = {.pc=0xa929, .a=0x03, .x=0xf7, .y=0x9f, .sp=0xad, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xa929, .value=0x30}, {.addr=0xa92a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa92b, .a=0x03, .x=0xf7, .y=0x9f, .sp=0xad, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xa929, .value=0x30}, {.addr=0xa92a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa929, .value=0x30, .type=IO_READ},
        {.addr=0xa92a, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0393) {
    const struct CPU_State initial_cpu = {.pc=0xb415, .a=0xda, .x=0xdb, .y=0x41, .sp=0xb5, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xb415, .value=0x30}, {.addr=0xb416, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xb491, .a=0xda, .x=0xdb, .y=0x41, .sp=0xb5, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xb415, .value=0x30}, {.addr=0xb416, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xb415, .value=0x30, .type=IO_READ},
        {.addr=0xb416, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0394) {
    const struct CPU_State initial_cpu = {.pc=0xa2ad, .a=0x0d, .x=0xb1, .y=0x5b, .sp=0x64, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xa2ad, .value=0x30}, {.addr=0xa2ae, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa27d, .a=0x0d, .x=0xb1, .y=0x5b, .sp=0x64, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xa2ad, .value=0x30}, {.addr=0xa2ae, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa2ad, .value=0x30, .type=IO_READ},
        {.addr=0xa2ae, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0395) {
    const struct CPU_State initial_cpu = {.pc=0x6ca7, .a=0xdb, .x=0x19, .y=0xa4, .sp=0x33, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x6ca7, .value=0x30}, {.addr=0x6ca8, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x6ca9, .a=0xdb, .x=0x19, .y=0xa4, .sp=0x33, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x6ca7, .value=0x30}, {.addr=0x6ca8, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x6ca7, .value=0x30, .type=IO_READ},
        {.addr=0x6ca8, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0396) {
    const struct CPU_State initial_cpu = {.pc=0xc8eb, .a=0x81, .x=0x68, .y=0xb0, .sp=0x07, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xc8eb, .value=0x30}, {.addr=0xc8ec, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xc8ed, .a=0x81, .x=0x68, .y=0xb0, .sp=0x07, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xc8eb, .value=0x30}, {.addr=0xc8ec, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xc8eb, .value=0x30, .type=IO_READ},
        {.addr=0xc8ec, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0397) {
    const struct CPU_State initial_cpu = {.pc=0x568d, .a=0x56, .x=0x5f, .y=0x1a, .sp=0x21, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x568d, .value=0x30}, {.addr=0x568e, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x5630, .a=0x56, .x=0x5f, .y=0x1a, .sp=0x21, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x568d, .value=0x30}, {.addr=0x568e, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x568d, .value=0x30, .type=IO_READ},
        {.addr=0x568e, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0398) {
    const struct CPU_State initial_cpu = {.pc=0x7876, .a=0x68, .x=0x1c, .y=0x6f, .sp=0x58, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x7876, .value=0x30}, {.addr=0x7877, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x788e, .a=0x68, .x=0x1c, .y=0x6f, .sp=0x58, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x7876, .value=0x30}, {.addr=0x7877, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x7876, .value=0x30, .type=IO_READ},
        {.addr=0x7877, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_0399) {
    const struct CPU_State initial_cpu = {.pc=0x77ef, .a=0xe6, .x=0xa9, .y=0xe9, .sp=0x67, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x77ef, .value=0x30}, {.addr=0x77f0, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x779a, .a=0xe6, .x=0xa9, .y=0xe9, .sp=0x67, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x77ef, .value=0x30}, {.addr=0x77f0, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x77ef, .value=0x30, .type=IO_READ},
        {.addr=0x77f0, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_039A) {
    const struct CPU_State initial_cpu = {.pc=0xd439, .a=0xc4, .x=0x5b, .y=0xfc, .sp=0x1e, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xd439, .value=0x30}, {.addr=0xd43a, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xd4ba, .a=0xc4, .x=0x5b, .y=0xfc, .sp=0x1e, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xd439, .value=0x30}, {.addr=0xd43a, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xd439, .value=0x30, .type=IO_READ},
        {.addr=0xd43a, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_039B) {
    const struct CPU_State initial_cpu = {.pc=0x4118, .a=0xfb, .x=0x83, .y=0x29, .sp=0x50, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x4118, .value=0x30}, {.addr=0x4119, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x418b, .a=0xfb, .x=0x83, .y=0x29, .sp=0x50, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x4118, .value=0x30}, {.addr=0x4119, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x4118, .value=0x30, .type=IO_READ},
        {.addr=0x4119, .value=0x71, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_039C) {
    const struct CPU_State initial_cpu = {.pc=0x5b12, .a=0x6f, .x=0x04, .y=0x91, .sp=0xa3, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x5b12, .value=0x30}, {.addr=0x5b13, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5b14, .a=0x6f, .x=0x04, .y=0x91, .sp=0xa3, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x5b12, .value=0x30}, {.addr=0x5b13, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x5b12, .value=0x30, .type=IO_READ},
        {.addr=0x5b13, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_039D) {
    const struct CPU_State initial_cpu = {.pc=0xaf4b, .a=0xbe, .x=0x5a, .y=0xf5, .sp=0xbf, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xaf4b, .value=0x30}, {.addr=0xaf4c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xaf8d, .a=0xbe, .x=0x5a, .y=0xf5, .sp=0xbf, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xaf4b, .value=0x30}, {.addr=0xaf4c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xaf4b, .value=0x30, .type=IO_READ},
        {.addr=0xaf4c, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_039E) {
    const struct CPU_State initial_cpu = {.pc=0x4114, .a=0xe7, .x=0x57, .y=0xa7, .sp=0xd1, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x4114, .value=0x30}, {.addr=0x4115, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x4171, .a=0xe7, .x=0x57, .y=0xa7, .sp=0xd1, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x4114, .value=0x30}, {.addr=0x4115, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x4114, .value=0x30, .type=IO_READ},
        {.addr=0x4115, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_039F) {
    const struct CPU_State initial_cpu = {.pc=0x3704, .a=0xf6, .x=0x04, .y=0x63, .sp=0x0a, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x3704, .value=0x30}, {.addr=0x3705, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x3706, .a=0xf6, .x=0x04, .y=0x63, .sp=0x0a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x3704, .value=0x30}, {.addr=0x3705, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x3704, .value=0x30, .type=IO_READ},
        {.addr=0x3705, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x1a7a, .a=0xa3, .x=0xad, .y=0x48, .sp=0x66, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x1a7a, .value=0x30}, {.addr=0x1a7b, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x1a7c, .a=0xa3, .x=0xad, .y=0x48, .sp=0x66, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x1a7a, .value=0x30}, {.addr=0x1a7b, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x1a7a, .value=0x30, .type=IO_READ},
        {.addr=0x1a7b, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xbeac, .a=0x1e, .x=0x96, .y=0xe3, .sp=0xf9, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xbeac, .value=0x30}, {.addr=0xbead, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xbea4, .a=0x1e, .x=0x96, .y=0xe3, .sp=0xf9, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xbeac, .value=0x30}, {.addr=0xbead, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xbeac, .value=0x30, .type=IO_READ},
        {.addr=0xbead, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x7b16, .a=0x5f, .x=0xe3, .y=0x8b, .sp=0x1a, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x7b16, .value=0x30}, {.addr=0x7b17, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x7b18, .a=0x5f, .x=0xe3, .y=0x8b, .sp=0x1a, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x7b16, .value=0x30}, {.addr=0x7b17, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x7b16, .value=0x30, .type=IO_READ},
        {.addr=0x7b17, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xf216, .a=0x73, .x=0x6b, .y=0xc6, .sp=0x1c, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xf216, .value=0x30}, {.addr=0xf217, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xf218, .a=0x73, .x=0x6b, .y=0xc6, .sp=0x1c, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xf216, .value=0x30}, {.addr=0xf217, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xf216, .value=0x30, .type=IO_READ},
        {.addr=0xf217, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xeaea, .a=0xef, .x=0x84, .y=0x48, .sp=0xe1, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xeaea, .value=0x30}, {.addr=0xeaeb, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xeaa6, .a=0xef, .x=0x84, .y=0x48, .sp=0xe1, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xeaea, .value=0x30}, {.addr=0xeaeb, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xeaea, .value=0x30, .type=IO_READ},
        {.addr=0xeaeb, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x9cee, .a=0x06, .x=0x19, .y=0xf4, .sp=0x10, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x9cee, .value=0x30}, {.addr=0x9cef, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x9ce9, .a=0x06, .x=0x19, .y=0xf4, .sp=0x10, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x9cee, .value=0x30}, {.addr=0x9cef, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x9cee, .value=0x30, .type=IO_READ},
        {.addr=0x9cef, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x334b, .a=0xc3, .x=0xf3, .y=0x80, .sp=0xc5, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x334b, .value=0x30}, {.addr=0x334c, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x334d, .a=0xc3, .x=0xf3, .y=0x80, .sp=0xc5, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x334b, .value=0x30}, {.addr=0x334c, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x334b, .value=0x30, .type=IO_READ},
        {.addr=0x334c, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x98a5, .a=0x40, .x=0x7c, .y=0x4f, .sp=0x35, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x98a5, .value=0x30}, {.addr=0x98a6, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x98a7, .a=0x40, .x=0x7c, .y=0x4f, .sp=0x35, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x98a5, .value=0x30}, {.addr=0x98a6, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x98a5, .value=0x30, .type=IO_READ},
        {.addr=0x98a6, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x4cdf, .a=0x73, .x=0x39, .y=0x92, .sp=0x8f, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x4cdf, .value=0x30}, {.addr=0x4ce0, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x4ce1, .a=0x73, .x=0x39, .y=0x92, .sp=0x8f, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x4cdf, .value=0x30}, {.addr=0x4ce0, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x4cdf, .value=0x30, .type=IO_READ},
        {.addr=0x4ce0, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x9bf1, .a=0x9e, .x=0xa1, .y=0x82, .sp=0x26, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x9bf1, .value=0x30}, {.addr=0x9bf2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9bf3, .a=0x9e, .x=0xa1, .y=0x82, .sp=0x26, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x9bf1, .value=0x30}, {.addr=0x9bf2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9bf1, .value=0x30, .type=IO_READ},
        {.addr=0x9bf2, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xff0d, .a=0x8b, .x=0x68, .y=0x26, .sp=0x06, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xff0d, .value=0x30}, {.addr=0xff0e, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xff0f, .a=0x8b, .x=0x68, .y=0x26, .sp=0x06, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xff0d, .value=0x30}, {.addr=0xff0e, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xff0d, .value=0x30, .type=IO_READ},
        {.addr=0xff0e, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xa2b1, .a=0x25, .x=0x8e, .y=0xfe, .sp=0xda, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xa2b1, .value=0x30}, {.addr=0xa2b2, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xa332, .a=0x25, .x=0x8e, .y=0xfe, .sp=0xda, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xa2b1, .value=0x30}, {.addr=0xa2b2, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xa2b1, .value=0x30, .type=IO_READ},
        {.addr=0xa2b2, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x2fa8, .a=0xdf, .x=0xbf, .y=0xbf, .sp=0x7e, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x2fa8, .value=0x30}, {.addr=0x2fa9, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2faa, .a=0xdf, .x=0xbf, .y=0xbf, .sp=0x7e, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x2fa8, .value=0x30}, {.addr=0x2fa9, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2fa8, .value=0x30, .type=IO_READ},
        {.addr=0x2fa9, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x9d9c, .a=0x68, .x=0x8d, .y=0xae, .sp=0x4c, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x9d9c, .value=0x30}, {.addr=0x9d9d, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x9df8, .a=0x68, .x=0x8d, .y=0xae, .sp=0x4c, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x9d9c, .value=0x30}, {.addr=0x9d9d, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x9d9c, .value=0x30, .type=IO_READ},
        {.addr=0x9d9d, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x0788, .a=0x61, .x=0x0e, .y=0x74, .sp=0xfa, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0788, .value=0x30}, {.addr=0x0789, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x0751, .a=0x61, .x=0x0e, .y=0x74, .sp=0xfa, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x0788, .value=0x30}, {.addr=0x0789, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x0788, .value=0x30, .type=IO_READ},
        {.addr=0x0789, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xebaf, .a=0x46, .x=0x9f, .y=0x07, .sp=0xde, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xebaf, .value=0x30}, {.addr=0xebb0, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xebb1, .a=0x46, .x=0x9f, .y=0x07, .sp=0xde, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xebaf, .value=0x30}, {.addr=0xebb0, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xebaf, .value=0x30, .type=IO_READ},
        {.addr=0xebb0, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x24dc, .a=0x90, .x=0x32, .y=0x74, .sp=0xbd, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x24dc, .value=0x30}, {.addr=0x24dd, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x24de, .a=0x90, .x=0x32, .y=0x74, .sp=0xbd, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x24dc, .value=0x30}, {.addr=0x24dd, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x24dc, .value=0x30, .type=IO_READ},
        {.addr=0x24dd, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xf99b, .a=0x39, .x=0x63, .y=0xd0, .sp=0xc1, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xf99b, .value=0x30}, {.addr=0xf99c, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xf97f, .a=0x39, .x=0x63, .y=0xd0, .sp=0xc1, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xf99b, .value=0x30}, {.addr=0xf99c, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xf99b, .value=0x30, .type=IO_READ},
        {.addr=0xf99c, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x5b70, .a=0xce, .x=0xe0, .y=0x2f, .sp=0x8e, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x5b70, .value=0x30}, {.addr=0x5b71, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x5b19, .a=0xce, .x=0xe0, .y=0x2f, .sp=0x8e, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x5b70, .value=0x30}, {.addr=0x5b71, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x5b70, .value=0x30, .type=IO_READ},
        {.addr=0x5b71, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x1446, .a=0x6b, .x=0x29, .y=0xc5, .sp=0x78, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x1446, .value=0x30}, {.addr=0x1447, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1448, .a=0x6b, .x=0x29, .y=0xc5, .sp=0x78, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x1446, .value=0x30}, {.addr=0x1447, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1446, .value=0x30, .type=IO_READ},
        {.addr=0x1447, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x3705, .a=0xa7, .x=0xe9, .y=0xca, .sp=0xe0, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x3705, .value=0x30}, {.addr=0x3706, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3704, .a=0xa7, .x=0xe9, .y=0xca, .sp=0xe0, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x3705, .value=0x30}, {.addr=0x3706, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3705, .value=0x30, .type=IO_READ},
        {.addr=0x3706, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x970c, .a=0xbf, .x=0x17, .y=0xaf, .sp=0x40, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x970c, .value=0x30}, {.addr=0x970d, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x970e, .a=0xbf, .x=0x17, .y=0xaf, .sp=0x40, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x970c, .value=0x30}, {.addr=0x970d, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x970c, .value=0x30, .type=IO_READ},
        {.addr=0x970d, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x0fe1, .a=0xb9, .x=0x51, .y=0x4a, .sp=0xd3, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0fe1, .value=0x30}, {.addr=0x0fe2, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x0fb0, .a=0xb9, .x=0x51, .y=0x4a, .sp=0xd3, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0fe1, .value=0x30}, {.addr=0x0fe2, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x0fe1, .value=0x30, .type=IO_READ},
        {.addr=0x0fe2, .value=0xcd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x4858, .a=0xe8, .x=0xee, .y=0x9f, .sp=0xa8, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x4858, .value=0x30}, {.addr=0x4859, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x482d, .a=0xe8, .x=0xee, .y=0x9f, .sp=0xa8, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x4858, .value=0x30}, {.addr=0x4859, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x4858, .value=0x30, .type=IO_READ},
        {.addr=0x4859, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xeef4, .a=0x50, .x=0xcf, .y=0x16, .sp=0x1a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xeef4, .value=0x30}, {.addr=0xeef5, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xeef6, .a=0x50, .x=0xcf, .y=0x16, .sp=0x1a, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xeef4, .value=0x30}, {.addr=0xeef5, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xeef4, .value=0x30, .type=IO_READ},
        {.addr=0xeef5, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x2dec, .a=0x46, .x=0x7b, .y=0xb0, .sp=0xbe, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x2dec, .value=0x30}, {.addr=0x2ded, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x2dee, .a=0x46, .x=0x7b, .y=0xb0, .sp=0xbe, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x2dec, .value=0x30}, {.addr=0x2ded, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x2dec, .value=0x30, .type=IO_READ},
        {.addr=0x2ded, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xef0a, .a=0x32, .x=0x60, .y=0x67, .sp=0x5b, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xef0a, .value=0x30}, {.addr=0xef0b, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xeef0, .a=0x32, .x=0x60, .y=0x67, .sp=0x5b, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xef0a, .value=0x30}, {.addr=0xef0b, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xef0a, .value=0x30, .type=IO_READ},
        {.addr=0xef0b, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x1764, .a=0x53, .x=0x42, .y=0x7d, .sp=0x08, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x1764, .value=0x30}, {.addr=0x1765, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x1766, .a=0x53, .x=0x42, .y=0x7d, .sp=0x08, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x1764, .value=0x30}, {.addr=0x1765, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x1764, .value=0x30, .type=IO_READ},
        {.addr=0x1765, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xafa5, .a=0xd5, .x=0x96, .y=0x69, .sp=0xb1, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xafa5, .value=0x30}, {.addr=0xafa6, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xafa7, .a=0xd5, .x=0x96, .y=0x69, .sp=0xb1, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xafa5, .value=0x30}, {.addr=0xafa6, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xafa5, .value=0x30, .type=IO_READ},
        {.addr=0xafa6, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x4b71, .a=0x6c, .x=0x93, .y=0x63, .sp=0x27, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x4b71, .value=0x30}, {.addr=0x4b72, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x4bac, .a=0x6c, .x=0x93, .y=0x63, .sp=0x27, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x4b71, .value=0x30}, {.addr=0x4b72, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x4b71, .value=0x30, .type=IO_READ},
        {.addr=0x4b72, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x2dcc, .a=0xb9, .x=0xce, .y=0x19, .sp=0xc4, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x2dcc, .value=0x30}, {.addr=0x2dcd, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x2d94, .a=0xb9, .x=0xce, .y=0x19, .sp=0xc4, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x2dcc, .value=0x30}, {.addr=0x2dcd, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2dcc, .value=0x30, .type=IO_READ},
        {.addr=0x2dcd, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xbf89, .a=0x76, .x=0xfb, .y=0xa9, .sp=0x3c, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xbf89, .value=0x30}, {.addr=0xbf8a, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xbf8b, .a=0x76, .x=0xfb, .y=0xa9, .sp=0x3c, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xbf89, .value=0x30}, {.addr=0xbf8a, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xbf89, .value=0x30, .type=IO_READ},
        {.addr=0xbf8a, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xd9e3, .a=0x7b, .x=0xdc, .y=0x5a, .sp=0xa4, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xd9e3, .value=0x30}, {.addr=0xd9e4, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xd9e5, .a=0x7b, .x=0xdc, .y=0x5a, .sp=0xa4, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xd9e3, .value=0x30}, {.addr=0xd9e4, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xd9e3, .value=0x30, .type=IO_READ},
        {.addr=0xd9e4, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x69cd, .a=0x14, .x=0x1f, .y=0xb7, .sp=0x0f, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x69cd, .value=0x30}, {.addr=0x69ce, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x69cf, .a=0x14, .x=0x1f, .y=0xb7, .sp=0x0f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x69cd, .value=0x30}, {.addr=0x69ce, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x69cd, .value=0x30, .type=IO_READ},
        {.addr=0x69ce, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xa9ae, .a=0xcc, .x=0x22, .y=0xb5, .sp=0x68, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xa9ae, .value=0x30}, {.addr=0xa9af, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xa972, .a=0xcc, .x=0x22, .y=0xb5, .sp=0x68, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xa9ae, .value=0x30}, {.addr=0xa9af, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xa9ae, .value=0x30, .type=IO_READ},
        {.addr=0xa9af, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x8824, .a=0x38, .x=0xf2, .y=0x00, .sp=0x6d, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x8824, .value=0x30}, {.addr=0x8825, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x8826, .a=0x38, .x=0xf2, .y=0x00, .sp=0x6d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x8824, .value=0x30}, {.addr=0x8825, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x8824, .value=0x30, .type=IO_READ},
        {.addr=0x8825, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xf47e, .a=0x6a, .x=0xaf, .y=0x2f, .sp=0x49, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xf47e, .value=0x30}, {.addr=0xf47f, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xf437, .a=0x6a, .x=0xaf, .y=0x2f, .sp=0x49, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xf47e, .value=0x30}, {.addr=0xf47f, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xf47e, .value=0x30, .type=IO_READ},
        {.addr=0xf47f, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xe053, .a=0x53, .x=0xec, .y=0x5a, .sp=0x21, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xe053, .value=0x30}, {.addr=0xe054, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xe055, .a=0x53, .x=0xec, .y=0x5a, .sp=0x21, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xe053, .value=0x30}, {.addr=0xe054, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xe053, .value=0x30, .type=IO_READ},
        {.addr=0xe054, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xc095, .a=0x43, .x=0x37, .y=0xbe, .sp=0x0c, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xc095, .value=0x30}, {.addr=0xc096, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xc097, .a=0x43, .x=0x37, .y=0xbe, .sp=0x0c, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xc095, .value=0x30}, {.addr=0xc096, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xc095, .value=0x30, .type=IO_READ},
        {.addr=0xc096, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x623c, .a=0x9f, .x=0x95, .y=0x05, .sp=0x5b, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x623c, .value=0x30}, {.addr=0x623d, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x623e, .a=0x9f, .x=0x95, .y=0x05, .sp=0x5b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x623c, .value=0x30}, {.addr=0x623d, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x623c, .value=0x30, .type=IO_READ},
        {.addr=0x623d, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x409b, .a=0x00, .x=0x73, .y=0xc7, .sp=0x3d, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x409b, .value=0x30}, {.addr=0x409c, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x409d, .a=0x00, .x=0x73, .y=0xc7, .sp=0x3d, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x409b, .value=0x30}, {.addr=0x409c, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x409b, .value=0x30, .type=IO_READ},
        {.addr=0x409c, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x277c, .a=0xa3, .x=0x7c, .y=0x83, .sp=0xaa, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x277c, .value=0x30}, {.addr=0x277d, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x277e, .a=0xa3, .x=0x7c, .y=0x83, .sp=0xaa, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x277c, .value=0x30}, {.addr=0x277d, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x277c, .value=0x30, .type=IO_READ},
        {.addr=0x277d, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x240d, .a=0x43, .x=0x7b, .y=0x4f, .sp=0x63, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x240d, .value=0x30}, {.addr=0x240e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x240f, .a=0x43, .x=0x7b, .y=0x4f, .sp=0x63, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x240d, .value=0x30}, {.addr=0x240e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x240d, .value=0x30, .type=IO_READ},
        {.addr=0x240e, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x8ec7, .a=0x5e, .x=0x4b, .y=0xb2, .sp=0xb0, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x8ec7, .value=0x30}, {.addr=0x8ec8, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x8eb4, .a=0x5e, .x=0x4b, .y=0xb2, .sp=0xb0, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x8ec7, .value=0x30}, {.addr=0x8ec8, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x8ec7, .value=0x30, .type=IO_READ},
        {.addr=0x8ec8, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x1feb, .a=0x40, .x=0x1b, .y=0xa2, .sp=0xba, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x1feb, .value=0x30}, {.addr=0x1fec, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x1f6f, .a=0x40, .x=0x1b, .y=0xa2, .sp=0xba, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x1feb, .value=0x30}, {.addr=0x1fec, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x1feb, .value=0x30, .type=IO_READ},
        {.addr=0x1fec, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xd36e, .a=0xb7, .x=0x03, .y=0x2d, .sp=0xb3, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xd36e, .value=0x30}, {.addr=0xd36f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd35e, .a=0xb7, .x=0x03, .y=0x2d, .sp=0xb3, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0xd36e, .value=0x30}, {.addr=0xd36f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd36e, .value=0x30, .type=IO_READ},
        {.addr=0xd36f, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xd985, .a=0x67, .x=0x75, .y=0x53, .sp=0x95, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xd985, .value=0x30}, {.addr=0xd986, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xd987, .a=0x67, .x=0x75, .y=0x53, .sp=0x95, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xd985, .value=0x30}, {.addr=0xd986, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xd985, .value=0x30, .type=IO_READ},
        {.addr=0xd986, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x2565, .a=0xf6, .x=0xd9, .y=0x7e, .sp=0x3a, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x2565, .value=0x30}, {.addr=0x2566, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2567, .a=0xf6, .x=0xd9, .y=0x7e, .sp=0x3a, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x2565, .value=0x30}, {.addr=0x2566, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2565, .value=0x30, .type=IO_READ},
        {.addr=0x2566, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xd9a5, .a=0xe5, .x=0x8d, .y=0x9b, .sp=0xea, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xd9a5, .value=0x30}, {.addr=0xd9a6, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xd954, .a=0xe5, .x=0x8d, .y=0x9b, .sp=0xea, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xd9a5, .value=0x30}, {.addr=0xd9a6, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xd9a5, .value=0x30, .type=IO_READ},
        {.addr=0xd9a6, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x3817, .a=0x65, .x=0x6e, .y=0xde, .sp=0xc9, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x3817, .value=0x30}, {.addr=0x3818, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x379d, .a=0x65, .x=0x6e, .y=0xde, .sp=0xc9, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x3817, .value=0x30}, {.addr=0x3818, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x3817, .value=0x30, .type=IO_READ},
        {.addr=0x3818, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xc106, .a=0xe4, .x=0x46, .y=0xb8, .sp=0xea, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xc106, .value=0x30}, {.addr=0xc107, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc155, .a=0xe4, .x=0x46, .y=0xb8, .sp=0xea, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xc106, .value=0x30}, {.addr=0xc107, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc106, .value=0x30, .type=IO_READ},
        {.addr=0xc107, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xa4e7, .a=0x37, .x=0x7e, .y=0x50, .sp=0xac, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xa4e7, .value=0x30}, {.addr=0xa4e8, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xa4e9, .a=0x37, .x=0x7e, .y=0x50, .sp=0xac, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xa4e7, .value=0x30}, {.addr=0xa4e8, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xa4e7, .value=0x30, .type=IO_READ},
        {.addr=0xa4e8, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xa1b9, .a=0x40, .x=0x73, .y=0xad, .sp=0x12, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xa1b9, .value=0x30}, {.addr=0xa1ba, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xa1bb, .a=0x40, .x=0x73, .y=0xad, .sp=0x12, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xa1b9, .value=0x30}, {.addr=0xa1ba, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xa1b9, .value=0x30, .type=IO_READ},
        {.addr=0xa1ba, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xfbe4, .a=0xe7, .x=0xab, .y=0xc9, .sp=0xda, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xfbe4, .value=0x30}, {.addr=0xfbe5, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xfbe6, .a=0xe7, .x=0xab, .y=0xc9, .sp=0xda, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xfbe4, .value=0x30}, {.addr=0xfbe5, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xfbe4, .value=0x30, .type=IO_READ},
        {.addr=0xfbe5, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x6d67, .a=0x75, .x=0x95, .y=0x8f, .sp=0x1b, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x6d67, .value=0x30}, {.addr=0x6d68, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x6d69, .a=0x75, .x=0x95, .y=0x8f, .sp=0x1b, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6d67, .value=0x30}, {.addr=0x6d68, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x6d67, .value=0x30, .type=IO_READ},
        {.addr=0x6d68, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x0ae2, .a=0xa1, .x=0x54, .y=0xf7, .sp=0x37, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0ae2, .value=0x30}, {.addr=0x0ae3, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x0aba, .a=0xa1, .x=0x54, .y=0xf7, .sp=0x37, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0ae2, .value=0x30}, {.addr=0x0ae3, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x0ae2, .value=0x30, .type=IO_READ},
        {.addr=0x0ae3, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x01c1, .a=0x7b, .x=0xed, .y=0xf7, .sp=0xe9, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x30}, {.addr=0x01c2, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x015c, .a=0x7b, .x=0xed, .y=0xf7, .sp=0xe9, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x30}, {.addr=0x01c2, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x01c1, .value=0x30, .type=IO_READ},
        {.addr=0x01c2, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xb7b5, .a=0xde, .x=0x32, .y=0xce, .sp=0x72, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xb7b5, .value=0x30}, {.addr=0xb7b6, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xb7b9, .a=0xde, .x=0x32, .y=0xce, .sp=0x72, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xb7b5, .value=0x30}, {.addr=0xb7b6, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xb7b5, .value=0x30, .type=IO_READ},
        {.addr=0xb7b6, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x2241, .a=0x52, .x=0xb2, .y=0xa0, .sp=0xf0, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x2241, .value=0x30}, {.addr=0x2242, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x2243, .a=0x52, .x=0xb2, .y=0xa0, .sp=0xf0, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x2241, .value=0x30}, {.addr=0x2242, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x2241, .value=0x30, .type=IO_READ},
        {.addr=0x2242, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x548a, .a=0x79, .x=0x7d, .y=0x86, .sp=0x8f, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x548a, .value=0x30}, {.addr=0x548b, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x545f, .a=0x79, .x=0x7d, .y=0x86, .sp=0x8f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x548a, .value=0x30}, {.addr=0x548b, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x548a, .value=0x30, .type=IO_READ},
        {.addr=0x548b, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x3b37, .a=0xa1, .x=0xa6, .y=0xf4, .sp=0xc8, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x3b37, .value=0x30}, {.addr=0x3b38, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x3aef, .a=0xa1, .x=0xa6, .y=0xf4, .sp=0xc8, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x3b37, .value=0x30}, {.addr=0x3b38, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x3b37, .value=0x30, .type=IO_READ},
        {.addr=0x3b38, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x76c6, .a=0xb1, .x=0xac, .y=0xb2, .sp=0x98, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x76c6, .value=0x30}, {.addr=0x76c7, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x770b, .a=0xb1, .x=0xac, .y=0xb2, .sp=0x98, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x76c6, .value=0x30}, {.addr=0x76c7, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x76c6, .value=0x30, .type=IO_READ},
        {.addr=0x76c7, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x7031, .a=0x9d, .x=0x85, .y=0x3c, .sp=0x2f, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x7031, .value=0x30}, {.addr=0x7032, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x7033, .a=0x9d, .x=0x85, .y=0x3c, .sp=0x2f, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x7031, .value=0x30}, {.addr=0x7032, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x7031, .value=0x30, .type=IO_READ},
        {.addr=0x7032, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x41fa, .a=0x6a, .x=0x8a, .y=0x7a, .sp=0xdf, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x41fa, .value=0x30}, {.addr=0x41fb, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x41da, .a=0x6a, .x=0x8a, .y=0x7a, .sp=0xdf, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x41fa, .value=0x30}, {.addr=0x41fb, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x41fa, .value=0x30, .type=IO_READ},
        {.addr=0x41fb, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x5821, .a=0xfb, .x=0xfc, .y=0x3e, .sp=0x8a, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x5821, .value=0x30}, {.addr=0x5822, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x5823, .a=0xfb, .x=0xfc, .y=0x3e, .sp=0x8a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x5821, .value=0x30}, {.addr=0x5822, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x5821, .value=0x30, .type=IO_READ},
        {.addr=0x5822, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xcb63, .a=0xe0, .x=0xbc, .y=0xe3, .sp=0x98, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xcb63, .value=0x30}, {.addr=0xcb64, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xcb65, .a=0xe0, .x=0xbc, .y=0xe3, .sp=0x98, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xcb63, .value=0x30}, {.addr=0xcb64, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xcb63, .value=0x30, .type=IO_READ},
        {.addr=0xcb64, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xb65d, .a=0x40, .x=0x84, .y=0xfe, .sp=0xb9, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xb65d, .value=0x30}, {.addr=0xb65e, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xb647, .a=0x40, .x=0x84, .y=0xfe, .sp=0xb9, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xb65d, .value=0x30}, {.addr=0xb65e, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xb65d, .value=0x30, .type=IO_READ},
        {.addr=0xb65e, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xff09, .a=0x62, .x=0x41, .y=0x26, .sp=0x98, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xff09, .value=0x30}, {.addr=0xff0a, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xfed8, .a=0x62, .x=0x41, .y=0x26, .sp=0x98, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xff09, .value=0x30}, {.addr=0xff0a, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xff09, .value=0x30, .type=IO_READ},
        {.addr=0xff0a, .value=0xcd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x2bec, .a=0x2e, .x=0x3a, .y=0xb1, .sp=0xe0, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x2bec, .value=0x30}, {.addr=0x2bed, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x2c41, .a=0x2e, .x=0x3a, .y=0xb1, .sp=0xe0, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x2bec, .value=0x30}, {.addr=0x2bed, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x2bec, .value=0x30, .type=IO_READ},
        {.addr=0x2bed, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x4c54, .a=0xcc, .x=0x50, .y=0x1f, .sp=0x2e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x4c54, .value=0x30}, {.addr=0x4c55, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x4bec, .a=0xcc, .x=0x50, .y=0x1f, .sp=0x2e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x4c54, .value=0x30}, {.addr=0x4c55, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x4c54, .value=0x30, .type=IO_READ},
        {.addr=0x4c55, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xff38, .a=0x7f, .x=0xfb, .y=0xeb, .sp=0x7f, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xff38, .value=0x30}, {.addr=0xff39, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xff2c, .a=0x7f, .x=0xfb, .y=0xeb, .sp=0x7f, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xff38, .value=0x30}, {.addr=0xff39, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xff38, .value=0x30, .type=IO_READ},
        {.addr=0xff39, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_30, _30_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x2165, .a=0xeb, .x=0x91, .y=0x65, .sp=0x61, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x2165, .value=0x30}, {.addr=0x2166, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x2167, .a=0xeb, .x=0x91, .y=0x65, .sp=0x61, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x2165, .value=0x30}, {.addr=0x2166, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x2165, .value=0x30, .type=IO_READ},
        {.addr=0x2166, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("30 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
