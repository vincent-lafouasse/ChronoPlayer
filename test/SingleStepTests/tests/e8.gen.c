#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_E8, _E8_0000) {
    const struct CPU_State initial_cpu = {.pc=0x3b40, .a=0x85, .x=0x14, .y=0xaa, .sp=0x63, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x3b40, .value=0xe8}, {.addr=0x3b41, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x3b42, .a=0x4a, .x=0x14, .y=0xaa, .sp=0x63, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x3b40, .value=0xe8}, {.addr=0x3b41, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x3b40, .value=0xe8, .type=IO_READ},
        {.addr=0x3b41, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0001) {
    const struct CPU_State initial_cpu = {.pc=0x5faa, .a=0x5f, .x=0xf7, .y=0x89, .sp=0x93, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x5faa, .value=0xe8}, {.addr=0x5fab, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x5fac, .a=0x32, .x=0xf7, .y=0x89, .sp=0x93, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x5faa, .value=0xe8}, {.addr=0x5fab, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x5faa, .value=0xe8, .type=IO_READ},
        {.addr=0x5fab, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0002) {
    const struct CPU_State initial_cpu = {.pc=0x4b4d, .a=0x03, .x=0xdb, .y=0x6e, .sp=0xb3, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x4b4d, .value=0xe8}, {.addr=0x4b4e, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x4b4f, .a=0x1b, .x=0xdb, .y=0x6e, .sp=0xb3, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x4b4d, .value=0xe8}, {.addr=0x4b4e, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x4b4d, .value=0xe8, .type=IO_READ},
        {.addr=0x4b4e, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0003) {
    const struct CPU_State initial_cpu = {.pc=0x17d7, .a=0x62, .x=0x96, .y=0x43, .sp=0xcc, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x17d7, .value=0xe8}, {.addr=0x17d8, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x17d9, .a=0xe9, .x=0x96, .y=0x43, .sp=0xcc, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x17d7, .value=0xe8}, {.addr=0x17d8, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x17d7, .value=0xe8, .type=IO_READ},
        {.addr=0x17d8, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0004) {
    const struct CPU_State initial_cpu = {.pc=0xe902, .a=0x39, .x=0x40, .y=0x62, .sp=0x7f, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xe902, .value=0xe8}, {.addr=0xe903, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xe904, .a=0x75, .x=0x40, .y=0x62, .sp=0x7f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xe902, .value=0xe8}, {.addr=0xe903, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xe902, .value=0xe8, .type=IO_READ},
        {.addr=0xe903, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0005) {
    const struct CPU_State initial_cpu = {.pc=0x99ce, .a=0x69, .x=0x97, .y=0xa2, .sp=0xd0, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x99ce, .value=0xe8}, {.addr=0x99cf, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x99d0, .a=0xc2, .x=0x97, .y=0xa2, .sp=0xd0, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x99ce, .value=0xe8}, {.addr=0x99cf, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x99ce, .value=0xe8, .type=IO_READ},
        {.addr=0x99cf, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0006) {
    const struct CPU_State initial_cpu = {.pc=0x019f, .a=0xe0, .x=0xc7, .y=0x78, .sp=0x28, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0xe8}, {.addr=0x01a0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x01a1, .a=0x9c, .x=0xc7, .y=0x78, .sp=0x28, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xe8}, {.addr=0x01a0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x019f, .value=0xe8, .type=IO_READ},
        {.addr=0x01a0, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0007) {
    const struct CPU_State initial_cpu = {.pc=0xdf24, .a=0x9f, .x=0x32, .y=0x4f, .sp=0xf1, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xdf24, .value=0xe8}, {.addr=0xdf25, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xdf26, .a=0x2f, .x=0x32, .y=0x4f, .sp=0xf1, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xdf24, .value=0xe8}, {.addr=0xdf25, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xdf24, .value=0xe8, .type=IO_READ},
        {.addr=0xdf25, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0008) {
    const struct CPU_State initial_cpu = {.pc=0x377e, .a=0xde, .x=0xd8, .y=0xa0, .sp=0x4c, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x377e, .value=0xe8}, {.addr=0x377f, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x3780, .a=0x51, .x=0xd8, .y=0xa0, .sp=0x4c, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x377e, .value=0xe8}, {.addr=0x377f, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x377e, .value=0xe8, .type=IO_READ},
        {.addr=0x377f, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0009) {
    const struct CPU_State initial_cpu = {.pc=0x3b78, .a=0x52, .x=0x1a, .y=0x89, .sp=0x9a, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x3b78, .value=0xe8}, {.addr=0x3b79, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x3b7a, .a=0x22, .x=0x1a, .y=0x89, .sp=0x9a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x3b78, .value=0xe8}, {.addr=0x3b79, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x3b78, .value=0xe8, .type=IO_READ},
        {.addr=0x3b79, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_000A) {
    const struct CPU_State initial_cpu = {.pc=0x60cb, .a=0x76, .x=0x7d, .y=0xa3, .sp=0xfc, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x60cb, .value=0xe8}, {.addr=0x60cc, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x60cd, .a=0x81, .x=0x7d, .y=0xa3, .sp=0xfc, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x60cb, .value=0xe8}, {.addr=0x60cc, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x60cb, .value=0xe8, .type=IO_READ},
        {.addr=0x60cc, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_000B) {
    const struct CPU_State initial_cpu = {.pc=0xc7c8, .a=0xa3, .x=0xad, .y=0xe0, .sp=0x9d, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xc7c8, .value=0xe8}, {.addr=0xc7c9, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xc7ca, .a=0x1e, .x=0xad, .y=0xe0, .sp=0x9d, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xc7c8, .value=0xe8}, {.addr=0xc7c9, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xc7c8, .value=0xe8, .type=IO_READ},
        {.addr=0xc7c9, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_000C) {
    const struct CPU_State initial_cpu = {.pc=0x6d07, .a=0xc8, .x=0xa8, .y=0xee, .sp=0xe4, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x6d07, .value=0xe8}, {.addr=0x6d08, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x6d09, .a=0x02, .x=0xa8, .y=0xee, .sp=0xe4, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x6d07, .value=0xe8}, {.addr=0x6d08, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x6d07, .value=0xe8, .type=IO_READ},
        {.addr=0x6d08, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_000D) {
    const struct CPU_State initial_cpu = {.pc=0xc2ea, .a=0x98, .x=0x63, .y=0x89, .sp=0xdc, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xc2ea, .value=0xe8}, {.addr=0xc2eb, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc2ec, .a=0x26, .x=0x63, .y=0x89, .sp=0xdc, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xc2ea, .value=0xe8}, {.addr=0xc2eb, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc2ea, .value=0xe8, .type=IO_READ},
        {.addr=0xc2eb, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_000E) {
    const struct CPU_State initial_cpu = {.pc=0x52e8, .a=0x4c, .x=0xbc, .y=0x96, .sp=0xd2, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x52e8, .value=0xe8}, {.addr=0x52e9, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x52ea, .a=0x89, .x=0xbc, .y=0x96, .sp=0xd2, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x52e8, .value=0xe8}, {.addr=0x52e9, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x52e8, .value=0xe8, .type=IO_READ},
        {.addr=0x52e9, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_000F) {
    const struct CPU_State initial_cpu = {.pc=0x6262, .a=0x13, .x=0xd7, .y=0xab, .sp=0x4a, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x6262, .value=0xe8}, {.addr=0x6263, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6264, .a=0xdc, .x=0xd7, .y=0xab, .sp=0x4a, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x6262, .value=0xe8}, {.addr=0x6263, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6262, .value=0xe8, .type=IO_READ},
        {.addr=0x6263, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0010) {
    const struct CPU_State initial_cpu = {.pc=0xbff3, .a=0xef, .x=0x09, .y=0xb5, .sp=0x8c, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xbff3, .value=0xe8}, {.addr=0xbff4, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xbff5, .a=0x21, .x=0x09, .y=0xb5, .sp=0x8c, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xbff3, .value=0xe8}, {.addr=0xbff4, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xbff3, .value=0xe8, .type=IO_READ},
        {.addr=0xbff4, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0011) {
    const struct CPU_State initial_cpu = {.pc=0xa519, .a=0xe8, .x=0xd5, .y=0xe9, .sp=0x0e, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xa519, .value=0xe8}, {.addr=0xa51a, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xa51b, .a=0x14, .x=0xd5, .y=0xe9, .sp=0x0e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xa519, .value=0xe8}, {.addr=0xa51a, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xa519, .value=0xe8, .type=IO_READ},
        {.addr=0xa51a, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0012) {
    const struct CPU_State initial_cpu = {.pc=0xaad8, .a=0x3c, .x=0x81, .y=0x6e, .sp=0x6d, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xaad8, .value=0xe8}, {.addr=0xaad9, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xaada, .a=0x1a, .x=0x81, .y=0x6e, .sp=0x6d, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xaad8, .value=0xe8}, {.addr=0xaad9, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xaad8, .value=0xe8, .type=IO_READ},
        {.addr=0xaad9, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0013) {
    const struct CPU_State initial_cpu = {.pc=0x391e, .a=0xe6, .x=0x57, .y=0x94, .sp=0xf1, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x391e, .value=0xe8}, {.addr=0x391f, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x3920, .a=0x99, .x=0x57, .y=0x94, .sp=0xf1, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x391e, .value=0xe8}, {.addr=0x391f, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x391e, .value=0xe8, .type=IO_READ},
        {.addr=0x391f, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0014) {
    const struct CPU_State initial_cpu = {.pc=0xbae7, .a=0xde, .x=0xa5, .y=0x27, .sp=0x28, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xbae7, .value=0xe8}, {.addr=0xbae8, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xbae9, .a=0x1f, .x=0xa5, .y=0x27, .sp=0x28, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xbae7, .value=0xe8}, {.addr=0xbae8, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xbae7, .value=0xe8, .type=IO_READ},
        {.addr=0xbae8, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0015) {
    const struct CPU_State initial_cpu = {.pc=0x7cd8, .a=0xcf, .x=0x94, .y=0xd2, .sp=0x87, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x7cd8, .value=0xe8}, {.addr=0x7cd9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7cda, .a=0x06, .x=0x94, .y=0xd2, .sp=0x87, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x7cd8, .value=0xe8}, {.addr=0x7cd9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7cd8, .value=0xe8, .type=IO_READ},
        {.addr=0x7cd9, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0016) {
    const struct CPU_State initial_cpu = {.pc=0x33d4, .a=0xc4, .x=0xdc, .y=0x16, .sp=0x3f, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x33d4, .value=0xe8}, {.addr=0x33d5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x33d6, .a=0x7c, .x=0xdc, .y=0x16, .sp=0x3f, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x33d4, .value=0xe8}, {.addr=0x33d5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x33d4, .value=0xe8, .type=IO_READ},
        {.addr=0x33d5, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0017) {
    const struct CPU_State initial_cpu = {.pc=0xd972, .a=0x0e, .x=0x4a, .y=0x4b, .sp=0x6d, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xd972, .value=0xe8}, {.addr=0xd973, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xd974, .a=0x12, .x=0x4a, .y=0x4b, .sp=0x6d, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xd972, .value=0xe8}, {.addr=0xd973, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xd972, .value=0xe8, .type=IO_READ},
        {.addr=0xd973, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0018) {
    const struct CPU_State initial_cpu = {.pc=0xaadd, .a=0x7f, .x=0xfc, .y=0xeb, .sp=0xc6, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xaadd, .value=0xe8}, {.addr=0xaade, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xaadf, .a=0x65, .x=0xfc, .y=0xeb, .sp=0xc6, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xaadd, .value=0xe8}, {.addr=0xaade, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xaadd, .value=0xe8, .type=IO_READ},
        {.addr=0xaade, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0019) {
    const struct CPU_State initial_cpu = {.pc=0xc468, .a=0xe7, .x=0x50, .y=0x6b, .sp=0x8b, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xc468, .value=0xe8}, {.addr=0xc469, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xc46a, .a=0x2b, .x=0x50, .y=0x6b, .sp=0x8b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xc468, .value=0xe8}, {.addr=0xc469, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xc468, .value=0xe8, .type=IO_READ},
        {.addr=0xc469, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_001A) {
    const struct CPU_State initial_cpu = {.pc=0xf0e2, .a=0x7a, .x=0x33, .y=0xab, .sp=0x90, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xf0e2, .value=0xe8}, {.addr=0xf0e3, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xf0e4, .a=0xa1, .x=0x33, .y=0xab, .sp=0x90, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xf0e2, .value=0xe8}, {.addr=0xf0e3, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xf0e2, .value=0xe8, .type=IO_READ},
        {.addr=0xf0e3, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_001B) {
    const struct CPU_State initial_cpu = {.pc=0x4c1a, .a=0xf8, .x=0x27, .y=0x60, .sp=0xa2, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x4c1a, .value=0xe8}, {.addr=0x4c1b, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x4c1c, .a=0x2b, .x=0x27, .y=0x60, .sp=0xa2, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x4c1a, .value=0xe8}, {.addr=0x4c1b, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x4c1a, .value=0xe8, .type=IO_READ},
        {.addr=0x4c1b, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_001C) {
    const struct CPU_State initial_cpu = {.pc=0x9500, .a=0x58, .x=0x96, .y=0x03, .sp=0x8d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x9500, .value=0xe8}, {.addr=0x9501, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x9502, .a=0xf5, .x=0x96, .y=0x03, .sp=0x8d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x9500, .value=0xe8}, {.addr=0x9501, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x9500, .value=0xe8, .type=IO_READ},
        {.addr=0x9501, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_001D) {
    const struct CPU_State initial_cpu = {.pc=0x2aa1, .a=0xe5, .x=0xc9, .y=0x7d, .sp=0x08, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x2aa1, .value=0xe8}, {.addr=0x2aa2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2aa3, .a=0xdf, .x=0xc9, .y=0x7d, .sp=0x08, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x2aa1, .value=0xe8}, {.addr=0x2aa2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2aa1, .value=0xe8, .type=IO_READ},
        {.addr=0x2aa2, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_001E) {
    const struct CPU_State initial_cpu = {.pc=0x7886, .a=0x37, .x=0xce, .y=0x8b, .sp=0x53, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x7886, .value=0xe8}, {.addr=0x7887, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x7888, .a=0xff, .x=0xce, .y=0x8b, .sp=0x53, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x7886, .value=0xe8}, {.addr=0x7887, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x7886, .value=0xe8, .type=IO_READ},
        {.addr=0x7887, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_001F) {
    const struct CPU_State initial_cpu = {.pc=0x7350, .a=0x70, .x=0xf5, .y=0x6a, .sp=0x56, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x7350, .value=0xe8}, {.addr=0x7351, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7352, .a=0x0d, .x=0xf5, .y=0x6a, .sp=0x56, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x7350, .value=0xe8}, {.addr=0x7351, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x7350, .value=0xe8, .type=IO_READ},
        {.addr=0x7351, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0020) {
    const struct CPU_State initial_cpu = {.pc=0xab32, .a=0x2f, .x=0x08, .y=0x01, .sp=0xc5, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xab32, .value=0xe8}, {.addr=0xab33, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xab34, .a=0x6a, .x=0x08, .y=0x01, .sp=0xc5, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xab32, .value=0xe8}, {.addr=0xab33, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xab32, .value=0xe8, .type=IO_READ},
        {.addr=0xab33, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0021) {
    const struct CPU_State initial_cpu = {.pc=0xbfc0, .a=0x32, .x=0xcc, .y=0x62, .sp=0xbe, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xbfc0, .value=0xe8}, {.addr=0xbfc1, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xbfc2, .a=0x35, .x=0xcc, .y=0x62, .sp=0xbe, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xbfc0, .value=0xe8}, {.addr=0xbfc1, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xbfc0, .value=0xe8, .type=IO_READ},
        {.addr=0xbfc1, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0022) {
    const struct CPU_State initial_cpu = {.pc=0x30d2, .a=0x45, .x=0x6e, .y=0xba, .sp=0x19, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x30d2, .value=0xe8}, {.addr=0x30d3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x30d4, .a=0x86, .x=0x6e, .y=0xba, .sp=0x19, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x30d2, .value=0xe8}, {.addr=0x30d3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x30d2, .value=0xe8, .type=IO_READ},
        {.addr=0x30d3, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0023) {
    const struct CPU_State initial_cpu = {.pc=0x9121, .a=0xcc, .x=0x67, .y=0x7d, .sp=0xe7, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x9121, .value=0xe8}, {.addr=0x9122, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x9123, .a=0x38, .x=0x67, .y=0x7d, .sp=0xe7, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x9121, .value=0xe8}, {.addr=0x9122, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x9121, .value=0xe8, .type=IO_READ},
        {.addr=0x9122, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0024) {
    const struct CPU_State initial_cpu = {.pc=0xd41d, .a=0x53, .x=0x9f, .y=0xcc, .sp=0x3c, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xd41d, .value=0xe8}, {.addr=0xd41e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd41f, .a=0x9d, .x=0x9f, .y=0xcc, .sp=0x3c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xd41d, .value=0xe8}, {.addr=0xd41e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd41d, .value=0xe8, .type=IO_READ},
        {.addr=0xd41e, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0025) {
    const struct CPU_State initial_cpu = {.pc=0x47b6, .a=0xf2, .x=0x2b, .y=0xd1, .sp=0x0d, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x47b6, .value=0xe8}, {.addr=0x47b7, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x47b8, .a=0xe1, .x=0x2b, .y=0xd1, .sp=0x0d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x47b6, .value=0xe8}, {.addr=0x47b7, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x47b6, .value=0xe8, .type=IO_READ},
        {.addr=0x47b7, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0026) {
    const struct CPU_State initial_cpu = {.pc=0x4e6b, .a=0xfc, .x=0x6c, .y=0xee, .sp=0x83, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x4e6b, .value=0xe8}, {.addr=0x4e6c, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x4e6d, .a=0x9b, .x=0x6c, .y=0xee, .sp=0x83, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x4e6b, .value=0xe8}, {.addr=0x4e6c, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x4e6b, .value=0xe8, .type=IO_READ},
        {.addr=0x4e6c, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0027) {
    const struct CPU_State initial_cpu = {.pc=0x2beb, .a=0xb7, .x=0x83, .y=0xf9, .sp=0xeb, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x2beb, .value=0xe8}, {.addr=0x2bec, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x2bed, .a=0xc5, .x=0x83, .y=0xf9, .sp=0xeb, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x2beb, .value=0xe8}, {.addr=0x2bec, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x2beb, .value=0xe8, .type=IO_READ},
        {.addr=0x2bec, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0028) {
    const struct CPU_State initial_cpu = {.pc=0x0054, .a=0xbf, .x=0xa6, .y=0x03, .sp=0x48, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0xe8}, {.addr=0x0055, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0056, .a=0x1c, .x=0xa6, .y=0x03, .sp=0x48, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0xe8}, {.addr=0x0055, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0054, .value=0xe8, .type=IO_READ},
        {.addr=0x0055, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0029) {
    const struct CPU_State initial_cpu = {.pc=0x52e5, .a=0x9e, .x=0x64, .y=0x31, .sp=0x74, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x52e5, .value=0xe8}, {.addr=0x52e6, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x52e7, .a=0x16, .x=0x64, .y=0x31, .sp=0x74, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x52e5, .value=0xe8}, {.addr=0x52e6, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x52e5, .value=0xe8, .type=IO_READ},
        {.addr=0x52e6, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_002A) {
    const struct CPU_State initial_cpu = {.pc=0xf18e, .a=0xd3, .x=0x8b, .y=0xc8, .sp=0x12, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xf18e, .value=0xe8}, {.addr=0xf18f, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xf190, .a=0xeb, .x=0x8b, .y=0xc8, .sp=0x12, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xf18e, .value=0xe8}, {.addr=0xf18f, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xf18e, .value=0xe8, .type=IO_READ},
        {.addr=0xf18f, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_002B) {
    const struct CPU_State initial_cpu = {.pc=0x1ac7, .a=0x83, .x=0x74, .y=0xd3, .sp=0x40, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x1ac7, .value=0xe8}, {.addr=0x1ac8, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x1ac9, .a=0xd6, .x=0x74, .y=0xd3, .sp=0x40, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x1ac7, .value=0xe8}, {.addr=0x1ac8, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x1ac7, .value=0xe8, .type=IO_READ},
        {.addr=0x1ac8, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_002C) {
    const struct CPU_State initial_cpu = {.pc=0xc17e, .a=0x5d, .x=0xb3, .y=0xcc, .sp=0xdf, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xc17e, .value=0xe8}, {.addr=0xc17f, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xc180, .a=0x36, .x=0xb3, .y=0xcc, .sp=0xdf, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc17e, .value=0xe8}, {.addr=0xc17f, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xc17e, .value=0xe8, .type=IO_READ},
        {.addr=0xc17f, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_002D) {
    const struct CPU_State initial_cpu = {.pc=0x30a7, .a=0x01, .x=0x01, .y=0xd3, .sp=0xc1, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x30a7, .value=0xe8}, {.addr=0x30a8, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x30a9, .a=0x81, .x=0x01, .y=0xd3, .sp=0xc1, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x30a7, .value=0xe8}, {.addr=0x30a8, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x30a7, .value=0xe8, .type=IO_READ},
        {.addr=0x30a8, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_002E) {
    const struct CPU_State initial_cpu = {.pc=0xbc7a, .a=0x04, .x=0x9f, .y=0x14, .sp=0xb2, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xbc7a, .value=0xe8}, {.addr=0xbc7b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbc7c, .a=0xe0, .x=0x9f, .y=0x14, .sp=0xb2, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xbc7a, .value=0xe8}, {.addr=0xbc7b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbc7a, .value=0xe8, .type=IO_READ},
        {.addr=0xbc7b, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_002F) {
    const struct CPU_State initial_cpu = {.pc=0xc8c0, .a=0x92, .x=0xb4, .y=0x59, .sp=0x94, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xc8c0, .value=0xe8}, {.addr=0xc8c1, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xc8c2, .a=0xc9, .x=0xb4, .y=0x59, .sp=0x94, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xc8c0, .value=0xe8}, {.addr=0xc8c1, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xc8c0, .value=0xe8, .type=IO_READ},
        {.addr=0xc8c1, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0030) {
    const struct CPU_State initial_cpu = {.pc=0xa911, .a=0xea, .x=0x78, .y=0x19, .sp=0xb1, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xa911, .value=0xe8}, {.addr=0xa912, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xa913, .a=0xf3, .x=0x78, .y=0x19, .sp=0xb1, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xa911, .value=0xe8}, {.addr=0xa912, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xa911, .value=0xe8, .type=IO_READ},
        {.addr=0xa912, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0031) {
    const struct CPU_State initial_cpu = {.pc=0x6671, .a=0xb6, .x=0x6a, .y=0xba, .sp=0xc7, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x6671, .value=0xe8}, {.addr=0x6672, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6673, .a=0x06, .x=0x6a, .y=0xba, .sp=0xc7, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x6671, .value=0xe8}, {.addr=0x6672, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6671, .value=0xe8, .type=IO_READ},
        {.addr=0x6672, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0032) {
    const struct CPU_State initial_cpu = {.pc=0xa63e, .a=0xa1, .x=0x71, .y=0xd0, .sp=0xf1, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xa63e, .value=0xe8}, {.addr=0xa63f, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xa640, .a=0x42, .x=0x71, .y=0xd0, .sp=0xf1, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xa63e, .value=0xe8}, {.addr=0xa63f, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xa63e, .value=0xe8, .type=IO_READ},
        {.addr=0xa63f, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0033) {
    const struct CPU_State initial_cpu = {.pc=0x6c92, .a=0x8b, .x=0x96, .y=0x95, .sp=0x25, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x6c92, .value=0xe8}, {.addr=0x6c93, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x6c94, .a=0xa5, .x=0x96, .y=0x95, .sp=0x25, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x6c92, .value=0xe8}, {.addr=0x6c93, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x6c92, .value=0xe8, .type=IO_READ},
        {.addr=0x6c93, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0034) {
    const struct CPU_State initial_cpu = {.pc=0x6b94, .a=0xe7, .x=0x5b, .y=0x2b, .sp=0xf3, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x6b94, .value=0xe8}, {.addr=0x6b95, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x6b96, .a=0x48, .x=0x5b, .y=0x2b, .sp=0xf3, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x6b94, .value=0xe8}, {.addr=0x6b95, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x6b94, .value=0xe8, .type=IO_READ},
        {.addr=0x6b95, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0035) {
    const struct CPU_State initial_cpu = {.pc=0xd7a8, .a=0x39, .x=0x5c, .y=0x59, .sp=0xf8, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xd7a8, .value=0xe8}, {.addr=0xd7a9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd7aa, .a=0x20, .x=0x5c, .y=0x59, .sp=0xf8, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xd7a8, .value=0xe8}, {.addr=0xd7a9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd7a8, .value=0xe8, .type=IO_READ},
        {.addr=0xd7a9, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0036) {
    const struct CPU_State initial_cpu = {.pc=0x49b8, .a=0x65, .x=0xd0, .y=0x0e, .sp=0x84, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x49b8, .value=0xe8}, {.addr=0x49b9, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x49ba, .a=0xd3, .x=0xd0, .y=0x0e, .sp=0x84, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x49b8, .value=0xe8}, {.addr=0x49b9, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x49b8, .value=0xe8, .type=IO_READ},
        {.addr=0x49b9, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0037) {
    const struct CPU_State initial_cpu = {.pc=0x84a4, .a=0x99, .x=0x01, .y=0x4f, .sp=0x1e, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x84a4, .value=0xe8}, {.addr=0x84a5, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x84a6, .a=0x9a, .x=0x01, .y=0x4f, .sp=0x1e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x84a4, .value=0xe8}, {.addr=0x84a5, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x84a4, .value=0xe8, .type=IO_READ},
        {.addr=0x84a5, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0038) {
    const struct CPU_State initial_cpu = {.pc=0x1b5c, .a=0xb6, .x=0x18, .y=0x4e, .sp=0x2c, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x1b5c, .value=0xe8}, {.addr=0x1b5d, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x1b5e, .a=0x8b, .x=0x18, .y=0x4e, .sp=0x2c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x1b5c, .value=0xe8}, {.addr=0x1b5d, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x1b5c, .value=0xe8, .type=IO_READ},
        {.addr=0x1b5d, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0039) {
    const struct CPU_State initial_cpu = {.pc=0x058d, .a=0x15, .x=0x95, .y=0x60, .sp=0x5e, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x058d, .value=0xe8}, {.addr=0x058e, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x058f, .a=0x88, .x=0x95, .y=0x60, .sp=0x5e, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x058d, .value=0xe8}, {.addr=0x058e, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x058d, .value=0xe8, .type=IO_READ},
        {.addr=0x058e, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_003A) {
    const struct CPU_State initial_cpu = {.pc=0x8712, .a=0x24, .x=0xce, .y=0x7f, .sp=0xf5, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x8712, .value=0xe8}, {.addr=0x8713, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x8714, .a=0xa5, .x=0xce, .y=0x7f, .sp=0xf5, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x8712, .value=0xe8}, {.addr=0x8713, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x8712, .value=0xe8, .type=IO_READ},
        {.addr=0x8713, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_003B) {
    const struct CPU_State initial_cpu = {.pc=0xe312, .a=0xe7, .x=0xcb, .y=0x03, .sp=0xf0, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xe312, .value=0xe8}, {.addr=0xe313, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xe314, .a=0x7f, .x=0xcb, .y=0x03, .sp=0xf0, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xe312, .value=0xe8}, {.addr=0xe313, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xe312, .value=0xe8, .type=IO_READ},
        {.addr=0xe313, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_003C) {
    const struct CPU_State initial_cpu = {.pc=0x791b, .a=0x0d, .x=0x7a, .y=0x02, .sp=0x8f, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x791b, .value=0xe8}, {.addr=0x791c, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x791d, .a=0x72, .x=0x7a, .y=0x02, .sp=0x8f, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x791b, .value=0xe8}, {.addr=0x791c, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x791b, .value=0xe8, .type=IO_READ},
        {.addr=0x791c, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_003D) {
    const struct CPU_State initial_cpu = {.pc=0x1d9a, .a=0xec, .x=0x45, .y=0x96, .sp=0xb7, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x1d9a, .value=0xe8}, {.addr=0x1d9b, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1d9c, .a=0xc6, .x=0x45, .y=0x96, .sp=0xb7, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x1d9a, .value=0xe8}, {.addr=0x1d9b, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1d9a, .value=0xe8, .type=IO_READ},
        {.addr=0x1d9b, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_003E) {
    const struct CPU_State initial_cpu = {.pc=0x24c7, .a=0xa3, .x=0xc6, .y=0xd7, .sp=0xf0, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x24c7, .value=0xe8}, {.addr=0x24c8, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x24c9, .a=0xd0, .x=0xc6, .y=0xd7, .sp=0xf0, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x24c7, .value=0xe8}, {.addr=0x24c8, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x24c7, .value=0xe8, .type=IO_READ},
        {.addr=0x24c8, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_003F) {
    const struct CPU_State initial_cpu = {.pc=0x2160, .a=0xac, .x=0xe7, .y=0x68, .sp=0xb9, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x2160, .value=0xe8}, {.addr=0x2161, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x2162, .a=0xa3, .x=0xe7, .y=0x68, .sp=0xb9, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x2160, .value=0xe8}, {.addr=0x2161, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x2160, .value=0xe8, .type=IO_READ},
        {.addr=0x2161, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0040) {
    const struct CPU_State initial_cpu = {.pc=0x2bfd, .a=0xb6, .x=0x1c, .y=0xab, .sp=0x19, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x2bfd, .value=0xe8}, {.addr=0x2bfe, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x2bff, .a=0x63, .x=0x1c, .y=0xab, .sp=0x19, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x2bfd, .value=0xe8}, {.addr=0x2bfe, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x2bfd, .value=0xe8, .type=IO_READ},
        {.addr=0x2bfe, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0041) {
    const struct CPU_State initial_cpu = {.pc=0xe45e, .a=0x35, .x=0x48, .y=0x5e, .sp=0x5f, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xe45e, .value=0xe8}, {.addr=0xe45f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xe460, .a=0x60, .x=0x48, .y=0x5e, .sp=0x5f, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xe45e, .value=0xe8}, {.addr=0xe45f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xe45e, .value=0xe8, .type=IO_READ},
        {.addr=0xe45f, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0042) {
    const struct CPU_State initial_cpu = {.pc=0x6289, .a=0x32, .x=0x81, .y=0x0d, .sp=0x1a, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x6289, .value=0xe8}, {.addr=0x628a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x628b, .a=0x9f, .x=0x81, .y=0x0d, .sp=0x1a, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x6289, .value=0xe8}, {.addr=0x628a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6289, .value=0xe8, .type=IO_READ},
        {.addr=0x628a, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0043) {
    const struct CPU_State initial_cpu = {.pc=0x69b3, .a=0xbd, .x=0xfe, .y=0x3a, .sp=0x99, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x69b3, .value=0xe8}, {.addr=0x69b4, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x69b5, .a=0x73, .x=0xfe, .y=0x3a, .sp=0x99, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x69b3, .value=0xe8}, {.addr=0x69b4, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x69b3, .value=0xe8, .type=IO_READ},
        {.addr=0x69b4, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0044) {
    const struct CPU_State initial_cpu = {.pc=0x4481, .a=0xc4, .x=0x57, .y=0x92, .sp=0xe4, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x4481, .value=0xe8}, {.addr=0x4482, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x4483, .a=0x2b, .x=0x57, .y=0x92, .sp=0xe4, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x4481, .value=0xe8}, {.addr=0x4482, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x4481, .value=0xe8, .type=IO_READ},
        {.addr=0x4482, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0045) {
    const struct CPU_State initial_cpu = {.pc=0xb8ae, .a=0x7b, .x=0x9a, .y=0x84, .sp=0x39, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xb8ae, .value=0xe8}, {.addr=0xb8af, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xb8b0, .a=0xc8, .x=0x9a, .y=0x84, .sp=0x39, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xb8ae, .value=0xe8}, {.addr=0xb8af, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xb8ae, .value=0xe8, .type=IO_READ},
        {.addr=0xb8af, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0046) {
    const struct CPU_State initial_cpu = {.pc=0x7b67, .a=0x1b, .x=0x09, .y=0x8c, .sp=0x72, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x7b67, .value=0xe8}, {.addr=0x7b68, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x7b69, .a=0x9e, .x=0x09, .y=0x8c, .sp=0x72, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x7b67, .value=0xe8}, {.addr=0x7b68, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x7b67, .value=0xe8, .type=IO_READ},
        {.addr=0x7b68, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0047) {
    const struct CPU_State initial_cpu = {.pc=0x2245, .a=0x5d, .x=0xc8, .y=0x21, .sp=0xa8, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x2245, .value=0xe8}, {.addr=0x2246, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x2247, .a=0x75, .x=0xc8, .y=0x21, .sp=0xa8, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x2245, .value=0xe8}, {.addr=0x2246, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x2245, .value=0xe8, .type=IO_READ},
        {.addr=0x2246, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0048) {
    const struct CPU_State initial_cpu = {.pc=0x3c29, .a=0x0f, .x=0x8f, .y=0x47, .sp=0x03, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x3c29, .value=0xe8}, {.addr=0x3c2a, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x3c2b, .a=0xfb, .x=0x8f, .y=0x47, .sp=0x03, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x3c29, .value=0xe8}, {.addr=0x3c2a, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x3c29, .value=0xe8, .type=IO_READ},
        {.addr=0x3c2a, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0049) {
    const struct CPU_State initial_cpu = {.pc=0x261d, .a=0xc6, .x=0xc4, .y=0x40, .sp=0x21, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x261d, .value=0xe8}, {.addr=0x261e, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x261f, .a=0x74, .x=0xc4, .y=0x40, .sp=0x21, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x261d, .value=0xe8}, {.addr=0x261e, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x261d, .value=0xe8, .type=IO_READ},
        {.addr=0x261e, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_004A) {
    const struct CPU_State initial_cpu = {.pc=0xd4bd, .a=0xca, .x=0x55, .y=0xbe, .sp=0x4d, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xd4bd, .value=0xe8}, {.addr=0xd4be, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xd4bf, .a=0x4b, .x=0x55, .y=0xbe, .sp=0x4d, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xd4bd, .value=0xe8}, {.addr=0xd4be, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xd4bd, .value=0xe8, .type=IO_READ},
        {.addr=0xd4be, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_004B) {
    const struct CPU_State initial_cpu = {.pc=0x710a, .a=0x06, .x=0xa2, .y=0x99, .sp=0x5f, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x710a, .value=0xe8}, {.addr=0x710b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x710c, .a=0xdd, .x=0xa2, .y=0x99, .sp=0x5f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x710a, .value=0xe8}, {.addr=0x710b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x710a, .value=0xe8, .type=IO_READ},
        {.addr=0x710b, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_004C) {
    const struct CPU_State initial_cpu = {.pc=0x999b, .a=0x90, .x=0x7e, .y=0xd5, .sp=0x9f, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x999b, .value=0xe8}, {.addr=0x999c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x999d, .a=0x86, .x=0x7e, .y=0xd5, .sp=0x9f, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x999b, .value=0xe8}, {.addr=0x999c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x999b, .value=0xe8, .type=IO_READ},
        {.addr=0x999c, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_004D) {
    const struct CPU_State initial_cpu = {.pc=0x33b4, .a=0xe5, .x=0x8f, .y=0xc5, .sp=0xda, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x33b4, .value=0xe8}, {.addr=0x33b5, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x33b6, .a=0x93, .x=0x8f, .y=0xc5, .sp=0xda, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x33b4, .value=0xe8}, {.addr=0x33b5, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x33b4, .value=0xe8, .type=IO_READ},
        {.addr=0x33b5, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_004E) {
    const struct CPU_State initial_cpu = {.pc=0xb75d, .a=0xec, .x=0x13, .y=0xf9, .sp=0x9e, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xb75d, .value=0xe8}, {.addr=0xb75e, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xb75f, .a=0xa5, .x=0x13, .y=0xf9, .sp=0x9e, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xb75d, .value=0xe8}, {.addr=0xb75e, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xb75d, .value=0xe8, .type=IO_READ},
        {.addr=0xb75e, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_004F) {
    const struct CPU_State initial_cpu = {.pc=0x76e3, .a=0x16, .x=0x23, .y=0x2a, .sp=0xc8, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x76e3, .value=0xe8}, {.addr=0x76e4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x76e5, .a=0xaf, .x=0x23, .y=0x2a, .sp=0xc8, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x76e3, .value=0xe8}, {.addr=0x76e4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x76e3, .value=0xe8, .type=IO_READ},
        {.addr=0x76e4, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0050) {
    const struct CPU_State initial_cpu = {.pc=0x99b8, .a=0xf2, .x=0xe3, .y=0xe3, .sp=0x22, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x99b8, .value=0xe8}, {.addr=0x99b9, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x99ba, .a=0xc1, .x=0xe3, .y=0xe3, .sp=0x22, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x99b8, .value=0xe8}, {.addr=0x99b9, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x99b8, .value=0xe8, .type=IO_READ},
        {.addr=0x99b9, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0051) {
    const struct CPU_State initial_cpu = {.pc=0xbfbe, .a=0xf6, .x=0x7e, .y=0x7e, .sp=0x5b, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xbfbe, .value=0xe8}, {.addr=0xbfbf, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbfc0, .a=0x9c, .x=0x7e, .y=0x7e, .sp=0x5b, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xbfbe, .value=0xe8}, {.addr=0xbfbf, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbfbe, .value=0xe8, .type=IO_READ},
        {.addr=0xbfbf, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0052) {
    const struct CPU_State initial_cpu = {.pc=0x2811, .a=0x10, .x=0x1d, .y=0x04, .sp=0x32, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x2811, .value=0xe8}, {.addr=0x2812, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x2813, .a=0x18, .x=0x1d, .y=0x04, .sp=0x32, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x2811, .value=0xe8}, {.addr=0x2812, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x2811, .value=0xe8, .type=IO_READ},
        {.addr=0x2812, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0053) {
    const struct CPU_State initial_cpu = {.pc=0xc0c6, .a=0xba, .x=0x94, .y=0xbe, .sp=0xe2, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xc0c6, .value=0xe8}, {.addr=0xc0c7, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xc0c8, .a=0x45, .x=0x94, .y=0xbe, .sp=0xe2, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xc0c6, .value=0xe8}, {.addr=0xc0c7, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xc0c6, .value=0xe8, .type=IO_READ},
        {.addr=0xc0c7, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0054) {
    const struct CPU_State initial_cpu = {.pc=0x82bf, .a=0xe4, .x=0xd2, .y=0x01, .sp=0x4d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x82bf, .value=0xe8}, {.addr=0x82c0, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x82c1, .a=0x05, .x=0xd2, .y=0x01, .sp=0x4d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x82bf, .value=0xe8}, {.addr=0x82c0, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x82bf, .value=0xe8, .type=IO_READ},
        {.addr=0x82c0, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0055) {
    const struct CPU_State initial_cpu = {.pc=0x5bbc, .a=0x9f, .x=0x13, .y=0x86, .sp=0xa8, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x5bbc, .value=0xe8}, {.addr=0x5bbd, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x5bbe, .a=0x27, .x=0x13, .y=0x86, .sp=0xa8, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x5bbc, .value=0xe8}, {.addr=0x5bbd, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x5bbc, .value=0xe8, .type=IO_READ},
        {.addr=0x5bbd, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0056) {
    const struct CPU_State initial_cpu = {.pc=0x2546, .a=0x09, .x=0x17, .y=0x0f, .sp=0x1a, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x2546, .value=0xe8}, {.addr=0x2547, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x2548, .a=0x41, .x=0x17, .y=0x0f, .sp=0x1a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x2546, .value=0xe8}, {.addr=0x2547, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x2546, .value=0xe8, .type=IO_READ},
        {.addr=0x2547, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0057) {
    const struct CPU_State initial_cpu = {.pc=0x1fef, .a=0x4c, .x=0xc1, .y=0x32, .sp=0x66, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x1fef, .value=0xe8}, {.addr=0x1ff0, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x1ff1, .a=0x44, .x=0xc1, .y=0x32, .sp=0x66, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x1fef, .value=0xe8}, {.addr=0x1ff0, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x1fef, .value=0xe8, .type=IO_READ},
        {.addr=0x1ff0, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0058) {
    const struct CPU_State initial_cpu = {.pc=0x8178, .a=0xe3, .x=0xa7, .y=0xef, .sp=0x79, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x8178, .value=0xe8}, {.addr=0x8179, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x817a, .a=0xe8, .x=0xa7, .y=0xef, .sp=0x79, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x8178, .value=0xe8}, {.addr=0x8179, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x8178, .value=0xe8, .type=IO_READ},
        {.addr=0x8179, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0059) {
    const struct CPU_State initial_cpu = {.pc=0xaa63, .a=0x19, .x=0x80, .y=0xa8, .sp=0xfc, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xaa63, .value=0xe8}, {.addr=0xaa64, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xaa65, .a=0x4f, .x=0x80, .y=0xa8, .sp=0xfc, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xaa63, .value=0xe8}, {.addr=0xaa64, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xaa63, .value=0xe8, .type=IO_READ},
        {.addr=0xaa64, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_005A) {
    const struct CPU_State initial_cpu = {.pc=0x81e9, .a=0xa9, .x=0x28, .y=0xd5, .sp=0xcb, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x81e9, .value=0xe8}, {.addr=0x81ea, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x81eb, .a=0x28, .x=0x28, .y=0xd5, .sp=0xcb, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x81e9, .value=0xe8}, {.addr=0x81ea, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x81e9, .value=0xe8, .type=IO_READ},
        {.addr=0x81ea, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_005B) {
    const struct CPU_State initial_cpu = {.pc=0xa1eb, .a=0xfd, .x=0xa6, .y=0xcf, .sp=0x4b, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xa1eb, .value=0xe8}, {.addr=0xa1ec, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xa1ed, .a=0x5e, .x=0xa6, .y=0xcf, .sp=0x4b, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa1eb, .value=0xe8}, {.addr=0xa1ec, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xa1eb, .value=0xe8, .type=IO_READ},
        {.addr=0xa1ec, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_005C) {
    const struct CPU_State initial_cpu = {.pc=0x25c5, .a=0x22, .x=0x0f, .y=0x45, .sp=0x93, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x25c5, .value=0xe8}, {.addr=0x25c6, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x25c7, .a=0x25, .x=0x0f, .y=0x45, .sp=0x93, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x25c5, .value=0xe8}, {.addr=0x25c6, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x25c5, .value=0xe8, .type=IO_READ},
        {.addr=0x25c6, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_005D) {
    const struct CPU_State initial_cpu = {.pc=0xad67, .a=0xb9, .x=0x0a, .y=0x64, .sp=0x63, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xad67, .value=0xe8}, {.addr=0xad68, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xad69, .a=0x73, .x=0x0a, .y=0x64, .sp=0x63, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xad67, .value=0xe8}, {.addr=0xad68, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xad67, .value=0xe8, .type=IO_READ},
        {.addr=0xad68, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_005E) {
    const struct CPU_State initial_cpu = {.pc=0x2d6e, .a=0x62, .x=0x0e, .y=0xd9, .sp=0xe2, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x2d6e, .value=0xe8}, {.addr=0x2d6f, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x2d70, .a=0x9a, .x=0x0e, .y=0xd9, .sp=0xe2, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x2d6e, .value=0xe8}, {.addr=0x2d6f, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x2d6e, .value=0xe8, .type=IO_READ},
        {.addr=0x2d6f, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_005F) {
    const struct CPU_State initial_cpu = {.pc=0xe372, .a=0xcb, .x=0xc4, .y=0x28, .sp=0x13, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xe372, .value=0xe8}, {.addr=0xe373, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xe374, .a=0x70, .x=0xc4, .y=0x28, .sp=0x13, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xe372, .value=0xe8}, {.addr=0xe373, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xe372, .value=0xe8, .type=IO_READ},
        {.addr=0xe373, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0060) {
    const struct CPU_State initial_cpu = {.pc=0xf171, .a=0x6f, .x=0x38, .y=0xb9, .sp=0x25, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xf171, .value=0xe8}, {.addr=0xf172, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xf173, .a=0xc7, .x=0x38, .y=0xb9, .sp=0x25, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xf171, .value=0xe8}, {.addr=0xf172, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xf171, .value=0xe8, .type=IO_READ},
        {.addr=0xf172, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0061) {
    const struct CPU_State initial_cpu = {.pc=0x1ef7, .a=0xc7, .x=0x8c, .y=0xec, .sp=0xd2, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x1ef7, .value=0xe8}, {.addr=0x1ef8, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x1ef9, .a=0x3a, .x=0x8c, .y=0xec, .sp=0xd2, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x1ef7, .value=0xe8}, {.addr=0x1ef8, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x1ef7, .value=0xe8, .type=IO_READ},
        {.addr=0x1ef8, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0062) {
    const struct CPU_State initial_cpu = {.pc=0xe4e3, .a=0x67, .x=0xcf, .y=0x16, .sp=0x28, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xe4e3, .value=0xe8}, {.addr=0xe4e4, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xe4e5, .a=0x2f, .x=0xcf, .y=0x16, .sp=0x28, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xe4e3, .value=0xe8}, {.addr=0xe4e4, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xe4e3, .value=0xe8, .type=IO_READ},
        {.addr=0xe4e4, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0063) {
    const struct CPU_State initial_cpu = {.pc=0x1942, .a=0xb9, .x=0xad, .y=0xe7, .sp=0xb7, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x1942, .value=0xe8}, {.addr=0x1943, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1944, .a=0x7c, .x=0xad, .y=0xe7, .sp=0xb7, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x1942, .value=0xe8}, {.addr=0x1943, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1942, .value=0xe8, .type=IO_READ},
        {.addr=0x1943, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0064) {
    const struct CPU_State initial_cpu = {.pc=0x82b5, .a=0x00, .x=0x66, .y=0xb4, .sp=0x71, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x82b5, .value=0xe8}, {.addr=0x82b6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x82b7, .a=0x5c, .x=0x66, .y=0xb4, .sp=0x71, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x82b5, .value=0xe8}, {.addr=0x82b6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x82b5, .value=0xe8, .type=IO_READ},
        {.addr=0x82b6, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0065) {
    const struct CPU_State initial_cpu = {.pc=0x31f0, .a=0xc3, .x=0x24, .y=0xdc, .sp=0xef, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x31f0, .value=0xe8}, {.addr=0x31f1, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x31f2, .a=0x17, .x=0x24, .y=0xdc, .sp=0xef, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x31f0, .value=0xe8}, {.addr=0x31f1, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x31f0, .value=0xe8, .type=IO_READ},
        {.addr=0x31f1, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0066) {
    const struct CPU_State initial_cpu = {.pc=0x6acc, .a=0x1d, .x=0xc8, .y=0x7d, .sp=0x5d, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x6acc, .value=0xe8}, {.addr=0x6acd, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x6ace, .a=0x24, .x=0xc8, .y=0x7d, .sp=0x5d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x6acc, .value=0xe8}, {.addr=0x6acd, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x6acc, .value=0xe8, .type=IO_READ},
        {.addr=0x6acd, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0067) {
    const struct CPU_State initial_cpu = {.pc=0x1753, .a=0x79, .x=0x2c, .y=0x6d, .sp=0x05, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x1753, .value=0xe8}, {.addr=0x1754, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x1755, .a=0x0e, .x=0x2c, .y=0x6d, .sp=0x05, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x1753, .value=0xe8}, {.addr=0x1754, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x1753, .value=0xe8, .type=IO_READ},
        {.addr=0x1754, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0068) {
    const struct CPU_State initial_cpu = {.pc=0xd6fd, .a=0x5a, .x=0x67, .y=0x32, .sp=0x52, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xd6fd, .value=0xe8}, {.addr=0xd6fe, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xd6ff, .a=0x90, .x=0x67, .y=0x32, .sp=0x52, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xd6fd, .value=0xe8}, {.addr=0xd6fe, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xd6fd, .value=0xe8, .type=IO_READ},
        {.addr=0xd6fe, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0069) {
    const struct CPU_State initial_cpu = {.pc=0x7b71, .a=0x23, .x=0x51, .y=0xde, .sp=0xaa, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x7b71, .value=0xe8}, {.addr=0x7b72, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x7b73, .a=0x55, .x=0x51, .y=0xde, .sp=0xaa, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7b71, .value=0xe8}, {.addr=0x7b72, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x7b71, .value=0xe8, .type=IO_READ},
        {.addr=0x7b72, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_006A) {
    const struct CPU_State initial_cpu = {.pc=0x5ade, .a=0x67, .x=0x01, .y=0xde, .sp=0xff, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x5ade, .value=0xe8}, {.addr=0x5adf, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x5ae0, .a=0x4a, .x=0x01, .y=0xde, .sp=0xff, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5ade, .value=0xe8}, {.addr=0x5adf, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x5ade, .value=0xe8, .type=IO_READ},
        {.addr=0x5adf, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_006B) {
    const struct CPU_State initial_cpu = {.pc=0xbf96, .a=0x27, .x=0x34, .y=0xd2, .sp=0xd0, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xbf96, .value=0xe8}, {.addr=0xbf97, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xbf98, .a=0x61, .x=0x34, .y=0xd2, .sp=0xd0, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xbf96, .value=0xe8}, {.addr=0xbf97, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xbf96, .value=0xe8, .type=IO_READ},
        {.addr=0xbf97, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_006C) {
    const struct CPU_State initial_cpu = {.pc=0x35e2, .a=0xc6, .x=0x52, .y=0xaf, .sp=0x99, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x35e2, .value=0xe8}, {.addr=0x35e3, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x35e4, .a=0xc3, .x=0x52, .y=0xaf, .sp=0x99, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x35e2, .value=0xe8}, {.addr=0x35e3, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x35e2, .value=0xe8, .type=IO_READ},
        {.addr=0x35e3, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_006D) {
    const struct CPU_State initial_cpu = {.pc=0xdb6d, .a=0x70, .x=0xbf, .y=0xc1, .sp=0xc0, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xdb6d, .value=0xe8}, {.addr=0xdb6e, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xdb6f, .a=0xa2, .x=0xbf, .y=0xc1, .sp=0xc0, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xdb6d, .value=0xe8}, {.addr=0xdb6e, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xdb6d, .value=0xe8, .type=IO_READ},
        {.addr=0xdb6e, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_006E) {
    const struct CPU_State initial_cpu = {.pc=0x6cf7, .a=0x82, .x=0xca, .y=0x31, .sp=0xf5, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x6cf7, .value=0xe8}, {.addr=0x6cf8, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x6cf9, .a=0x03, .x=0xca, .y=0x31, .sp=0xf5, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x6cf7, .value=0xe8}, {.addr=0x6cf8, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x6cf7, .value=0xe8, .type=IO_READ},
        {.addr=0x6cf8, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_006F) {
    const struct CPU_State initial_cpu = {.pc=0x22ef, .a=0x92, .x=0xe0, .y=0x4d, .sp=0x2c, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x22ef, .value=0xe8}, {.addr=0x22f0, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x22f1, .a=0xb8, .x=0xe0, .y=0x4d, .sp=0x2c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x22ef, .value=0xe8}, {.addr=0x22f0, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x22ef, .value=0xe8, .type=IO_READ},
        {.addr=0x22f0, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0070) {
    const struct CPU_State initial_cpu = {.pc=0xef72, .a=0x6c, .x=0xe9, .y=0xe7, .sp=0x9f, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xef72, .value=0xe8}, {.addr=0xef73, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xef74, .a=0x32, .x=0xe9, .y=0xe7, .sp=0x9f, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xef72, .value=0xe8}, {.addr=0xef73, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xef72, .value=0xe8, .type=IO_READ},
        {.addr=0xef73, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0071) {
    const struct CPU_State initial_cpu = {.pc=0xeb9a, .a=0xec, .x=0x37, .y=0x8a, .sp=0x5f, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xeb9a, .value=0xe8}, {.addr=0xeb9b, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xeb9c, .a=0xf7, .x=0x37, .y=0x8a, .sp=0x5f, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xeb9a, .value=0xe8}, {.addr=0xeb9b, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xeb9a, .value=0xe8, .type=IO_READ},
        {.addr=0xeb9b, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0072) {
    const struct CPU_State initial_cpu = {.pc=0x4663, .a=0x46, .x=0xe1, .y=0x3d, .sp=0x46, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x4663, .value=0xe8}, {.addr=0x4664, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x4665, .a=0x63, .x=0xe1, .y=0x3d, .sp=0x46, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x4663, .value=0xe8}, {.addr=0x4664, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x4663, .value=0xe8, .type=IO_READ},
        {.addr=0x4664, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0073) {
    const struct CPU_State initial_cpu = {.pc=0x6be1, .a=0x2b, .x=0x05, .y=0xf8, .sp=0x6c, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x6be1, .value=0xe8}, {.addr=0x6be2, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6be3, .a=0xae, .x=0x05, .y=0xf8, .sp=0x6c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x6be1, .value=0xe8}, {.addr=0x6be2, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6be1, .value=0xe8, .type=IO_READ},
        {.addr=0x6be2, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0074) {
    const struct CPU_State initial_cpu = {.pc=0xe290, .a=0x09, .x=0xb8, .y=0x71, .sp=0x1b, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xe290, .value=0xe8}, {.addr=0xe291, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xe292, .a=0xf3, .x=0xb8, .y=0x71, .sp=0x1b, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xe290, .value=0xe8}, {.addr=0xe291, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xe290, .value=0xe8, .type=IO_READ},
        {.addr=0xe291, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0075) {
    const struct CPU_State initial_cpu = {.pc=0x8846, .a=0x9c, .x=0x29, .y=0xab, .sp=0x3c, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x8846, .value=0xe8}, {.addr=0x8847, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x8848, .a=0x82, .x=0x29, .y=0xab, .sp=0x3c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x8846, .value=0xe8}, {.addr=0x8847, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x8846, .value=0xe8, .type=IO_READ},
        {.addr=0x8847, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0076) {
    const struct CPU_State initial_cpu = {.pc=0xaa05, .a=0x4e, .x=0x48, .y=0x11, .sp=0x9a, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xaa05, .value=0xe8}, {.addr=0xaa06, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xaa07, .a=0x96, .x=0x48, .y=0x11, .sp=0x9a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xaa05, .value=0xe8}, {.addr=0xaa06, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xaa05, .value=0xe8, .type=IO_READ},
        {.addr=0xaa06, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0077) {
    const struct CPU_State initial_cpu = {.pc=0x7843, .a=0x89, .x=0x67, .y=0xbf, .sp=0xfb, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x7843, .value=0xe8}, {.addr=0x7844, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x7845, .a=0xfb, .x=0x67, .y=0xbf, .sp=0xfb, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x7843, .value=0xe8}, {.addr=0x7844, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x7843, .value=0xe8, .type=IO_READ},
        {.addr=0x7844, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0078) {
    const struct CPU_State initial_cpu = {.pc=0x8cd0, .a=0xad, .x=0xd2, .y=0x84, .sp=0x1e, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x8cd0, .value=0xe8}, {.addr=0x8cd1, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x8cd2, .a=0xb4, .x=0xd2, .y=0x84, .sp=0x1e, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x8cd0, .value=0xe8}, {.addr=0x8cd1, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x8cd0, .value=0xe8, .type=IO_READ},
        {.addr=0x8cd1, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0079) {
    const struct CPU_State initial_cpu = {.pc=0x75aa, .a=0x6f, .x=0x2e, .y=0x2a, .sp=0x4d, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x75aa, .value=0xe8}, {.addr=0x75ab, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x75ac, .a=0xd0, .x=0x2e, .y=0x2a, .sp=0x4d, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x75aa, .value=0xe8}, {.addr=0x75ab, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x75aa, .value=0xe8, .type=IO_READ},
        {.addr=0x75ab, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_007A) {
    const struct CPU_State initial_cpu = {.pc=0x5617, .a=0xe2, .x=0x94, .y=0x3c, .sp=0x93, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x5617, .value=0xe8}, {.addr=0x5618, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x5619, .a=0x53, .x=0x94, .y=0x3c, .sp=0x93, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x5617, .value=0xe8}, {.addr=0x5618, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x5617, .value=0xe8, .type=IO_READ},
        {.addr=0x5618, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_007B) {
    const struct CPU_State initial_cpu = {.pc=0x0cc5, .a=0x21, .x=0x01, .y=0xcd, .sp=0x34, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0cc5, .value=0xe8}, {.addr=0x0cc6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0cc7, .a=0x9c, .x=0x01, .y=0xcd, .sp=0x34, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0cc5, .value=0xe8}, {.addr=0x0cc6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0cc5, .value=0xe8, .type=IO_READ},
        {.addr=0x0cc6, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_007C) {
    const struct CPU_State initial_cpu = {.pc=0x7c46, .a=0x7b, .x=0xec, .y=0xb6, .sp=0x33, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x7c46, .value=0xe8}, {.addr=0x7c47, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7c48, .a=0x9c, .x=0xec, .y=0xb6, .sp=0x33, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x7c46, .value=0xe8}, {.addr=0x7c47, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7c46, .value=0xe8, .type=IO_READ},
        {.addr=0x7c47, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_007D) {
    const struct CPU_State initial_cpu = {.pc=0x8afb, .a=0x5c, .x=0x1d, .y=0x6e, .sp=0x52, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x8afb, .value=0xe8}, {.addr=0x8afc, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x8afd, .a=0x84, .x=0x1d, .y=0x6e, .sp=0x52, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x8afb, .value=0xe8}, {.addr=0x8afc, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x8afb, .value=0xe8, .type=IO_READ},
        {.addr=0x8afc, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_007E) {
    const struct CPU_State initial_cpu = {.pc=0xc64c, .a=0x2c, .x=0xf0, .y=0x48, .sp=0xe0, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xc64c, .value=0xe8}, {.addr=0xc64d, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xc64e, .a=0x6b, .x=0xf0, .y=0x48, .sp=0xe0, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xc64c, .value=0xe8}, {.addr=0xc64d, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xc64c, .value=0xe8, .type=IO_READ},
        {.addr=0xc64d, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_007F) {
    const struct CPU_State initial_cpu = {.pc=0x3bb9, .a=0xd8, .x=0xc3, .y=0x91, .sp=0x22, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x3bb9, .value=0xe8}, {.addr=0x3bba, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x3bbb, .a=0x09, .x=0xc3, .y=0x91, .sp=0x22, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x3bb9, .value=0xe8}, {.addr=0x3bba, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x3bb9, .value=0xe8, .type=IO_READ},
        {.addr=0x3bba, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0080) {
    const struct CPU_State initial_cpu = {.pc=0xd6de, .a=0x38, .x=0xc4, .y=0x01, .sp=0xbb, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xd6de, .value=0xe8}, {.addr=0xd6df, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xd6e0, .a=0x99, .x=0xc4, .y=0x01, .sp=0xbb, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xd6de, .value=0xe8}, {.addr=0xd6df, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xd6de, .value=0xe8, .type=IO_READ},
        {.addr=0xd6df, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0081) {
    const struct CPU_State initial_cpu = {.pc=0x7602, .a=0x07, .x=0x97, .y=0x10, .sp=0x8c, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x7602, .value=0xe8}, {.addr=0x7603, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7604, .a=0x5d, .x=0x97, .y=0x10, .sp=0x8c, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7602, .value=0xe8}, {.addr=0x7603, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7602, .value=0xe8, .type=IO_READ},
        {.addr=0x7603, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0082) {
    const struct CPU_State initial_cpu = {.pc=0x1f3b, .a=0xf4, .x=0x4e, .y=0x89, .sp=0x73, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x1f3b, .value=0xe8}, {.addr=0x1f3c, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x1f3d, .a=0x82, .x=0x4e, .y=0x89, .sp=0x73, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x1f3b, .value=0xe8}, {.addr=0x1f3c, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x1f3b, .value=0xe8, .type=IO_READ},
        {.addr=0x1f3c, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0083) {
    const struct CPU_State initial_cpu = {.pc=0x2f82, .a=0x06, .x=0x19, .y=0x0a, .sp=0x0b, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x2f82, .value=0xe8}, {.addr=0x2f83, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x2f84, .a=0xb7, .x=0x19, .y=0x0a, .sp=0x0b, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x2f82, .value=0xe8}, {.addr=0x2f83, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x2f82, .value=0xe8, .type=IO_READ},
        {.addr=0x2f83, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0084) {
    const struct CPU_State initial_cpu = {.pc=0xb8e7, .a=0x90, .x=0x02, .y=0xa2, .sp=0x07, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xb8e7, .value=0xe8}, {.addr=0xb8e8, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xb8e9, .a=0xd5, .x=0x02, .y=0xa2, .sp=0x07, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xb8e7, .value=0xe8}, {.addr=0xb8e8, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xb8e7, .value=0xe8, .type=IO_READ},
        {.addr=0xb8e8, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0085) {
    const struct CPU_State initial_cpu = {.pc=0x2a00, .a=0xa5, .x=0x32, .y=0x8f, .sp=0x58, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x2a00, .value=0xe8}, {.addr=0x2a01, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x2a02, .a=0x25, .x=0x32, .y=0x8f, .sp=0x58, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2a00, .value=0xe8}, {.addr=0x2a01, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x2a00, .value=0xe8, .type=IO_READ},
        {.addr=0x2a01, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0086) {
    const struct CPU_State initial_cpu = {.pc=0x95f3, .a=0xd5, .x=0xf4, .y=0x46, .sp=0xa4, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x95f3, .value=0xe8}, {.addr=0x95f4, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x95f5, .a=0x6a, .x=0xf4, .y=0x46, .sp=0xa4, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x95f3, .value=0xe8}, {.addr=0x95f4, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x95f3, .value=0xe8, .type=IO_READ},
        {.addr=0x95f4, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0087) {
    const struct CPU_State initial_cpu = {.pc=0x4a58, .a=0xbc, .x=0x17, .y=0x5a, .sp=0x90, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x4a58, .value=0xe8}, {.addr=0x4a59, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x4a5a, .a=0xf0, .x=0x17, .y=0x5a, .sp=0x90, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x4a58, .value=0xe8}, {.addr=0x4a59, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x4a58, .value=0xe8, .type=IO_READ},
        {.addr=0x4a59, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0088) {
    const struct CPU_State initial_cpu = {.pc=0x8175, .a=0xf8, .x=0xce, .y=0x34, .sp=0xde, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x8175, .value=0xe8}, {.addr=0x8176, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x8177, .a=0xa9, .x=0xce, .y=0x34, .sp=0xde, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x8175, .value=0xe8}, {.addr=0x8176, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x8175, .value=0xe8, .type=IO_READ},
        {.addr=0x8176, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0089) {
    const struct CPU_State initial_cpu = {.pc=0xf165, .a=0xb2, .x=0xc9, .y=0x23, .sp=0x2c, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xf165, .value=0xe8}, {.addr=0xf166, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf167, .a=0x0d, .x=0xc9, .y=0x23, .sp=0x2c, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xf165, .value=0xe8}, {.addr=0xf166, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf165, .value=0xe8, .type=IO_READ},
        {.addr=0xf166, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_008A) {
    const struct CPU_State initial_cpu = {.pc=0x0596, .a=0x9a, .x=0x04, .y=0x2b, .sp=0xdc, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0596, .value=0xe8}, {.addr=0x0597, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x0598, .a=0xf8, .x=0x04, .y=0x2b, .sp=0xdc, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0596, .value=0xe8}, {.addr=0x0597, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x0596, .value=0xe8, .type=IO_READ},
        {.addr=0x0597, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_008B) {
    const struct CPU_State initial_cpu = {.pc=0xffff, .a=0xa4, .x=0x63, .y=0xbc, .sp=0x1e, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0x13}, {.addr=0xffff, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x0001, .a=0x13, .x=0x63, .y=0xbc, .sp=0x1e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0x13}, {.addr=0xffff, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xffff, .value=0xe8, .type=IO_READ},
        {.addr=0x0000, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_008C) {
    const struct CPU_State initial_cpu = {.pc=0x142a, .a=0x05, .x=0x9b, .y=0x04, .sp=0x8b, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x142a, .value=0xe8}, {.addr=0x142b, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x142c, .a=0x33, .x=0x9b, .y=0x04, .sp=0x8b, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x142a, .value=0xe8}, {.addr=0x142b, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x142a, .value=0xe8, .type=IO_READ},
        {.addr=0x142b, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_008D) {
    const struct CPU_State initial_cpu = {.pc=0x0e0d, .a=0x7a, .x=0x3c, .y=0xff, .sp=0x20, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0e0d, .value=0xe8}, {.addr=0x0e0e, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x0e0f, .a=0xd1, .x=0x3c, .y=0xff, .sp=0x20, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0e0d, .value=0xe8}, {.addr=0x0e0e, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x0e0d, .value=0xe8, .type=IO_READ},
        {.addr=0x0e0e, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_008E) {
    const struct CPU_State initial_cpu = {.pc=0x1604, .a=0x7e, .x=0xfc, .y=0x81, .sp=0x40, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x1604, .value=0xe8}, {.addr=0x1605, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x1606, .a=0xf8, .x=0xfc, .y=0x81, .sp=0x40, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x1604, .value=0xe8}, {.addr=0x1605, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x1604, .value=0xe8, .type=IO_READ},
        {.addr=0x1605, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_008F) {
    const struct CPU_State initial_cpu = {.pc=0x089c, .a=0x9e, .x=0xbf, .y=0xe0, .sp=0xa7, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x089c, .value=0xe8}, {.addr=0x089d, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x089e, .a=0x98, .x=0xbf, .y=0xe0, .sp=0xa7, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x089c, .value=0xe8}, {.addr=0x089d, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x089c, .value=0xe8, .type=IO_READ},
        {.addr=0x089d, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0090) {
    const struct CPU_State initial_cpu = {.pc=0x35fd, .a=0xa1, .x=0xca, .y=0x2e, .sp=0x41, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x35fd, .value=0xe8}, {.addr=0x35fe, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x35ff, .a=0xed, .x=0xca, .y=0x2e, .sp=0x41, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x35fd, .value=0xe8}, {.addr=0x35fe, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x35fd, .value=0xe8, .type=IO_READ},
        {.addr=0x35fe, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0091) {
    const struct CPU_State initial_cpu = {.pc=0x3aa4, .a=0xac, .x=0x6a, .y=0x77, .sp=0xba, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x3aa4, .value=0xe8}, {.addr=0x3aa5, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x3aa6, .a=0xf6, .x=0x6a, .y=0x77, .sp=0xba, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x3aa4, .value=0xe8}, {.addr=0x3aa5, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x3aa4, .value=0xe8, .type=IO_READ},
        {.addr=0x3aa5, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0092) {
    const struct CPU_State initial_cpu = {.pc=0x80c5, .a=0x7c, .x=0x46, .y=0x19, .sp=0x76, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x80c5, .value=0xe8}, {.addr=0x80c6, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x80c7, .a=0xef, .x=0x46, .y=0x19, .sp=0x76, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x80c5, .value=0xe8}, {.addr=0x80c6, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x80c5, .value=0xe8, .type=IO_READ},
        {.addr=0x80c6, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0093) {
    const struct CPU_State initial_cpu = {.pc=0x6cd3, .a=0xdc, .x=0x70, .y=0x3d, .sp=0xc5, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x6cd3, .value=0xe8}, {.addr=0x6cd4, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x6cd5, .a=0xd0, .x=0x70, .y=0x3d, .sp=0xc5, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x6cd3, .value=0xe8}, {.addr=0x6cd4, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x6cd3, .value=0xe8, .type=IO_READ},
        {.addr=0x6cd4, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0094) {
    const struct CPU_State initial_cpu = {.pc=0x12ea, .a=0x7d, .x=0xb5, .y=0x37, .sp=0xbb, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x12ea, .value=0xe8}, {.addr=0x12eb, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x12ec, .a=0xe4, .x=0xb5, .y=0x37, .sp=0xbb, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x12ea, .value=0xe8}, {.addr=0x12eb, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x12ea, .value=0xe8, .type=IO_READ},
        {.addr=0x12eb, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0095) {
    const struct CPU_State initial_cpu = {.pc=0x911f, .a=0x5b, .x=0x95, .y=0x8c, .sp=0xba, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x911f, .value=0xe8}, {.addr=0x9120, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x9121, .a=0xf4, .x=0x95, .y=0x8c, .sp=0xba, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x911f, .value=0xe8}, {.addr=0x9120, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x911f, .value=0xe8, .type=IO_READ},
        {.addr=0x9120, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0096) {
    const struct CPU_State initial_cpu = {.pc=0xf486, .a=0xf3, .x=0xd8, .y=0x47, .sp=0xf7, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xf486, .value=0xe8}, {.addr=0xf487, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xf488, .a=0x61, .x=0xd8, .y=0x47, .sp=0xf7, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xf486, .value=0xe8}, {.addr=0xf487, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xf486, .value=0xe8, .type=IO_READ},
        {.addr=0xf487, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0097) {
    const struct CPU_State initial_cpu = {.pc=0x7bdc, .a=0x63, .x=0x81, .y=0x37, .sp=0x7c, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x7bdc, .value=0xe8}, {.addr=0x7bdd, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7bde, .a=0xdd, .x=0x81, .y=0x37, .sp=0x7c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x7bdc, .value=0xe8}, {.addr=0x7bdd, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7bdc, .value=0xe8, .type=IO_READ},
        {.addr=0x7bdd, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0098) {
    const struct CPU_State initial_cpu = {.pc=0x8fb1, .a=0x4b, .x=0x18, .y=0x9f, .sp=0x56, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x8fb1, .value=0xe8}, {.addr=0x8fb2, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x8fb3, .a=0x85, .x=0x18, .y=0x9f, .sp=0x56, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x8fb1, .value=0xe8}, {.addr=0x8fb2, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x8fb1, .value=0xe8, .type=IO_READ},
        {.addr=0x8fb2, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0099) {
    const struct CPU_State initial_cpu = {.pc=0xd097, .a=0x8f, .x=0x8d, .y=0x10, .sp=0x5e, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xd097, .value=0xe8}, {.addr=0xd098, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xd099, .a=0x61, .x=0x8d, .y=0x10, .sp=0x5e, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xd097, .value=0xe8}, {.addr=0xd098, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xd097, .value=0xe8, .type=IO_READ},
        {.addr=0xd098, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_009A) {
    const struct CPU_State initial_cpu = {.pc=0xad93, .a=0x7c, .x=0x31, .y=0x5b, .sp=0x4e, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xad93, .value=0xe8}, {.addr=0xad94, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xad95, .a=0x89, .x=0x31, .y=0x5b, .sp=0x4e, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xad93, .value=0xe8}, {.addr=0xad94, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xad93, .value=0xe8, .type=IO_READ},
        {.addr=0xad94, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_009B) {
    const struct CPU_State initial_cpu = {.pc=0xf2af, .a=0xd4, .x=0x42, .y=0x3d, .sp=0x14, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xf2af, .value=0xe8}, {.addr=0xf2b0, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xf2b1, .a=0xe7, .x=0x42, .y=0x3d, .sp=0x14, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xf2af, .value=0xe8}, {.addr=0xf2b0, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xf2af, .value=0xe8, .type=IO_READ},
        {.addr=0xf2b0, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_009C) {
    const struct CPU_State initial_cpu = {.pc=0x5d6b, .a=0xe1, .x=0x74, .y=0x0f, .sp=0x9b, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x5d6b, .value=0xe8}, {.addr=0x5d6c, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x5d6d, .a=0x28, .x=0x74, .y=0x0f, .sp=0x9b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x5d6b, .value=0xe8}, {.addr=0x5d6c, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x5d6b, .value=0xe8, .type=IO_READ},
        {.addr=0x5d6c, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_009D) {
    const struct CPU_State initial_cpu = {.pc=0x9458, .a=0xaa, .x=0xb0, .y=0x0e, .sp=0x36, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x9458, .value=0xe8}, {.addr=0x9459, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x945a, .a=0x41, .x=0xb0, .y=0x0e, .sp=0x36, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x9458, .value=0xe8}, {.addr=0x9459, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x9458, .value=0xe8, .type=IO_READ},
        {.addr=0x9459, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_009E) {
    const struct CPU_State initial_cpu = {.pc=0xdb17, .a=0xab, .x=0x1b, .y=0xa7, .sp=0x76, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xdb17, .value=0xe8}, {.addr=0xdb18, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xdb19, .a=0x5d, .x=0x1b, .y=0xa7, .sp=0x76, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xdb17, .value=0xe8}, {.addr=0xdb18, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xdb17, .value=0xe8, .type=IO_READ},
        {.addr=0xdb18, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_009F) {
    const struct CPU_State initial_cpu = {.pc=0x0eda, .a=0x76, .x=0x26, .y=0x6c, .sp=0x8e, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0eda, .value=0xe8}, {.addr=0x0edb, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x0edc, .a=0x6b, .x=0x26, .y=0x6c, .sp=0x8e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0eda, .value=0xe8}, {.addr=0x0edb, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x0eda, .value=0xe8, .type=IO_READ},
        {.addr=0x0edb, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xb878, .a=0x90, .x=0xaf, .y=0x17, .sp=0xe3, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xb878, .value=0xe8}, {.addr=0xb879, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xb87a, .a=0x0e, .x=0xaf, .y=0x17, .sp=0xe3, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xb878, .value=0xe8}, {.addr=0xb879, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xb878, .value=0xe8, .type=IO_READ},
        {.addr=0xb879, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x0c7a, .a=0x56, .x=0xdb, .y=0xa3, .sp=0xda, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0c7a, .value=0xe8}, {.addr=0x0c7b, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x0c7c, .a=0x0f, .x=0xdb, .y=0xa3, .sp=0xda, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0c7a, .value=0xe8}, {.addr=0x0c7b, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x0c7a, .value=0xe8, .type=IO_READ},
        {.addr=0x0c7b, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xd8fc, .a=0x8c, .x=0xb8, .y=0x54, .sp=0xd2, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xd8fc, .value=0xe8}, {.addr=0xd8fd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd8fe, .a=0x4d, .x=0xb8, .y=0x54, .sp=0xd2, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xd8fc, .value=0xe8}, {.addr=0xd8fd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd8fc, .value=0xe8, .type=IO_READ},
        {.addr=0xd8fd, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x4d8a, .a=0xa3, .x=0xf9, .y=0xf4, .sp=0x65, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x4d8a, .value=0xe8}, {.addr=0x4d8b, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x4d8c, .a=0x64, .x=0xf9, .y=0xf4, .sp=0x65, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x4d8a, .value=0xe8}, {.addr=0x4d8b, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x4d8a, .value=0xe8, .type=IO_READ},
        {.addr=0x4d8b, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xb8c9, .a=0x6f, .x=0x7b, .y=0xae, .sp=0x54, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xb8c9, .value=0xe8}, {.addr=0xb8ca, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xb8cb, .a=0xd1, .x=0x7b, .y=0xae, .sp=0x54, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xb8c9, .value=0xe8}, {.addr=0xb8ca, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xb8c9, .value=0xe8, .type=IO_READ},
        {.addr=0xb8ca, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x9835, .a=0xf7, .x=0xc0, .y=0x2c, .sp=0x7a, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x9835, .value=0xe8}, {.addr=0x9836, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x9837, .a=0xcd, .x=0xc0, .y=0x2c, .sp=0x7a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x9835, .value=0xe8}, {.addr=0x9836, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x9835, .value=0xe8, .type=IO_READ},
        {.addr=0x9836, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xace7, .a=0x6d, .x=0x19, .y=0x1d, .sp=0xb6, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xace7, .value=0xe8}, {.addr=0xace8, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xace9, .a=0x87, .x=0x19, .y=0x1d, .sp=0xb6, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xace7, .value=0xe8}, {.addr=0xace8, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xace7, .value=0xe8, .type=IO_READ},
        {.addr=0xace8, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xd719, .a=0x45, .x=0x67, .y=0x99, .sp=0x0c, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xd719, .value=0xe8}, {.addr=0xd71a, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xd71b, .a=0x58, .x=0x67, .y=0x99, .sp=0x0c, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xd719, .value=0xe8}, {.addr=0xd71a, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xd719, .value=0xe8, .type=IO_READ},
        {.addr=0xd71a, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x649b, .a=0x2f, .x=0x37, .y=0x5b, .sp=0x39, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x649b, .value=0xe8}, {.addr=0x649c, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x649d, .a=0x9e, .x=0x37, .y=0x5b, .sp=0x39, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x649b, .value=0xe8}, {.addr=0x649c, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x649b, .value=0xe8, .type=IO_READ},
        {.addr=0x649c, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x73e8, .a=0xed, .x=0x29, .y=0x17, .sp=0xc3, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x73e8, .value=0xe8}, {.addr=0x73e9, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x73ea, .a=0x25, .x=0x29, .y=0x17, .sp=0xc3, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x73e8, .value=0xe8}, {.addr=0x73e9, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x73e8, .value=0xe8, .type=IO_READ},
        {.addr=0x73e9, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x7381, .a=0x72, .x=0xd4, .y=0xde, .sp=0x81, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x7381, .value=0xe8}, {.addr=0x7382, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x7383, .a=0xac, .x=0xd4, .y=0xde, .sp=0x81, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x7381, .value=0xe8}, {.addr=0x7382, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x7381, .value=0xe8, .type=IO_READ},
        {.addr=0x7382, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x0e13, .a=0xf7, .x=0x71, .y=0xa3, .sp=0x7d, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0e13, .value=0xe8}, {.addr=0x0e14, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x0e15, .a=0xe7, .x=0x71, .y=0xa3, .sp=0x7d, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0e13, .value=0xe8}, {.addr=0x0e14, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x0e13, .value=0xe8, .type=IO_READ},
        {.addr=0x0e14, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x50f2, .a=0x15, .x=0x59, .y=0xfd, .sp=0x05, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x50f2, .value=0xe8}, {.addr=0x50f3, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x50f4, .a=0x2b, .x=0x59, .y=0xfd, .sp=0x05, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x50f2, .value=0xe8}, {.addr=0x50f3, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x50f2, .value=0xe8, .type=IO_READ},
        {.addr=0x50f3, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x3f63, .a=0xfd, .x=0x43, .y=0x57, .sp=0x8e, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x3f63, .value=0xe8}, {.addr=0x3f64, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x3f65, .a=0xe4, .x=0x43, .y=0x57, .sp=0x8e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x3f63, .value=0xe8}, {.addr=0x3f64, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x3f63, .value=0xe8, .type=IO_READ},
        {.addr=0x3f64, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xdac4, .a=0xd9, .x=0xe6, .y=0xad, .sp=0x2d, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xdac4, .value=0xe8}, {.addr=0xdac5, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xdac6, .a=0xba, .x=0xe6, .y=0xad, .sp=0x2d, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xdac4, .value=0xe8}, {.addr=0xdac5, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xdac4, .value=0xe8, .type=IO_READ},
        {.addr=0xdac5, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x7e40, .a=0x57, .x=0x44, .y=0x43, .sp=0x80, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x7e40, .value=0xe8}, {.addr=0x7e41, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x7e42, .a=0xab, .x=0x44, .y=0x43, .sp=0x80, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x7e40, .value=0xe8}, {.addr=0x7e41, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x7e40, .value=0xe8, .type=IO_READ},
        {.addr=0x7e41, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x6c07, .a=0xa1, .x=0x54, .y=0xe4, .sp=0x51, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x6c07, .value=0xe8}, {.addr=0x6c08, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6c09, .a=0xa0, .x=0x54, .y=0xe4, .sp=0x51, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6c07, .value=0xe8}, {.addr=0x6c08, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6c07, .value=0xe8, .type=IO_READ},
        {.addr=0x6c08, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x50dd, .a=0xae, .x=0x85, .y=0x8a, .sp=0x45, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x50dd, .value=0xe8}, {.addr=0x50de, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x50df, .a=0x06, .x=0x85, .y=0x8a, .sp=0x45, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x50dd, .value=0xe8}, {.addr=0x50de, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x50dd, .value=0xe8, .type=IO_READ},
        {.addr=0x50de, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x9e9d, .a=0xf5, .x=0x68, .y=0x58, .sp=0x39, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x9e9d, .value=0xe8}, {.addr=0x9e9e, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x9e9f, .a=0x67, .x=0x68, .y=0x58, .sp=0x39, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x9e9d, .value=0xe8}, {.addr=0x9e9e, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x9e9d, .value=0xe8, .type=IO_READ},
        {.addr=0x9e9e, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xca31, .a=0x84, .x=0x5b, .y=0x98, .sp=0x3d, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xca31, .value=0xe8}, {.addr=0xca32, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xca33, .a=0xab, .x=0x5b, .y=0x98, .sp=0x3d, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xca31, .value=0xe8}, {.addr=0xca32, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xca31, .value=0xe8, .type=IO_READ},
        {.addr=0xca32, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x85d7, .a=0xce, .x=0x4b, .y=0xcf, .sp=0x1b, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x85d7, .value=0xe8}, {.addr=0x85d8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x85d9, .a=0xe0, .x=0x4b, .y=0xcf, .sp=0x1b, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x85d7, .value=0xe8}, {.addr=0x85d8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x85d7, .value=0xe8, .type=IO_READ},
        {.addr=0x85d8, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x0585, .a=0x2e, .x=0x61, .y=0x77, .sp=0x8a, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0585, .value=0xe8}, {.addr=0x0586, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x0587, .a=0x52, .x=0x61, .y=0x77, .sp=0x8a, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0585, .value=0xe8}, {.addr=0x0586, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x0585, .value=0xe8, .type=IO_READ},
        {.addr=0x0586, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xf23f, .a=0x3e, .x=0xad, .y=0xc7, .sp=0x25, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xf23f, .value=0xe8}, {.addr=0xf240, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xf241, .a=0xc7, .x=0xad, .y=0xc7, .sp=0x25, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xf23f, .value=0xe8}, {.addr=0xf240, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xf23f, .value=0xe8, .type=IO_READ},
        {.addr=0xf240, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x861a, .a=0x2f, .x=0x07, .y=0x70, .sp=0xe0, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x861a, .value=0xe8}, {.addr=0x861b, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x861c, .a=0x2f, .x=0x07, .y=0x70, .sp=0xe0, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x861a, .value=0xe8}, {.addr=0x861b, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x861a, .value=0xe8, .type=IO_READ},
        {.addr=0x861b, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x3a46, .a=0xfe, .x=0x41, .y=0x91, .sp=0x69, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x3a46, .value=0xe8}, {.addr=0x3a47, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x3a48, .a=0xcd, .x=0x41, .y=0x91, .sp=0x69, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x3a46, .value=0xe8}, {.addr=0x3a47, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x3a46, .value=0xe8, .type=IO_READ},
        {.addr=0x3a47, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x09bb, .a=0x17, .x=0x0f, .y=0xbd, .sp=0x6d, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x09bb, .value=0xe8}, {.addr=0x09bc, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x09bd, .a=0x2c, .x=0x0f, .y=0xbd, .sp=0x6d, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x09bb, .value=0xe8}, {.addr=0x09bc, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x09bb, .value=0xe8, .type=IO_READ},
        {.addr=0x09bc, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xf999, .a=0xa0, .x=0xf4, .y=0x93, .sp=0x47, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xf999, .value=0xe8}, {.addr=0xf99a, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xf99b, .a=0x91, .x=0xf4, .y=0x93, .sp=0x47, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf999, .value=0xe8}, {.addr=0xf99a, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xf999, .value=0xe8, .type=IO_READ},
        {.addr=0xf99a, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x7f4f, .a=0xa1, .x=0x18, .y=0x0f, .sp=0x6b, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x7f4f, .value=0xe8}, {.addr=0x7f50, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x7f51, .a=0x65, .x=0x18, .y=0x0f, .sp=0x6b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7f4f, .value=0xe8}, {.addr=0x7f50, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x7f4f, .value=0xe8, .type=IO_READ},
        {.addr=0x7f50, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xf3ab, .a=0xcc, .x=0xc7, .y=0x5d, .sp=0x24, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xf3ab, .value=0xe8}, {.addr=0xf3ac, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xf3ad, .a=0x7f, .x=0xc7, .y=0x5d, .sp=0x24, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xf3ab, .value=0xe8}, {.addr=0xf3ac, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xf3ab, .value=0xe8, .type=IO_READ},
        {.addr=0xf3ac, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xd438, .a=0x66, .x=0xed, .y=0x7c, .sp=0x1e, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xd438, .value=0xe8}, {.addr=0xd439, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xd43a, .a=0x5e, .x=0xed, .y=0x7c, .sp=0x1e, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xd438, .value=0xe8}, {.addr=0xd439, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xd438, .value=0xe8, .type=IO_READ},
        {.addr=0xd439, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xe4fa, .a=0xcc, .x=0x99, .y=0xe0, .sp=0x28, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xe4fa, .value=0xe8}, {.addr=0xe4fb, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xe4fc, .a=0x68, .x=0x99, .y=0xe0, .sp=0x28, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xe4fa, .value=0xe8}, {.addr=0xe4fb, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xe4fa, .value=0xe8, .type=IO_READ},
        {.addr=0xe4fb, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x9a7d, .a=0xbb, .x=0x18, .y=0x77, .sp=0xd1, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x9a7d, .value=0xe8}, {.addr=0x9a7e, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x9a7f, .a=0xd3, .x=0x18, .y=0x77, .sp=0xd1, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x9a7d, .value=0xe8}, {.addr=0x9a7e, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x9a7d, .value=0xe8, .type=IO_READ},
        {.addr=0x9a7e, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xa9a7, .a=0x68, .x=0x26, .y=0x36, .sp=0x56, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xa9a7, .value=0xe8}, {.addr=0xa9a8, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xa9a9, .a=0x1e, .x=0x26, .y=0x36, .sp=0x56, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xa9a7, .value=0xe8}, {.addr=0xa9a8, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xa9a7, .value=0xe8, .type=IO_READ},
        {.addr=0xa9a8, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xd7d7, .a=0x5e, .x=0xda, .y=0xaf, .sp=0x80, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xd7d7, .value=0xe8}, {.addr=0xd7d8, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xd7d9, .a=0xfb, .x=0xda, .y=0xaf, .sp=0x80, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xd7d7, .value=0xe8}, {.addr=0xd7d8, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xd7d7, .value=0xe8, .type=IO_READ},
        {.addr=0xd7d8, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xfa27, .a=0xe5, .x=0x19, .y=0x51, .sp=0x21, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xfa27, .value=0xe8}, {.addr=0xfa28, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xfa29, .a=0x81, .x=0x19, .y=0x51, .sp=0x21, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xfa27, .value=0xe8}, {.addr=0xfa28, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xfa27, .value=0xe8, .type=IO_READ},
        {.addr=0xfa28, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x4ebc, .a=0x7d, .x=0xb0, .y=0x16, .sp=0xe0, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x4ebc, .value=0xe8}, {.addr=0x4ebd, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x4ebe, .a=0x1f, .x=0xb0, .y=0x16, .sp=0xe0, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x4ebc, .value=0xe8}, {.addr=0x4ebd, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x4ebc, .value=0xe8, .type=IO_READ},
        {.addr=0x4ebd, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xcf9c, .a=0x57, .x=0xc2, .y=0x65, .sp=0xcb, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xcf9c, .value=0xe8}, {.addr=0xcf9d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xcf9e, .a=0x5d, .x=0xc2, .y=0x65, .sp=0xcb, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xcf9c, .value=0xe8}, {.addr=0xcf9d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xcf9c, .value=0xe8, .type=IO_READ},
        {.addr=0xcf9d, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xf9e1, .a=0xf1, .x=0x37, .y=0xa3, .sp=0x51, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xf9e1, .value=0xe8}, {.addr=0xf9e2, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xf9e3, .a=0xf0, .x=0x37, .y=0xa3, .sp=0x51, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xf9e1, .value=0xe8}, {.addr=0xf9e2, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xf9e1, .value=0xe8, .type=IO_READ},
        {.addr=0xf9e2, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xfbce, .a=0x8c, .x=0xfc, .y=0x0d, .sp=0x8f, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xfbce, .value=0xe8}, {.addr=0xfbcf, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xfbd0, .a=0xd8, .x=0xfc, .y=0x0d, .sp=0x8f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xfbce, .value=0xe8}, {.addr=0xfbcf, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xfbce, .value=0xe8, .type=IO_READ},
        {.addr=0xfbcf, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xeec0, .a=0x4e, .x=0xd7, .y=0x59, .sp=0x68, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xeec0, .value=0xe8}, {.addr=0xeec1, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xeec2, .a=0x0a, .x=0xd7, .y=0x59, .sp=0x68, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xeec0, .value=0xe8}, {.addr=0xeec1, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xeec0, .value=0xe8, .type=IO_READ},
        {.addr=0xeec1, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xdb4e, .a=0x0c, .x=0xd8, .y=0x76, .sp=0x67, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xdb4e, .value=0xe8}, {.addr=0xdb4f, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xdb50, .a=0xcd, .x=0xd8, .y=0x76, .sp=0x67, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xdb4e, .value=0xe8}, {.addr=0xdb4f, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xdb4e, .value=0xe8, .type=IO_READ},
        {.addr=0xdb4f, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x9af9, .a=0x75, .x=0xf5, .y=0x92, .sp=0x79, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x9af9, .value=0xe8}, {.addr=0x9afa, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9afb, .a=0x9d, .x=0xf5, .y=0x92, .sp=0x79, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x9af9, .value=0xe8}, {.addr=0x9afa, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9af9, .value=0xe8, .type=IO_READ},
        {.addr=0x9afa, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x1258, .a=0xeb, .x=0x0f, .y=0x80, .sp=0x12, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x1258, .value=0xe8}, {.addr=0x1259, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x125a, .a=0x41, .x=0x0f, .y=0x80, .sp=0x12, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x1258, .value=0xe8}, {.addr=0x1259, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x1258, .value=0xe8, .type=IO_READ},
        {.addr=0x1259, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xd560, .a=0xff, .x=0xde, .y=0x88, .sp=0xbc, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xd560, .value=0xe8}, {.addr=0xd561, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xd562, .a=0x8c, .x=0xde, .y=0x88, .sp=0xbc, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xd560, .value=0xe8}, {.addr=0xd561, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xd560, .value=0xe8, .type=IO_READ},
        {.addr=0xd561, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xa5c3, .a=0x0d, .x=0xd5, .y=0x33, .sp=0x30, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xa5c3, .value=0xe8}, {.addr=0xa5c4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa5c5, .a=0xbf, .x=0xd5, .y=0x33, .sp=0x30, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xa5c3, .value=0xe8}, {.addr=0xa5c4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa5c3, .value=0xe8, .type=IO_READ},
        {.addr=0xa5c4, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xafe7, .a=0x4d, .x=0x07, .y=0x1a, .sp=0xd4, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xafe7, .value=0xe8}, {.addr=0xafe8, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xafe9, .a=0xd2, .x=0x07, .y=0x1a, .sp=0xd4, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xafe7, .value=0xe8}, {.addr=0xafe8, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xafe7, .value=0xe8, .type=IO_READ},
        {.addr=0xafe8, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x04f8, .a=0xad, .x=0xb9, .y=0xf5, .sp=0x23, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x04f8, .value=0xe8}, {.addr=0x04f9, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x04fa, .a=0xa2, .x=0xb9, .y=0xf5, .sp=0x23, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x04f8, .value=0xe8}, {.addr=0x04f9, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x04f8, .value=0xe8, .type=IO_READ},
        {.addr=0x04f9, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x3bdf, .a=0xf2, .x=0x5e, .y=0x1d, .sp=0x42, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x3bdf, .value=0xe8}, {.addr=0x3be0, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x3be1, .a=0xb6, .x=0x5e, .y=0x1d, .sp=0x42, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x3bdf, .value=0xe8}, {.addr=0x3be0, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x3bdf, .value=0xe8, .type=IO_READ},
        {.addr=0x3be0, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x277f, .a=0x03, .x=0x6f, .y=0x2e, .sp=0x93, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x277f, .value=0xe8}, {.addr=0x2780, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x2781, .a=0xd4, .x=0x6f, .y=0x2e, .sp=0x93, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x277f, .value=0xe8}, {.addr=0x2780, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x277f, .value=0xe8, .type=IO_READ},
        {.addr=0x2780, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x4235, .a=0x43, .x=0xe8, .y=0xe6, .sp=0xda, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x4235, .value=0xe8}, {.addr=0x4236, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x4237, .a=0x2f, .x=0xe8, .y=0xe6, .sp=0xda, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x4235, .value=0xe8}, {.addr=0x4236, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x4235, .value=0xe8, .type=IO_READ},
        {.addr=0x4236, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xcdca, .a=0x89, .x=0x04, .y=0x77, .sp=0xb0, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xcdca, .value=0xe8}, {.addr=0xcdcb, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xcdcc, .a=0xf5, .x=0x04, .y=0x77, .sp=0xb0, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xcdca, .value=0xe8}, {.addr=0xcdcb, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xcdca, .value=0xe8, .type=IO_READ},
        {.addr=0xcdcb, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x6749, .a=0x32, .x=0xf7, .y=0x08, .sp=0x8f, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x6749, .value=0xe8}, {.addr=0x674a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x674b, .a=0x1c, .x=0xf7, .y=0x08, .sp=0x8f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x6749, .value=0xe8}, {.addr=0x674a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6749, .value=0xe8, .type=IO_READ},
        {.addr=0x674a, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x0bf9, .a=0x0e, .x=0x95, .y=0x6f, .sp=0x2d, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0bf9, .value=0xe8}, {.addr=0x0bfa, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0bfb, .a=0xa0, .x=0x95, .y=0x6f, .sp=0x2d, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0bf9, .value=0xe8}, {.addr=0x0bfa, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0bf9, .value=0xe8, .type=IO_READ},
        {.addr=0x0bfa, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x029b, .a=0x55, .x=0x64, .y=0x9e, .sp=0xf9, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x029b, .value=0xe8}, {.addr=0x029c, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x029d, .a=0xea, .x=0x64, .y=0x9e, .sp=0xf9, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x029b, .value=0xe8}, {.addr=0x029c, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x029b, .value=0xe8, .type=IO_READ},
        {.addr=0x029c, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x33f3, .a=0x61, .x=0xe2, .y=0x3c, .sp=0x75, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x33f3, .value=0xe8}, {.addr=0x33f4, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x33f5, .a=0x85, .x=0xe2, .y=0x3c, .sp=0x75, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x33f3, .value=0xe8}, {.addr=0x33f4, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x33f3, .value=0xe8, .type=IO_READ},
        {.addr=0x33f4, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x9ad5, .a=0x67, .x=0x7f, .y=0x1a, .sp=0x36, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x9ad5, .value=0xe8}, {.addr=0x9ad6, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x9ad7, .a=0x72, .x=0x7f, .y=0x1a, .sp=0x36, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x9ad5, .value=0xe8}, {.addr=0x9ad6, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x9ad5, .value=0xe8, .type=IO_READ},
        {.addr=0x9ad6, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x3a0f, .a=0xa2, .x=0xf4, .y=0xb2, .sp=0x41, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x3a0f, .value=0xe8}, {.addr=0x3a10, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x3a11, .a=0xa5, .x=0xf4, .y=0xb2, .sp=0x41, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x3a0f, .value=0xe8}, {.addr=0x3a10, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x3a0f, .value=0xe8, .type=IO_READ},
        {.addr=0x3a10, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xcaf8, .a=0xa3, .x=0x59, .y=0xdd, .sp=0x68, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xcaf8, .value=0xe8}, {.addr=0xcaf9, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xcafa, .a=0xfa, .x=0x59, .y=0xdd, .sp=0x68, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xcaf8, .value=0xe8}, {.addr=0xcaf9, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xcaf8, .value=0xe8, .type=IO_READ},
        {.addr=0xcaf9, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x151a, .a=0x68, .x=0xc8, .y=0x14, .sp=0x61, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x151a, .value=0xe8}, {.addr=0x151b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x151c, .a=0xdd, .x=0xc8, .y=0x14, .sp=0x61, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x151a, .value=0xe8}, {.addr=0x151b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x151a, .value=0xe8, .type=IO_READ},
        {.addr=0x151b, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x79ff, .a=0x42, .x=0x96, .y=0xd8, .sp=0x38, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x79ff, .value=0xe8}, {.addr=0x7a00, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7a01, .a=0x20, .x=0x96, .y=0xd8, .sp=0x38, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x79ff, .value=0xe8}, {.addr=0x7a00, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x79ff, .value=0xe8, .type=IO_READ},
        {.addr=0x7a00, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xa25d, .a=0x2b, .x=0x8a, .y=0xb0, .sp=0x4e, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xa25d, .value=0xe8}, {.addr=0xa25e, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xa25f, .a=0x51, .x=0x8a, .y=0xb0, .sp=0x4e, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xa25d, .value=0xe8}, {.addr=0xa25e, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xa25d, .value=0xe8, .type=IO_READ},
        {.addr=0xa25e, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x85bb, .a=0x4a, .x=0xc9, .y=0x87, .sp=0xb7, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x85bb, .value=0xe8}, {.addr=0x85bc, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x85bd, .a=0x1b, .x=0xc9, .y=0x87, .sp=0xb7, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x85bb, .value=0xe8}, {.addr=0x85bc, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x85bb, .value=0xe8, .type=IO_READ},
        {.addr=0x85bc, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x7722, .a=0x5a, .x=0xf2, .y=0xdf, .sp=0xed, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x7722, .value=0xe8}, {.addr=0x7723, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x7724, .a=0x57, .x=0xf2, .y=0xdf, .sp=0xed, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7722, .value=0xe8}, {.addr=0x7723, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x7722, .value=0xe8, .type=IO_READ},
        {.addr=0x7723, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x646a, .a=0xe5, .x=0xe0, .y=0xa4, .sp=0xa8, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x646a, .value=0xe8}, {.addr=0x646b, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x646c, .a=0xab, .x=0xe0, .y=0xa4, .sp=0xa8, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x646a, .value=0xe8}, {.addr=0x646b, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x646a, .value=0xe8, .type=IO_READ},
        {.addr=0x646b, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x8933, .a=0xd6, .x=0x87, .y=0xc8, .sp=0xb6, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x8933, .value=0xe8}, {.addr=0x8934, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x8935, .a=0x48, .x=0x87, .y=0xc8, .sp=0xb6, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x8933, .value=0xe8}, {.addr=0x8934, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x8933, .value=0xe8, .type=IO_READ},
        {.addr=0x8934, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xa6c8, .a=0x06, .x=0xae, .y=0xf6, .sp=0xf3, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xa6c8, .value=0xe8}, {.addr=0xa6c9, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa6ca, .a=0xbc, .x=0xae, .y=0xf6, .sp=0xf3, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xa6c8, .value=0xe8}, {.addr=0xa6c9, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa6c8, .value=0xe8, .type=IO_READ},
        {.addr=0xa6c9, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x6e67, .a=0xb2, .x=0xc3, .y=0x0a, .sp=0x3f, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x6e67, .value=0xe8}, {.addr=0x6e68, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x6e69, .a=0xe5, .x=0xc3, .y=0x0a, .sp=0x3f, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x6e67, .value=0xe8}, {.addr=0x6e68, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x6e67, .value=0xe8, .type=IO_READ},
        {.addr=0x6e68, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xf18f, .a=0x85, .x=0x3b, .y=0x87, .sp=0xf1, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xf18f, .value=0xe8}, {.addr=0xf190, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf191, .a=0x00, .x=0x3b, .y=0x87, .sp=0xf1, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xf18f, .value=0xe8}, {.addr=0xf190, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf18f, .value=0xe8, .type=IO_READ},
        {.addr=0xf190, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xcd6c, .a=0xff, .x=0x26, .y=0xd6, .sp=0x6a, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xcd6c, .value=0xe8}, {.addr=0xcd6d, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xcd6e, .a=0x0d, .x=0x26, .y=0xd6, .sp=0x6a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xcd6c, .value=0xe8}, {.addr=0xcd6d, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xcd6c, .value=0xe8, .type=IO_READ},
        {.addr=0xcd6d, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xc13a, .a=0xf8, .x=0x48, .y=0xce, .sp=0x12, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xc13a, .value=0xe8}, {.addr=0xc13b, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xc13c, .a=0x17, .x=0x48, .y=0xce, .sp=0x12, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xc13a, .value=0xe8}, {.addr=0xc13b, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xc13a, .value=0xe8, .type=IO_READ},
        {.addr=0xc13b, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x3a55, .a=0xf3, .x=0x56, .y=0xfe, .sp=0xc5, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x3a55, .value=0xe8}, {.addr=0x3a56, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x3a57, .a=0x7f, .x=0x56, .y=0xfe, .sp=0xc5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x3a55, .value=0xe8}, {.addr=0x3a56, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x3a55, .value=0xe8, .type=IO_READ},
        {.addr=0x3a56, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xe566, .a=0x69, .x=0x52, .y=0x71, .sp=0x46, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xe566, .value=0xe8}, {.addr=0xe567, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xe568, .a=0x9a, .x=0x52, .y=0x71, .sp=0x46, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xe566, .value=0xe8}, {.addr=0xe567, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xe566, .value=0xe8, .type=IO_READ},
        {.addr=0xe567, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x9174, .a=0xc4, .x=0x0a, .y=0xe6, .sp=0xf3, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x9174, .value=0xe8}, {.addr=0x9175, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9176, .a=0x9d, .x=0x0a, .y=0xe6, .sp=0xf3, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9174, .value=0xe8}, {.addr=0x9175, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9174, .value=0xe8, .type=IO_READ},
        {.addr=0x9175, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x9a99, .a=0xbf, .x=0x03, .y=0xff, .sp=0xa8, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x9a99, .value=0xe8}, {.addr=0x9a9a, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x9a9b, .a=0x36, .x=0x03, .y=0xff, .sp=0xa8, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9a99, .value=0xe8}, {.addr=0x9a9a, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x9a99, .value=0xe8, .type=IO_READ},
        {.addr=0x9a9a, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xe6d3, .a=0xe2, .x=0x53, .y=0x84, .sp=0x98, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xe6d3, .value=0xe8}, {.addr=0xe6d4, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xe6d5, .a=0xe2, .x=0x53, .y=0x84, .sp=0x98, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xe6d3, .value=0xe8}, {.addr=0xe6d4, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xe6d3, .value=0xe8, .type=IO_READ},
        {.addr=0xe6d4, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x5613, .a=0x26, .x=0x82, .y=0x5c, .sp=0x57, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x5613, .value=0xe8}, {.addr=0x5614, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x5615, .a=0x47, .x=0x82, .y=0x5c, .sp=0x57, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x5613, .value=0xe8}, {.addr=0x5614, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x5613, .value=0xe8, .type=IO_READ},
        {.addr=0x5614, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xfd05, .a=0x8b, .x=0xa2, .y=0x57, .sp=0xb9, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xfd05, .value=0xe8}, {.addr=0xfd06, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xfd07, .a=0xae, .x=0xa2, .y=0x57, .sp=0xb9, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xfd05, .value=0xe8}, {.addr=0xfd06, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xfd05, .value=0xe8, .type=IO_READ},
        {.addr=0xfd06, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x583a, .a=0x1e, .x=0xb9, .y=0xf0, .sp=0x08, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x583a, .value=0xe8}, {.addr=0x583b, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x583c, .a=0xcf, .x=0xb9, .y=0xf0, .sp=0x08, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x583a, .value=0xe8}, {.addr=0x583b, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x583a, .value=0xe8, .type=IO_READ},
        {.addr=0x583b, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x7c24, .a=0x0e, .x=0xf8, .y=0xf5, .sp=0x35, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x7c24, .value=0xe8}, {.addr=0x7c25, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x7c26, .a=0xab, .x=0xf8, .y=0xf5, .sp=0x35, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x7c24, .value=0xe8}, {.addr=0x7c25, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x7c24, .value=0xe8, .type=IO_READ},
        {.addr=0x7c25, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x070a, .a=0x31, .x=0x27, .y=0x5b, .sp=0x93, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x070a, .value=0xe8}, {.addr=0x070b, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x070c, .a=0xda, .x=0x27, .y=0x5b, .sp=0x93, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x070a, .value=0xe8}, {.addr=0x070b, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x070a, .value=0xe8, .type=IO_READ},
        {.addr=0x070b, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x68dd, .a=0x59, .x=0x15, .y=0xd3, .sp=0x5b, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x68dd, .value=0xe8}, {.addr=0x68de, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x68df, .a=0x5f, .x=0x15, .y=0xd3, .sp=0x5b, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x68dd, .value=0xe8}, {.addr=0x68de, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x68dd, .value=0xe8, .type=IO_READ},
        {.addr=0x68de, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xeeea, .a=0xa6, .x=0x96, .y=0x43, .sp=0xd2, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xeeea, .value=0xe8}, {.addr=0xeeeb, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xeeec, .a=0xf8, .x=0x96, .y=0x43, .sp=0xd2, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xeeea, .value=0xe8}, {.addr=0xeeeb, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xeeea, .value=0xe8, .type=IO_READ},
        {.addr=0xeeeb, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xf28d, .a=0xe2, .x=0xba, .y=0x84, .sp=0xb0, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xf28d, .value=0xe8}, {.addr=0xf28e, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0xf28f, .a=0xd0, .x=0xba, .y=0x84, .sp=0xb0, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf28d, .value=0xe8}, {.addr=0xf28e, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0xf28d, .value=0xe8, .type=IO_READ},
        {.addr=0xf28e, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x5398, .a=0x54, .x=0xbb, .y=0x18, .sp=0xa2, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x5398, .value=0xe8}, {.addr=0x5399, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x539a, .a=0x4c, .x=0xbb, .y=0x18, .sp=0xa2, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x5398, .value=0xe8}, {.addr=0x5399, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x5398, .value=0xe8, .type=IO_READ},
        {.addr=0x5399, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x3f33, .a=0xb2, .x=0x00, .y=0x98, .sp=0x42, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x3f33, .value=0xe8}, {.addr=0x3f34, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3f35, .a=0xbc, .x=0x00, .y=0x98, .sp=0x42, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3f33, .value=0xe8}, {.addr=0x3f34, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3f33, .value=0xe8, .type=IO_READ},
        {.addr=0x3f34, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x426f, .a=0xdf, .x=0xae, .y=0x49, .sp=0x39, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x426f, .value=0xe8}, {.addr=0x4270, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4271, .a=0x06, .x=0xae, .y=0x49, .sp=0x39, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x426f, .value=0xe8}, {.addr=0x4270, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x426f, .value=0xe8, .type=IO_READ},
        {.addr=0x4270, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xa0ab, .a=0xb4, .x=0x10, .y=0xff, .sp=0xc6, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xa0ab, .value=0xe8}, {.addr=0xa0ac, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xa0ad, .a=0x52, .x=0x10, .y=0xff, .sp=0xc6, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xa0ab, .value=0xe8}, {.addr=0xa0ac, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xa0ab, .value=0xe8, .type=IO_READ},
        {.addr=0xa0ac, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xbfbb, .a=0x16, .x=0x4b, .y=0x11, .sp=0x2c, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xbfbb, .value=0xe8}, {.addr=0xbfbc, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xbfbd, .a=0xca, .x=0x4b, .y=0x11, .sp=0x2c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xbfbb, .value=0xe8}, {.addr=0xbfbc, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xbfbb, .value=0xe8, .type=IO_READ},
        {.addr=0xbfbc, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x5fa3, .a=0xaf, .x=0xb5, .y=0xe9, .sp=0x96, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x5fa3, .value=0xe8}, {.addr=0x5fa4, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x5fa5, .a=0xb4, .x=0xb5, .y=0xe9, .sp=0x96, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x5fa3, .value=0xe8}, {.addr=0x5fa4, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x5fa3, .value=0xe8, .type=IO_READ},
        {.addr=0x5fa4, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x289d, .a=0x0a, .x=0x56, .y=0x1f, .sp=0xdc, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x289d, .value=0xe8}, {.addr=0x289e, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x289f, .a=0xc0, .x=0x56, .y=0x1f, .sp=0xdc, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x289d, .value=0xe8}, {.addr=0x289e, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x289d, .value=0xe8, .type=IO_READ},
        {.addr=0x289e, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xb18b, .a=0x0e, .x=0x14, .y=0x16, .sp=0x71, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xb18b, .value=0xe8}, {.addr=0xb18c, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xb18d, .a=0x42, .x=0x14, .y=0x16, .sp=0x71, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xb18b, .value=0xe8}, {.addr=0xb18c, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xb18b, .value=0xe8, .type=IO_READ},
        {.addr=0xb18c, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x3274, .a=0xa3, .x=0x7b, .y=0xbc, .sp=0x6e, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x3274, .value=0xe8}, {.addr=0x3275, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x3276, .a=0x51, .x=0x7b, .y=0xbc, .sp=0x6e, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x3274, .value=0xe8}, {.addr=0x3275, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x3274, .value=0xe8, .type=IO_READ},
        {.addr=0x3275, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x5c6c, .a=0xb9, .x=0xca, .y=0xee, .sp=0x25, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x5c6c, .value=0xe8}, {.addr=0x5c6d, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x5c6e, .a=0xb4, .x=0xca, .y=0xee, .sp=0x25, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x5c6c, .value=0xe8}, {.addr=0x5c6d, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x5c6c, .value=0xe8, .type=IO_READ},
        {.addr=0x5c6d, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xb063, .a=0x6f, .x=0xbb, .y=0xf5, .sp=0xd0, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xb063, .value=0xe8}, {.addr=0xb064, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xb065, .a=0xb8, .x=0xbb, .y=0xf5, .sp=0xd0, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb063, .value=0xe8}, {.addr=0xb064, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xb063, .value=0xe8, .type=IO_READ},
        {.addr=0xb064, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x8c33, .a=0x72, .x=0x8c, .y=0x5f, .sp=0xb6, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x8c33, .value=0xe8}, {.addr=0x8c34, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x8c35, .a=0x27, .x=0x8c, .y=0x5f, .sp=0xb6, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x8c33, .value=0xe8}, {.addr=0x8c34, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x8c33, .value=0xe8, .type=IO_READ},
        {.addr=0x8c34, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xa8ac, .a=0x82, .x=0x47, .y=0x71, .sp=0x9d, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xa8ac, .value=0xe8}, {.addr=0xa8ad, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa8ae, .a=0x5d, .x=0x47, .y=0x71, .sp=0x9d, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xa8ac, .value=0xe8}, {.addr=0xa8ad, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa8ac, .value=0xe8, .type=IO_READ},
        {.addr=0xa8ad, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0100) {
    const struct CPU_State initial_cpu = {.pc=0xabc3, .a=0xd3, .x=0x8a, .y=0x96, .sp=0xdd, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xabc3, .value=0xe8}, {.addr=0xabc4, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xabc5, .a=0x0f, .x=0x8a, .y=0x96, .sp=0xdd, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xabc3, .value=0xe8}, {.addr=0xabc4, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xabc3, .value=0xe8, .type=IO_READ},
        {.addr=0xabc4, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0101) {
    const struct CPU_State initial_cpu = {.pc=0xf351, .a=0xb2, .x=0xb6, .y=0x91, .sp=0x33, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xf351, .value=0xe8}, {.addr=0xf352, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xf353, .a=0x29, .x=0xb6, .y=0x91, .sp=0x33, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xf351, .value=0xe8}, {.addr=0xf352, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xf351, .value=0xe8, .type=IO_READ},
        {.addr=0xf352, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0102) {
    const struct CPU_State initial_cpu = {.pc=0x0dce, .a=0x00, .x=0xb3, .y=0xfe, .sp=0x25, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0dce, .value=0xe8}, {.addr=0x0dcf, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x0dd0, .a=0x56, .x=0xb3, .y=0xfe, .sp=0x25, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0dce, .value=0xe8}, {.addr=0x0dcf, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x0dce, .value=0xe8, .type=IO_READ},
        {.addr=0x0dcf, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0103) {
    const struct CPU_State initial_cpu = {.pc=0x5450, .a=0xf9, .x=0x95, .y=0xc9, .sp=0xf3, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x5450, .value=0xe8}, {.addr=0x5451, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x5452, .a=0xa3, .x=0x95, .y=0xc9, .sp=0xf3, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x5450, .value=0xe8}, {.addr=0x5451, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x5450, .value=0xe8, .type=IO_READ},
        {.addr=0x5451, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0104) {
    const struct CPU_State initial_cpu = {.pc=0x48a6, .a=0x89, .x=0xb1, .y=0x4d, .sp=0x53, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x48a6, .value=0xe8}, {.addr=0x48a7, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x48a8, .a=0x28, .x=0xb1, .y=0x4d, .sp=0x53, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x48a6, .value=0xe8}, {.addr=0x48a7, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x48a6, .value=0xe8, .type=IO_READ},
        {.addr=0x48a7, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0105) {
    const struct CPU_State initial_cpu = {.pc=0xc553, .a=0x84, .x=0x47, .y=0xdc, .sp=0x86, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xc553, .value=0xe8}, {.addr=0xc554, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc555, .a=0xce, .x=0x47, .y=0xdc, .sp=0x86, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xc553, .value=0xe8}, {.addr=0xc554, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc553, .value=0xe8, .type=IO_READ},
        {.addr=0xc554, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0106) {
    const struct CPU_State initial_cpu = {.pc=0xabfb, .a=0x5c, .x=0x8d, .y=0x57, .sp=0x97, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xabfb, .value=0xe8}, {.addr=0xabfc, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xabfd, .a=0x8d, .x=0x8d, .y=0x57, .sp=0x97, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xabfb, .value=0xe8}, {.addr=0xabfc, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xabfb, .value=0xe8, .type=IO_READ},
        {.addr=0xabfc, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0107) {
    const struct CPU_State initial_cpu = {.pc=0xd6f6, .a=0xe9, .x=0x43, .y=0xb9, .sp=0xa7, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xd6f6, .value=0xe8}, {.addr=0xd6f7, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xd6f8, .a=0x71, .x=0x43, .y=0xb9, .sp=0xa7, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xd6f6, .value=0xe8}, {.addr=0xd6f7, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xd6f6, .value=0xe8, .type=IO_READ},
        {.addr=0xd6f7, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0108) {
    const struct CPU_State initial_cpu = {.pc=0xd95b, .a=0x30, .x=0xee, .y=0x33, .sp=0x1d, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xd95b, .value=0xe8}, {.addr=0xd95c, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xd95d, .a=0x50, .x=0xee, .y=0x33, .sp=0x1d, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xd95b, .value=0xe8}, {.addr=0xd95c, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xd95b, .value=0xe8, .type=IO_READ},
        {.addr=0xd95c, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0109) {
    const struct CPU_State initial_cpu = {.pc=0x49f5, .a=0x24, .x=0xab, .y=0x0a, .sp=0x41, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x49f5, .value=0xe8}, {.addr=0x49f6, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x49f7, .a=0x27, .x=0xab, .y=0x0a, .sp=0x41, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x49f5, .value=0xe8}, {.addr=0x49f6, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x49f5, .value=0xe8, .type=IO_READ},
        {.addr=0x49f6, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_010A) {
    const struct CPU_State initial_cpu = {.pc=0x2016, .a=0xd1, .x=0xb3, .y=0x7c, .sp=0xce, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x2016, .value=0xe8}, {.addr=0x2017, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x2018, .a=0x68, .x=0xb3, .y=0x7c, .sp=0xce, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x2016, .value=0xe8}, {.addr=0x2017, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x2016, .value=0xe8, .type=IO_READ},
        {.addr=0x2017, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_010B) {
    const struct CPU_State initial_cpu = {.pc=0xdbb0, .a=0x72, .x=0xce, .y=0x88, .sp=0x1c, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xdbb0, .value=0xe8}, {.addr=0xdbb1, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xdbb2, .a=0x7b, .x=0xce, .y=0x88, .sp=0x1c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xdbb0, .value=0xe8}, {.addr=0xdbb1, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xdbb0, .value=0xe8, .type=IO_READ},
        {.addr=0xdbb1, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_010C) {
    const struct CPU_State initial_cpu = {.pc=0x45b5, .a=0x7c, .x=0x75, .y=0x75, .sp=0x42, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x45b5, .value=0xe8}, {.addr=0x45b6, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x45b7, .a=0x3c, .x=0x75, .y=0x75, .sp=0x42, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x45b5, .value=0xe8}, {.addr=0x45b6, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x45b5, .value=0xe8, .type=IO_READ},
        {.addr=0x45b6, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_010D) {
    const struct CPU_State initial_cpu = {.pc=0xf7f9, .a=0x0b, .x=0x97, .y=0xfe, .sp=0x59, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xf7f9, .value=0xe8}, {.addr=0xf7fa, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xf7fb, .a=0x3e, .x=0x97, .y=0xfe, .sp=0x59, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xf7f9, .value=0xe8}, {.addr=0xf7fa, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xf7f9, .value=0xe8, .type=IO_READ},
        {.addr=0xf7fa, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_010E) {
    const struct CPU_State initial_cpu = {.pc=0x7cea, .a=0xaf, .x=0x7b, .y=0x5b, .sp=0xa9, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x7cea, .value=0xe8}, {.addr=0x7ceb, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x7cec, .a=0xcc, .x=0x7b, .y=0x5b, .sp=0xa9, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x7cea, .value=0xe8}, {.addr=0x7ceb, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x7cea, .value=0xe8, .type=IO_READ},
        {.addr=0x7ceb, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_010F) {
    const struct CPU_State initial_cpu = {.pc=0xd0da, .a=0x15, .x=0x27, .y=0x82, .sp=0x20, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xd0da, .value=0xe8}, {.addr=0xd0db, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xd0dc, .a=0x77, .x=0x27, .y=0x82, .sp=0x20, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xd0da, .value=0xe8}, {.addr=0xd0db, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xd0da, .value=0xe8, .type=IO_READ},
        {.addr=0xd0db, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0110) {
    const struct CPU_State initial_cpu = {.pc=0x87dc, .a=0x48, .x=0x7b, .y=0x47, .sp=0x2c, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x87dc, .value=0xe8}, {.addr=0x87dd, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x87de, .a=0x08, .x=0x7b, .y=0x47, .sp=0x2c, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x87dc, .value=0xe8}, {.addr=0x87dd, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x87dc, .value=0xe8, .type=IO_READ},
        {.addr=0x87dd, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0111) {
    const struct CPU_State initial_cpu = {.pc=0xb89d, .a=0x2c, .x=0x05, .y=0x30, .sp=0xb1, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xb89d, .value=0xe8}, {.addr=0xb89e, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xb89f, .a=0x3c, .x=0x05, .y=0x30, .sp=0xb1, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xb89d, .value=0xe8}, {.addr=0xb89e, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xb89d, .value=0xe8, .type=IO_READ},
        {.addr=0xb89e, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0112) {
    const struct CPU_State initial_cpu = {.pc=0x26dd, .a=0xfa, .x=0xe9, .y=0x48, .sp=0x34, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x26dd, .value=0xe8}, {.addr=0x26de, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x26df, .a=0xe8, .x=0xe9, .y=0x48, .sp=0x34, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x26dd, .value=0xe8}, {.addr=0x26de, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x26dd, .value=0xe8, .type=IO_READ},
        {.addr=0x26de, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0113) {
    const struct CPU_State initial_cpu = {.pc=0xd753, .a=0x26, .x=0xb6, .y=0xbd, .sp=0x21, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xd753, .value=0xe8}, {.addr=0xd754, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xd755, .a=0x4c, .x=0xb6, .y=0xbd, .sp=0x21, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xd753, .value=0xe8}, {.addr=0xd754, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xd753, .value=0xe8, .type=IO_READ},
        {.addr=0xd754, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0114) {
    const struct CPU_State initial_cpu = {.pc=0x7264, .a=0x62, .x=0xbf, .y=0x5f, .sp=0x01, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x7264, .value=0xe8}, {.addr=0x7265, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x7266, .a=0xf5, .x=0xbf, .y=0x5f, .sp=0x01, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x7264, .value=0xe8}, {.addr=0x7265, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x7264, .value=0xe8, .type=IO_READ},
        {.addr=0x7265, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0115) {
    const struct CPU_State initial_cpu = {.pc=0x2a2f, .a=0xdf, .x=0xeb, .y=0x48, .sp=0x58, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x2a2f, .value=0xe8}, {.addr=0x2a30, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2a31, .a=0xed, .x=0xeb, .y=0x48, .sp=0x58, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x2a2f, .value=0xe8}, {.addr=0x2a30, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2a2f, .value=0xe8, .type=IO_READ},
        {.addr=0x2a30, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0116) {
    const struct CPU_State initial_cpu = {.pc=0x137b, .a=0xbb, .x=0xeb, .y=0xa6, .sp=0x8c, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x137b, .value=0xe8}, {.addr=0x137c, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x137d, .a=0x5e, .x=0xeb, .y=0xa6, .sp=0x8c, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x137b, .value=0xe8}, {.addr=0x137c, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x137b, .value=0xe8, .type=IO_READ},
        {.addr=0x137c, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0117) {
    const struct CPU_State initial_cpu = {.pc=0x41c3, .a=0x77, .x=0xed, .y=0x93, .sp=0xfd, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x41c3, .value=0xe8}, {.addr=0x41c4, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x41c5, .a=0x42, .x=0xed, .y=0x93, .sp=0xfd, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x41c3, .value=0xe8}, {.addr=0x41c4, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x41c3, .value=0xe8, .type=IO_READ},
        {.addr=0x41c4, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0118) {
    const struct CPU_State initial_cpu = {.pc=0xc767, .a=0xa5, .x=0xbc, .y=0x64, .sp=0x81, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xc767, .value=0xe8}, {.addr=0xc768, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xc769, .a=0x28, .x=0xbc, .y=0x64, .sp=0x81, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xc767, .value=0xe8}, {.addr=0xc768, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xc767, .value=0xe8, .type=IO_READ},
        {.addr=0xc768, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0119) {
    const struct CPU_State initial_cpu = {.pc=0x019e, .a=0xa7, .x=0x4f, .y=0x1e, .sp=0x55, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xe8}, {.addr=0x019f, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x01a0, .a=0xe5, .x=0x4f, .y=0x1e, .sp=0x55, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xe8}, {.addr=0x019f, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x019e, .value=0xe8, .type=IO_READ},
        {.addr=0x019f, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_011A) {
    const struct CPU_State initial_cpu = {.pc=0x35f7, .a=0xa6, .x=0x92, .y=0x05, .sp=0x7f, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x35f7, .value=0xe8}, {.addr=0x35f8, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x35f9, .a=0x48, .x=0x92, .y=0x05, .sp=0x7f, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x35f7, .value=0xe8}, {.addr=0x35f8, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x35f7, .value=0xe8, .type=IO_READ},
        {.addr=0x35f8, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_011B) {
    const struct CPU_State initial_cpu = {.pc=0xaac1, .a=0xbb, .x=0xbd, .y=0x1f, .sp=0xe2, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xaac1, .value=0xe8}, {.addr=0xaac2, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xaac3, .a=0x37, .x=0xbd, .y=0x1f, .sp=0xe2, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xaac1, .value=0xe8}, {.addr=0xaac2, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xaac1, .value=0xe8, .type=IO_READ},
        {.addr=0xaac2, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_011C) {
    const struct CPU_State initial_cpu = {.pc=0xda81, .a=0x9c, .x=0x88, .y=0x13, .sp=0x14, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xda81, .value=0xe8}, {.addr=0xda82, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xda83, .a=0xda, .x=0x88, .y=0x13, .sp=0x14, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xda81, .value=0xe8}, {.addr=0xda82, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xda81, .value=0xe8, .type=IO_READ},
        {.addr=0xda82, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_011D) {
    const struct CPU_State initial_cpu = {.pc=0xd7d6, .a=0x41, .x=0x42, .y=0x0b, .sp=0x58, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xd7d6, .value=0xe8}, {.addr=0xd7d7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd7d8, .a=0x1d, .x=0x42, .y=0x0b, .sp=0x58, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xd7d6, .value=0xe8}, {.addr=0xd7d7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd7d6, .value=0xe8, .type=IO_READ},
        {.addr=0xd7d7, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_011E) {
    const struct CPU_State initial_cpu = {.pc=0x5f43, .a=0xbc, .x=0x6c, .y=0xc1, .sp=0x8c, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x5f43, .value=0xe8}, {.addr=0x5f44, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x5f45, .a=0x95, .x=0x6c, .y=0xc1, .sp=0x8c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x5f43, .value=0xe8}, {.addr=0x5f44, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x5f43, .value=0xe8, .type=IO_READ},
        {.addr=0x5f44, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_011F) {
    const struct CPU_State initial_cpu = {.pc=0xb83a, .a=0xfa, .x=0x6a, .y=0xd4, .sp=0x53, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xb83a, .value=0xe8}, {.addr=0xb83b, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xb83c, .a=0x32, .x=0x6a, .y=0xd4, .sp=0x53, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xb83a, .value=0xe8}, {.addr=0xb83b, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xb83a, .value=0xe8, .type=IO_READ},
        {.addr=0xb83b, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0120) {
    const struct CPU_State initial_cpu = {.pc=0xd1e0, .a=0x16, .x=0x04, .y=0x07, .sp=0xf6, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xd1e0, .value=0xe8}, {.addr=0xd1e1, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xd1e2, .a=0x19, .x=0x04, .y=0x07, .sp=0xf6, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xd1e0, .value=0xe8}, {.addr=0xd1e1, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xd1e0, .value=0xe8, .type=IO_READ},
        {.addr=0xd1e1, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0121) {
    const struct CPU_State initial_cpu = {.pc=0x4435, .a=0xa0, .x=0x74, .y=0x67, .sp=0x61, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x4435, .value=0xe8}, {.addr=0x4436, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4437, .a=0x80, .x=0x74, .y=0x67, .sp=0x61, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x4435, .value=0xe8}, {.addr=0x4436, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4435, .value=0xe8, .type=IO_READ},
        {.addr=0x4436, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0122) {
    const struct CPU_State initial_cpu = {.pc=0x0c05, .a=0xe3, .x=0x8e, .y=0x22, .sp=0xd2, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0c05, .value=0xe8}, {.addr=0x0c06, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x0c07, .a=0x14, .x=0x8e, .y=0x22, .sp=0xd2, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0c05, .value=0xe8}, {.addr=0x0c06, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x0c05, .value=0xe8, .type=IO_READ},
        {.addr=0x0c06, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0123) {
    const struct CPU_State initial_cpu = {.pc=0x6947, .a=0x05, .x=0x27, .y=0xd4, .sp=0x1c, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x6947, .value=0xe8}, {.addr=0x6948, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x6949, .a=0x9e, .x=0x27, .y=0xd4, .sp=0x1c, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x6947, .value=0xe8}, {.addr=0x6948, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x6947, .value=0xe8, .type=IO_READ},
        {.addr=0x6948, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0124) {
    const struct CPU_State initial_cpu = {.pc=0x9860, .a=0xf7, .x=0xa5, .y=0x57, .sp=0x86, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x9860, .value=0xe8}, {.addr=0x9861, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x9862, .a=0x04, .x=0xa5, .y=0x57, .sp=0x86, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x9860, .value=0xe8}, {.addr=0x9861, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x9860, .value=0xe8, .type=IO_READ},
        {.addr=0x9861, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0125) {
    const struct CPU_State initial_cpu = {.pc=0x4d39, .a=0xd0, .x=0x32, .y=0xef, .sp=0xe8, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x4d39, .value=0xe8}, {.addr=0x4d3a, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x4d3b, .a=0x5f, .x=0x32, .y=0xef, .sp=0xe8, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x4d39, .value=0xe8}, {.addr=0x4d3a, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x4d39, .value=0xe8, .type=IO_READ},
        {.addr=0x4d3a, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0126) {
    const struct CPU_State initial_cpu = {.pc=0x1538, .a=0x98, .x=0xe8, .y=0x9f, .sp=0x1b, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x1538, .value=0xe8}, {.addr=0x1539, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x153a, .a=0xed, .x=0xe8, .y=0x9f, .sp=0x1b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x1538, .value=0xe8}, {.addr=0x1539, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1538, .value=0xe8, .type=IO_READ},
        {.addr=0x1539, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0127) {
    const struct CPU_State initial_cpu = {.pc=0x9282, .a=0x02, .x=0xd7, .y=0xac, .sp=0x5e, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x9282, .value=0xe8}, {.addr=0x9283, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x9284, .a=0x07, .x=0xd7, .y=0xac, .sp=0x5e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x9282, .value=0xe8}, {.addr=0x9283, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x9282, .value=0xe8, .type=IO_READ},
        {.addr=0x9283, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0128) {
    const struct CPU_State initial_cpu = {.pc=0x9747, .a=0x2e, .x=0x74, .y=0xca, .sp=0x9d, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x9747, .value=0xe8}, {.addr=0x9748, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x9749, .a=0xe8, .x=0x74, .y=0xca, .sp=0x9d, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x9747, .value=0xe8}, {.addr=0x9748, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x9747, .value=0xe8, .type=IO_READ},
        {.addr=0x9748, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0129) {
    const struct CPU_State initial_cpu = {.pc=0x9391, .a=0x5d, .x=0xe8, .y=0xd8, .sp=0x1b, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x9391, .value=0xe8}, {.addr=0x9392, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x9393, .a=0xd9, .x=0xe8, .y=0xd8, .sp=0x1b, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x9391, .value=0xe8}, {.addr=0x9392, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x9391, .value=0xe8, .type=IO_READ},
        {.addr=0x9392, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_012A) {
    const struct CPU_State initial_cpu = {.pc=0x827c, .a=0x62, .x=0x5b, .y=0x42, .sp=0x06, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x827c, .value=0xe8}, {.addr=0x827d, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x827e, .a=0x7e, .x=0x5b, .y=0x42, .sp=0x06, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x827c, .value=0xe8}, {.addr=0x827d, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x827c, .value=0xe8, .type=IO_READ},
        {.addr=0x827d, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_012B) {
    const struct CPU_State initial_cpu = {.pc=0xce9b, .a=0x2a, .x=0x9e, .y=0xb4, .sp=0xa0, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xce9b, .value=0xe8}, {.addr=0xce9c, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xce9d, .a=0x05, .x=0x9e, .y=0xb4, .sp=0xa0, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xce9b, .value=0xe8}, {.addr=0xce9c, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xce9b, .value=0xe8, .type=IO_READ},
        {.addr=0xce9c, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_012C) {
    const struct CPU_State initial_cpu = {.pc=0x74ab, .a=0x82, .x=0xb9, .y=0xc7, .sp=0x0d, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x74ab, .value=0xe8}, {.addr=0x74ac, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x74ad, .a=0xbc, .x=0xb9, .y=0xc7, .sp=0x0d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x74ab, .value=0xe8}, {.addr=0x74ac, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x74ab, .value=0xe8, .type=IO_READ},
        {.addr=0x74ac, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_012D) {
    const struct CPU_State initial_cpu = {.pc=0xd5f9, .a=0xe9, .x=0xa8, .y=0xa4, .sp=0xdd, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xd5f9, .value=0xe8}, {.addr=0xd5fa, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xd5fb, .a=0x91, .x=0xa8, .y=0xa4, .sp=0xdd, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xd5f9, .value=0xe8}, {.addr=0xd5fa, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xd5f9, .value=0xe8, .type=IO_READ},
        {.addr=0xd5fa, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_012E) {
    const struct CPU_State initial_cpu = {.pc=0x1d81, .a=0x37, .x=0xa4, .y=0x5d, .sp=0x43, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x1d81, .value=0xe8}, {.addr=0x1d82, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x1d83, .a=0xe4, .x=0xa4, .y=0x5d, .sp=0x43, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x1d81, .value=0xe8}, {.addr=0x1d82, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x1d81, .value=0xe8, .type=IO_READ},
        {.addr=0x1d82, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_012F) {
    const struct CPU_State initial_cpu = {.pc=0x8a7b, .a=0x00, .x=0x3e, .y=0xfe, .sp=0xcb, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x8a7b, .value=0xe8}, {.addr=0x8a7c, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x8a7d, .a=0x02, .x=0x3e, .y=0xfe, .sp=0xcb, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x8a7b, .value=0xe8}, {.addr=0x8a7c, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x8a7b, .value=0xe8, .type=IO_READ},
        {.addr=0x8a7c, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0130) {
    const struct CPU_State initial_cpu = {.pc=0x434d, .a=0x6c, .x=0x53, .y=0x85, .sp=0x96, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x434d, .value=0xe8}, {.addr=0x434e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x434f, .a=0xa0, .x=0x53, .y=0x85, .sp=0x96, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x434d, .value=0xe8}, {.addr=0x434e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x434d, .value=0xe8, .type=IO_READ},
        {.addr=0x434e, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0131) {
    const struct CPU_State initial_cpu = {.pc=0x52ce, .a=0x63, .x=0x55, .y=0xf8, .sp=0x5d, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x52ce, .value=0xe8}, {.addr=0x52cf, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x52d0, .a=0x0d, .x=0x55, .y=0xf8, .sp=0x5d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x52ce, .value=0xe8}, {.addr=0x52cf, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x52ce, .value=0xe8, .type=IO_READ},
        {.addr=0x52cf, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0132) {
    const struct CPU_State initial_cpu = {.pc=0x95a3, .a=0x29, .x=0x0f, .y=0xb2, .sp=0x74, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x95a3, .value=0xe8}, {.addr=0x95a4, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x95a5, .a=0x60, .x=0x0f, .y=0xb2, .sp=0x74, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x95a3, .value=0xe8}, {.addr=0x95a4, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x95a3, .value=0xe8, .type=IO_READ},
        {.addr=0x95a4, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0133) {
    const struct CPU_State initial_cpu = {.pc=0xdc85, .a=0xbe, .x=0x63, .y=0x5e, .sp=0x38, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xdc85, .value=0xe8}, {.addr=0xdc86, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xdc87, .a=0xb7, .x=0x63, .y=0x5e, .sp=0x38, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xdc85, .value=0xe8}, {.addr=0xdc86, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xdc85, .value=0xe8, .type=IO_READ},
        {.addr=0xdc86, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0134) {
    const struct CPU_State initial_cpu = {.pc=0x1a01, .a=0x9b, .x=0x94, .y=0x00, .sp=0x2d, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x1a01, .value=0xe8}, {.addr=0x1a02, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x1a03, .a=0xa7, .x=0x94, .y=0x00, .sp=0x2d, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x1a01, .value=0xe8}, {.addr=0x1a02, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x1a01, .value=0xe8, .type=IO_READ},
        {.addr=0x1a02, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0135) {
    const struct CPU_State initial_cpu = {.pc=0x1eec, .a=0x1b, .x=0x25, .y=0x22, .sp=0xb7, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x1eec, .value=0xe8}, {.addr=0x1eed, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x1eee, .a=0x53, .x=0x25, .y=0x22, .sp=0xb7, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1eec, .value=0xe8}, {.addr=0x1eed, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x1eec, .value=0xe8, .type=IO_READ},
        {.addr=0x1eed, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0136) {
    const struct CPU_State initial_cpu = {.pc=0x5984, .a=0xc5, .x=0xa9, .y=0xbe, .sp=0xd4, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x5984, .value=0xe8}, {.addr=0x5985, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x5986, .a=0x2f, .x=0xa9, .y=0xbe, .sp=0xd4, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x5984, .value=0xe8}, {.addr=0x5985, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x5984, .value=0xe8, .type=IO_READ},
        {.addr=0x5985, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0137) {
    const struct CPU_State initial_cpu = {.pc=0x964e, .a=0x68, .x=0x0b, .y=0x0b, .sp=0x20, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x964e, .value=0xe8}, {.addr=0x964f, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x9650, .a=0x11, .x=0x0b, .y=0x0b, .sp=0x20, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x964e, .value=0xe8}, {.addr=0x964f, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x964e, .value=0xe8, .type=IO_READ},
        {.addr=0x964f, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0138) {
    const struct CPU_State initial_cpu = {.pc=0xcc6b, .a=0x51, .x=0xe8, .y=0xf4, .sp=0x52, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xcc6b, .value=0xe8}, {.addr=0xcc6c, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xcc6d, .a=0xa5, .x=0xe8, .y=0xf4, .sp=0x52, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xcc6b, .value=0xe8}, {.addr=0xcc6c, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xcc6b, .value=0xe8, .type=IO_READ},
        {.addr=0xcc6c, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0139) {
    const struct CPU_State initial_cpu = {.pc=0xe94a, .a=0xc9, .x=0x8c, .y=0x01, .sp=0xd6, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xe94a, .value=0xe8}, {.addr=0xe94b, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe94c, .a=0x5d, .x=0x8c, .y=0x01, .sp=0xd6, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xe94a, .value=0xe8}, {.addr=0xe94b, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe94a, .value=0xe8, .type=IO_READ},
        {.addr=0xe94b, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_013A) {
    const struct CPU_State initial_cpu = {.pc=0x9e2c, .a=0x74, .x=0x96, .y=0x9d, .sp=0xed, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x9e2c, .value=0xe8}, {.addr=0x9e2d, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x9e2e, .a=0x22, .x=0x96, .y=0x9d, .sp=0xed, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x9e2c, .value=0xe8}, {.addr=0x9e2d, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x9e2c, .value=0xe8, .type=IO_READ},
        {.addr=0x9e2d, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_013B) {
    const struct CPU_State initial_cpu = {.pc=0xeacc, .a=0x88, .x=0x05, .y=0xa0, .sp=0xd0, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xeacc, .value=0xe8}, {.addr=0xeacd, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xeace, .a=0x67, .x=0x05, .y=0xa0, .sp=0xd0, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xeacc, .value=0xe8}, {.addr=0xeacd, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xeacc, .value=0xe8, .type=IO_READ},
        {.addr=0xeacd, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_013C) {
    const struct CPU_State initial_cpu = {.pc=0x045e, .a=0xb3, .x=0x04, .y=0x15, .sp=0xd8, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x045e, .value=0xe8}, {.addr=0x045f, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x0460, .a=0xbb, .x=0x04, .y=0x15, .sp=0xd8, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x045e, .value=0xe8}, {.addr=0x045f, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x045e, .value=0xe8, .type=IO_READ},
        {.addr=0x045f, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_013D) {
    const struct CPU_State initial_cpu = {.pc=0x04e9, .a=0xd7, .x=0x40, .y=0x0f, .sp=0xa5, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x04e9, .value=0xe8}, {.addr=0x04ea, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x04eb, .a=0x6b, .x=0x40, .y=0x0f, .sp=0xa5, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x04e9, .value=0xe8}, {.addr=0x04ea, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x04e9, .value=0xe8, .type=IO_READ},
        {.addr=0x04ea, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_013E) {
    const struct CPU_State initial_cpu = {.pc=0xa49a, .a=0x95, .x=0x88, .y=0x70, .sp=0x74, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xa49a, .value=0xe8}, {.addr=0xa49b, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xa49c, .a=0x3f, .x=0x88, .y=0x70, .sp=0x74, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xa49a, .value=0xe8}, {.addr=0xa49b, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xa49a, .value=0xe8, .type=IO_READ},
        {.addr=0xa49b, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_013F) {
    const struct CPU_State initial_cpu = {.pc=0xcb95, .a=0x4c, .x=0x4f, .y=0x6d, .sp=0xc6, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xcb95, .value=0xe8}, {.addr=0xcb96, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xcb97, .a=0x79, .x=0x4f, .y=0x6d, .sp=0xc6, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xcb95, .value=0xe8}, {.addr=0xcb96, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xcb95, .value=0xe8, .type=IO_READ},
        {.addr=0xcb96, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0140) {
    const struct CPU_State initial_cpu = {.pc=0x6e81, .a=0x40, .x=0x22, .y=0x34, .sp=0xe0, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x6e81, .value=0xe8}, {.addr=0x6e82, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x6e83, .a=0x18, .x=0x22, .y=0x34, .sp=0xe0, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x6e81, .value=0xe8}, {.addr=0x6e82, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x6e81, .value=0xe8, .type=IO_READ},
        {.addr=0x6e82, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0141) {
    const struct CPU_State initial_cpu = {.pc=0x3733, .a=0x7e, .x=0x22, .y=0xfd, .sp=0x42, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x3733, .value=0xe8}, {.addr=0x3734, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3735, .a=0xed, .x=0x22, .y=0xfd, .sp=0x42, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x3733, .value=0xe8}, {.addr=0x3734, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3733, .value=0xe8, .type=IO_READ},
        {.addr=0x3734, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0142) {
    const struct CPU_State initial_cpu = {.pc=0x7f21, .a=0x52, .x=0xf6, .y=0xeb, .sp=0x16, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x7f21, .value=0xe8}, {.addr=0x7f22, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x7f23, .a=0x99, .x=0xf6, .y=0xeb, .sp=0x16, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x7f21, .value=0xe8}, {.addr=0x7f22, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x7f21, .value=0xe8, .type=IO_READ},
        {.addr=0x7f22, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0143) {
    const struct CPU_State initial_cpu = {.pc=0xe2a9, .a=0x54, .x=0xd0, .y=0xd6, .sp=0x13, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xe2a9, .value=0xe8}, {.addr=0xe2aa, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xe2ab, .a=0x59, .x=0xd0, .y=0xd6, .sp=0x13, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xe2a9, .value=0xe8}, {.addr=0xe2aa, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xe2a9, .value=0xe8, .type=IO_READ},
        {.addr=0xe2aa, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0144) {
    const struct CPU_State initial_cpu = {.pc=0x3675, .a=0x44, .x=0x82, .y=0xc4, .sp=0x61, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x3675, .value=0xe8}, {.addr=0x3676, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x3677, .a=0x2b, .x=0x82, .y=0xc4, .sp=0x61, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x3675, .value=0xe8}, {.addr=0x3676, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x3675, .value=0xe8, .type=IO_READ},
        {.addr=0x3676, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0145) {
    const struct CPU_State initial_cpu = {.pc=0xe406, .a=0x3a, .x=0x19, .y=0x8e, .sp=0x9c, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xe406, .value=0xe8}, {.addr=0xe407, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xe408, .a=0xec, .x=0x19, .y=0x8e, .sp=0x9c, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xe406, .value=0xe8}, {.addr=0xe407, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xe406, .value=0xe8, .type=IO_READ},
        {.addr=0xe407, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0146) {
    const struct CPU_State initial_cpu = {.pc=0x0b7f, .a=0xb0, .x=0xab, .y=0x9d, .sp=0x23, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0b7f, .value=0xe8}, {.addr=0x0b80, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x0b81, .a=0x2f, .x=0xab, .y=0x9d, .sp=0x23, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0b7f, .value=0xe8}, {.addr=0x0b80, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x0b7f, .value=0xe8, .type=IO_READ},
        {.addr=0x0b80, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0147) {
    const struct CPU_State initial_cpu = {.pc=0x14cb, .a=0x95, .x=0xad, .y=0x39, .sp=0x43, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x14cb, .value=0xe8}, {.addr=0x14cc, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x14cd, .a=0x53, .x=0xad, .y=0x39, .sp=0x43, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x14cb, .value=0xe8}, {.addr=0x14cc, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x14cb, .value=0xe8, .type=IO_READ},
        {.addr=0x14cc, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0148) {
    const struct CPU_State initial_cpu = {.pc=0xd52e, .a=0x5c, .x=0x61, .y=0xe8, .sp=0xf3, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xd52e, .value=0xe8}, {.addr=0xd52f, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0xd530, .a=0xd0, .x=0x61, .y=0xe8, .sp=0xf3, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xd52e, .value=0xe8}, {.addr=0xd52f, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0xd52e, .value=0xe8, .type=IO_READ},
        {.addr=0xd52f, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0149) {
    const struct CPU_State initial_cpu = {.pc=0xecdc, .a=0xeb, .x=0xf4, .y=0xd3, .sp=0x2c, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xecdc, .value=0xe8}, {.addr=0xecdd, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xecde, .a=0x12, .x=0xf4, .y=0xd3, .sp=0x2c, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xecdc, .value=0xe8}, {.addr=0xecdd, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xecdc, .value=0xe8, .type=IO_READ},
        {.addr=0xecdd, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_014A) {
    const struct CPU_State initial_cpu = {.pc=0xeb89, .a=0x45, .x=0x16, .y=0x8a, .sp=0xa3, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xeb89, .value=0xe8}, {.addr=0xeb8a, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xeb8b, .a=0xaa, .x=0x16, .y=0x8a, .sp=0xa3, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xeb89, .value=0xe8}, {.addr=0xeb8a, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xeb89, .value=0xe8, .type=IO_READ},
        {.addr=0xeb8a, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_014B) {
    const struct CPU_State initial_cpu = {.pc=0xf776, .a=0xe6, .x=0x4d, .y=0x8b, .sp=0x54, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xf776, .value=0xe8}, {.addr=0xf777, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xf778, .a=0x67, .x=0x4d, .y=0x8b, .sp=0x54, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf776, .value=0xe8}, {.addr=0xf777, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xf776, .value=0xe8, .type=IO_READ},
        {.addr=0xf777, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_014C) {
    const struct CPU_State initial_cpu = {.pc=0xbd7a, .a=0xb2, .x=0x63, .y=0xad, .sp=0x81, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xbd7a, .value=0xe8}, {.addr=0xbd7b, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xbd7c, .a=0x93, .x=0x63, .y=0xad, .sp=0x81, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xbd7a, .value=0xe8}, {.addr=0xbd7b, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xbd7a, .value=0xe8, .type=IO_READ},
        {.addr=0xbd7b, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_014D) {
    const struct CPU_State initial_cpu = {.pc=0x1d46, .a=0x3b, .x=0x4e, .y=0x16, .sp=0xc2, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x1d46, .value=0xe8}, {.addr=0x1d47, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1d48, .a=0xa0, .x=0x4e, .y=0x16, .sp=0xc2, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x1d46, .value=0xe8}, {.addr=0x1d47, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1d46, .value=0xe8, .type=IO_READ},
        {.addr=0x1d47, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_014E) {
    const struct CPU_State initial_cpu = {.pc=0x0c92, .a=0xd7, .x=0x98, .y=0x3b, .sp=0x73, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0c92, .value=0xe8}, {.addr=0x0c93, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x0c94, .a=0x41, .x=0x98, .y=0x3b, .sp=0x73, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0c92, .value=0xe8}, {.addr=0x0c93, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x0c92, .value=0xe8, .type=IO_READ},
        {.addr=0x0c93, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_014F) {
    const struct CPU_State initial_cpu = {.pc=0xc950, .a=0x6e, .x=0x87, .y=0x7a, .sp=0x36, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xc950, .value=0xe8}, {.addr=0xc951, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc952, .a=0xce, .x=0x87, .y=0x7a, .sp=0x36, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xc950, .value=0xe8}, {.addr=0xc951, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc950, .value=0xe8, .type=IO_READ},
        {.addr=0xc951, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0150) {
    const struct CPU_State initial_cpu = {.pc=0xb323, .a=0x96, .x=0x86, .y=0x02, .sp=0x0e, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xb323, .value=0xe8}, {.addr=0xb324, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xb325, .a=0xe3, .x=0x86, .y=0x02, .sp=0x0e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xb323, .value=0xe8}, {.addr=0xb324, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xb323, .value=0xe8, .type=IO_READ},
        {.addr=0xb324, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0151) {
    const struct CPU_State initial_cpu = {.pc=0xd00c, .a=0x7d, .x=0x27, .y=0x07, .sp=0x5f, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xd00c, .value=0xe8}, {.addr=0xd00d, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xd00e, .a=0xc9, .x=0x27, .y=0x07, .sp=0x5f, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xd00c, .value=0xe8}, {.addr=0xd00d, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xd00c, .value=0xe8, .type=IO_READ},
        {.addr=0xd00d, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0152) {
    const struct CPU_State initial_cpu = {.pc=0x433e, .a=0x5c, .x=0xa0, .y=0xb0, .sp=0x41, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x433e, .value=0xe8}, {.addr=0x433f, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x4340, .a=0x90, .x=0xa0, .y=0xb0, .sp=0x41, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x433e, .value=0xe8}, {.addr=0x433f, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x433e, .value=0xe8, .type=IO_READ},
        {.addr=0x433f, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0153) {
    const struct CPU_State initial_cpu = {.pc=0xdcf8, .a=0xdc, .x=0x6b, .y=0x3b, .sp=0x6e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xdcf8, .value=0xe8}, {.addr=0xdcf9, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xdcfa, .a=0x0a, .x=0x6b, .y=0x3b, .sp=0x6e, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xdcf8, .value=0xe8}, {.addr=0xdcf9, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xdcf8, .value=0xe8, .type=IO_READ},
        {.addr=0xdcf9, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0154) {
    const struct CPU_State initial_cpu = {.pc=0x91c1, .a=0x6e, .x=0x9a, .y=0x9b, .sp=0xf7, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x91c1, .value=0xe8}, {.addr=0x91c2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x91c3, .a=0x4d, .x=0x9a, .y=0x9b, .sp=0xf7, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x91c1, .value=0xe8}, {.addr=0x91c2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x91c1, .value=0xe8, .type=IO_READ},
        {.addr=0x91c2, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0155) {
    const struct CPU_State initial_cpu = {.pc=0xc671, .a=0x64, .x=0xa0, .y=0xc0, .sp=0x05, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xc671, .value=0xe8}, {.addr=0xc672, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xc673, .a=0x23, .x=0xa0, .y=0xc0, .sp=0x05, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc671, .value=0xe8}, {.addr=0xc672, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xc671, .value=0xe8, .type=IO_READ},
        {.addr=0xc672, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0156) {
    const struct CPU_State initial_cpu = {.pc=0x3b41, .a=0xa2, .x=0x82, .y=0xc5, .sp=0x52, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x3b41, .value=0xe8}, {.addr=0x3b42, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x3b43, .a=0x4a, .x=0x82, .y=0xc5, .sp=0x52, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x3b41, .value=0xe8}, {.addr=0x3b42, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x3b41, .value=0xe8, .type=IO_READ},
        {.addr=0x3b42, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0157) {
    const struct CPU_State initial_cpu = {.pc=0x798c, .a=0x8a, .x=0x59, .y=0x9e, .sp=0x99, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x798c, .value=0xe8}, {.addr=0x798d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x798e, .a=0x26, .x=0x59, .y=0x9e, .sp=0x99, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x798c, .value=0xe8}, {.addr=0x798d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x798c, .value=0xe8, .type=IO_READ},
        {.addr=0x798d, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0158) {
    const struct CPU_State initial_cpu = {.pc=0x8226, .a=0x18, .x=0x17, .y=0xc5, .sp=0x48, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x8226, .value=0xe8}, {.addr=0x8227, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8228, .a=0xae, .x=0x17, .y=0xc5, .sp=0x48, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x8226, .value=0xe8}, {.addr=0x8227, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8226, .value=0xe8, .type=IO_READ},
        {.addr=0x8227, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0159) {
    const struct CPU_State initial_cpu = {.pc=0xb79b, .a=0x7f, .x=0x30, .y=0xbc, .sp=0xcc, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xb79b, .value=0xe8}, {.addr=0xb79c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb79d, .a=0x8e, .x=0x30, .y=0xbc, .sp=0xcc, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xb79b, .value=0xe8}, {.addr=0xb79c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb79b, .value=0xe8, .type=IO_READ},
        {.addr=0xb79c, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_015A) {
    const struct CPU_State initial_cpu = {.pc=0x1ef6, .a=0x94, .x=0x4c, .y=0x2e, .sp=0xe1, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x1ef6, .value=0xe8}, {.addr=0x1ef7, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x1ef8, .a=0x1e, .x=0x4c, .y=0x2e, .sp=0xe1, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x1ef6, .value=0xe8}, {.addr=0x1ef7, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x1ef6, .value=0xe8, .type=IO_READ},
        {.addr=0x1ef7, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_015B) {
    const struct CPU_State initial_cpu = {.pc=0xfeae, .a=0x47, .x=0x68, .y=0xfa, .sp=0xfb, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xfeae, .value=0xe8}, {.addr=0xfeaf, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xfeb0, .a=0xe1, .x=0x68, .y=0xfa, .sp=0xfb, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xfeae, .value=0xe8}, {.addr=0xfeaf, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xfeae, .value=0xe8, .type=IO_READ},
        {.addr=0xfeaf, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_015C) {
    const struct CPU_State initial_cpu = {.pc=0x5ff7, .a=0x75, .x=0x0d, .y=0xfc, .sp=0x3a, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x5ff7, .value=0xe8}, {.addr=0x5ff8, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x5ff9, .a=0x01, .x=0x0d, .y=0xfc, .sp=0x3a, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x5ff7, .value=0xe8}, {.addr=0x5ff8, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x5ff7, .value=0xe8, .type=IO_READ},
        {.addr=0x5ff8, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_015D) {
    const struct CPU_State initial_cpu = {.pc=0xd1d5, .a=0x80, .x=0x9d, .y=0xab, .sp=0x08, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xd1d5, .value=0xe8}, {.addr=0xd1d6, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xd1d7, .a=0xaa, .x=0x9d, .y=0xab, .sp=0x08, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xd1d5, .value=0xe8}, {.addr=0xd1d6, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xd1d5, .value=0xe8, .type=IO_READ},
        {.addr=0xd1d6, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_015E) {
    const struct CPU_State initial_cpu = {.pc=0x3b86, .a=0x90, .x=0x6b, .y=0xef, .sp=0x5b, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x3b86, .value=0xe8}, {.addr=0x3b87, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x3b88, .a=0xf0, .x=0x6b, .y=0xef, .sp=0x5b, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x3b86, .value=0xe8}, {.addr=0x3b87, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x3b86, .value=0xe8, .type=IO_READ},
        {.addr=0x3b87, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_015F) {
    const struct CPU_State initial_cpu = {.pc=0xe1d7, .a=0x88, .x=0x99, .y=0x71, .sp=0xf2, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xe1d7, .value=0xe8}, {.addr=0xe1d8, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xe1d9, .a=0x81, .x=0x99, .y=0x71, .sp=0xf2, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xe1d7, .value=0xe8}, {.addr=0xe1d8, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xe1d7, .value=0xe8, .type=IO_READ},
        {.addr=0xe1d8, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0160) {
    const struct CPU_State initial_cpu = {.pc=0xeddf, .a=0xd7, .x=0x4c, .y=0x1c, .sp=0xb8, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xeddf, .value=0xe8}, {.addr=0xede0, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xede1, .a=0xa1, .x=0x4c, .y=0x1c, .sp=0xb8, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xeddf, .value=0xe8}, {.addr=0xede0, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xeddf, .value=0xe8, .type=IO_READ},
        {.addr=0xede0, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0161) {
    const struct CPU_State initial_cpu = {.pc=0xb22d, .a=0x29, .x=0x2a, .y=0xbf, .sp=0xf5, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xb22d, .value=0xe8}, {.addr=0xb22e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb22f, .a=0x80, .x=0x2a, .y=0xbf, .sp=0xf5, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xb22d, .value=0xe8}, {.addr=0xb22e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb22d, .value=0xe8, .type=IO_READ},
        {.addr=0xb22e, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0162) {
    const struct CPU_State initial_cpu = {.pc=0xbb37, .a=0xb4, .x=0xdd, .y=0x3a, .sp=0x92, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xbb37, .value=0xe8}, {.addr=0xbb38, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xbb39, .a=0x22, .x=0xdd, .y=0x3a, .sp=0x92, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xbb37, .value=0xe8}, {.addr=0xbb38, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xbb37, .value=0xe8, .type=IO_READ},
        {.addr=0xbb38, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0163) {
    const struct CPU_State initial_cpu = {.pc=0x84ba, .a=0x27, .x=0x0a, .y=0x39, .sp=0x21, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x84ba, .value=0xe8}, {.addr=0x84bb, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x84bc, .a=0x02, .x=0x0a, .y=0x39, .sp=0x21, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x84ba, .value=0xe8}, {.addr=0x84bb, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x84ba, .value=0xe8, .type=IO_READ},
        {.addr=0x84bb, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0164) {
    const struct CPU_State initial_cpu = {.pc=0xd6e6, .a=0x0e, .x=0x0f, .y=0xc5, .sp=0xe5, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xd6e6, .value=0xe8}, {.addr=0xd6e7, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xd6e8, .a=0x79, .x=0x0f, .y=0xc5, .sp=0xe5, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd6e6, .value=0xe8}, {.addr=0xd6e7, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xd6e6, .value=0xe8, .type=IO_READ},
        {.addr=0xd6e7, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0165) {
    const struct CPU_State initial_cpu = {.pc=0xa7f3, .a=0x7e, .x=0x31, .y=0x2e, .sp=0xf1, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xa7f3, .value=0xe8}, {.addr=0xa7f4, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xa7f5, .a=0xcd, .x=0x31, .y=0x2e, .sp=0xf1, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xa7f3, .value=0xe8}, {.addr=0xa7f4, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xa7f3, .value=0xe8, .type=IO_READ},
        {.addr=0xa7f4, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0166) {
    const struct CPU_State initial_cpu = {.pc=0xd6b8, .a=0x95, .x=0x31, .y=0x18, .sp=0xcd, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xd6b8, .value=0xe8}, {.addr=0xd6b9, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xd6ba, .a=0xd3, .x=0x31, .y=0x18, .sp=0xcd, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xd6b8, .value=0xe8}, {.addr=0xd6b9, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xd6b8, .value=0xe8, .type=IO_READ},
        {.addr=0xd6b9, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0167) {
    const struct CPU_State initial_cpu = {.pc=0x3773, .a=0xc6, .x=0x41, .y=0x62, .sp=0xc3, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x3773, .value=0xe8}, {.addr=0x3774, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x3775, .a=0x2f, .x=0x41, .y=0x62, .sp=0xc3, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x3773, .value=0xe8}, {.addr=0x3774, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x3773, .value=0xe8, .type=IO_READ},
        {.addr=0x3774, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0168) {
    const struct CPU_State initial_cpu = {.pc=0x8466, .a=0xa1, .x=0x27, .y=0x54, .sp=0x83, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x8466, .value=0xe8}, {.addr=0x8467, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x8468, .a=0x22, .x=0x27, .y=0x54, .sp=0x83, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x8466, .value=0xe8}, {.addr=0x8467, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x8466, .value=0xe8, .type=IO_READ},
        {.addr=0x8467, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0169) {
    const struct CPU_State initial_cpu = {.pc=0x503a, .a=0x2b, .x=0x5d, .y=0x9f, .sp=0xf1, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x503a, .value=0xe8}, {.addr=0x503b, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x503c, .a=0x76, .x=0x5d, .y=0x9f, .sp=0xf1, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x503a, .value=0xe8}, {.addr=0x503b, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x503a, .value=0xe8, .type=IO_READ},
        {.addr=0x503b, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_016A) {
    const struct CPU_State initial_cpu = {.pc=0x57fb, .a=0x4a, .x=0xfc, .y=0xb7, .sp=0x33, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x57fb, .value=0xe8}, {.addr=0x57fc, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x57fd, .a=0x08, .x=0xfc, .y=0xb7, .sp=0x33, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x57fb, .value=0xe8}, {.addr=0x57fc, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x57fb, .value=0xe8, .type=IO_READ},
        {.addr=0x57fc, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_016B) {
    const struct CPU_State initial_cpu = {.pc=0x8228, .a=0x2d, .x=0x46, .y=0xb6, .sp=0xe9, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x8228, .value=0xe8}, {.addr=0x8229, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x822a, .a=0x80, .x=0x46, .y=0xb6, .sp=0xe9, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x8228, .value=0xe8}, {.addr=0x8229, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8228, .value=0xe8, .type=IO_READ},
        {.addr=0x8229, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_016C) {
    const struct CPU_State initial_cpu = {.pc=0x988d, .a=0xc4, .x=0x0e, .y=0xf9, .sp=0x5f, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x988d, .value=0xe8}, {.addr=0x988e, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x988f, .a=0xa2, .x=0x0e, .y=0xf9, .sp=0x5f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x988d, .value=0xe8}, {.addr=0x988e, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x988d, .value=0xe8, .type=IO_READ},
        {.addr=0x988e, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_016D) {
    const struct CPU_State initial_cpu = {.pc=0xa17a, .a=0x1f, .x=0x26, .y=0x57, .sp=0x6b, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xa17a, .value=0xe8}, {.addr=0xa17b, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xa17c, .a=0x2e, .x=0x26, .y=0x57, .sp=0x6b, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xa17a, .value=0xe8}, {.addr=0xa17b, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xa17a, .value=0xe8, .type=IO_READ},
        {.addr=0xa17b, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_016E) {
    const struct CPU_State initial_cpu = {.pc=0x7cea, .a=0x06, .x=0xa2, .y=0x30, .sp=0x0c, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x7cea, .value=0xe8}, {.addr=0x7ceb, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x7cec, .a=0x30, .x=0xa2, .y=0x30, .sp=0x0c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x7cea, .value=0xe8}, {.addr=0x7ceb, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x7cea, .value=0xe8, .type=IO_READ},
        {.addr=0x7ceb, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_016F) {
    const struct CPU_State initial_cpu = {.pc=0xc3b8, .a=0xf8, .x=0x2b, .y=0xc9, .sp=0x61, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xc3b8, .value=0xe8}, {.addr=0xc3b9, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xc3ba, .a=0xf6, .x=0x2b, .y=0xc9, .sp=0x61, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xc3b8, .value=0xe8}, {.addr=0xc3b9, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xc3b8, .value=0xe8, .type=IO_READ},
        {.addr=0xc3b9, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0170) {
    const struct CPU_State initial_cpu = {.pc=0x1fe6, .a=0x68, .x=0x37, .y=0x18, .sp=0xf9, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x1fe6, .value=0xe8}, {.addr=0x1fe7, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x1fe8, .a=0x38, .x=0x37, .y=0x18, .sp=0xf9, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x1fe6, .value=0xe8}, {.addr=0x1fe7, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x1fe6, .value=0xe8, .type=IO_READ},
        {.addr=0x1fe7, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0171) {
    const struct CPU_State initial_cpu = {.pc=0xb5f0, .a=0xe9, .x=0xf9, .y=0x01, .sp=0x15, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xb5f0, .value=0xe8}, {.addr=0xb5f1, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xb5f2, .a=0xeb, .x=0xf9, .y=0x01, .sp=0x15, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xb5f0, .value=0xe8}, {.addr=0xb5f1, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xb5f0, .value=0xe8, .type=IO_READ},
        {.addr=0xb5f1, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0172) {
    const struct CPU_State initial_cpu = {.pc=0x54f1, .a=0x91, .x=0x8a, .y=0x9c, .sp=0xd4, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x54f1, .value=0xe8}, {.addr=0x54f2, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x54f3, .a=0x0a, .x=0x8a, .y=0x9c, .sp=0xd4, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x54f1, .value=0xe8}, {.addr=0x54f2, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x54f1, .value=0xe8, .type=IO_READ},
        {.addr=0x54f2, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0173) {
    const struct CPU_State initial_cpu = {.pc=0xff23, .a=0xb1, .x=0x45, .y=0x41, .sp=0xeb, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xff23, .value=0xe8}, {.addr=0xff24, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xff25, .a=0x8e, .x=0x45, .y=0x41, .sp=0xeb, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xff23, .value=0xe8}, {.addr=0xff24, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xff23, .value=0xe8, .type=IO_READ},
        {.addr=0xff24, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0174) {
    const struct CPU_State initial_cpu = {.pc=0xfba0, .a=0x8c, .x=0x44, .y=0x56, .sp=0xe0, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xfba0, .value=0xe8}, {.addr=0xfba1, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xfba2, .a=0xa5, .x=0x44, .y=0x56, .sp=0xe0, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xfba0, .value=0xe8}, {.addr=0xfba1, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xfba0, .value=0xe8, .type=IO_READ},
        {.addr=0xfba1, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0175) {
    const struct CPU_State initial_cpu = {.pc=0xe972, .a=0x93, .x=0x93, .y=0x55, .sp=0xf4, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xe972, .value=0xe8}, {.addr=0xe973, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xe974, .a=0xbc, .x=0x93, .y=0x55, .sp=0xf4, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xe972, .value=0xe8}, {.addr=0xe973, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xe972, .value=0xe8, .type=IO_READ},
        {.addr=0xe973, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0176) {
    const struct CPU_State initial_cpu = {.pc=0x4e0b, .a=0xbd, .x=0x4e, .y=0x20, .sp=0x07, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x4e0b, .value=0xe8}, {.addr=0x4e0c, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x4e0d, .a=0x44, .x=0x4e, .y=0x20, .sp=0x07, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x4e0b, .value=0xe8}, {.addr=0x4e0c, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x4e0b, .value=0xe8, .type=IO_READ},
        {.addr=0x4e0c, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0177) {
    const struct CPU_State initial_cpu = {.pc=0x3b85, .a=0x42, .x=0xa8, .y=0x25, .sp=0x7e, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x3b85, .value=0xe8}, {.addr=0x3b86, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x3b87, .a=0x61, .x=0xa8, .y=0x25, .sp=0x7e, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x3b85, .value=0xe8}, {.addr=0x3b86, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x3b85, .value=0xe8, .type=IO_READ},
        {.addr=0x3b86, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0178) {
    const struct CPU_State initial_cpu = {.pc=0x8bd3, .a=0xd3, .x=0xae, .y=0x7d, .sp=0x8c, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x8bd3, .value=0xe8}, {.addr=0x8bd4, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x8bd5, .a=0xbb, .x=0xae, .y=0x7d, .sp=0x8c, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x8bd3, .value=0xe8}, {.addr=0x8bd4, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x8bd3, .value=0xe8, .type=IO_READ},
        {.addr=0x8bd4, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0179) {
    const struct CPU_State initial_cpu = {.pc=0x3699, .a=0x08, .x=0xce, .y=0xb8, .sp=0xf0, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x3699, .value=0xe8}, {.addr=0x369a, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x369b, .a=0xfe, .x=0xce, .y=0xb8, .sp=0xf0, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x3699, .value=0xe8}, {.addr=0x369a, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x3699, .value=0xe8, .type=IO_READ},
        {.addr=0x369a, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_017A) {
    const struct CPU_State initial_cpu = {.pc=0x52db, .a=0xb7, .x=0xfd, .y=0x70, .sp=0xf3, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x52db, .value=0xe8}, {.addr=0x52dc, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x52dd, .a=0x82, .x=0xfd, .y=0x70, .sp=0xf3, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x52db, .value=0xe8}, {.addr=0x52dc, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x52db, .value=0xe8, .type=IO_READ},
        {.addr=0x52dc, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_017B) {
    const struct CPU_State initial_cpu = {.pc=0xe1d7, .a=0xe4, .x=0xe5, .y=0xfd, .sp=0x32, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xe1d7, .value=0xe8}, {.addr=0xe1d8, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xe1d9, .a=0xa5, .x=0xe5, .y=0xfd, .sp=0x32, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xe1d7, .value=0xe8}, {.addr=0xe1d8, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xe1d7, .value=0xe8, .type=IO_READ},
        {.addr=0xe1d8, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_017C) {
    const struct CPU_State initial_cpu = {.pc=0x3cff, .a=0xfe, .x=0x14, .y=0x5f, .sp=0x51, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x3cff, .value=0xe8}, {.addr=0x3d00, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3d01, .a=0x60, .x=0x14, .y=0x5f, .sp=0x51, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x3cff, .value=0xe8}, {.addr=0x3d00, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3cff, .value=0xe8, .type=IO_READ},
        {.addr=0x3d00, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_017D) {
    const struct CPU_State initial_cpu = {.pc=0x3be4, .a=0xc5, .x=0x92, .y=0x43, .sp=0x95, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x3be4, .value=0xe8}, {.addr=0x3be5, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x3be6, .a=0x33, .x=0x92, .y=0x43, .sp=0x95, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x3be4, .value=0xe8}, {.addr=0x3be5, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x3be4, .value=0xe8, .type=IO_READ},
        {.addr=0x3be5, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_017E) {
    const struct CPU_State initial_cpu = {.pc=0x30d5, .a=0x0f, .x=0x83, .y=0x2b, .sp=0x8e, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x30d5, .value=0xe8}, {.addr=0x30d6, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x30d7, .a=0xc9, .x=0x83, .y=0x2b, .sp=0x8e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x30d5, .value=0xe8}, {.addr=0x30d6, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x30d5, .value=0xe8, .type=IO_READ},
        {.addr=0x30d6, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_017F) {
    const struct CPU_State initial_cpu = {.pc=0x3b41, .a=0xbc, .x=0x12, .y=0x24, .sp=0xde, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x3b41, .value=0xe8}, {.addr=0x3b42, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x3b43, .a=0x3d, .x=0x12, .y=0x24, .sp=0xde, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3b41, .value=0xe8}, {.addr=0x3b42, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x3b41, .value=0xe8, .type=IO_READ},
        {.addr=0x3b42, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0180) {
    const struct CPU_State initial_cpu = {.pc=0x7e18, .a=0xd6, .x=0x55, .y=0x1c, .sp=0xfb, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x7e18, .value=0xe8}, {.addr=0x7e19, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x7e1a, .a=0x0e, .x=0x55, .y=0x1c, .sp=0xfb, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x7e18, .value=0xe8}, {.addr=0x7e19, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x7e18, .value=0xe8, .type=IO_READ},
        {.addr=0x7e19, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0181) {
    const struct CPU_State initial_cpu = {.pc=0xc3eb, .a=0xe8, .x=0x23, .y=0x3f, .sp=0xa3, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xc3eb, .value=0xe8}, {.addr=0xc3ec, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xc3ed, .a=0xea, .x=0x23, .y=0x3f, .sp=0xa3, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xc3eb, .value=0xe8}, {.addr=0xc3ec, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xc3eb, .value=0xe8, .type=IO_READ},
        {.addr=0xc3ec, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0182) {
    const struct CPU_State initial_cpu = {.pc=0xc705, .a=0xd4, .x=0x6b, .y=0x4b, .sp=0xa2, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xc705, .value=0xe8}, {.addr=0xc706, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xc707, .a=0x52, .x=0x6b, .y=0x4b, .sp=0xa2, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xc705, .value=0xe8}, {.addr=0xc706, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xc705, .value=0xe8, .type=IO_READ},
        {.addr=0xc706, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0183) {
    const struct CPU_State initial_cpu = {.pc=0x2735, .a=0xc3, .x=0x35, .y=0xcf, .sp=0xec, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x2735, .value=0xe8}, {.addr=0x2736, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x2737, .a=0x30, .x=0x35, .y=0xcf, .sp=0xec, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x2735, .value=0xe8}, {.addr=0x2736, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x2735, .value=0xe8, .type=IO_READ},
        {.addr=0x2736, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0184) {
    const struct CPU_State initial_cpu = {.pc=0x7bd5, .a=0xaa, .x=0x42, .y=0x14, .sp=0x4d, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x7bd5, .value=0xe8}, {.addr=0x7bd6, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x7bd7, .a=0xcc, .x=0x42, .y=0x14, .sp=0x4d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x7bd5, .value=0xe8}, {.addr=0x7bd6, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x7bd5, .value=0xe8, .type=IO_READ},
        {.addr=0x7bd6, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0185) {
    const struct CPU_State initial_cpu = {.pc=0x4b6e, .a=0xdc, .x=0xae, .y=0xc9, .sp=0x51, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x4b6e, .value=0xe8}, {.addr=0x4b6f, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x4b70, .a=0x76, .x=0xae, .y=0xc9, .sp=0x51, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x4b6e, .value=0xe8}, {.addr=0x4b6f, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x4b6e, .value=0xe8, .type=IO_READ},
        {.addr=0x4b6f, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0186) {
    const struct CPU_State initial_cpu = {.pc=0x5ae9, .a=0xdc, .x=0x20, .y=0x3e, .sp=0xf6, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x5ae9, .value=0xe8}, {.addr=0x5aea, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x5aeb, .a=0x39, .x=0x20, .y=0x3e, .sp=0xf6, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x5ae9, .value=0xe8}, {.addr=0x5aea, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x5ae9, .value=0xe8, .type=IO_READ},
        {.addr=0x5aea, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0187) {
    const struct CPU_State initial_cpu = {.pc=0x19cb, .a=0xb7, .x=0x65, .y=0x7e, .sp=0x73, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x19cb, .value=0xe8}, {.addr=0x19cc, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x19cd, .a=0xa3, .x=0x65, .y=0x7e, .sp=0x73, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x19cb, .value=0xe8}, {.addr=0x19cc, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x19cb, .value=0xe8, .type=IO_READ},
        {.addr=0x19cc, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0188) {
    const struct CPU_State initial_cpu = {.pc=0xdfb6, .a=0x69, .x=0xce, .y=0xd1, .sp=0xec, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xdfb6, .value=0xe8}, {.addr=0xdfb7, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xdfb8, .a=0xc7, .x=0xce, .y=0xd1, .sp=0xec, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xdfb6, .value=0xe8}, {.addr=0xdfb7, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xdfb6, .value=0xe8, .type=IO_READ},
        {.addr=0xdfb7, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0189) {
    const struct CPU_State initial_cpu = {.pc=0x7af4, .a=0x2b, .x=0x2a, .y=0x0a, .sp=0x86, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x7af4, .value=0xe8}, {.addr=0x7af5, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x7af6, .a=0x3a, .x=0x2a, .y=0x0a, .sp=0x86, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x7af4, .value=0xe8}, {.addr=0x7af5, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x7af4, .value=0xe8, .type=IO_READ},
        {.addr=0x7af5, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_018A) {
    const struct CPU_State initial_cpu = {.pc=0xcba9, .a=0x7e, .x=0x17, .y=0xbc, .sp=0x14, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xcba9, .value=0xe8}, {.addr=0xcbaa, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xcbab, .a=0x95, .x=0x17, .y=0xbc, .sp=0x14, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xcba9, .value=0xe8}, {.addr=0xcbaa, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xcba9, .value=0xe8, .type=IO_READ},
        {.addr=0xcbaa, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_018B) {
    const struct CPU_State initial_cpu = {.pc=0xeb29, .a=0x0a, .x=0xc7, .y=0x96, .sp=0x03, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xeb29, .value=0xe8}, {.addr=0xeb2a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xeb2b, .a=0x40, .x=0xc7, .y=0x96, .sp=0x03, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xeb29, .value=0xe8}, {.addr=0xeb2a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xeb29, .value=0xe8, .type=IO_READ},
        {.addr=0xeb2a, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_018C) {
    const struct CPU_State initial_cpu = {.pc=0x6574, .a=0xbe, .x=0xf8, .y=0x8c, .sp=0x41, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x6574, .value=0xe8}, {.addr=0x6575, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x6576, .a=0x61, .x=0xf8, .y=0x8c, .sp=0x41, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6574, .value=0xe8}, {.addr=0x6575, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x6574, .value=0xe8, .type=IO_READ},
        {.addr=0x6575, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_018D) {
    const struct CPU_State initial_cpu = {.pc=0xafaf, .a=0x48, .x=0xe9, .y=0x31, .sp=0xef, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xafaf, .value=0xe8}, {.addr=0xafb0, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xafb1, .a=0xb2, .x=0xe9, .y=0x31, .sp=0xef, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xafaf, .value=0xe8}, {.addr=0xafb0, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xafaf, .value=0xe8, .type=IO_READ},
        {.addr=0xafb0, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_018E) {
    const struct CPU_State initial_cpu = {.pc=0x897b, .a=0x1d, .x=0x7e, .y=0x9d, .sp=0xbe, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x897b, .value=0xe8}, {.addr=0x897c, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x897d, .a=0x38, .x=0x7e, .y=0x9d, .sp=0xbe, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x897b, .value=0xe8}, {.addr=0x897c, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x897b, .value=0xe8, .type=IO_READ},
        {.addr=0x897c, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_018F) {
    const struct CPU_State initial_cpu = {.pc=0x4be8, .a=0xe2, .x=0x71, .y=0x4a, .sp=0x4d, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x4be8, .value=0xe8}, {.addr=0x4be9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4bea, .a=0x40, .x=0x71, .y=0x4a, .sp=0x4d, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x4be8, .value=0xe8}, {.addr=0x4be9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4be8, .value=0xe8, .type=IO_READ},
        {.addr=0x4be9, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0190) {
    const struct CPU_State initial_cpu = {.pc=0x4f14, .a=0x82, .x=0xa0, .y=0x49, .sp=0x02, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x4f14, .value=0xe8}, {.addr=0x4f15, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4f16, .a=0x1d, .x=0xa0, .y=0x49, .sp=0x02, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x4f14, .value=0xe8}, {.addr=0x4f15, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4f14, .value=0xe8, .type=IO_READ},
        {.addr=0x4f15, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0191) {
    const struct CPU_State initial_cpu = {.pc=0x7307, .a=0xb5, .x=0x91, .y=0xe1, .sp=0x80, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x7307, .value=0xe8}, {.addr=0x7308, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x7309, .a=0x62, .x=0x91, .y=0xe1, .sp=0x80, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x7307, .value=0xe8}, {.addr=0x7308, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x7307, .value=0xe8, .type=IO_READ},
        {.addr=0x7308, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0192) {
    const struct CPU_State initial_cpu = {.pc=0x2482, .a=0x94, .x=0x61, .y=0x66, .sp=0x8d, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x2482, .value=0xe8}, {.addr=0x2483, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x2484, .a=0x30, .x=0x61, .y=0x66, .sp=0x8d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x2482, .value=0xe8}, {.addr=0x2483, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x2482, .value=0xe8, .type=IO_READ},
        {.addr=0x2483, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0193) {
    const struct CPU_State initial_cpu = {.pc=0xac7d, .a=0xb8, .x=0x32, .y=0x27, .sp=0x74, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xac7d, .value=0xe8}, {.addr=0xac7e, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xac7f, .a=0xfa, .x=0x32, .y=0x27, .sp=0x74, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xac7d, .value=0xe8}, {.addr=0xac7e, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xac7d, .value=0xe8, .type=IO_READ},
        {.addr=0xac7e, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0194) {
    const struct CPU_State initial_cpu = {.pc=0x111d, .a=0x14, .x=0x59, .y=0xe0, .sp=0xda, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x111d, .value=0xe8}, {.addr=0x111e, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x111f, .a=0x65, .x=0x59, .y=0xe0, .sp=0xda, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x111d, .value=0xe8}, {.addr=0x111e, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x111d, .value=0xe8, .type=IO_READ},
        {.addr=0x111e, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0195) {
    const struct CPU_State initial_cpu = {.pc=0xdcbc, .a=0x32, .x=0x9f, .y=0xb9, .sp=0xbb, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xdcbc, .value=0xe8}, {.addr=0xdcbd, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xdcbe, .a=0xeb, .x=0x9f, .y=0xb9, .sp=0xbb, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xdcbc, .value=0xe8}, {.addr=0xdcbd, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xdcbc, .value=0xe8, .type=IO_READ},
        {.addr=0xdcbd, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0196) {
    const struct CPU_State initial_cpu = {.pc=0xc42a, .a=0xd6, .x=0x4a, .y=0xc1, .sp=0xc1, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xc42a, .value=0xe8}, {.addr=0xc42b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc42c, .a=0xe0, .x=0x4a, .y=0xc1, .sp=0xc1, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xc42a, .value=0xe8}, {.addr=0xc42b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc42a, .value=0xe8, .type=IO_READ},
        {.addr=0xc42b, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0197) {
    const struct CPU_State initial_cpu = {.pc=0x0363, .a=0x6c, .x=0xf2, .y=0x76, .sp=0x1e, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0363, .value=0xe8}, {.addr=0x0364, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x0365, .a=0xcd, .x=0xf2, .y=0x76, .sp=0x1e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0363, .value=0xe8}, {.addr=0x0364, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x0363, .value=0xe8, .type=IO_READ},
        {.addr=0x0364, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0198) {
    const struct CPU_State initial_cpu = {.pc=0x868f, .a=0x33, .x=0xc7, .y=0x83, .sp=0xc5, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x868f, .value=0xe8}, {.addr=0x8690, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x8691, .a=0x30, .x=0xc7, .y=0x83, .sp=0xc5, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x868f, .value=0xe8}, {.addr=0x8690, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x868f, .value=0xe8, .type=IO_READ},
        {.addr=0x8690, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0199) {
    const struct CPU_State initial_cpu = {.pc=0x7961, .a=0x5b, .x=0xf6, .y=0x02, .sp=0x75, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x7961, .value=0xe8}, {.addr=0x7962, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x7963, .a=0x88, .x=0xf6, .y=0x02, .sp=0x75, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x7961, .value=0xe8}, {.addr=0x7962, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x7961, .value=0xe8, .type=IO_READ},
        {.addr=0x7962, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_019A) {
    const struct CPU_State initial_cpu = {.pc=0xe443, .a=0xe0, .x=0xa9, .y=0x37, .sp=0x02, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xe443, .value=0xe8}, {.addr=0xe444, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe445, .a=0x6d, .x=0xa9, .y=0x37, .sp=0x02, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xe443, .value=0xe8}, {.addr=0xe444, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe443, .value=0xe8, .type=IO_READ},
        {.addr=0xe444, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_019B) {
    const struct CPU_State initial_cpu = {.pc=0x70d6, .a=0x6c, .x=0x71, .y=0x60, .sp=0x49, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x70d6, .value=0xe8}, {.addr=0x70d7, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x70d8, .a=0xd9, .x=0x71, .y=0x60, .sp=0x49, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x70d6, .value=0xe8}, {.addr=0x70d7, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x70d6, .value=0xe8, .type=IO_READ},
        {.addr=0x70d7, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_019C) {
    const struct CPU_State initial_cpu = {.pc=0x0331, .a=0x67, .x=0xe2, .y=0x0e, .sp=0x1f, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0331, .value=0xe8}, {.addr=0x0332, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x0333, .a=0x78, .x=0xe2, .y=0x0e, .sp=0x1f, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0331, .value=0xe8}, {.addr=0x0332, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x0331, .value=0xe8, .type=IO_READ},
        {.addr=0x0332, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_019D) {
    const struct CPU_State initial_cpu = {.pc=0x8402, .a=0x2e, .x=0x33, .y=0x55, .sp=0xf6, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x8402, .value=0xe8}, {.addr=0x8403, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x8404, .a=0xc5, .x=0x33, .y=0x55, .sp=0xf6, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x8402, .value=0xe8}, {.addr=0x8403, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x8402, .value=0xe8, .type=IO_READ},
        {.addr=0x8403, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_019E) {
    const struct CPU_State initial_cpu = {.pc=0xd7b8, .a=0xba, .x=0x21, .y=0xea, .sp=0x67, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xd7b8, .value=0xe8}, {.addr=0xd7b9, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xd7ba, .a=0x9b, .x=0x21, .y=0xea, .sp=0x67, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xd7b8, .value=0xe8}, {.addr=0xd7b9, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xd7b8, .value=0xe8, .type=IO_READ},
        {.addr=0xd7b9, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_019F) {
    const struct CPU_State initial_cpu = {.pc=0xfe45, .a=0x5e, .x=0x7b, .y=0x61, .sp=0xf0, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xfe45, .value=0xe8}, {.addr=0xfe46, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xfe47, .a=0x1a, .x=0x7b, .y=0x61, .sp=0xf0, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xfe45, .value=0xe8}, {.addr=0xfe46, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xfe45, .value=0xe8, .type=IO_READ},
        {.addr=0xfe46, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xad97, .a=0x20, .x=0x50, .y=0x98, .sp=0x0e, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xad97, .value=0xe8}, {.addr=0xad98, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xad99, .a=0xa9, .x=0x50, .y=0x98, .sp=0x0e, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xad97, .value=0xe8}, {.addr=0xad98, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xad97, .value=0xe8, .type=IO_READ},
        {.addr=0xad98, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xe530, .a=0xf4, .x=0x9e, .y=0xd8, .sp=0x24, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xe530, .value=0xe8}, {.addr=0xe531, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xe532, .a=0xf0, .x=0x9e, .y=0xd8, .sp=0x24, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xe530, .value=0xe8}, {.addr=0xe531, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xe530, .value=0xe8, .type=IO_READ},
        {.addr=0xe531, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x64e0, .a=0x02, .x=0x03, .y=0x08, .sp=0x27, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x64e0, .value=0xe8}, {.addr=0x64e1, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x64e2, .a=0x52, .x=0x03, .y=0x08, .sp=0x27, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x64e0, .value=0xe8}, {.addr=0x64e1, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x64e0, .value=0xe8, .type=IO_READ},
        {.addr=0x64e1, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x892a, .a=0x85, .x=0xd0, .y=0xa9, .sp=0xb2, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x892a, .value=0xe8}, {.addr=0x892b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x892c, .a=0xc0, .x=0xd0, .y=0xa9, .sp=0xb2, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x892a, .value=0xe8}, {.addr=0x892b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x892a, .value=0xe8, .type=IO_READ},
        {.addr=0x892b, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x9388, .a=0x58, .x=0x37, .y=0x0a, .sp=0xe6, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x9388, .value=0xe8}, {.addr=0x9389, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x938a, .a=0x7e, .x=0x37, .y=0x0a, .sp=0xe6, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9388, .value=0xe8}, {.addr=0x9389, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x9388, .value=0xe8, .type=IO_READ},
        {.addr=0x9389, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x09ee, .a=0x0e, .x=0x04, .y=0xca, .sp=0xea, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x09ee, .value=0xe8}, {.addr=0x09ef, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x09f0, .a=0xed, .x=0x04, .y=0xca, .sp=0xea, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x09ee, .value=0xe8}, {.addr=0x09ef, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x09ee, .value=0xe8, .type=IO_READ},
        {.addr=0x09ef, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x704a, .a=0xbf, .x=0x24, .y=0x41, .sp=0xfe, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x704a, .value=0xe8}, {.addr=0x704b, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x704c, .a=0xa2, .x=0x24, .y=0x41, .sp=0xfe, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x704a, .value=0xe8}, {.addr=0x704b, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x704a, .value=0xe8, .type=IO_READ},
        {.addr=0x704b, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xee2e, .a=0x0a, .x=0xd7, .y=0x14, .sp=0xa7, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xee2e, .value=0xe8}, {.addr=0xee2f, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xee30, .a=0x84, .x=0xd7, .y=0x14, .sp=0xa7, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xee2e, .value=0xe8}, {.addr=0xee2f, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xee2e, .value=0xe8, .type=IO_READ},
        {.addr=0xee2f, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x64fc, .a=0xb4, .x=0x65, .y=0xc5, .sp=0xe1, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x64fc, .value=0xe8}, {.addr=0x64fd, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x64fe, .a=0xa1, .x=0x65, .y=0xc5, .sp=0xe1, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x64fc, .value=0xe8}, {.addr=0x64fd, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x64fc, .value=0xe8, .type=IO_READ},
        {.addr=0x64fd, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x1bba, .a=0x03, .x=0xa2, .y=0x32, .sp=0x97, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x1bba, .value=0xe8}, {.addr=0x1bbb, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x1bbc, .a=0x43, .x=0xa2, .y=0x32, .sp=0x97, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x1bba, .value=0xe8}, {.addr=0x1bbb, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x1bba, .value=0xe8, .type=IO_READ},
        {.addr=0x1bbb, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x80f6, .a=0xda, .x=0xed, .y=0xf5, .sp=0xdb, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x80f6, .value=0xe8}, {.addr=0x80f7, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x80f8, .a=0x4e, .x=0xed, .y=0xf5, .sp=0xdb, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x80f6, .value=0xe8}, {.addr=0x80f7, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x80f6, .value=0xe8, .type=IO_READ},
        {.addr=0x80f7, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x212c, .a=0xe5, .x=0xa3, .y=0x66, .sp=0x8b, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x212c, .value=0xe8}, {.addr=0x212d, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x212e, .a=0x09, .x=0xa3, .y=0x66, .sp=0x8b, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x212c, .value=0xe8}, {.addr=0x212d, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x212c, .value=0xe8, .type=IO_READ},
        {.addr=0x212d, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x9380, .a=0x75, .x=0xd1, .y=0x8c, .sp=0x56, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x9380, .value=0xe8}, {.addr=0x9381, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x9382, .a=0x3b, .x=0xd1, .y=0x8c, .sp=0x56, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x9380, .value=0xe8}, {.addr=0x9381, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x9380, .value=0xe8, .type=IO_READ},
        {.addr=0x9381, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x9dca, .a=0x5d, .x=0x63, .y=0x95, .sp=0xff, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x9dca, .value=0xe8}, {.addr=0x9dcb, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x9dcc, .a=0x83, .x=0x63, .y=0x95, .sp=0xff, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x9dca, .value=0xe8}, {.addr=0x9dcb, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x9dca, .value=0xe8, .type=IO_READ},
        {.addr=0x9dcb, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x8620, .a=0xe2, .x=0xa5, .y=0x2b, .sp=0xd0, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x8620, .value=0xe8}, {.addr=0x8621, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x8622, .a=0x27, .x=0xa5, .y=0x2b, .sp=0xd0, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x8620, .value=0xe8}, {.addr=0x8621, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x8620, .value=0xe8, .type=IO_READ},
        {.addr=0x8621, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xa3ad, .a=0x0f, .x=0x56, .y=0x94, .sp=0xe1, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xa3ad, .value=0xe8}, {.addr=0xa3ae, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xa3af, .a=0x01, .x=0x56, .y=0x94, .sp=0xe1, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xa3ad, .value=0xe8}, {.addr=0xa3ae, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xa3ad, .value=0xe8, .type=IO_READ},
        {.addr=0xa3ae, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x0a5c, .a=0xd6, .x=0x8e, .y=0x07, .sp=0x15, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0a5c, .value=0xe8}, {.addr=0x0a5d, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x0a5e, .a=0xd2, .x=0x8e, .y=0x07, .sp=0x15, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0a5c, .value=0xe8}, {.addr=0x0a5d, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x0a5c, .value=0xe8, .type=IO_READ},
        {.addr=0x0a5d, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x9bbc, .a=0xa8, .x=0x92, .y=0xbe, .sp=0x7b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x9bbc, .value=0xe8}, {.addr=0x9bbd, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x9bbe, .a=0x25, .x=0x92, .y=0xbe, .sp=0x7b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x9bbc, .value=0xe8}, {.addr=0x9bbd, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x9bbc, .value=0xe8, .type=IO_READ},
        {.addr=0x9bbd, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x3f53, .a=0xd7, .x=0xb2, .y=0x0e, .sp=0x6f, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x3f53, .value=0xe8}, {.addr=0x3f54, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x3f55, .a=0x30, .x=0xb2, .y=0x0e, .sp=0x6f, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x3f53, .value=0xe8}, {.addr=0x3f54, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x3f53, .value=0xe8, .type=IO_READ},
        {.addr=0x3f54, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x05ca, .a=0x3e, .x=0x6c, .y=0xec, .sp=0x75, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x05ca, .value=0xe8}, {.addr=0x05cb, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x05cc, .a=0x01, .x=0x6c, .y=0xec, .sp=0x75, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x05ca, .value=0xe8}, {.addr=0x05cb, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x05ca, .value=0xe8, .type=IO_READ},
        {.addr=0x05cb, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x345e, .a=0xed, .x=0xd7, .y=0x09, .sp=0x99, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x345e, .value=0xe8}, {.addr=0x345f, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x3460, .a=0xb3, .x=0xd7, .y=0x09, .sp=0x99, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x345e, .value=0xe8}, {.addr=0x345f, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x345e, .value=0xe8, .type=IO_READ},
        {.addr=0x345f, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x0f89, .a=0x36, .x=0xdd, .y=0x20, .sp=0xdd, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0f89, .value=0xe8}, {.addr=0x0f8a, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x0f8b, .a=0xf5, .x=0xdd, .y=0x20, .sp=0xdd, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0f89, .value=0xe8}, {.addr=0x0f8a, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x0f89, .value=0xe8, .type=IO_READ},
        {.addr=0x0f8a, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x1adb, .a=0x87, .x=0xed, .y=0x9c, .sp=0xb1, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x1adb, .value=0xe8}, {.addr=0x1adc, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x1add, .a=0x54, .x=0xed, .y=0x9c, .sp=0xb1, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x1adb, .value=0xe8}, {.addr=0x1adc, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x1adb, .value=0xe8, .type=IO_READ},
        {.addr=0x1adc, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xd549, .a=0x53, .x=0xe6, .y=0x07, .sp=0x1a, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xd549, .value=0xe8}, {.addr=0xd54a, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xd54b, .a=0x7b, .x=0xe6, .y=0x07, .sp=0x1a, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xd549, .value=0xe8}, {.addr=0xd54a, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xd549, .value=0xe8, .type=IO_READ},
        {.addr=0xd54a, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x1fb2, .a=0xdc, .x=0x66, .y=0xc4, .sp=0x55, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x1fb2, .value=0xe8}, {.addr=0x1fb3, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x1fb4, .a=0x8c, .x=0x66, .y=0xc4, .sp=0x55, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x1fb2, .value=0xe8}, {.addr=0x1fb3, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x1fb2, .value=0xe8, .type=IO_READ},
        {.addr=0x1fb3, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xa302, .a=0xaf, .x=0x83, .y=0xdc, .sp=0x24, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xa302, .value=0xe8}, {.addr=0xa303, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xa304, .a=0xf8, .x=0x83, .y=0xdc, .sp=0x24, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xa302, .value=0xe8}, {.addr=0xa303, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xa302, .value=0xe8, .type=IO_READ},
        {.addr=0xa303, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x30bf, .a=0x1a, .x=0x22, .y=0xb5, .sp=0xdf, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x30bf, .value=0xe8}, {.addr=0x30c0, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x30c1, .a=0x2e, .x=0x22, .y=0xb5, .sp=0xdf, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x30bf, .value=0xe8}, {.addr=0x30c0, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x30bf, .value=0xe8, .type=IO_READ},
        {.addr=0x30c0, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xddb4, .a=0x86, .x=0xfc, .y=0x11, .sp=0x73, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xddb4, .value=0xe8}, {.addr=0xddb5, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xddb6, .a=0x4f, .x=0xfc, .y=0x11, .sp=0x73, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xddb4, .value=0xe8}, {.addr=0xddb5, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xddb4, .value=0xe8, .type=IO_READ},
        {.addr=0xddb5, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x9ee2, .a=0x62, .x=0x77, .y=0xc4, .sp=0x6d, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x9ee2, .value=0xe8}, {.addr=0x9ee3, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x9ee4, .a=0x45, .x=0x77, .y=0xc4, .sp=0x6d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9ee2, .value=0xe8}, {.addr=0x9ee3, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x9ee2, .value=0xe8, .type=IO_READ},
        {.addr=0x9ee3, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xfd77, .a=0xcc, .x=0xae, .y=0x4f, .sp=0x7d, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xfd77, .value=0xe8}, {.addr=0xfd78, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfd79, .a=0xe0, .x=0xae, .y=0x4f, .sp=0x7d, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xfd77, .value=0xe8}, {.addr=0xfd78, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfd77, .value=0xe8, .type=IO_READ},
        {.addr=0xfd78, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x4dbe, .a=0x73, .x=0xfe, .y=0x51, .sp=0xfd, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x4dbe, .value=0xe8}, {.addr=0x4dbf, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x4dc0, .a=0x78, .x=0xfe, .y=0x51, .sp=0xfd, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x4dbe, .value=0xe8}, {.addr=0x4dbf, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x4dbe, .value=0xe8, .type=IO_READ},
        {.addr=0x4dbf, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x1fbe, .a=0xcf, .x=0xfc, .y=0xc6, .sp=0x99, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x1fbe, .value=0xe8}, {.addr=0x1fbf, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1fc0, .a=0xe6, .x=0xfc, .y=0xc6, .sp=0x99, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x1fbe, .value=0xe8}, {.addr=0x1fbf, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1fbe, .value=0xe8, .type=IO_READ},
        {.addr=0x1fbf, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xc053, .a=0x82, .x=0x1b, .y=0x63, .sp=0x9e, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xc053, .value=0xe8}, {.addr=0xc054, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xc055, .a=0x8f, .x=0x1b, .y=0x63, .sp=0x9e, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xc053, .value=0xe8}, {.addr=0xc054, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xc053, .value=0xe8, .type=IO_READ},
        {.addr=0xc054, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x18f1, .a=0x31, .x=0x51, .y=0x14, .sp=0xfd, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x18f1, .value=0xe8}, {.addr=0x18f2, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x18f3, .a=0x74, .x=0x51, .y=0x14, .sp=0xfd, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x18f1, .value=0xe8}, {.addr=0x18f2, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x18f1, .value=0xe8, .type=IO_READ},
        {.addr=0x18f2, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x339a, .a=0xf4, .x=0x14, .y=0xc1, .sp=0xd6, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x339a, .value=0xe8}, {.addr=0x339b, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x339c, .a=0x74, .x=0x14, .y=0xc1, .sp=0xd6, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x339a, .value=0xe8}, {.addr=0x339b, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x339a, .value=0xe8, .type=IO_READ},
        {.addr=0x339b, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x0473, .a=0x10, .x=0x7e, .y=0xd4, .sp=0x84, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0473, .value=0xe8}, {.addr=0x0474, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x0475, .a=0x2b, .x=0x7e, .y=0xd4, .sp=0x84, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0473, .value=0xe8}, {.addr=0x0474, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x0473, .value=0xe8, .type=IO_READ},
        {.addr=0x0474, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x8ea4, .a=0xf1, .x=0x03, .y=0x62, .sp=0xa8, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x8ea4, .value=0xe8}, {.addr=0x8ea5, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x8ea6, .a=0xe1, .x=0x03, .y=0x62, .sp=0xa8, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x8ea4, .value=0xe8}, {.addr=0x8ea5, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x8ea4, .value=0xe8, .type=IO_READ},
        {.addr=0x8ea5, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xf195, .a=0x8e, .x=0x77, .y=0x79, .sp=0xaa, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xf195, .value=0xe8}, {.addr=0xf196, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xf197, .a=0x90, .x=0x77, .y=0x79, .sp=0xaa, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xf195, .value=0xe8}, {.addr=0xf196, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xf195, .value=0xe8, .type=IO_READ},
        {.addr=0xf196, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xc7cc, .a=0x39, .x=0xc9, .y=0xe1, .sp=0x06, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xc7cc, .value=0xe8}, {.addr=0xc7cd, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xc7ce, .a=0x97, .x=0xc9, .y=0xe1, .sp=0x06, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xc7cc, .value=0xe8}, {.addr=0xc7cd, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xc7cc, .value=0xe8, .type=IO_READ},
        {.addr=0xc7cd, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xfb3c, .a=0xdb, .x=0xe2, .y=0xf4, .sp=0xbb, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xfb3c, .value=0xe8}, {.addr=0xfb3d, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xfb3e, .a=0x6b, .x=0xe2, .y=0xf4, .sp=0xbb, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xfb3c, .value=0xe8}, {.addr=0xfb3d, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xfb3c, .value=0xe8, .type=IO_READ},
        {.addr=0xfb3d, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xbfbc, .a=0x77, .x=0x2a, .y=0x1d, .sp=0x29, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xbfbc, .value=0xe8}, {.addr=0xbfbd, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xbfbe, .a=0x52, .x=0x2a, .y=0x1d, .sp=0x29, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xbfbc, .value=0xe8}, {.addr=0xbfbd, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xbfbc, .value=0xe8, .type=IO_READ},
        {.addr=0xbfbd, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xb6af, .a=0xf9, .x=0x4d, .y=0xa0, .sp=0x86, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xb6af, .value=0xe8}, {.addr=0xb6b0, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xb6b1, .a=0x50, .x=0x4d, .y=0xa0, .sp=0x86, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb6af, .value=0xe8}, {.addr=0xb6b0, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xb6af, .value=0xe8, .type=IO_READ},
        {.addr=0xb6b0, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xbcdc, .a=0x4d, .x=0xd0, .y=0x9e, .sp=0x01, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xbcdc, .value=0xe8}, {.addr=0xbcdd, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xbcde, .a=0xb8, .x=0xd0, .y=0x9e, .sp=0x01, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xbcdc, .value=0xe8}, {.addr=0xbcdd, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xbcdc, .value=0xe8, .type=IO_READ},
        {.addr=0xbcdd, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x80a8, .a=0xfc, .x=0xaa, .y=0xe4, .sp=0xc9, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x80a8, .value=0xe8}, {.addr=0x80a9, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x80aa, .a=0x13, .x=0xaa, .y=0xe4, .sp=0xc9, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x80a8, .value=0xe8}, {.addr=0x80a9, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x80a8, .value=0xe8, .type=IO_READ},
        {.addr=0x80a9, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x0076, .a=0x2b, .x=0x98, .y=0xcd, .sp=0x1b, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0xe8}, {.addr=0x0077, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0078, .a=0xbc, .x=0x98, .y=0xcd, .sp=0x1b, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0xe8}, {.addr=0x0077, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0076, .value=0xe8, .type=IO_READ},
        {.addr=0x0077, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xd8e9, .a=0x62, .x=0xaa, .y=0xe6, .sp=0xb4, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xd8e9, .value=0xe8}, {.addr=0xd8ea, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xd8eb, .a=0xb3, .x=0xaa, .y=0xe6, .sp=0xb4, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xd8e9, .value=0xe8}, {.addr=0xd8ea, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xd8e9, .value=0xe8, .type=IO_READ},
        {.addr=0xd8ea, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xdfd3, .a=0x33, .x=0x6b, .y=0x2f, .sp=0xd9, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xdfd3, .value=0xe8}, {.addr=0xdfd4, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xdfd5, .a=0xc2, .x=0x6b, .y=0x2f, .sp=0xd9, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xdfd3, .value=0xe8}, {.addr=0xdfd4, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xdfd3, .value=0xe8, .type=IO_READ},
        {.addr=0xdfd4, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xa08b, .a=0x21, .x=0x10, .y=0xe9, .sp=0x29, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xa08b, .value=0xe8}, {.addr=0xa08c, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xa08d, .a=0x0e, .x=0x10, .y=0xe9, .sp=0x29, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xa08b, .value=0xe8}, {.addr=0xa08c, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xa08b, .value=0xe8, .type=IO_READ},
        {.addr=0xa08c, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xcfe4, .a=0x96, .x=0x3b, .y=0x00, .sp=0x4c, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xcfe4, .value=0xe8}, {.addr=0xcfe5, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xcfe6, .a=0x25, .x=0x3b, .y=0x00, .sp=0x4c, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xcfe4, .value=0xe8}, {.addr=0xcfe5, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xcfe4, .value=0xe8, .type=IO_READ},
        {.addr=0xcfe5, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x03a1, .a=0x48, .x=0x4c, .y=0xe4, .sp=0x6a, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x03a1, .value=0xe8}, {.addr=0x03a2, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x03a3, .a=0xfb, .x=0x4c, .y=0xe4, .sp=0x6a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x03a1, .value=0xe8}, {.addr=0x03a2, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x03a1, .value=0xe8, .type=IO_READ},
        {.addr=0x03a2, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x11b1, .a=0x31, .x=0x7b, .y=0xb6, .sp=0xe8, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x11b1, .value=0xe8}, {.addr=0x11b2, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x11b3, .a=0x52, .x=0x7b, .y=0xb6, .sp=0xe8, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x11b1, .value=0xe8}, {.addr=0x11b2, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x11b1, .value=0xe8, .type=IO_READ},
        {.addr=0x11b2, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x9279, .a=0x0b, .x=0x0c, .y=0x6c, .sp=0x15, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x9279, .value=0xe8}, {.addr=0x927a, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x927b, .a=0x45, .x=0x0c, .y=0x6c, .sp=0x15, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9279, .value=0xe8}, {.addr=0x927a, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x9279, .value=0xe8, .type=IO_READ},
        {.addr=0x927a, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x98da, .a=0xfb, .x=0x42, .y=0x71, .sp=0xb1, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x98da, .value=0xe8}, {.addr=0x98db, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x98dc, .a=0x29, .x=0x42, .y=0x71, .sp=0xb1, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x98da, .value=0xe8}, {.addr=0x98db, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x98da, .value=0xe8, .type=IO_READ},
        {.addr=0x98db, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xa2e4, .a=0xda, .x=0x2d, .y=0x65, .sp=0xe8, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xa2e4, .value=0xe8}, {.addr=0xa2e5, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xa2e6, .a=0xec, .x=0x2d, .y=0x65, .sp=0xe8, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa2e4, .value=0xe8}, {.addr=0xa2e5, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xa2e4, .value=0xe8, .type=IO_READ},
        {.addr=0xa2e5, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x25d8, .a=0x03, .x=0xa9, .y=0x26, .sp=0x64, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x25d8, .value=0xe8}, {.addr=0x25d9, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x25da, .a=0xba, .x=0xa9, .y=0x26, .sp=0x64, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x25d8, .value=0xe8}, {.addr=0x25d9, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x25d8, .value=0xe8, .type=IO_READ},
        {.addr=0x25d9, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xadf7, .a=0x73, .x=0x0a, .y=0xee, .sp=0x19, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xadf7, .value=0xe8}, {.addr=0xadf8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xadf9, .a=0xbf, .x=0x0a, .y=0xee, .sp=0x19, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xadf7, .value=0xe8}, {.addr=0xadf8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xadf7, .value=0xe8, .type=IO_READ},
        {.addr=0xadf8, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x35e0, .a=0xb1, .x=0x02, .y=0x8d, .sp=0xf9, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x35e0, .value=0xe8}, {.addr=0x35e1, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x35e2, .a=0xcb, .x=0x02, .y=0x8d, .sp=0xf9, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x35e0, .value=0xe8}, {.addr=0x35e1, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x35e0, .value=0xe8, .type=IO_READ},
        {.addr=0x35e1, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x965c, .a=0x7a, .x=0xd7, .y=0x38, .sp=0xe7, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x965c, .value=0xe8}, {.addr=0x965d, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x965e, .a=0xb8, .x=0xd7, .y=0x38, .sp=0xe7, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x965c, .value=0xe8}, {.addr=0x965d, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x965c, .value=0xe8, .type=IO_READ},
        {.addr=0x965d, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x295c, .a=0xae, .x=0x4b, .y=0xce, .sp=0x6e, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x295c, .value=0xe8}, {.addr=0x295d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x295e, .a=0x9f, .x=0x4b, .y=0xce, .sp=0x6e, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x295c, .value=0xe8}, {.addr=0x295d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x295c, .value=0xe8, .type=IO_READ},
        {.addr=0x295d, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x3a53, .a=0xa8, .x=0x5a, .y=0x41, .sp=0x16, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x3a53, .value=0xe8}, {.addr=0x3a54, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x3a55, .a=0x14, .x=0x5a, .y=0x41, .sp=0x16, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x3a53, .value=0xe8}, {.addr=0x3a54, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x3a53, .value=0xe8, .type=IO_READ},
        {.addr=0x3a54, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x83f3, .a=0xbc, .x=0x78, .y=0x97, .sp=0x17, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x83f3, .value=0xe8}, {.addr=0x83f4, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x83f5, .a=0x49, .x=0x78, .y=0x97, .sp=0x17, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x83f3, .value=0xe8}, {.addr=0x83f4, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x83f3, .value=0xe8, .type=IO_READ},
        {.addr=0x83f4, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x6889, .a=0x88, .x=0x30, .y=0x5b, .sp=0x07, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x6889, .value=0xe8}, {.addr=0x688a, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x688b, .a=0xe3, .x=0x30, .y=0x5b, .sp=0x07, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x6889, .value=0xe8}, {.addr=0x688a, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x6889, .value=0xe8, .type=IO_READ},
        {.addr=0x688a, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x42d4, .a=0xcf, .x=0x22, .y=0xc9, .sp=0x71, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x42d4, .value=0xe8}, {.addr=0x42d5, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x42d6, .a=0x78, .x=0x22, .y=0xc9, .sp=0x71, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x42d4, .value=0xe8}, {.addr=0x42d5, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x42d4, .value=0xe8, .type=IO_READ},
        {.addr=0x42d5, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x83c2, .a=0x39, .x=0x97, .y=0x10, .sp=0x87, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x83c2, .value=0xe8}, {.addr=0x83c3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x83c4, .a=0x20, .x=0x97, .y=0x10, .sp=0x87, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x83c2, .value=0xe8}, {.addr=0x83c3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x83c2, .value=0xe8, .type=IO_READ},
        {.addr=0x83c3, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x241d, .a=0x40, .x=0x00, .y=0xe0, .sp=0xda, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x241d, .value=0xe8}, {.addr=0x241e, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x241f, .a=0xab, .x=0x00, .y=0xe0, .sp=0xda, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x241d, .value=0xe8}, {.addr=0x241e, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x241d, .value=0xe8, .type=IO_READ},
        {.addr=0x241e, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x7b29, .a=0xa3, .x=0x74, .y=0xc4, .sp=0xde, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x7b29, .value=0xe8}, {.addr=0x7b2a, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x7b2b, .a=0x73, .x=0x74, .y=0xc4, .sp=0xde, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x7b29, .value=0xe8}, {.addr=0x7b2a, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x7b29, .value=0xe8, .type=IO_READ},
        {.addr=0x7b2a, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x136c, .a=0xdd, .x=0xf7, .y=0x7c, .sp=0x19, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x136c, .value=0xe8}, {.addr=0x136d, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x136e, .a=0xd4, .x=0xf7, .y=0x7c, .sp=0x19, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x136c, .value=0xe8}, {.addr=0x136d, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x136c, .value=0xe8, .type=IO_READ},
        {.addr=0x136d, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xc175, .a=0x40, .x=0xce, .y=0x03, .sp=0x1d, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xc175, .value=0xe8}, {.addr=0xc176, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xc177, .a=0x83, .x=0xce, .y=0x03, .sp=0x1d, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xc175, .value=0xe8}, {.addr=0xc176, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xc175, .value=0xe8, .type=IO_READ},
        {.addr=0xc176, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x7169, .a=0xee, .x=0x15, .y=0xe4, .sp=0x35, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x7169, .value=0xe8}, {.addr=0x716a, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x716b, .a=0xfa, .x=0x15, .y=0xe4, .sp=0x35, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x7169, .value=0xe8}, {.addr=0x716a, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x7169, .value=0xe8, .type=IO_READ},
        {.addr=0x716a, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xc687, .a=0xc4, .x=0xef, .y=0xa4, .sp=0x10, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xc687, .value=0xe8}, {.addr=0xc688, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xc689, .a=0xa5, .x=0xef, .y=0xa4, .sp=0x10, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xc687, .value=0xe8}, {.addr=0xc688, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xc687, .value=0xe8, .type=IO_READ},
        {.addr=0xc688, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xa329, .a=0x07, .x=0x00, .y=0x65, .sp=0x1b, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xa329, .value=0xe8}, {.addr=0xa32a, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xa32b, .a=0xa3, .x=0x00, .y=0x65, .sp=0x1b, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xa329, .value=0xe8}, {.addr=0xa32a, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xa329, .value=0xe8, .type=IO_READ},
        {.addr=0xa32a, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x28f6, .a=0x5c, .x=0x4b, .y=0x93, .sp=0xd1, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x28f6, .value=0xe8}, {.addr=0x28f7, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x28f8, .a=0x8a, .x=0x4b, .y=0x93, .sp=0xd1, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x28f6, .value=0xe8}, {.addr=0x28f7, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x28f6, .value=0xe8, .type=IO_READ},
        {.addr=0x28f7, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x8c2a, .a=0x98, .x=0xd0, .y=0xee, .sp=0xd6, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x8c2a, .value=0xe8}, {.addr=0x8c2b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8c2c, .a=0x00, .x=0xd0, .y=0xee, .sp=0xd6, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x8c2a, .value=0xe8}, {.addr=0x8c2b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8c2a, .value=0xe8, .type=IO_READ},
        {.addr=0x8c2b, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xc452, .a=0x18, .x=0x88, .y=0xe7, .sp=0x5a, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xc452, .value=0xe8}, {.addr=0xc453, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xc454, .a=0xc8, .x=0x88, .y=0xe7, .sp=0x5a, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xc452, .value=0xe8}, {.addr=0xc453, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xc452, .value=0xe8, .type=IO_READ},
        {.addr=0xc453, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x85f8, .a=0x67, .x=0x6e, .y=0x6d, .sp=0xac, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x85f8, .value=0xe8}, {.addr=0x85f9, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x85fa, .a=0x27, .x=0x6e, .y=0x6d, .sp=0xac, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x85f8, .value=0xe8}, {.addr=0x85f9, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x85f8, .value=0xe8, .type=IO_READ},
        {.addr=0x85f9, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xb50a, .a=0x23, .x=0xa0, .y=0x86, .sp=0x05, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xb50a, .value=0xe8}, {.addr=0xb50b, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xb50c, .a=0x4e, .x=0xa0, .y=0x86, .sp=0x05, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xb50a, .value=0xe8}, {.addr=0xb50b, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xb50a, .value=0xe8, .type=IO_READ},
        {.addr=0xb50b, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x77b0, .a=0x45, .x=0x5c, .y=0xcb, .sp=0xed, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x77b0, .value=0xe8}, {.addr=0x77b1, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x77b2, .a=0x18, .x=0x5c, .y=0xcb, .sp=0xed, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x77b0, .value=0xe8}, {.addr=0x77b1, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x77b0, .value=0xe8, .type=IO_READ},
        {.addr=0x77b1, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x0a70, .a=0xb2, .x=0x5e, .y=0x72, .sp=0xf3, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0a70, .value=0xe8}, {.addr=0x0a71, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x0a72, .a=0xa1, .x=0x5e, .y=0x72, .sp=0xf3, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0a70, .value=0xe8}, {.addr=0x0a71, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x0a70, .value=0xe8, .type=IO_READ},
        {.addr=0x0a71, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x91b5, .a=0x08, .x=0x64, .y=0x42, .sp=0x5f, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x91b5, .value=0xe8}, {.addr=0x91b6, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x91b7, .a=0x6a, .x=0x64, .y=0x42, .sp=0x5f, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x91b5, .value=0xe8}, {.addr=0x91b6, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x91b5, .value=0xe8, .type=IO_READ},
        {.addr=0x91b6, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xf20d, .a=0x8c, .x=0xeb, .y=0x56, .sp=0x21, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xf20d, .value=0xe8}, {.addr=0xf20e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf20f, .a=0x7c, .x=0xeb, .y=0x56, .sp=0x21, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xf20d, .value=0xe8}, {.addr=0xf20e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf20d, .value=0xe8, .type=IO_READ},
        {.addr=0xf20e, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x2bcf, .a=0x3c, .x=0xdb, .y=0x61, .sp=0x14, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x2bcf, .value=0xe8}, {.addr=0x2bd0, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x2bd1, .a=0xcd, .x=0xdb, .y=0x61, .sp=0x14, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x2bcf, .value=0xe8}, {.addr=0x2bd0, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x2bcf, .value=0xe8, .type=IO_READ},
        {.addr=0x2bd0, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xc073, .a=0xd7, .x=0x87, .y=0xa8, .sp=0xfa, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xc073, .value=0xe8}, {.addr=0xc074, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xc075, .a=0xea, .x=0x87, .y=0xa8, .sp=0xfa, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xc073, .value=0xe8}, {.addr=0xc074, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xc073, .value=0xe8, .type=IO_READ},
        {.addr=0xc074, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x2d12, .a=0x51, .x=0x32, .y=0x4e, .sp=0xde, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x2d12, .value=0xe8}, {.addr=0x2d13, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x2d14, .a=0xf9, .x=0x32, .y=0x4e, .sp=0xde, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x2d12, .value=0xe8}, {.addr=0x2d13, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x2d12, .value=0xe8, .type=IO_READ},
        {.addr=0x2d13, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x8537, .a=0xf1, .x=0x17, .y=0x52, .sp=0x91, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x8537, .value=0xe8}, {.addr=0x8538, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x8539, .a=0xde, .x=0x17, .y=0x52, .sp=0x91, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x8537, .value=0xe8}, {.addr=0x8538, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x8537, .value=0xe8, .type=IO_READ},
        {.addr=0x8538, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xc723, .a=0x2b, .x=0xa2, .y=0xb9, .sp=0x19, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xc723, .value=0xe8}, {.addr=0xc724, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xc725, .a=0xa3, .x=0xa2, .y=0xb9, .sp=0x19, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xc723, .value=0xe8}, {.addr=0xc724, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xc723, .value=0xe8, .type=IO_READ},
        {.addr=0xc724, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x3203, .a=0x17, .x=0x5b, .y=0x72, .sp=0xed, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x3203, .value=0xe8}, {.addr=0x3204, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x3205, .a=0xf0, .x=0x5b, .y=0x72, .sp=0xed, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x3203, .value=0xe8}, {.addr=0x3204, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x3203, .value=0xe8, .type=IO_READ},
        {.addr=0x3204, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x435f, .a=0x1e, .x=0x3e, .y=0x16, .sp=0x75, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x435f, .value=0xe8}, {.addr=0x4360, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4361, .a=0xe6, .x=0x3e, .y=0x16, .sp=0x75, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x435f, .value=0xe8}, {.addr=0x4360, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x435f, .value=0xe8, .type=IO_READ},
        {.addr=0x4360, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x41ec, .a=0x49, .x=0xbc, .y=0x85, .sp=0x32, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x41ec, .value=0xe8}, {.addr=0x41ed, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x41ee, .a=0x9f, .x=0xbc, .y=0x85, .sp=0x32, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x41ec, .value=0xe8}, {.addr=0x41ed, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x41ec, .value=0xe8, .type=IO_READ},
        {.addr=0x41ed, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xaa81, .a=0x96, .x=0x56, .y=0xe1, .sp=0x31, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xaa81, .value=0xe8}, {.addr=0xaa82, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xaa83, .a=0xb7, .x=0x56, .y=0xe1, .sp=0x31, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xaa81, .value=0xe8}, {.addr=0xaa82, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xaa81, .value=0xe8, .type=IO_READ},
        {.addr=0xaa82, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x4c5a, .a=0x65, .x=0x10, .y=0x14, .sp=0x2c, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x4c5a, .value=0xe8}, {.addr=0x4c5b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4c5c, .a=0x7c, .x=0x10, .y=0x14, .sp=0x2c, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x4c5a, .value=0xe8}, {.addr=0x4c5b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4c5a, .value=0xe8, .type=IO_READ},
        {.addr=0x4c5b, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xb4fc, .a=0x71, .x=0xb7, .y=0x39, .sp=0x2c, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xb4fc, .value=0xe8}, {.addr=0xb4fd, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xb4fe, .a=0x23, .x=0xb7, .y=0x39, .sp=0x2c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xb4fc, .value=0xe8}, {.addr=0xb4fd, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xb4fc, .value=0xe8, .type=IO_READ},
        {.addr=0xb4fd, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xdf7c, .a=0xfb, .x=0xf1, .y=0x49, .sp=0xc8, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xdf7c, .value=0xe8}, {.addr=0xdf7d, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xdf7e, .a=0xb6, .x=0xf1, .y=0x49, .sp=0xc8, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xdf7c, .value=0xe8}, {.addr=0xdf7d, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xdf7c, .value=0xe8, .type=IO_READ},
        {.addr=0xdf7d, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xffcc, .a=0xc5, .x=0xb1, .y=0xea, .sp=0xa9, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xffcc, .value=0xe8}, {.addr=0xffcd, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xffce, .a=0xfe, .x=0xb1, .y=0xea, .sp=0xa9, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xffcc, .value=0xe8}, {.addr=0xffcd, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xffcc, .value=0xe8, .type=IO_READ},
        {.addr=0xffcd, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x5332, .a=0x07, .x=0x4a, .y=0x96, .sp=0x37, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x5332, .value=0xe8}, {.addr=0x5333, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x5334, .a=0xef, .x=0x4a, .y=0x96, .sp=0x37, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x5332, .value=0xe8}, {.addr=0x5333, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x5332, .value=0xe8, .type=IO_READ},
        {.addr=0x5333, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x498b, .a=0x92, .x=0xa9, .y=0xa7, .sp=0xb7, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x498b, .value=0xe8}, {.addr=0x498c, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x498d, .a=0x50, .x=0xa9, .y=0xa7, .sp=0xb7, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x498b, .value=0xe8}, {.addr=0x498c, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x498b, .value=0xe8, .type=IO_READ},
        {.addr=0x498c, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x0107, .a=0x1a, .x=0x99, .y=0x28, .sp=0xb7, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0xe8}, {.addr=0x0108, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x0109, .a=0xb4, .x=0x99, .y=0x28, .sp=0xb7, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xe8}, {.addr=0x0108, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x0107, .value=0xe8, .type=IO_READ},
        {.addr=0x0108, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0200) {
    const struct CPU_State initial_cpu = {.pc=0xa06c, .a=0x10, .x=0xb8, .y=0x48, .sp=0xa6, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xa06c, .value=0xe8}, {.addr=0xa06d, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xa06e, .a=0x6c, .x=0xb8, .y=0x48, .sp=0xa6, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xa06c, .value=0xe8}, {.addr=0xa06d, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xa06c, .value=0xe8, .type=IO_READ},
        {.addr=0xa06d, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0201) {
    const struct CPU_State initial_cpu = {.pc=0x1be6, .a=0xec, .x=0xe0, .y=0xe4, .sp=0x2e, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x1be6, .value=0xe8}, {.addr=0x1be7, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x1be8, .a=0x69, .x=0xe0, .y=0xe4, .sp=0x2e, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x1be6, .value=0xe8}, {.addr=0x1be7, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x1be6, .value=0xe8, .type=IO_READ},
        {.addr=0x1be7, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0202) {
    const struct CPU_State initial_cpu = {.pc=0xa40d, .a=0x79, .x=0x10, .y=0xc1, .sp=0x30, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xa40d, .value=0xe8}, {.addr=0xa40e, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xa40f, .a=0xf8, .x=0x10, .y=0xc1, .sp=0x30, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xa40d, .value=0xe8}, {.addr=0xa40e, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xa40d, .value=0xe8, .type=IO_READ},
        {.addr=0xa40e, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0203) {
    const struct CPU_State initial_cpu = {.pc=0xc19f, .a=0x69, .x=0x04, .y=0x9c, .sp=0x8a, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xc19f, .value=0xe8}, {.addr=0xc1a0, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xc1a1, .a=0xe7, .x=0x04, .y=0x9c, .sp=0x8a, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xc19f, .value=0xe8}, {.addr=0xc1a0, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xc19f, .value=0xe8, .type=IO_READ},
        {.addr=0xc1a0, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0204) {
    const struct CPU_State initial_cpu = {.pc=0x5ce2, .a=0x08, .x=0xde, .y=0xea, .sp=0xe2, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x5ce2, .value=0xe8}, {.addr=0x5ce3, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x5ce4, .a=0xb9, .x=0xde, .y=0xea, .sp=0xe2, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5ce2, .value=0xe8}, {.addr=0x5ce3, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x5ce2, .value=0xe8, .type=IO_READ},
        {.addr=0x5ce3, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0205) {
    const struct CPU_State initial_cpu = {.pc=0xf7da, .a=0xcd, .x=0x1e, .y=0x53, .sp=0xea, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xf7da, .value=0xe8}, {.addr=0xf7db, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xf7dc, .a=0xb4, .x=0x1e, .y=0x53, .sp=0xea, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xf7da, .value=0xe8}, {.addr=0xf7db, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xf7da, .value=0xe8, .type=IO_READ},
        {.addr=0xf7db, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0206) {
    const struct CPU_State initial_cpu = {.pc=0x45af, .a=0x95, .x=0xa5, .y=0x62, .sp=0x83, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x45af, .value=0xe8}, {.addr=0x45b0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x45b1, .a=0x3d, .x=0xa5, .y=0x62, .sp=0x83, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x45af, .value=0xe8}, {.addr=0x45b0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x45af, .value=0xe8, .type=IO_READ},
        {.addr=0x45b0, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0207) {
    const struct CPU_State initial_cpu = {.pc=0x07ae, .a=0x64, .x=0xb6, .y=0x87, .sp=0x38, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x07ae, .value=0xe8}, {.addr=0x07af, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x07b0, .a=0xd5, .x=0xb6, .y=0x87, .sp=0x38, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x07ae, .value=0xe8}, {.addr=0x07af, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x07ae, .value=0xe8, .type=IO_READ},
        {.addr=0x07af, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0208) {
    const struct CPU_State initial_cpu = {.pc=0x0e3a, .a=0x50, .x=0xfd, .y=0xb4, .sp=0x5b, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0e3a, .value=0xe8}, {.addr=0x0e3b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0e3c, .a=0xc0, .x=0xfd, .y=0xb4, .sp=0x5b, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0e3a, .value=0xe8}, {.addr=0x0e3b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x0e3a, .value=0xe8, .type=IO_READ},
        {.addr=0x0e3b, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0209) {
    const struct CPU_State initial_cpu = {.pc=0xbab3, .a=0x8f, .x=0x27, .y=0xbe, .sp=0x19, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xbab3, .value=0xe8}, {.addr=0xbab4, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xbab5, .a=0x53, .x=0x27, .y=0xbe, .sp=0x19, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xbab3, .value=0xe8}, {.addr=0xbab4, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xbab3, .value=0xe8, .type=IO_READ},
        {.addr=0xbab4, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_020A) {
    const struct CPU_State initial_cpu = {.pc=0x741e, .a=0x6b, .x=0x2f, .y=0x84, .sp=0x5e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x741e, .value=0xe8}, {.addr=0x741f, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x7420, .a=0x2c, .x=0x2f, .y=0x84, .sp=0x5e, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x741e, .value=0xe8}, {.addr=0x741f, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x741e, .value=0xe8, .type=IO_READ},
        {.addr=0x741f, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_020B) {
    const struct CPU_State initial_cpu = {.pc=0xe410, .a=0x56, .x=0x85, .y=0x2e, .sp=0xf4, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xe410, .value=0xe8}, {.addr=0xe411, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xe412, .a=0x35, .x=0x85, .y=0x2e, .sp=0xf4, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xe410, .value=0xe8}, {.addr=0xe411, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xe410, .value=0xe8, .type=IO_READ},
        {.addr=0xe411, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_020C) {
    const struct CPU_State initial_cpu = {.pc=0x6bf2, .a=0xbd, .x=0x8d, .y=0x28, .sp=0x0e, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x6bf2, .value=0xe8}, {.addr=0x6bf3, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x6bf4, .a=0x17, .x=0x8d, .y=0x28, .sp=0x0e, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x6bf2, .value=0xe8}, {.addr=0x6bf3, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x6bf2, .value=0xe8, .type=IO_READ},
        {.addr=0x6bf3, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_020D) {
    const struct CPU_State initial_cpu = {.pc=0xcffe, .a=0xa2, .x=0xea, .y=0xd3, .sp=0xb0, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xcffe, .value=0xe8}, {.addr=0xcfff, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xd000, .a=0xb0, .x=0xea, .y=0xd3, .sp=0xb0, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xcffe, .value=0xe8}, {.addr=0xcfff, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xcffe, .value=0xe8, .type=IO_READ},
        {.addr=0xcfff, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_020E) {
    const struct CPU_State initial_cpu = {.pc=0xe60e, .a=0x0a, .x=0xce, .y=0xe4, .sp=0xa6, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xe60e, .value=0xe8}, {.addr=0xe60f, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0xe610, .a=0x69, .x=0xce, .y=0xe4, .sp=0xa6, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xe60e, .value=0xe8}, {.addr=0xe60f, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0xe60e, .value=0xe8, .type=IO_READ},
        {.addr=0xe60f, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_020F) {
    const struct CPU_State initial_cpu = {.pc=0x5dbd, .a=0x1c, .x=0x56, .y=0x55, .sp=0xa6, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x5dbd, .value=0xe8}, {.addr=0x5dbe, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x5dbf, .a=0x5b, .x=0x56, .y=0x55, .sp=0xa6, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x5dbd, .value=0xe8}, {.addr=0x5dbe, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x5dbd, .value=0xe8, .type=IO_READ},
        {.addr=0x5dbe, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0210) {
    const struct CPU_State initial_cpu = {.pc=0x6a2f, .a=0x9e, .x=0x19, .y=0x8d, .sp=0x93, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x6a2f, .value=0xe8}, {.addr=0x6a30, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x6a31, .a=0xb7, .x=0x19, .y=0x8d, .sp=0x93, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x6a2f, .value=0xe8}, {.addr=0x6a30, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x6a2f, .value=0xe8, .type=IO_READ},
        {.addr=0x6a30, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0211) {
    const struct CPU_State initial_cpu = {.pc=0xcb27, .a=0xaa, .x=0xfa, .y=0x35, .sp=0xb4, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xcb27, .value=0xe8}, {.addr=0xcb28, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xcb29, .a=0x5e, .x=0xfa, .y=0x35, .sp=0xb4, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xcb27, .value=0xe8}, {.addr=0xcb28, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xcb27, .value=0xe8, .type=IO_READ},
        {.addr=0xcb28, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0212) {
    const struct CPU_State initial_cpu = {.pc=0x65cd, .a=0x94, .x=0xc8, .y=0x6c, .sp=0x28, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x65cd, .value=0xe8}, {.addr=0x65ce, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x65cf, .a=0x02, .x=0xc8, .y=0x6c, .sp=0x28, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x65cd, .value=0xe8}, {.addr=0x65ce, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x65cd, .value=0xe8, .type=IO_READ},
        {.addr=0x65ce, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0213) {
    const struct CPU_State initial_cpu = {.pc=0xf1cd, .a=0x4f, .x=0x51, .y=0xa7, .sp=0xed, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xf1cd, .value=0xe8}, {.addr=0xf1ce, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xf1cf, .a=0xa5, .x=0x51, .y=0xa7, .sp=0xed, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xf1cd, .value=0xe8}, {.addr=0xf1ce, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xf1cd, .value=0xe8, .type=IO_READ},
        {.addr=0xf1ce, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0214) {
    const struct CPU_State initial_cpu = {.pc=0x3c89, .a=0x33, .x=0xe1, .y=0x05, .sp=0x9e, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x3c89, .value=0xe8}, {.addr=0x3c8a, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x3c8b, .a=0x7a, .x=0xe1, .y=0x05, .sp=0x9e, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x3c89, .value=0xe8}, {.addr=0x3c8a, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x3c89, .value=0xe8, .type=IO_READ},
        {.addr=0x3c8a, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0215) {
    const struct CPU_State initial_cpu = {.pc=0x4fbb, .a=0xf2, .x=0xe0, .y=0x97, .sp=0x86, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x4fbb, .value=0xe8}, {.addr=0x4fbc, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x4fbd, .a=0x89, .x=0xe0, .y=0x97, .sp=0x86, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x4fbb, .value=0xe8}, {.addr=0x4fbc, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x4fbb, .value=0xe8, .type=IO_READ},
        {.addr=0x4fbc, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0216) {
    const struct CPU_State initial_cpu = {.pc=0x8f42, .a=0xf4, .x=0xa1, .y=0x3f, .sp=0x69, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x8f42, .value=0xe8}, {.addr=0x8f43, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x8f44, .a=0x82, .x=0xa1, .y=0x3f, .sp=0x69, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x8f42, .value=0xe8}, {.addr=0x8f43, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x8f42, .value=0xe8, .type=IO_READ},
        {.addr=0x8f43, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0217) {
    const struct CPU_State initial_cpu = {.pc=0x6202, .a=0xaf, .x=0x4d, .y=0xab, .sp=0x87, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x6202, .value=0xe8}, {.addr=0x6203, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x6204, .a=0x5b, .x=0x4d, .y=0xab, .sp=0x87, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x6202, .value=0xe8}, {.addr=0x6203, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x6202, .value=0xe8, .type=IO_READ},
        {.addr=0x6203, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0218) {
    const struct CPU_State initial_cpu = {.pc=0x0028, .a=0xb7, .x=0xcc, .y=0x21, .sp=0x35, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0xe8}, {.addr=0x0029, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x002a, .a=0xbc, .x=0xcc, .y=0x21, .sp=0x35, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0xe8}, {.addr=0x0029, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0028, .value=0xe8, .type=IO_READ},
        {.addr=0x0029, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0219) {
    const struct CPU_State initial_cpu = {.pc=0xfad2, .a=0xf8, .x=0xdd, .y=0xe4, .sp=0x3b, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xfad2, .value=0xe8}, {.addr=0xfad3, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xfad4, .a=0xcc, .x=0xdd, .y=0xe4, .sp=0x3b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xfad2, .value=0xe8}, {.addr=0xfad3, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xfad2, .value=0xe8, .type=IO_READ},
        {.addr=0xfad3, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_021A) {
    const struct CPU_State initial_cpu = {.pc=0x7255, .a=0x1e, .x=0xb8, .y=0x00, .sp=0xc5, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x7255, .value=0xe8}, {.addr=0x7256, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x7257, .a=0xc4, .x=0xb8, .y=0x00, .sp=0xc5, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x7255, .value=0xe8}, {.addr=0x7256, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x7255, .value=0xe8, .type=IO_READ},
        {.addr=0x7256, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_021B) {
    const struct CPU_State initial_cpu = {.pc=0x7dca, .a=0x92, .x=0xad, .y=0x26, .sp=0xc9, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x7dca, .value=0xe8}, {.addr=0x7dcb, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x7dcc, .a=0x88, .x=0xad, .y=0x26, .sp=0xc9, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7dca, .value=0xe8}, {.addr=0x7dcb, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x7dca, .value=0xe8, .type=IO_READ},
        {.addr=0x7dcb, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_021C) {
    const struct CPU_State initial_cpu = {.pc=0x929e, .a=0x1a, .x=0x74, .y=0xb9, .sp=0x39, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x929e, .value=0xe8}, {.addr=0x929f, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x92a0, .a=0x95, .x=0x74, .y=0xb9, .sp=0x39, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x929e, .value=0xe8}, {.addr=0x929f, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x929e, .value=0xe8, .type=IO_READ},
        {.addr=0x929f, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_021D) {
    const struct CPU_State initial_cpu = {.pc=0xcc50, .a=0x14, .x=0xc7, .y=0x72, .sp=0x87, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xcc50, .value=0xe8}, {.addr=0xcc51, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcc52, .a=0x1d, .x=0xc7, .y=0x72, .sp=0x87, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xcc50, .value=0xe8}, {.addr=0xcc51, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcc50, .value=0xe8, .type=IO_READ},
        {.addr=0xcc51, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_021E) {
    const struct CPU_State initial_cpu = {.pc=0xd0fb, .a=0xb1, .x=0xb4, .y=0xf0, .sp=0x79, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xd0fb, .value=0xe8}, {.addr=0xd0fc, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xd0fd, .a=0x37, .x=0xb4, .y=0xf0, .sp=0x79, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xd0fb, .value=0xe8}, {.addr=0xd0fc, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xd0fb, .value=0xe8, .type=IO_READ},
        {.addr=0xd0fc, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_021F) {
    const struct CPU_State initial_cpu = {.pc=0xc09f, .a=0xc5, .x=0x48, .y=0xd6, .sp=0x24, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xc09f, .value=0xe8}, {.addr=0xc0a0, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xc0a1, .a=0x21, .x=0x48, .y=0xd6, .sp=0x24, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xc09f, .value=0xe8}, {.addr=0xc0a0, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xc09f, .value=0xe8, .type=IO_READ},
        {.addr=0xc0a0, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0220) {
    const struct CPU_State initial_cpu = {.pc=0x3b02, .a=0x13, .x=0x17, .y=0xcf, .sp=0xab, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x3b02, .value=0xe8}, {.addr=0x3b03, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3b04, .a=0xed, .x=0x17, .y=0xcf, .sp=0xab, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x3b02, .value=0xe8}, {.addr=0x3b03, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3b02, .value=0xe8, .type=IO_READ},
        {.addr=0x3b03, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0221) {
    const struct CPU_State initial_cpu = {.pc=0x1e6e, .a=0xb7, .x=0x14, .y=0xef, .sp=0x8e, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x1e6e, .value=0xe8}, {.addr=0x1e6f, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x1e70, .a=0x18, .x=0x14, .y=0xef, .sp=0x8e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x1e6e, .value=0xe8}, {.addr=0x1e6f, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x1e6e, .value=0xe8, .type=IO_READ},
        {.addr=0x1e6f, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0222) {
    const struct CPU_State initial_cpu = {.pc=0x1e3b, .a=0xa2, .x=0x0e, .y=0x27, .sp=0x41, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x1e3b, .value=0xe8}, {.addr=0x1e3c, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x1e3d, .a=0x25, .x=0x0e, .y=0x27, .sp=0x41, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x1e3b, .value=0xe8}, {.addr=0x1e3c, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x1e3b, .value=0xe8, .type=IO_READ},
        {.addr=0x1e3c, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0223) {
    const struct CPU_State initial_cpu = {.pc=0x05b6, .a=0x0c, .x=0x70, .y=0xa6, .sp=0x3c, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x05b6, .value=0xe8}, {.addr=0x05b7, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x05b8, .a=0x6b, .x=0x70, .y=0xa6, .sp=0x3c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x05b6, .value=0xe8}, {.addr=0x05b7, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x05b6, .value=0xe8, .type=IO_READ},
        {.addr=0x05b7, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0224) {
    const struct CPU_State initial_cpu = {.pc=0xcacf, .a=0xaa, .x=0xb9, .y=0x59, .sp=0xf6, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xcacf, .value=0xe8}, {.addr=0xcad0, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xcad1, .a=0x61, .x=0xb9, .y=0x59, .sp=0xf6, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xcacf, .value=0xe8}, {.addr=0xcad0, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xcacf, .value=0xe8, .type=IO_READ},
        {.addr=0xcad0, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0225) {
    const struct CPU_State initial_cpu = {.pc=0x95d7, .a=0xef, .x=0x13, .y=0x92, .sp=0x1a, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x95d7, .value=0xe8}, {.addr=0x95d8, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x95d9, .a=0x78, .x=0x13, .y=0x92, .sp=0x1a, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x95d7, .value=0xe8}, {.addr=0x95d8, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x95d7, .value=0xe8, .type=IO_READ},
        {.addr=0x95d8, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0226) {
    const struct CPU_State initial_cpu = {.pc=0x80cc, .a=0x49, .x=0x3e, .y=0x7f, .sp=0x3a, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x80cc, .value=0xe8}, {.addr=0x80cd, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x80ce, .a=0x91, .x=0x3e, .y=0x7f, .sp=0x3a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x80cc, .value=0xe8}, {.addr=0x80cd, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x80cc, .value=0xe8, .type=IO_READ},
        {.addr=0x80cd, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0227) {
    const struct CPU_State initial_cpu = {.pc=0xc702, .a=0xcd, .x=0xe2, .y=0xc2, .sp=0x75, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xc702, .value=0xe8}, {.addr=0xc703, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xc704, .a=0xfc, .x=0xe2, .y=0xc2, .sp=0x75, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xc702, .value=0xe8}, {.addr=0xc703, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xc702, .value=0xe8, .type=IO_READ},
        {.addr=0xc703, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0228) {
    const struct CPU_State initial_cpu = {.pc=0xa306, .a=0xad, .x=0x3d, .y=0xe8, .sp=0x7f, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xa306, .value=0xe8}, {.addr=0xa307, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xa308, .a=0x2a, .x=0x3d, .y=0xe8, .sp=0x7f, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa306, .value=0xe8}, {.addr=0xa307, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xa306, .value=0xe8, .type=IO_READ},
        {.addr=0xa307, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0229) {
    const struct CPU_State initial_cpu = {.pc=0xf23d, .a=0xf0, .x=0xab, .y=0xce, .sp=0xc5, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xf23d, .value=0xe8}, {.addr=0xf23e, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xf23f, .a=0x7a, .x=0xab, .y=0xce, .sp=0xc5, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xf23d, .value=0xe8}, {.addr=0xf23e, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xf23d, .value=0xe8, .type=IO_READ},
        {.addr=0xf23e, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_022A) {
    const struct CPU_State initial_cpu = {.pc=0x747e, .a=0x11, .x=0xcb, .y=0xd1, .sp=0x86, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x747e, .value=0xe8}, {.addr=0x747f, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x7480, .a=0x47, .x=0xcb, .y=0xd1, .sp=0x86, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x747e, .value=0xe8}, {.addr=0x747f, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x747e, .value=0xe8, .type=IO_READ},
        {.addr=0x747f, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_022B) {
    const struct CPU_State initial_cpu = {.pc=0x1e9c, .a=0xbb, .x=0xe2, .y=0x75, .sp=0x7a, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x1e9c, .value=0xe8}, {.addr=0x1e9d, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x1e9e, .a=0x29, .x=0xe2, .y=0x75, .sp=0x7a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x1e9c, .value=0xe8}, {.addr=0x1e9d, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x1e9c, .value=0xe8, .type=IO_READ},
        {.addr=0x1e9d, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_022C) {
    const struct CPU_State initial_cpu = {.pc=0x96b3, .a=0xe3, .x=0x36, .y=0x18, .sp=0xd8, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x96b3, .value=0xe8}, {.addr=0x96b4, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x96b5, .a=0xf6, .x=0x36, .y=0x18, .sp=0xd8, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x96b3, .value=0xe8}, {.addr=0x96b4, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x96b3, .value=0xe8, .type=IO_READ},
        {.addr=0x96b4, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_022D) {
    const struct CPU_State initial_cpu = {.pc=0x2c4e, .a=0x62, .x=0x11, .y=0xf8, .sp=0xdb, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x2c4e, .value=0xe8}, {.addr=0x2c4f, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x2c50, .a=0x0c, .x=0x11, .y=0xf8, .sp=0xdb, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2c4e, .value=0xe8}, {.addr=0x2c4f, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x2c4e, .value=0xe8, .type=IO_READ},
        {.addr=0x2c4f, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_022E) {
    const struct CPU_State initial_cpu = {.pc=0x80da, .a=0xa3, .x=0x79, .y=0xc2, .sp=0xf9, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x80da, .value=0xe8}, {.addr=0x80db, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x80dc, .a=0x8c, .x=0x79, .y=0xc2, .sp=0xf9, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x80da, .value=0xe8}, {.addr=0x80db, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x80da, .value=0xe8, .type=IO_READ},
        {.addr=0x80db, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_022F) {
    const struct CPU_State initial_cpu = {.pc=0xfffe, .a=0x45, .x=0x83, .y=0xeb, .sp=0x3a, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xfffe, .value=0xe8}, {.addr=0xffff, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x0000, .a=0xa5, .x=0x83, .y=0xeb, .sp=0x3a, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xfffe, .value=0xe8}, {.addr=0xffff, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xfffe, .value=0xe8, .type=IO_READ},
        {.addr=0xffff, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0230) {
    const struct CPU_State initial_cpu = {.pc=0x1757, .a=0x48, .x=0x69, .y=0xf1, .sp=0x10, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x1757, .value=0xe8}, {.addr=0x1758, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x1759, .a=0xb3, .x=0x69, .y=0xf1, .sp=0x10, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x1757, .value=0xe8}, {.addr=0x1758, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x1757, .value=0xe8, .type=IO_READ},
        {.addr=0x1758, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0231) {
    const struct CPU_State initial_cpu = {.pc=0x0d34, .a=0xbf, .x=0xb0, .y=0xb7, .sp=0x65, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0d34, .value=0xe8}, {.addr=0x0d35, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x0d36, .a=0x84, .x=0xb0, .y=0xb7, .sp=0x65, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0d34, .value=0xe8}, {.addr=0x0d35, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x0d34, .value=0xe8, .type=IO_READ},
        {.addr=0x0d35, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0232) {
    const struct CPU_State initial_cpu = {.pc=0x0a00, .a=0x55, .x=0x15, .y=0x07, .sp=0xe3, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0a00, .value=0xe8}, {.addr=0x0a01, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x0a02, .a=0x2e, .x=0x15, .y=0x07, .sp=0xe3, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0a00, .value=0xe8}, {.addr=0x0a01, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x0a00, .value=0xe8, .type=IO_READ},
        {.addr=0x0a01, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0233) {
    const struct CPU_State initial_cpu = {.pc=0x4c5c, .a=0x24, .x=0x50, .y=0x7d, .sp=0x60, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x4c5c, .value=0xe8}, {.addr=0x4c5d, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x4c5e, .a=0x57, .x=0x50, .y=0x7d, .sp=0x60, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x4c5c, .value=0xe8}, {.addr=0x4c5d, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x4c5c, .value=0xe8, .type=IO_READ},
        {.addr=0x4c5d, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0234) {
    const struct CPU_State initial_cpu = {.pc=0x8b5f, .a=0x18, .x=0x60, .y=0xc4, .sp=0xab, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x8b5f, .value=0xe8}, {.addr=0x8b60, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x8b61, .a=0xe3, .x=0x60, .y=0xc4, .sp=0xab, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x8b5f, .value=0xe8}, {.addr=0x8b60, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x8b5f, .value=0xe8, .type=IO_READ},
        {.addr=0x8b60, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0235) {
    const struct CPU_State initial_cpu = {.pc=0x1786, .a=0x93, .x=0xc1, .y=0x26, .sp=0x08, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x1786, .value=0xe8}, {.addr=0x1787, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x1788, .a=0x35, .x=0xc1, .y=0x26, .sp=0x08, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x1786, .value=0xe8}, {.addr=0x1787, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x1786, .value=0xe8, .type=IO_READ},
        {.addr=0x1787, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0236) {
    const struct CPU_State initial_cpu = {.pc=0x4bdd, .a=0x4d, .x=0x3c, .y=0x48, .sp=0x8f, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x4bdd, .value=0xe8}, {.addr=0x4bde, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4bdf, .a=0x26, .x=0x3c, .y=0x48, .sp=0x8f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x4bdd, .value=0xe8}, {.addr=0x4bde, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4bdd, .value=0xe8, .type=IO_READ},
        {.addr=0x4bde, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0237) {
    const struct CPU_State initial_cpu = {.pc=0xfd88, .a=0x9c, .x=0xf3, .y=0xe4, .sp=0x81, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xfd88, .value=0xe8}, {.addr=0xfd89, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xfd8a, .a=0x9d, .x=0xf3, .y=0xe4, .sp=0x81, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xfd88, .value=0xe8}, {.addr=0xfd89, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfd88, .value=0xe8, .type=IO_READ},
        {.addr=0xfd89, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0238) {
    const struct CPU_State initial_cpu = {.pc=0xe623, .a=0x20, .x=0x65, .y=0xfa, .sp=0x73, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xe623, .value=0xe8}, {.addr=0xe624, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xe625, .a=0x17, .x=0x65, .y=0xfa, .sp=0x73, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xe623, .value=0xe8}, {.addr=0xe624, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xe623, .value=0xe8, .type=IO_READ},
        {.addr=0xe624, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0239) {
    const struct CPU_State initial_cpu = {.pc=0xd6ee, .a=0xe7, .x=0xcb, .y=0xee, .sp=0x5e, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xd6ee, .value=0xe8}, {.addr=0xd6ef, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xd6f0, .a=0xf7, .x=0xcb, .y=0xee, .sp=0x5e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xd6ee, .value=0xe8}, {.addr=0xd6ef, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xd6ee, .value=0xe8, .type=IO_READ},
        {.addr=0xd6ef, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_023A) {
    const struct CPU_State initial_cpu = {.pc=0x5fc4, .a=0xe2, .x=0xf1, .y=0x37, .sp=0xcf, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x5fc4, .value=0xe8}, {.addr=0x5fc5, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x5fc6, .a=0xcd, .x=0xf1, .y=0x37, .sp=0xcf, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x5fc4, .value=0xe8}, {.addr=0x5fc5, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x5fc4, .value=0xe8, .type=IO_READ},
        {.addr=0x5fc5, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_023B) {
    const struct CPU_State initial_cpu = {.pc=0x2f46, .a=0x13, .x=0xe6, .y=0xed, .sp=0x78, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x2f46, .value=0xe8}, {.addr=0x2f47, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2f48, .a=0xee, .x=0xe6, .y=0xed, .sp=0x78, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x2f46, .value=0xe8}, {.addr=0x2f47, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2f46, .value=0xe8, .type=IO_READ},
        {.addr=0x2f47, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_023C) {
    const struct CPU_State initial_cpu = {.pc=0xb435, .a=0x23, .x=0x62, .y=0x3c, .sp=0x59, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xb435, .value=0xe8}, {.addr=0xb436, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xb437, .a=0xb2, .x=0x62, .y=0x3c, .sp=0x59, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb435, .value=0xe8}, {.addr=0xb436, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xb435, .value=0xe8, .type=IO_READ},
        {.addr=0xb436, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_023D) {
    const struct CPU_State initial_cpu = {.pc=0x85e4, .a=0x35, .x=0xf2, .y=0x31, .sp=0x6e, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x85e4, .value=0xe8}, {.addr=0x85e5, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x85e6, .a=0x8c, .x=0xf2, .y=0x31, .sp=0x6e, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x85e4, .value=0xe8}, {.addr=0x85e5, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x85e4, .value=0xe8, .type=IO_READ},
        {.addr=0x85e5, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_023E) {
    const struct CPU_State initial_cpu = {.pc=0x94f7, .a=0xdf, .x=0xa9, .y=0x06, .sp=0xed, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x94f7, .value=0xe8}, {.addr=0x94f8, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x94f9, .a=0x15, .x=0xa9, .y=0x06, .sp=0xed, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x94f7, .value=0xe8}, {.addr=0x94f8, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x94f7, .value=0xe8, .type=IO_READ},
        {.addr=0x94f8, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_023F) {
    const struct CPU_State initial_cpu = {.pc=0x9b74, .a=0x4b, .x=0xa0, .y=0x3e, .sp=0x26, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x9b74, .value=0xe8}, {.addr=0x9b75, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x9b76, .a=0x35, .x=0xa0, .y=0x3e, .sp=0x26, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x9b74, .value=0xe8}, {.addr=0x9b75, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x9b74, .value=0xe8, .type=IO_READ},
        {.addr=0x9b75, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0240) {
    const struct CPU_State initial_cpu = {.pc=0x76ca, .a=0x63, .x=0x9c, .y=0xe0, .sp=0x5c, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x76ca, .value=0xe8}, {.addr=0x76cb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x76cc, .a=0x00, .x=0x9c, .y=0xe0, .sp=0x5c, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x76ca, .value=0xe8}, {.addr=0x76cb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x76ca, .value=0xe8, .type=IO_READ},
        {.addr=0x76cb, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0241) {
    const struct CPU_State initial_cpu = {.pc=0xc33c, .a=0x39, .x=0xd9, .y=0x5a, .sp=0x59, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xc33c, .value=0xe8}, {.addr=0xc33d, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xc33e, .a=0xe1, .x=0xd9, .y=0x5a, .sp=0x59, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xc33c, .value=0xe8}, {.addr=0xc33d, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xc33c, .value=0xe8, .type=IO_READ},
        {.addr=0xc33d, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0242) {
    const struct CPU_State initial_cpu = {.pc=0xbccb, .a=0xb8, .x=0x8a, .y=0x49, .sp=0x28, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xbccb, .value=0xe8}, {.addr=0xbccc, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xbccd, .a=0xac, .x=0x8a, .y=0x49, .sp=0x28, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xbccb, .value=0xe8}, {.addr=0xbccc, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xbccb, .value=0xe8, .type=IO_READ},
        {.addr=0xbccc, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0243) {
    const struct CPU_State initial_cpu = {.pc=0xc11b, .a=0x94, .x=0xe8, .y=0xed, .sp=0x8c, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xc11b, .value=0xe8}, {.addr=0xc11c, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xc11d, .a=0x77, .x=0xe8, .y=0xed, .sp=0x8c, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xc11b, .value=0xe8}, {.addr=0xc11c, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xc11b, .value=0xe8, .type=IO_READ},
        {.addr=0xc11c, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0244) {
    const struct CPU_State initial_cpu = {.pc=0x2c23, .a=0xa5, .x=0x09, .y=0xf8, .sp=0xcc, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x2c23, .value=0xe8}, {.addr=0x2c24, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x2c25, .a=0x02, .x=0x09, .y=0xf8, .sp=0xcc, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x2c23, .value=0xe8}, {.addr=0x2c24, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x2c23, .value=0xe8, .type=IO_READ},
        {.addr=0x2c24, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0245) {
    const struct CPU_State initial_cpu = {.pc=0xde72, .a=0xbb, .x=0x06, .y=0xe1, .sp=0x42, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xde72, .value=0xe8}, {.addr=0xde73, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xde74, .a=0x40, .x=0x06, .y=0xe1, .sp=0x42, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xde72, .value=0xe8}, {.addr=0xde73, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xde72, .value=0xe8, .type=IO_READ},
        {.addr=0xde73, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0246) {
    const struct CPU_State initial_cpu = {.pc=0x762d, .a=0x28, .x=0x29, .y=0x86, .sp=0x1b, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x762d, .value=0xe8}, {.addr=0x762e, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x762f, .a=0xf5, .x=0x29, .y=0x86, .sp=0x1b, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x762d, .value=0xe8}, {.addr=0x762e, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x762d, .value=0xe8, .type=IO_READ},
        {.addr=0x762e, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0247) {
    const struct CPU_State initial_cpu = {.pc=0xd1eb, .a=0x39, .x=0x1d, .y=0x97, .sp=0xe9, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xd1eb, .value=0xe8}, {.addr=0xd1ec, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xd1ed, .a=0xa7, .x=0x1d, .y=0x97, .sp=0xe9, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xd1eb, .value=0xe8}, {.addr=0xd1ec, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xd1eb, .value=0xe8, .type=IO_READ},
        {.addr=0xd1ec, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0248) {
    const struct CPU_State initial_cpu = {.pc=0x8a14, .a=0x14, .x=0x88, .y=0xa2, .sp=0xeb, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x8a14, .value=0xe8}, {.addr=0x8a15, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x8a16, .a=0x93, .x=0x88, .y=0xa2, .sp=0xeb, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x8a14, .value=0xe8}, {.addr=0x8a15, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x8a14, .value=0xe8, .type=IO_READ},
        {.addr=0x8a15, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0249) {
    const struct CPU_State initial_cpu = {.pc=0xffb7, .a=0x15, .x=0x74, .y=0x37, .sp=0x13, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xffb7, .value=0xe8}, {.addr=0xffb8, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xffb9, .a=0x18, .x=0x74, .y=0x37, .sp=0x13, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xffb7, .value=0xe8}, {.addr=0xffb8, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xffb7, .value=0xe8, .type=IO_READ},
        {.addr=0xffb8, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_024A) {
    const struct CPU_State initial_cpu = {.pc=0x1c59, .a=0x2b, .x=0xf4, .y=0x93, .sp=0x2a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x1c59, .value=0xe8}, {.addr=0x1c5a, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x1c5b, .a=0x4c, .x=0xf4, .y=0x93, .sp=0x2a, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x1c59, .value=0xe8}, {.addr=0x1c5a, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x1c59, .value=0xe8, .type=IO_READ},
        {.addr=0x1c5a, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_024B) {
    const struct CPU_State initial_cpu = {.pc=0x7c58, .a=0xf8, .x=0xa0, .y=0x79, .sp=0x21, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x7c58, .value=0xe8}, {.addr=0x7c59, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x7c5a, .a=0x6e, .x=0xa0, .y=0x79, .sp=0x21, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x7c58, .value=0xe8}, {.addr=0x7c59, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x7c58, .value=0xe8, .type=IO_READ},
        {.addr=0x7c59, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_024C) {
    const struct CPU_State initial_cpu = {.pc=0xc309, .a=0x76, .x=0x4c, .y=0x45, .sp=0xde, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xc309, .value=0xe8}, {.addr=0xc30a, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xc30b, .a=0xc7, .x=0x4c, .y=0x45, .sp=0xde, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xc309, .value=0xe8}, {.addr=0xc30a, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xc309, .value=0xe8, .type=IO_READ},
        {.addr=0xc30a, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_024D) {
    const struct CPU_State initial_cpu = {.pc=0xfe9a, .a=0x22, .x=0x06, .y=0x97, .sp=0xff, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xfe9a, .value=0xe8}, {.addr=0xfe9b, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xfe9c, .a=0x10, .x=0x06, .y=0x97, .sp=0xff, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xfe9a, .value=0xe8}, {.addr=0xfe9b, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xfe9a, .value=0xe8, .type=IO_READ},
        {.addr=0xfe9b, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_024E) {
    const struct CPU_State initial_cpu = {.pc=0x7c7d, .a=0xac, .x=0xe1, .y=0x81, .sp=0x90, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x7c7d, .value=0xe8}, {.addr=0x7c7e, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x7c7f, .a=0x5f, .x=0xe1, .y=0x81, .sp=0x90, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x7c7d, .value=0xe8}, {.addr=0x7c7e, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x7c7d, .value=0xe8, .type=IO_READ},
        {.addr=0x7c7e, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_024F) {
    const struct CPU_State initial_cpu = {.pc=0xdb0a, .a=0x62, .x=0x57, .y=0x97, .sp=0x2c, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xdb0a, .value=0xe8}, {.addr=0xdb0b, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xdb0c, .a=0x19, .x=0x57, .y=0x97, .sp=0x2c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xdb0a, .value=0xe8}, {.addr=0xdb0b, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xdb0a, .value=0xe8, .type=IO_READ},
        {.addr=0xdb0b, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0250) {
    const struct CPU_State initial_cpu = {.pc=0x48a1, .a=0x99, .x=0x52, .y=0xbb, .sp=0xea, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x48a1, .value=0xe8}, {.addr=0x48a2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x48a3, .a=0xe0, .x=0x52, .y=0xbb, .sp=0xea, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x48a1, .value=0xe8}, {.addr=0x48a2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x48a1, .value=0xe8, .type=IO_READ},
        {.addr=0x48a2, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0251) {
    const struct CPU_State initial_cpu = {.pc=0x8276, .a=0xf4, .x=0x48, .y=0xea, .sp=0xd2, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x8276, .value=0xe8}, {.addr=0x8277, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x8278, .a=0xff, .x=0x48, .y=0xea, .sp=0xd2, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8276, .value=0xe8}, {.addr=0x8277, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x8276, .value=0xe8, .type=IO_READ},
        {.addr=0x8277, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0252) {
    const struct CPU_State initial_cpu = {.pc=0xc8e2, .a=0x12, .x=0x0d, .y=0x9f, .sp=0x98, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xc8e2, .value=0xe8}, {.addr=0xc8e3, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xc8e4, .a=0x36, .x=0x0d, .y=0x9f, .sp=0x98, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc8e2, .value=0xe8}, {.addr=0xc8e3, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xc8e2, .value=0xe8, .type=IO_READ},
        {.addr=0xc8e3, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0253) {
    const struct CPU_State initial_cpu = {.pc=0xe234, .a=0x35, .x=0xf1, .y=0xa2, .sp=0xbb, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xe234, .value=0xe8}, {.addr=0xe235, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xe236, .a=0xa3, .x=0xf1, .y=0xa2, .sp=0xbb, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xe234, .value=0xe8}, {.addr=0xe235, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xe234, .value=0xe8, .type=IO_READ},
        {.addr=0xe235, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0254) {
    const struct CPU_State initial_cpu = {.pc=0x1860, .a=0xfd, .x=0x3b, .y=0xcb, .sp=0xff, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x1860, .value=0xe8}, {.addr=0x1861, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x1862, .a=0xc2, .x=0x3b, .y=0xcb, .sp=0xff, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x1860, .value=0xe8}, {.addr=0x1861, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x1860, .value=0xe8, .type=IO_READ},
        {.addr=0x1861, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0255) {
    const struct CPU_State initial_cpu = {.pc=0x7fe0, .a=0x49, .x=0xf6, .y=0xff, .sp=0x14, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x7fe0, .value=0xe8}, {.addr=0x7fe1, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x7fe2, .a=0xc3, .x=0xf6, .y=0xff, .sp=0x14, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x7fe0, .value=0xe8}, {.addr=0x7fe1, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x7fe0, .value=0xe8, .type=IO_READ},
        {.addr=0x7fe1, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0256) {
    const struct CPU_State initial_cpu = {.pc=0xf743, .a=0x08, .x=0xb8, .y=0x5a, .sp=0x3d, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xf743, .value=0xe8}, {.addr=0xf744, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xf745, .a=0xd1, .x=0xb8, .y=0x5a, .sp=0x3d, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xf743, .value=0xe8}, {.addr=0xf744, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xf743, .value=0xe8, .type=IO_READ},
        {.addr=0xf744, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0257) {
    const struct CPU_State initial_cpu = {.pc=0x0084, .a=0xd3, .x=0xae, .y=0x75, .sp=0x34, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0xe8}, {.addr=0x0085, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x0086, .a=0x96, .x=0xae, .y=0x75, .sp=0x34, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0xe8}, {.addr=0x0085, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x0084, .value=0xe8, .type=IO_READ},
        {.addr=0x0085, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0258) {
    const struct CPU_State initial_cpu = {.pc=0x79f2, .a=0x88, .x=0xc2, .y=0x29, .sp=0x11, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x79f2, .value=0xe8}, {.addr=0x79f3, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x79f4, .a=0x33, .x=0xc2, .y=0x29, .sp=0x11, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x79f2, .value=0xe8}, {.addr=0x79f3, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x79f2, .value=0xe8, .type=IO_READ},
        {.addr=0x79f3, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0259) {
    const struct CPU_State initial_cpu = {.pc=0x4731, .a=0x8d, .x=0x1c, .y=0x1c, .sp=0x44, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x4731, .value=0xe8}, {.addr=0x4732, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4733, .a=0xbd, .x=0x1c, .y=0x1c, .sp=0x44, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4731, .value=0xe8}, {.addr=0x4732, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4731, .value=0xe8, .type=IO_READ},
        {.addr=0x4732, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_025A) {
    const struct CPU_State initial_cpu = {.pc=0x4e19, .a=0x7f, .x=0x8c, .y=0x52, .sp=0x54, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x4e19, .value=0xe8}, {.addr=0x4e1a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4e1b, .a=0xbc, .x=0x8c, .y=0x52, .sp=0x54, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x4e19, .value=0xe8}, {.addr=0x4e1a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4e19, .value=0xe8, .type=IO_READ},
        {.addr=0x4e1a, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_025B) {
    const struct CPU_State initial_cpu = {.pc=0xdae5, .a=0xd4, .x=0x98, .y=0x67, .sp=0xc1, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xdae5, .value=0xe8}, {.addr=0xdae6, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xdae7, .a=0x64, .x=0x98, .y=0x67, .sp=0xc1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xdae5, .value=0xe8}, {.addr=0xdae6, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xdae5, .value=0xe8, .type=IO_READ},
        {.addr=0xdae6, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_025C) {
    const struct CPU_State initial_cpu = {.pc=0x0423, .a=0x9b, .x=0xb3, .y=0x8b, .sp=0xc5, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0423, .value=0xe8}, {.addr=0x0424, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x0425, .a=0xd4, .x=0xb3, .y=0x8b, .sp=0xc5, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0423, .value=0xe8}, {.addr=0x0424, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x0423, .value=0xe8, .type=IO_READ},
        {.addr=0x0424, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_025D) {
    const struct CPU_State initial_cpu = {.pc=0xbc2f, .a=0x3a, .x=0x71, .y=0xe4, .sp=0xe7, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xbc2f, .value=0xe8}, {.addr=0xbc30, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xbc31, .a=0x27, .x=0x71, .y=0xe4, .sp=0xe7, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xbc2f, .value=0xe8}, {.addr=0xbc30, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xbc2f, .value=0xe8, .type=IO_READ},
        {.addr=0xbc30, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_025E) {
    const struct CPU_State initial_cpu = {.pc=0xa654, .a=0xbf, .x=0xdd, .y=0xe2, .sp=0xbe, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xa654, .value=0xe8}, {.addr=0xa655, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xa656, .a=0x9e, .x=0xdd, .y=0xe2, .sp=0xbe, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xa654, .value=0xe8}, {.addr=0xa655, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xa654, .value=0xe8, .type=IO_READ},
        {.addr=0xa655, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_025F) {
    const struct CPU_State initial_cpu = {.pc=0x3e02, .a=0x20, .x=0xb7, .y=0xfd, .sp=0x71, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x3e02, .value=0xe8}, {.addr=0x3e03, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x3e04, .a=0xe5, .x=0xb7, .y=0xfd, .sp=0x71, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x3e02, .value=0xe8}, {.addr=0x3e03, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x3e02, .value=0xe8, .type=IO_READ},
        {.addr=0x3e03, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0260) {
    const struct CPU_State initial_cpu = {.pc=0x3d69, .a=0xc4, .x=0xc1, .y=0x44, .sp=0x8f, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x3d69, .value=0xe8}, {.addr=0x3d6a, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x3d6b, .a=0x14, .x=0xc1, .y=0x44, .sp=0x8f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x3d69, .value=0xe8}, {.addr=0x3d6a, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x3d69, .value=0xe8, .type=IO_READ},
        {.addr=0x3d6a, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0261) {
    const struct CPU_State initial_cpu = {.pc=0xbff3, .a=0x7c, .x=0xe3, .y=0x11, .sp=0x57, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xbff3, .value=0xe8}, {.addr=0xbff4, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xbff5, .a=0xb4, .x=0xe3, .y=0x11, .sp=0x57, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xbff3, .value=0xe8}, {.addr=0xbff4, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xbff3, .value=0xe8, .type=IO_READ},
        {.addr=0xbff4, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0262) {
    const struct CPU_State initial_cpu = {.pc=0x522a, .a=0xfe, .x=0xf4, .y=0x45, .sp=0xfe, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x522a, .value=0xe8}, {.addr=0x522b, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x522c, .a=0x90, .x=0xf4, .y=0x45, .sp=0xfe, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x522a, .value=0xe8}, {.addr=0x522b, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x522a, .value=0xe8, .type=IO_READ},
        {.addr=0x522b, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0263) {
    const struct CPU_State initial_cpu = {.pc=0xfb26, .a=0x40, .x=0x85, .y=0xc3, .sp=0x32, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xfb26, .value=0xe8}, {.addr=0xfb27, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xfb28, .a=0x93, .x=0x85, .y=0xc3, .sp=0x32, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xfb26, .value=0xe8}, {.addr=0xfb27, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xfb26, .value=0xe8, .type=IO_READ},
        {.addr=0xfb27, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0264) {
    const struct CPU_State initial_cpu = {.pc=0x6a3b, .a=0xc5, .x=0xa6, .y=0x8d, .sp=0x5a, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x6a3b, .value=0xe8}, {.addr=0x6a3c, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x6a3d, .a=0x01, .x=0xa6, .y=0x8d, .sp=0x5a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x6a3b, .value=0xe8}, {.addr=0x6a3c, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x6a3b, .value=0xe8, .type=IO_READ},
        {.addr=0x6a3c, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0265) {
    const struct CPU_State initial_cpu = {.pc=0xf929, .a=0x01, .x=0x7a, .y=0xa1, .sp=0x6b, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xf929, .value=0xe8}, {.addr=0xf92a, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xf92b, .a=0x01, .x=0x7a, .y=0xa1, .sp=0x6b, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xf929, .value=0xe8}, {.addr=0xf92a, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xf929, .value=0xe8, .type=IO_READ},
        {.addr=0xf92a, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0266) {
    const struct CPU_State initial_cpu = {.pc=0xb73a, .a=0x1b, .x=0xec, .y=0x16, .sp=0x4e, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xb73a, .value=0xe8}, {.addr=0xb73b, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xb73c, .a=0xc9, .x=0xec, .y=0x16, .sp=0x4e, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xb73a, .value=0xe8}, {.addr=0xb73b, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xb73a, .value=0xe8, .type=IO_READ},
        {.addr=0xb73b, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0267) {
    const struct CPU_State initial_cpu = {.pc=0x8731, .a=0xc7, .x=0x51, .y=0x48, .sp=0xf5, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x8731, .value=0xe8}, {.addr=0x8732, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x8733, .a=0x97, .x=0x51, .y=0x48, .sp=0xf5, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x8731, .value=0xe8}, {.addr=0x8732, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x8731, .value=0xe8, .type=IO_READ},
        {.addr=0x8732, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0268) {
    const struct CPU_State initial_cpu = {.pc=0x427f, .a=0x2e, .x=0x28, .y=0x26, .sp=0x18, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x427f, .value=0xe8}, {.addr=0x4280, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x4281, .a=0x5f, .x=0x28, .y=0x26, .sp=0x18, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x427f, .value=0xe8}, {.addr=0x4280, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x427f, .value=0xe8, .type=IO_READ},
        {.addr=0x4280, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0269) {
    const struct CPU_State initial_cpu = {.pc=0xd862, .a=0xe2, .x=0x47, .y=0x85, .sp=0x42, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xd862, .value=0xe8}, {.addr=0xd863, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xd864, .a=0x59, .x=0x47, .y=0x85, .sp=0x42, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xd862, .value=0xe8}, {.addr=0xd863, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xd862, .value=0xe8, .type=IO_READ},
        {.addr=0xd863, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_026A) {
    const struct CPU_State initial_cpu = {.pc=0xab34, .a=0x29, .x=0x9e, .y=0xde, .sp=0x9a, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xab34, .value=0xe8}, {.addr=0xab35, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xab36, .a=0x75, .x=0x9e, .y=0xde, .sp=0x9a, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xab34, .value=0xe8}, {.addr=0xab35, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xab34, .value=0xe8, .type=IO_READ},
        {.addr=0xab35, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_026B) {
    const struct CPU_State initial_cpu = {.pc=0x5e2e, .a=0x3c, .x=0x11, .y=0xc1, .sp=0x8e, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x5e2e, .value=0xe8}, {.addr=0x5e2f, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x5e30, .a=0xb0, .x=0x11, .y=0xc1, .sp=0x8e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x5e2e, .value=0xe8}, {.addr=0x5e2f, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x5e2e, .value=0xe8, .type=IO_READ},
        {.addr=0x5e2f, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_026C) {
    const struct CPU_State initial_cpu = {.pc=0xdb02, .a=0x8a, .x=0xa0, .y=0x90, .sp=0x3a, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xdb02, .value=0xe8}, {.addr=0xdb03, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xdb04, .a=0x20, .x=0xa0, .y=0x90, .sp=0x3a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xdb02, .value=0xe8}, {.addr=0xdb03, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xdb02, .value=0xe8, .type=IO_READ},
        {.addr=0xdb03, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_026D) {
    const struct CPU_State initial_cpu = {.pc=0xf95c, .a=0x02, .x=0xc7, .y=0xcb, .sp=0x79, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xf95c, .value=0xe8}, {.addr=0xf95d, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xf95e, .a=0xd2, .x=0xc7, .y=0xcb, .sp=0x79, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xf95c, .value=0xe8}, {.addr=0xf95d, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xf95c, .value=0xe8, .type=IO_READ},
        {.addr=0xf95d, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_026E) {
    const struct CPU_State initial_cpu = {.pc=0x34e3, .a=0x77, .x=0x21, .y=0xf9, .sp=0xf4, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x34e3, .value=0xe8}, {.addr=0x34e4, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x34e5, .a=0xd3, .x=0x21, .y=0xf9, .sp=0xf4, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x34e3, .value=0xe8}, {.addr=0x34e4, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x34e3, .value=0xe8, .type=IO_READ},
        {.addr=0x34e4, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_026F) {
    const struct CPU_State initial_cpu = {.pc=0x3124, .a=0x37, .x=0x2e, .y=0xa3, .sp=0xe3, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x3124, .value=0xe8}, {.addr=0x3125, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x3126, .a=0x6c, .x=0x2e, .y=0xa3, .sp=0xe3, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x3124, .value=0xe8}, {.addr=0x3125, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x3124, .value=0xe8, .type=IO_READ},
        {.addr=0x3125, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0270) {
    const struct CPU_State initial_cpu = {.pc=0x87bb, .a=0x01, .x=0x1a, .y=0xfc, .sp=0xb9, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x87bb, .value=0xe8}, {.addr=0x87bc, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x87bd, .a=0xe4, .x=0x1a, .y=0xfc, .sp=0xb9, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x87bb, .value=0xe8}, {.addr=0x87bc, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x87bb, .value=0xe8, .type=IO_READ},
        {.addr=0x87bc, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0271) {
    const struct CPU_State initial_cpu = {.pc=0x3168, .a=0x1f, .x=0x89, .y=0x93, .sp=0x6b, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x3168, .value=0xe8}, {.addr=0x3169, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x316a, .a=0x0a, .x=0x89, .y=0x93, .sp=0x6b, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3168, .value=0xe8}, {.addr=0x3169, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x3168, .value=0xe8, .type=IO_READ},
        {.addr=0x3169, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0272) {
    const struct CPU_State initial_cpu = {.pc=0x93d1, .a=0xed, .x=0x70, .y=0xf1, .sp=0xf2, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x93d1, .value=0xe8}, {.addr=0x93d2, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x93d3, .a=0x41, .x=0x70, .y=0xf1, .sp=0xf2, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x93d1, .value=0xe8}, {.addr=0x93d2, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x93d1, .value=0xe8, .type=IO_READ},
        {.addr=0x93d2, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0273) {
    const struct CPU_State initial_cpu = {.pc=0x897f, .a=0x51, .x=0x7b, .y=0x22, .sp=0xa6, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x897f, .value=0xe8}, {.addr=0x8980, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x8981, .a=0x8b, .x=0x7b, .y=0x22, .sp=0xa6, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x897f, .value=0xe8}, {.addr=0x8980, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x897f, .value=0xe8, .type=IO_READ},
        {.addr=0x8980, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0274) {
    const struct CPU_State initial_cpu = {.pc=0x9521, .a=0x41, .x=0x2c, .y=0xbb, .sp=0x17, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x9521, .value=0xe8}, {.addr=0x9522, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x9523, .a=0x77, .x=0x2c, .y=0xbb, .sp=0x17, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9521, .value=0xe8}, {.addr=0x9522, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x9521, .value=0xe8, .type=IO_READ},
        {.addr=0x9522, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0275) {
    const struct CPU_State initial_cpu = {.pc=0x2252, .a=0xf6, .x=0x93, .y=0x6c, .sp=0x43, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x2252, .value=0xe8}, {.addr=0x2253, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x2254, .a=0x91, .x=0x93, .y=0x6c, .sp=0x43, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x2252, .value=0xe8}, {.addr=0x2253, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x2252, .value=0xe8, .type=IO_READ},
        {.addr=0x2253, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0276) {
    const struct CPU_State initial_cpu = {.pc=0x8c2c, .a=0xc9, .x=0x21, .y=0xf0, .sp=0x89, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x8c2c, .value=0xe8}, {.addr=0x8c2d, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x8c2e, .a=0xb8, .x=0x21, .y=0xf0, .sp=0x89, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x8c2c, .value=0xe8}, {.addr=0x8c2d, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x8c2c, .value=0xe8, .type=IO_READ},
        {.addr=0x8c2d, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0277) {
    const struct CPU_State initial_cpu = {.pc=0xa42c, .a=0x0a, .x=0x6a, .y=0xbc, .sp=0xd1, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xa42c, .value=0xe8}, {.addr=0xa42d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa42e, .a=0x20, .x=0x6a, .y=0xbc, .sp=0xd1, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xa42c, .value=0xe8}, {.addr=0xa42d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa42c, .value=0xe8, .type=IO_READ},
        {.addr=0xa42d, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0278) {
    const struct CPU_State initial_cpu = {.pc=0x4a2a, .a=0xef, .x=0x66, .y=0x0b, .sp=0x98, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x4a2a, .value=0xe8}, {.addr=0x4a2b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4a2c, .a=0x80, .x=0x66, .y=0x0b, .sp=0x98, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x4a2a, .value=0xe8}, {.addr=0x4a2b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4a2a, .value=0xe8, .type=IO_READ},
        {.addr=0x4a2b, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0279) {
    const struct CPU_State initial_cpu = {.pc=0xe995, .a=0x7f, .x=0x04, .y=0xef, .sp=0x98, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xe995, .value=0xe8}, {.addr=0xe996, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xe997, .a=0xe4, .x=0x04, .y=0xef, .sp=0x98, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe995, .value=0xe8}, {.addr=0xe996, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xe995, .value=0xe8, .type=IO_READ},
        {.addr=0xe996, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_027A) {
    const struct CPU_State initial_cpu = {.pc=0xe476, .a=0xa8, .x=0x25, .y=0x7c, .sp=0x7c, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xe476, .value=0xe8}, {.addr=0xe477, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xe478, .a=0x89, .x=0x25, .y=0x7c, .sp=0x7c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xe476, .value=0xe8}, {.addr=0xe477, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xe476, .value=0xe8, .type=IO_READ},
        {.addr=0xe477, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_027B) {
    const struct CPU_State initial_cpu = {.pc=0x003a, .a=0xce, .x=0xc8, .y=0x9a, .sp=0x71, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0xe8}, {.addr=0x003b, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x003c, .a=0x7f, .x=0xc8, .y=0x9a, .sp=0x71, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0xe8}, {.addr=0x003b, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x003a, .value=0xe8, .type=IO_READ},
        {.addr=0x003b, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_027C) {
    const struct CPU_State initial_cpu = {.pc=0x7011, .a=0x46, .x=0x92, .y=0x14, .sp=0x57, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x7011, .value=0xe8}, {.addr=0x7012, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x7013, .a=0x77, .x=0x92, .y=0x14, .sp=0x57, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x7011, .value=0xe8}, {.addr=0x7012, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x7011, .value=0xe8, .type=IO_READ},
        {.addr=0x7012, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_027D) {
    const struct CPU_State initial_cpu = {.pc=0x8791, .a=0x00, .x=0x97, .y=0x03, .sp=0xa9, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x8791, .value=0xe8}, {.addr=0x8792, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x8793, .a=0x54, .x=0x97, .y=0x03, .sp=0xa9, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x8791, .value=0xe8}, {.addr=0x8792, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x8791, .value=0xe8, .type=IO_READ},
        {.addr=0x8792, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_027E) {
    const struct CPU_State initial_cpu = {.pc=0x22b1, .a=0xd2, .x=0xd4, .y=0x36, .sp=0x9d, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x22b1, .value=0xe8}, {.addr=0x22b2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x22b3, .a=0x20, .x=0xd4, .y=0x36, .sp=0x9d, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x22b1, .value=0xe8}, {.addr=0x22b2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x22b1, .value=0xe8, .type=IO_READ},
        {.addr=0x22b2, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_027F) {
    const struct CPU_State initial_cpu = {.pc=0x8c2f, .a=0x24, .x=0x34, .y=0x1a, .sp=0xa7, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x8c2f, .value=0xe8}, {.addr=0x8c30, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x8c31, .a=0x92, .x=0x34, .y=0x1a, .sp=0xa7, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x8c2f, .value=0xe8}, {.addr=0x8c30, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x8c2f, .value=0xe8, .type=IO_READ},
        {.addr=0x8c30, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0280) {
    const struct CPU_State initial_cpu = {.pc=0x1c5b, .a=0x65, .x=0xae, .y=0xe8, .sp=0x5d, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x1c5b, .value=0xe8}, {.addr=0x1c5c, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x1c5d, .a=0xe1, .x=0xae, .y=0xe8, .sp=0x5d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x1c5b, .value=0xe8}, {.addr=0x1c5c, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x1c5b, .value=0xe8, .type=IO_READ},
        {.addr=0x1c5c, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0281) {
    const struct CPU_State initial_cpu = {.pc=0xaac2, .a=0x6d, .x=0x3a, .y=0x70, .sp=0x47, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xaac2, .value=0xe8}, {.addr=0xaac3, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xaac4, .a=0x61, .x=0x3a, .y=0x70, .sp=0x47, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xaac2, .value=0xe8}, {.addr=0xaac3, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xaac2, .value=0xe8, .type=IO_READ},
        {.addr=0xaac3, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0282) {
    const struct CPU_State initial_cpu = {.pc=0x4858, .a=0x55, .x=0xc1, .y=0xa6, .sp=0xe7, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x4858, .value=0xe8}, {.addr=0x4859, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x485a, .a=0x92, .x=0xc1, .y=0xa6, .sp=0xe7, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x4858, .value=0xe8}, {.addr=0x4859, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x4858, .value=0xe8, .type=IO_READ},
        {.addr=0x4859, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0283) {
    const struct CPU_State initial_cpu = {.pc=0xc22a, .a=0xb5, .x=0xaa, .y=0xbd, .sp=0xea, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xc22a, .value=0xe8}, {.addr=0xc22b, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xc22c, .a=0x25, .x=0xaa, .y=0xbd, .sp=0xea, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xc22a, .value=0xe8}, {.addr=0xc22b, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xc22a, .value=0xe8, .type=IO_READ},
        {.addr=0xc22b, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0284) {
    const struct CPU_State initial_cpu = {.pc=0x5668, .a=0x1d, .x=0x83, .y=0xe0, .sp=0x7f, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x5668, .value=0xe8}, {.addr=0x5669, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x566a, .a=0xe0, .x=0x83, .y=0xe0, .sp=0x7f, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x5668, .value=0xe8}, {.addr=0x5669, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5668, .value=0xe8, .type=IO_READ},
        {.addr=0x5669, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0285) {
    const struct CPU_State initial_cpu = {.pc=0x0b10, .a=0x24, .x=0xde, .y=0xdb, .sp=0x70, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0b10, .value=0xe8}, {.addr=0x0b11, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0b12, .a=0xee, .x=0xde, .y=0xdb, .sp=0x70, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0b10, .value=0xe8}, {.addr=0x0b11, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0b10, .value=0xe8, .type=IO_READ},
        {.addr=0x0b11, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0286) {
    const struct CPU_State initial_cpu = {.pc=0x561f, .a=0xdf, .x=0xbf, .y=0xbe, .sp=0x0f, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x561f, .value=0xe8}, {.addr=0x5620, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x5621, .a=0xb1, .x=0xbf, .y=0xbe, .sp=0x0f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x561f, .value=0xe8}, {.addr=0x5620, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x561f, .value=0xe8, .type=IO_READ},
        {.addr=0x5620, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0287) {
    const struct CPU_State initial_cpu = {.pc=0x993e, .a=0x13, .x=0x87, .y=0x3d, .sp=0x91, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x993e, .value=0xe8}, {.addr=0x993f, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x9940, .a=0x45, .x=0x87, .y=0x3d, .sp=0x91, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x993e, .value=0xe8}, {.addr=0x993f, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x993e, .value=0xe8, .type=IO_READ},
        {.addr=0x993f, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0288) {
    const struct CPU_State initial_cpu = {.pc=0xdbf1, .a=0x68, .x=0xba, .y=0x1a, .sp=0x9e, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xdbf1, .value=0xe8}, {.addr=0xdbf2, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xdbf3, .a=0xc5, .x=0xba, .y=0x1a, .sp=0x9e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xdbf1, .value=0xe8}, {.addr=0xdbf2, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xdbf1, .value=0xe8, .type=IO_READ},
        {.addr=0xdbf2, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0289) {
    const struct CPU_State initial_cpu = {.pc=0x9ce6, .a=0x37, .x=0x67, .y=0x53, .sp=0xd5, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x9ce6, .value=0xe8}, {.addr=0x9ce7, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x9ce8, .a=0x0c, .x=0x67, .y=0x53, .sp=0xd5, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x9ce6, .value=0xe8}, {.addr=0x9ce7, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x9ce6, .value=0xe8, .type=IO_READ},
        {.addr=0x9ce7, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_028A) {
    const struct CPU_State initial_cpu = {.pc=0x0ad4, .a=0xdf, .x=0xa0, .y=0xa9, .sp=0xcf, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0ad4, .value=0xe8}, {.addr=0x0ad5, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x0ad6, .a=0x8a, .x=0xa0, .y=0xa9, .sp=0xcf, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0ad4, .value=0xe8}, {.addr=0x0ad5, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x0ad4, .value=0xe8, .type=IO_READ},
        {.addr=0x0ad5, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_028B) {
    const struct CPU_State initial_cpu = {.pc=0x3ea7, .a=0x67, .x=0xe1, .y=0x63, .sp=0x04, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x3ea7, .value=0xe8}, {.addr=0x3ea8, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x3ea9, .a=0xa0, .x=0xe1, .y=0x63, .sp=0x04, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x3ea7, .value=0xe8}, {.addr=0x3ea8, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x3ea7, .value=0xe8, .type=IO_READ},
        {.addr=0x3ea8, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_028C) {
    const struct CPU_State initial_cpu = {.pc=0x0b65, .a=0xfa, .x=0xb0, .y=0xaa, .sp=0x23, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0b65, .value=0xe8}, {.addr=0x0b66, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0b67, .a=0xdd, .x=0xb0, .y=0xaa, .sp=0x23, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0b65, .value=0xe8}, {.addr=0x0b66, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0b65, .value=0xe8, .type=IO_READ},
        {.addr=0x0b66, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_028D) {
    const struct CPU_State initial_cpu = {.pc=0x93fc, .a=0x5d, .x=0xc3, .y=0x1b, .sp=0xd6, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x93fc, .value=0xe8}, {.addr=0x93fd, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x93fe, .a=0x13, .x=0xc3, .y=0x1b, .sp=0xd6, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x93fc, .value=0xe8}, {.addr=0x93fd, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x93fc, .value=0xe8, .type=IO_READ},
        {.addr=0x93fd, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_028E) {
    const struct CPU_State initial_cpu = {.pc=0x8819, .a=0x5f, .x=0x31, .y=0x1a, .sp=0x30, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x8819, .value=0xe8}, {.addr=0x881a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x881b, .a=0x1d, .x=0x31, .y=0x1a, .sp=0x30, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x8819, .value=0xe8}, {.addr=0x881a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8819, .value=0xe8, .type=IO_READ},
        {.addr=0x881a, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_028F) {
    const struct CPU_State initial_cpu = {.pc=0x0a80, .a=0x56, .x=0x9a, .y=0xa2, .sp=0x78, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0a80, .value=0xe8}, {.addr=0x0a81, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x0a82, .a=0x76, .x=0x9a, .y=0xa2, .sp=0x78, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0a80, .value=0xe8}, {.addr=0x0a81, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x0a80, .value=0xe8, .type=IO_READ},
        {.addr=0x0a81, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0290) {
    const struct CPU_State initial_cpu = {.pc=0xff25, .a=0x26, .x=0x23, .y=0x0f, .sp=0x19, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xff25, .value=0xe8}, {.addr=0xff26, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xff27, .a=0x05, .x=0x23, .y=0x0f, .sp=0x19, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xff25, .value=0xe8}, {.addr=0xff26, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xff25, .value=0xe8, .type=IO_READ},
        {.addr=0xff26, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0291) {
    const struct CPU_State initial_cpu = {.pc=0x2e9a, .a=0xd5, .x=0x3a, .y=0x12, .sp=0x11, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x2e9a, .value=0xe8}, {.addr=0x2e9b, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x2e9c, .a=0xd2, .x=0x3a, .y=0x12, .sp=0x11, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x2e9a, .value=0xe8}, {.addr=0x2e9b, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x2e9a, .value=0xe8, .type=IO_READ},
        {.addr=0x2e9b, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0292) {
    const struct CPU_State initial_cpu = {.pc=0xa66f, .a=0x91, .x=0x31, .y=0x27, .sp=0x86, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xa66f, .value=0xe8}, {.addr=0xa670, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xa671, .a=0xd3, .x=0x31, .y=0x27, .sp=0x86, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xa66f, .value=0xe8}, {.addr=0xa670, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xa66f, .value=0xe8, .type=IO_READ},
        {.addr=0xa670, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0293) {
    const struct CPU_State initial_cpu = {.pc=0xf415, .a=0x2d, .x=0xe7, .y=0xfa, .sp=0x3f, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xf415, .value=0xe8}, {.addr=0xf416, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xf417, .a=0xab, .x=0xe7, .y=0xfa, .sp=0x3f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xf415, .value=0xe8}, {.addr=0xf416, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xf415, .value=0xe8, .type=IO_READ},
        {.addr=0xf416, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0294) {
    const struct CPU_State initial_cpu = {.pc=0xd81f, .a=0xc3, .x=0x31, .y=0x55, .sp=0xce, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xd81f, .value=0xe8}, {.addr=0xd820, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xd821, .a=0x22, .x=0x31, .y=0x55, .sp=0xce, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xd81f, .value=0xe8}, {.addr=0xd820, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xd81f, .value=0xe8, .type=IO_READ},
        {.addr=0xd820, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0295) {
    const struct CPU_State initial_cpu = {.pc=0xa3af, .a=0x0c, .x=0x35, .y=0x71, .sp=0xc1, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xa3af, .value=0xe8}, {.addr=0xa3b0, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xa3b1, .a=0xe3, .x=0x35, .y=0x71, .sp=0xc1, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xa3af, .value=0xe8}, {.addr=0xa3b0, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xa3af, .value=0xe8, .type=IO_READ},
        {.addr=0xa3b0, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0296) {
    const struct CPU_State initial_cpu = {.pc=0x12a3, .a=0x24, .x=0xdd, .y=0x9b, .sp=0x42, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x12a3, .value=0xe8}, {.addr=0x12a4, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x12a5, .a=0x70, .x=0xdd, .y=0x9b, .sp=0x42, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x12a3, .value=0xe8}, {.addr=0x12a4, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x12a3, .value=0xe8, .type=IO_READ},
        {.addr=0x12a4, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0297) {
    const struct CPU_State initial_cpu = {.pc=0xd959, .a=0xa5, .x=0xfe, .y=0xbd, .sp=0xb2, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xd959, .value=0xe8}, {.addr=0xd95a, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xd95b, .a=0x08, .x=0xfe, .y=0xbd, .sp=0xb2, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xd959, .value=0xe8}, {.addr=0xd95a, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xd959, .value=0xe8, .type=IO_READ},
        {.addr=0xd95a, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0298) {
    const struct CPU_State initial_cpu = {.pc=0xc231, .a=0x82, .x=0xc1, .y=0xd3, .sp=0xc3, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xc231, .value=0xe8}, {.addr=0xc232, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xc233, .a=0x81, .x=0xc1, .y=0xd3, .sp=0xc3, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc231, .value=0xe8}, {.addr=0xc232, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xc231, .value=0xe8, .type=IO_READ},
        {.addr=0xc232, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0299) {
    const struct CPU_State initial_cpu = {.pc=0xa148, .a=0xc9, .x=0x6f, .y=0xe9, .sp=0xbb, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xa148, .value=0xe8}, {.addr=0xa149, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xa14a, .a=0x67, .x=0x6f, .y=0xe9, .sp=0xbb, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xa148, .value=0xe8}, {.addr=0xa149, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xa148, .value=0xe8, .type=IO_READ},
        {.addr=0xa149, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_029A) {
    const struct CPU_State initial_cpu = {.pc=0x6547, .a=0xd9, .x=0x52, .y=0xcd, .sp=0xb8, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x6547, .value=0xe8}, {.addr=0x6548, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x6549, .a=0x13, .x=0x52, .y=0xcd, .sp=0xb8, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x6547, .value=0xe8}, {.addr=0x6548, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x6547, .value=0xe8, .type=IO_READ},
        {.addr=0x6548, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_029B) {
    const struct CPU_State initial_cpu = {.pc=0x5b7f, .a=0xc7, .x=0x47, .y=0xab, .sp=0xfd, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x5b7f, .value=0xe8}, {.addr=0x5b80, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x5b81, .a=0x2b, .x=0x47, .y=0xab, .sp=0xfd, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x5b7f, .value=0xe8}, {.addr=0x5b80, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x5b7f, .value=0xe8, .type=IO_READ},
        {.addr=0x5b80, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_029C) {
    const struct CPU_State initial_cpu = {.pc=0x4b6f, .a=0xcd, .x=0x90, .y=0xd0, .sp=0x64, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x4b6f, .value=0xe8}, {.addr=0x4b70, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x4b71, .a=0x92, .x=0x90, .y=0xd0, .sp=0x64, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x4b6f, .value=0xe8}, {.addr=0x4b70, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x4b6f, .value=0xe8, .type=IO_READ},
        {.addr=0x4b70, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_029D) {
    const struct CPU_State initial_cpu = {.pc=0x0f23, .a=0x7e, .x=0x68, .y=0xeb, .sp=0xee, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0f23, .value=0xe8}, {.addr=0x0f24, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x0f25, .a=0x4f, .x=0x68, .y=0xeb, .sp=0xee, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0f23, .value=0xe8}, {.addr=0x0f24, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x0f23, .value=0xe8, .type=IO_READ},
        {.addr=0x0f24, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_029E) {
    const struct CPU_State initial_cpu = {.pc=0x16be, .a=0x7b, .x=0x22, .y=0xcd, .sp=0xe3, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x16be, .value=0xe8}, {.addr=0x16bf, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x16c0, .a=0x54, .x=0x22, .y=0xcd, .sp=0xe3, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x16be, .value=0xe8}, {.addr=0x16bf, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x16be, .value=0xe8, .type=IO_READ},
        {.addr=0x16bf, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_029F) {
    const struct CPU_State initial_cpu = {.pc=0x34cf, .a=0xc5, .x=0x40, .y=0xfd, .sp=0xc2, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x34cf, .value=0xe8}, {.addr=0x34d0, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x34d1, .a=0xa2, .x=0x40, .y=0xfd, .sp=0xc2, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x34cf, .value=0xe8}, {.addr=0x34d0, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x34cf, .value=0xe8, .type=IO_READ},
        {.addr=0x34d0, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x19c9, .a=0x17, .x=0x41, .y=0xd3, .sp=0xc6, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x19c9, .value=0xe8}, {.addr=0x19ca, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x19cb, .a=0x51, .x=0x41, .y=0xd3, .sp=0xc6, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x19c9, .value=0xe8}, {.addr=0x19ca, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x19c9, .value=0xe8, .type=IO_READ},
        {.addr=0x19ca, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x4a7e, .a=0x28, .x=0xc9, .y=0xe6, .sp=0x26, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x4a7e, .value=0xe8}, {.addr=0x4a7f, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x4a80, .a=0xd3, .x=0xc9, .y=0xe6, .sp=0x26, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x4a7e, .value=0xe8}, {.addr=0x4a7f, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x4a7e, .value=0xe8, .type=IO_READ},
        {.addr=0x4a7f, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x4d5c, .a=0xa3, .x=0xb1, .y=0x2f, .sp=0x0a, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x4d5c, .value=0xe8}, {.addr=0x4d5d, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x4d5e, .a=0xd3, .x=0xb1, .y=0x2f, .sp=0x0a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x4d5c, .value=0xe8}, {.addr=0x4d5d, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x4d5c, .value=0xe8, .type=IO_READ},
        {.addr=0x4d5d, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x532a, .a=0x54, .x=0x69, .y=0xea, .sp=0xa6, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x532a, .value=0xe8}, {.addr=0x532b, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x532c, .a=0xf4, .x=0x69, .y=0xea, .sp=0xa6, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x532a, .value=0xe8}, {.addr=0x532b, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x532a, .value=0xe8, .type=IO_READ},
        {.addr=0x532b, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x363e, .a=0xcd, .x=0xe4, .y=0x07, .sp=0x2d, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x363e, .value=0xe8}, {.addr=0x363f, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x3640, .a=0x45, .x=0xe4, .y=0x07, .sp=0x2d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x363e, .value=0xe8}, {.addr=0x363f, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x363e, .value=0xe8, .type=IO_READ},
        {.addr=0x363f, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xe1e9, .a=0x0f, .x=0x86, .y=0xd6, .sp=0x65, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xe1e9, .value=0xe8}, {.addr=0xe1ea, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xe1eb, .a=0xc2, .x=0x86, .y=0xd6, .sp=0x65, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xe1e9, .value=0xe8}, {.addr=0xe1ea, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xe1e9, .value=0xe8, .type=IO_READ},
        {.addr=0xe1ea, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xceb7, .a=0x26, .x=0xbe, .y=0x00, .sp=0xef, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xceb7, .value=0xe8}, {.addr=0xceb8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xceb9, .a=0x86, .x=0xbe, .y=0x00, .sp=0xef, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xceb7, .value=0xe8}, {.addr=0xceb8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xceb7, .value=0xe8, .type=IO_READ},
        {.addr=0xceb8, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x32ba, .a=0xc7, .x=0xbe, .y=0xd6, .sp=0xc0, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x32ba, .value=0xe8}, {.addr=0x32bb, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x32bc, .a=0x29, .x=0xbe, .y=0xd6, .sp=0xc0, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x32ba, .value=0xe8}, {.addr=0x32bb, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x32ba, .value=0xe8, .type=IO_READ},
        {.addr=0x32bb, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xaa68, .a=0x2d, .x=0xe7, .y=0x3f, .sp=0xb2, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xaa68, .value=0xe8}, {.addr=0xaa69, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xaa6a, .a=0xd7, .x=0xe7, .y=0x3f, .sp=0xb2, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xaa68, .value=0xe8}, {.addr=0xaa69, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xaa68, .value=0xe8, .type=IO_READ},
        {.addr=0xaa69, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x6514, .a=0xc9, .x=0x59, .y=0x2d, .sp=0xba, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x6514, .value=0xe8}, {.addr=0x6515, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x6516, .a=0xc7, .x=0x59, .y=0x2d, .sp=0xba, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x6514, .value=0xe8}, {.addr=0x6515, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x6514, .value=0xe8, .type=IO_READ},
        {.addr=0x6515, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xdb22, .a=0x5a, .x=0x04, .y=0x6e, .sp=0x8a, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xdb22, .value=0xe8}, {.addr=0xdb23, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xdb24, .a=0x51, .x=0x04, .y=0x6e, .sp=0x8a, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xdb22, .value=0xe8}, {.addr=0xdb23, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xdb22, .value=0xe8, .type=IO_READ},
        {.addr=0xdb23, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x2261, .a=0x7f, .x=0x4b, .y=0x96, .sp=0x9f, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x2261, .value=0xe8}, {.addr=0x2262, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x2263, .a=0xe8, .x=0x4b, .y=0x96, .sp=0x9f, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x2261, .value=0xe8}, {.addr=0x2262, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x2261, .value=0xe8, .type=IO_READ},
        {.addr=0x2262, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xa103, .a=0x91, .x=0xc0, .y=0xe5, .sp=0xb3, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xa103, .value=0xe8}, {.addr=0xa104, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xa105, .a=0x28, .x=0xc0, .y=0xe5, .sp=0xb3, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xa103, .value=0xe8}, {.addr=0xa104, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xa103, .value=0xe8, .type=IO_READ},
        {.addr=0xa104, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x32a6, .a=0x68, .x=0x8c, .y=0xf3, .sp=0xdb, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x32a6, .value=0xe8}, {.addr=0x32a7, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x32a8, .a=0x11, .x=0x8c, .y=0xf3, .sp=0xdb, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x32a6, .value=0xe8}, {.addr=0x32a7, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x32a6, .value=0xe8, .type=IO_READ},
        {.addr=0x32a7, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x62c3, .a=0x7f, .x=0x3e, .y=0x3c, .sp=0xa0, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x62c3, .value=0xe8}, {.addr=0x62c4, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x62c5, .a=0x72, .x=0x3e, .y=0x3c, .sp=0xa0, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x62c3, .value=0xe8}, {.addr=0x62c4, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x62c3, .value=0xe8, .type=IO_READ},
        {.addr=0x62c4, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x8201, .a=0x4f, .x=0xa0, .y=0x0a, .sp=0xe0, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x8201, .value=0xe8}, {.addr=0x8202, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x8203, .a=0x2e, .x=0xa0, .y=0x0a, .sp=0xe0, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x8201, .value=0xe8}, {.addr=0x8202, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x8201, .value=0xe8, .type=IO_READ},
        {.addr=0x8202, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x40a5, .a=0x87, .x=0x7f, .y=0xf8, .sp=0x99, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x40a5, .value=0xe8}, {.addr=0x40a6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x40a7, .a=0x1d, .x=0x7f, .y=0xf8, .sp=0x99, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x40a5, .value=0xe8}, {.addr=0x40a6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x40a5, .value=0xe8, .type=IO_READ},
        {.addr=0x40a6, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xbd92, .a=0x98, .x=0xf6, .y=0xae, .sp=0x70, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xbd92, .value=0xe8}, {.addr=0xbd93, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xbd94, .a=0xa5, .x=0xf6, .y=0xae, .sp=0x70, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xbd92, .value=0xe8}, {.addr=0xbd93, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xbd92, .value=0xe8, .type=IO_READ},
        {.addr=0xbd93, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xf824, .a=0xdf, .x=0x31, .y=0x42, .sp=0x4c, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xf824, .value=0xe8}, {.addr=0xf825, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf826, .a=0x9f, .x=0x31, .y=0x42, .sp=0x4c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xf824, .value=0xe8}, {.addr=0xf825, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf824, .value=0xe8, .type=IO_READ},
        {.addr=0xf825, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x7c3d, .a=0x32, .x=0xf4, .y=0x52, .sp=0xf9, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x7c3d, .value=0xe8}, {.addr=0x7c3e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7c3f, .a=0x86, .x=0xf4, .y=0x52, .sp=0xf9, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x7c3d, .value=0xe8}, {.addr=0x7c3e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7c3d, .value=0xe8, .type=IO_READ},
        {.addr=0x7c3e, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x959e, .a=0x39, .x=0xd4, .y=0x16, .sp=0xd8, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x959e, .value=0xe8}, {.addr=0x959f, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x95a0, .a=0xec, .x=0xd4, .y=0x16, .sp=0xd8, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x959e, .value=0xe8}, {.addr=0x959f, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x959e, .value=0xe8, .type=IO_READ},
        {.addr=0x959f, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xa013, .a=0x02, .x=0xf6, .y=0x32, .sp=0xdb, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xa013, .value=0xe8}, {.addr=0xa014, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa015, .a=0x26, .x=0xf6, .y=0x32, .sp=0xdb, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xa013, .value=0xe8}, {.addr=0xa014, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa013, .value=0xe8, .type=IO_READ},
        {.addr=0xa014, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xb7b4, .a=0x83, .x=0x9f, .y=0xf2, .sp=0x7b, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xb7b4, .value=0xe8}, {.addr=0xb7b5, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xb7b6, .a=0xe5, .x=0x9f, .y=0xf2, .sp=0x7b, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xb7b4, .value=0xe8}, {.addr=0xb7b5, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xb7b4, .value=0xe8, .type=IO_READ},
        {.addr=0xb7b5, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x79da, .a=0xed, .x=0x2e, .y=0x7e, .sp=0x05, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x79da, .value=0xe8}, {.addr=0x79db, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x79dc, .a=0x76, .x=0x2e, .y=0x7e, .sp=0x05, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x79da, .value=0xe8}, {.addr=0x79db, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x79da, .value=0xe8, .type=IO_READ},
        {.addr=0x79db, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xe742, .a=0xd2, .x=0x7f, .y=0xf5, .sp=0xae, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xe742, .value=0xe8}, {.addr=0xe743, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xe744, .a=0x52, .x=0x7f, .y=0xf5, .sp=0xae, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xe742, .value=0xe8}, {.addr=0xe743, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xe742, .value=0xe8, .type=IO_READ},
        {.addr=0xe743, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xc98a, .a=0x3b, .x=0xad, .y=0xae, .sp=0xb3, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xc98a, .value=0xe8}, {.addr=0xc98b, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xc98c, .a=0x94, .x=0xad, .y=0xae, .sp=0xb3, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xc98a, .value=0xe8}, {.addr=0xc98b, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xc98a, .value=0xe8, .type=IO_READ},
        {.addr=0xc98b, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x9647, .a=0x67, .x=0xc5, .y=0x0b, .sp=0x29, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x9647, .value=0xe8}, {.addr=0x9648, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9649, .a=0xa0, .x=0xc5, .y=0x0b, .sp=0x29, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9647, .value=0xe8}, {.addr=0x9648, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9647, .value=0xe8, .type=IO_READ},
        {.addr=0x9648, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xe90f, .a=0xf9, .x=0xf8, .y=0x94, .sp=0xe6, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xe90f, .value=0xe8}, {.addr=0xe910, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xe911, .a=0xb6, .x=0xf8, .y=0x94, .sp=0xe6, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xe90f, .value=0xe8}, {.addr=0xe910, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xe90f, .value=0xe8, .type=IO_READ},
        {.addr=0xe910, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xbf17, .a=0x73, .x=0x02, .y=0x0e, .sp=0xb6, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xbf17, .value=0xe8}, {.addr=0xbf18, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xbf19, .a=0x7f, .x=0x02, .y=0x0e, .sp=0xb6, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xbf17, .value=0xe8}, {.addr=0xbf18, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xbf17, .value=0xe8, .type=IO_READ},
        {.addr=0xbf18, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x214b, .a=0xbb, .x=0xe3, .y=0x5e, .sp=0x11, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x214b, .value=0xe8}, {.addr=0x214c, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x214d, .a=0xa4, .x=0xe3, .y=0x5e, .sp=0x11, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x214b, .value=0xe8}, {.addr=0x214c, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x214b, .value=0xe8, .type=IO_READ},
        {.addr=0x214c, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xa5db, .a=0xa0, .x=0x4c, .y=0xa2, .sp=0xca, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xa5db, .value=0xe8}, {.addr=0xa5dc, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xa5dd, .a=0x7b, .x=0x4c, .y=0xa2, .sp=0xca, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xa5db, .value=0xe8}, {.addr=0xa5dc, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xa5db, .value=0xe8, .type=IO_READ},
        {.addr=0xa5dc, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xba83, .a=0xfb, .x=0x4a, .y=0x48, .sp=0x82, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xba83, .value=0xe8}, {.addr=0xba84, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xba85, .a=0x42, .x=0x4a, .y=0x48, .sp=0x82, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xba83, .value=0xe8}, {.addr=0xba84, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xba83, .value=0xe8, .type=IO_READ},
        {.addr=0xba84, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x5c80, .a=0x5c, .x=0x35, .y=0xd1, .sp=0xd6, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x5c80, .value=0xe8}, {.addr=0x5c81, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x5c82, .a=0x01, .x=0x35, .y=0xd1, .sp=0xd6, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x5c80, .value=0xe8}, {.addr=0x5c81, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x5c80, .value=0xe8, .type=IO_READ},
        {.addr=0x5c81, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xea4f, .a=0x47, .x=0xd0, .y=0x56, .sp=0x7f, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xea4f, .value=0xe8}, {.addr=0xea50, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xea51, .a=0xe0, .x=0xd0, .y=0x56, .sp=0x7f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xea4f, .value=0xe8}, {.addr=0xea50, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xea4f, .value=0xe8, .type=IO_READ},
        {.addr=0xea50, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xae3c, .a=0x80, .x=0x90, .y=0xda, .sp=0x7b, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xae3c, .value=0xe8}, {.addr=0xae3d, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xae3e, .a=0x6b, .x=0x90, .y=0xda, .sp=0x7b, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xae3c, .value=0xe8}, {.addr=0xae3d, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xae3c, .value=0xe8, .type=IO_READ},
        {.addr=0xae3d, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x3f7c, .a=0xe4, .x=0x7c, .y=0x29, .sp=0x32, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x3f7c, .value=0xe8}, {.addr=0x3f7d, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x3f7e, .a=0xd5, .x=0x7c, .y=0x29, .sp=0x32, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3f7c, .value=0xe8}, {.addr=0x3f7d, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x3f7c, .value=0xe8, .type=IO_READ},
        {.addr=0x3f7d, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x030c, .a=0x56, .x=0x87, .y=0xc3, .sp=0x7b, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x030c, .value=0xe8}, {.addr=0x030d, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x030e, .a=0x1f, .x=0x87, .y=0xc3, .sp=0x7b, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x030c, .value=0xe8}, {.addr=0x030d, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x030c, .value=0xe8, .type=IO_READ},
        {.addr=0x030d, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02C5) {
    const struct CPU_State initial_cpu = {.pc=0xb486, .a=0x1c, .x=0x6e, .y=0x51, .sp=0x65, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xb486, .value=0xe8}, {.addr=0xb487, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xb488, .a=0x3d, .x=0x6e, .y=0x51, .sp=0x65, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xb486, .value=0xe8}, {.addr=0xb487, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xb486, .value=0xe8, .type=IO_READ},
        {.addr=0xb487, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x808e, .a=0x86, .x=0xae, .y=0x2a, .sp=0xe4, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x808e, .value=0xe8}, {.addr=0x808f, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x8090, .a=0x6f, .x=0xae, .y=0x2a, .sp=0xe4, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x808e, .value=0xe8}, {.addr=0x808f, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x808e, .value=0xe8, .type=IO_READ},
        {.addr=0x808f, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x7759, .a=0xa0, .x=0x8d, .y=0xc2, .sp=0xe8, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x7759, .value=0xe8}, {.addr=0x775a, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x775b, .a=0x18, .x=0x8d, .y=0xc2, .sp=0xe8, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x7759, .value=0xe8}, {.addr=0x775a, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x7759, .value=0xe8, .type=IO_READ},
        {.addr=0x775a, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xa91e, .a=0xb4, .x=0x6e, .y=0xf0, .sp=0xae, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xa91e, .value=0xe8}, {.addr=0xa91f, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xa920, .a=0xf0, .x=0x6e, .y=0xf0, .sp=0xae, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xa91e, .value=0xe8}, {.addr=0xa91f, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xa91e, .value=0xe8, .type=IO_READ},
        {.addr=0xa91f, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xc961, .a=0x85, .x=0xb6, .y=0x17, .sp=0x83, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xc961, .value=0xe8}, {.addr=0xc962, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xc963, .a=0x90, .x=0xb6, .y=0x17, .sp=0x83, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xc961, .value=0xe8}, {.addr=0xc962, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xc961, .value=0xe8, .type=IO_READ},
        {.addr=0xc962, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x6eba, .a=0x76, .x=0x6f, .y=0xcb, .sp=0x80, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x6eba, .value=0xe8}, {.addr=0x6ebb, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x6ebc, .a=0x8c, .x=0x6f, .y=0xcb, .sp=0x80, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x6eba, .value=0xe8}, {.addr=0x6ebb, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x6eba, .value=0xe8, .type=IO_READ},
        {.addr=0x6ebb, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x4579, .a=0xc3, .x=0xb5, .y=0x1e, .sp=0xf5, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x4579, .value=0xe8}, {.addr=0x457a, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x457b, .a=0x02, .x=0xb5, .y=0x1e, .sp=0xf5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x4579, .value=0xe8}, {.addr=0x457a, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x4579, .value=0xe8, .type=IO_READ},
        {.addr=0x457a, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xd1ca, .a=0x79, .x=0x96, .y=0x5f, .sp=0xd4, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xd1ca, .value=0xe8}, {.addr=0xd1cb, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xd1cc, .a=0x49, .x=0x96, .y=0x5f, .sp=0xd4, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xd1ca, .value=0xe8}, {.addr=0xd1cb, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xd1ca, .value=0xe8, .type=IO_READ},
        {.addr=0xd1cb, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x2bb6, .a=0x61, .x=0x8c, .y=0xd0, .sp=0x98, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x2bb6, .value=0xe8}, {.addr=0x2bb7, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x2bb8, .a=0x1e, .x=0x8c, .y=0xd0, .sp=0x98, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2bb6, .value=0xe8}, {.addr=0x2bb7, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x2bb6, .value=0xe8, .type=IO_READ},
        {.addr=0x2bb7, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x000a, .a=0x42, .x=0xc9, .y=0x22, .sp=0x33, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0xe8}, {.addr=0x000b, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x000c, .a=0x2e, .x=0xc9, .y=0x22, .sp=0x33, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0xe8}, {.addr=0x000b, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x000a, .value=0xe8, .type=IO_READ},
        {.addr=0x000b, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xc55b, .a=0x88, .x=0x8a, .y=0xb3, .sp=0xc3, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xc55b, .value=0xe8}, {.addr=0xc55c, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xc55d, .a=0xfa, .x=0x8a, .y=0xb3, .sp=0xc3, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xc55b, .value=0xe8}, {.addr=0xc55c, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xc55b, .value=0xe8, .type=IO_READ},
        {.addr=0xc55c, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xc7ab, .a=0x9b, .x=0x5d, .y=0x65, .sp=0x1a, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xc7ab, .value=0xe8}, {.addr=0xc7ac, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xc7ad, .a=0x70, .x=0x5d, .y=0x65, .sp=0x1a, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xc7ab, .value=0xe8}, {.addr=0xc7ac, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xc7ab, .value=0xe8, .type=IO_READ},
        {.addr=0xc7ac, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x9a66, .a=0x10, .x=0xcd, .y=0x9a, .sp=0x71, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x9a66, .value=0xe8}, {.addr=0x9a67, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x9a68, .a=0x38, .x=0xcd, .y=0x9a, .sp=0x71, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x9a66, .value=0xe8}, {.addr=0x9a67, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x9a66, .value=0xe8, .type=IO_READ},
        {.addr=0x9a67, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xa9f0, .a=0x5d, .x=0x98, .y=0x3b, .sp=0x6e, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xa9f0, .value=0xe8}, {.addr=0xa9f1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa9f2, .a=0x80, .x=0x98, .y=0x3b, .sp=0x6e, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xa9f0, .value=0xe8}, {.addr=0xa9f1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa9f0, .value=0xe8, .type=IO_READ},
        {.addr=0xa9f1, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x2cf6, .a=0x4c, .x=0x3a, .y=0x09, .sp=0xe2, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x2cf6, .value=0xe8}, {.addr=0x2cf7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2cf8, .a=0x20, .x=0x3a, .y=0x09, .sp=0xe2, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x2cf6, .value=0xe8}, {.addr=0x2cf7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2cf6, .value=0xe8, .type=IO_READ},
        {.addr=0x2cf7, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x37ad, .a=0xfb, .x=0x6d, .y=0x5c, .sp=0x3c, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x37ad, .value=0xe8}, {.addr=0x37ae, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x37af, .a=0x93, .x=0x6d, .y=0x5c, .sp=0x3c, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x37ad, .value=0xe8}, {.addr=0x37ae, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x37ad, .value=0xe8, .type=IO_READ},
        {.addr=0x37ae, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x280c, .a=0x61, .x=0x4f, .y=0xcf, .sp=0x69, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x280c, .value=0xe8}, {.addr=0x280d, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x280e, .a=0x3c, .x=0x4f, .y=0xcf, .sp=0x69, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x280c, .value=0xe8}, {.addr=0x280d, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x280c, .value=0xe8, .type=IO_READ},
        {.addr=0x280d, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x71fd, .a=0xfa, .x=0x66, .y=0xaa, .sp=0x97, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x71fd, .value=0xe8}, {.addr=0x71fe, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x71ff, .a=0x19, .x=0x66, .y=0xaa, .sp=0x97, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x71fd, .value=0xe8}, {.addr=0x71fe, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x71fd, .value=0xe8, .type=IO_READ},
        {.addr=0x71fe, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x9bad, .a=0xe2, .x=0xde, .y=0x36, .sp=0xa7, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x9bad, .value=0xe8}, {.addr=0x9bae, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x9baf, .a=0xb7, .x=0xde, .y=0x36, .sp=0xa7, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x9bad, .value=0xe8}, {.addr=0x9bae, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x9bad, .value=0xe8, .type=IO_READ},
        {.addr=0x9bae, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x87f9, .a=0x13, .x=0xeb, .y=0xc7, .sp=0x35, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x87f9, .value=0xe8}, {.addr=0x87fa, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x87fb, .a=0xd0, .x=0xeb, .y=0xc7, .sp=0x35, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x87f9, .value=0xe8}, {.addr=0x87fa, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x87f9, .value=0xe8, .type=IO_READ},
        {.addr=0x87fa, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x55f1, .a=0x0a, .x=0x40, .y=0xfb, .sp=0xc1, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x55f1, .value=0xe8}, {.addr=0x55f2, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x55f3, .a=0xd6, .x=0x40, .y=0xfb, .sp=0xc1, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x55f1, .value=0xe8}, {.addr=0x55f2, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x55f1, .value=0xe8, .type=IO_READ},
        {.addr=0x55f2, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x34ea, .a=0x60, .x=0x47, .y=0x65, .sp=0x07, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x34ea, .value=0xe8}, {.addr=0x34eb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x34ec, .a=0x9f, .x=0x47, .y=0x65, .sp=0x07, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x34ea, .value=0xe8}, {.addr=0x34eb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x34ea, .value=0xe8, .type=IO_READ},
        {.addr=0x34eb, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x4077, .a=0xb3, .x=0x0e, .y=0x4f, .sp=0xfa, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x4077, .value=0xe8}, {.addr=0x4078, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4079, .a=0xfc, .x=0x0e, .y=0x4f, .sp=0xfa, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x4077, .value=0xe8}, {.addr=0x4078, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4077, .value=0xe8, .type=IO_READ},
        {.addr=0x4078, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x48b2, .a=0xe7, .x=0xed, .y=0x97, .sp=0x13, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x48b2, .value=0xe8}, {.addr=0x48b3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x48b4, .a=0x8e, .x=0xed, .y=0x97, .sp=0x13, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x48b2, .value=0xe8}, {.addr=0x48b3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x48b2, .value=0xe8, .type=IO_READ},
        {.addr=0x48b3, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x15f6, .a=0x1b, .x=0x05, .y=0x2e, .sp=0xe1, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x15f6, .value=0xe8}, {.addr=0x15f7, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x15f8, .a=0xf8, .x=0x05, .y=0x2e, .sp=0xe1, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x15f6, .value=0xe8}, {.addr=0x15f7, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x15f6, .value=0xe8, .type=IO_READ},
        {.addr=0x15f7, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x8f11, .a=0xfb, .x=0x71, .y=0x87, .sp=0x85, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x8f11, .value=0xe8}, {.addr=0x8f12, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8f13, .a=0xdf, .x=0x71, .y=0x87, .sp=0x85, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x8f11, .value=0xe8}, {.addr=0x8f12, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8f11, .value=0xe8, .type=IO_READ},
        {.addr=0x8f12, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x67db, .a=0x50, .x=0xe8, .y=0xe4, .sp=0x4e, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x67db, .value=0xe8}, {.addr=0x67dc, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x67dd, .a=0x5b, .x=0xe8, .y=0xe4, .sp=0x4e, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x67db, .value=0xe8}, {.addr=0x67dc, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x67db, .value=0xe8, .type=IO_READ},
        {.addr=0x67dc, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x93e2, .a=0x89, .x=0x3a, .y=0x5c, .sp=0x7d, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x93e2, .value=0xe8}, {.addr=0x93e3, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x93e4, .a=0x02, .x=0x3a, .y=0x5c, .sp=0x7d, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x93e2, .value=0xe8}, {.addr=0x93e3, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x93e2, .value=0xe8, .type=IO_READ},
        {.addr=0x93e3, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xe0f2, .a=0x5b, .x=0x33, .y=0x61, .sp=0x29, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xe0f2, .value=0xe8}, {.addr=0xe0f3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xe0f4, .a=0xee, .x=0x33, .y=0x61, .sp=0x29, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xe0f2, .value=0xe8}, {.addr=0xe0f3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xe0f2, .value=0xe8, .type=IO_READ},
        {.addr=0xe0f3, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xf732, .a=0xc8, .x=0x42, .y=0x7b, .sp=0xec, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xf732, .value=0xe8}, {.addr=0xf733, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xf734, .a=0xe5, .x=0x42, .y=0x7b, .sp=0xec, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xf732, .value=0xe8}, {.addr=0xf733, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xf732, .value=0xe8, .type=IO_READ},
        {.addr=0xf733, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x3052, .a=0x42, .x=0xfa, .y=0xda, .sp=0xcf, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x3052, .value=0xe8}, {.addr=0x3053, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x3054, .a=0xf5, .x=0xfa, .y=0xda, .sp=0xcf, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3052, .value=0xe8}, {.addr=0x3053, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x3052, .value=0xe8, .type=IO_READ},
        {.addr=0x3053, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xd89f, .a=0xa0, .x=0x79, .y=0x0a, .sp=0x12, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xd89f, .value=0xe8}, {.addr=0xd8a0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd8a1, .a=0x1c, .x=0x79, .y=0x0a, .sp=0x12, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xd89f, .value=0xe8}, {.addr=0xd8a0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd89f, .value=0xe8, .type=IO_READ},
        {.addr=0xd8a0, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x57f2, .a=0x9c, .x=0x54, .y=0x60, .sp=0x89, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x57f2, .value=0xe8}, {.addr=0x57f3, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x57f4, .a=0xb8, .x=0x54, .y=0x60, .sp=0x89, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x57f2, .value=0xe8}, {.addr=0x57f3, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x57f2, .value=0xe8, .type=IO_READ},
        {.addr=0x57f3, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xbe30, .a=0x66, .x=0x81, .y=0xf8, .sp=0x5c, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xbe30, .value=0xe8}, {.addr=0xbe31, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xbe32, .a=0xb3, .x=0x81, .y=0xf8, .sp=0x5c, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xbe30, .value=0xe8}, {.addr=0xbe31, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xbe30, .value=0xe8, .type=IO_READ},
        {.addr=0xbe31, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x982b, .a=0x9c, .x=0x42, .y=0x25, .sp=0xda, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x982b, .value=0xe8}, {.addr=0x982c, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x982d, .a=0xe3, .x=0x42, .y=0x25, .sp=0xda, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x982b, .value=0xe8}, {.addr=0x982c, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x982b, .value=0xe8, .type=IO_READ},
        {.addr=0x982c, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xba4f, .a=0x2b, .x=0x57, .y=0x94, .sp=0x16, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xba4f, .value=0xe8}, {.addr=0xba50, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xba51, .a=0x06, .x=0x57, .y=0x94, .sp=0x16, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xba4f, .value=0xe8}, {.addr=0xba50, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xba4f, .value=0xe8, .type=IO_READ},
        {.addr=0xba50, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x847d, .a=0xc5, .x=0xec, .y=0xf8, .sp=0x5b, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x847d, .value=0xe8}, {.addr=0x847e, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x847f, .a=0xf9, .x=0xec, .y=0xf8, .sp=0x5b, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x847d, .value=0xe8}, {.addr=0x847e, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x847d, .value=0xe8, .type=IO_READ},
        {.addr=0x847e, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x2023, .a=0x2f, .x=0x6a, .y=0xcc, .sp=0x6f, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x2023, .value=0xe8}, {.addr=0x2024, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x2025, .a=0x11, .x=0x6a, .y=0xcc, .sp=0x6f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x2023, .value=0xe8}, {.addr=0x2024, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x2023, .value=0xe8, .type=IO_READ},
        {.addr=0x2024, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x5f34, .a=0x0f, .x=0x75, .y=0x4a, .sp=0xb5, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x5f34, .value=0xe8}, {.addr=0x5f35, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x5f36, .a=0x7e, .x=0x75, .y=0x4a, .sp=0xb5, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x5f34, .value=0xe8}, {.addr=0x5f35, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x5f34, .value=0xe8, .type=IO_READ},
        {.addr=0x5f35, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xf0bc, .a=0x1e, .x=0x25, .y=0xb4, .sp=0x78, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xf0bc, .value=0xe8}, {.addr=0xf0bd, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xf0be, .a=0x16, .x=0x25, .y=0xb4, .sp=0x78, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xf0bc, .value=0xe8}, {.addr=0xf0bd, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xf0bc, .value=0xe8, .type=IO_READ},
        {.addr=0xf0bd, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x5ec3, .a=0x8b, .x=0xbd, .y=0x71, .sp=0x57, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x5ec3, .value=0xe8}, {.addr=0x5ec4, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x5ec5, .a=0x22, .x=0xbd, .y=0x71, .sp=0x57, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x5ec3, .value=0xe8}, {.addr=0x5ec4, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x5ec3, .value=0xe8, .type=IO_READ},
        {.addr=0x5ec4, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x9958, .a=0xe7, .x=0x9f, .y=0x9c, .sp=0xf1, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x9958, .value=0xe8}, {.addr=0x9959, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x995a, .a=0x56, .x=0x9f, .y=0x9c, .sp=0xf1, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x9958, .value=0xe8}, {.addr=0x9959, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x9958, .value=0xe8, .type=IO_READ},
        {.addr=0x9959, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x0bbb, .a=0xf7, .x=0x67, .y=0x64, .sp=0x89, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0bbb, .value=0xe8}, {.addr=0x0bbc, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x0bbd, .a=0x42, .x=0x67, .y=0x64, .sp=0x89, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0bbb, .value=0xe8}, {.addr=0x0bbc, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x0bbb, .value=0xe8, .type=IO_READ},
        {.addr=0x0bbc, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x9bf7, .a=0xa0, .x=0x15, .y=0xd5, .sp=0xa6, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x9bf7, .value=0xe8}, {.addr=0x9bf8, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x9bf9, .a=0x15, .x=0x15, .y=0xd5, .sp=0xa6, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x9bf7, .value=0xe8}, {.addr=0x9bf8, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x9bf7, .value=0xe8, .type=IO_READ},
        {.addr=0x9bf8, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x91ae, .a=0xed, .x=0x40, .y=0x66, .sp=0xc1, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x91ae, .value=0xe8}, {.addr=0x91af, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x91b0, .a=0xbb, .x=0x40, .y=0x66, .sp=0xc1, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x91ae, .value=0xe8}, {.addr=0x91af, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x91ae, .value=0xe8, .type=IO_READ},
        {.addr=0x91af, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x19da, .a=0xc0, .x=0xbc, .y=0xee, .sp=0x82, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x19da, .value=0xe8}, {.addr=0x19db, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x19dc, .a=0x90, .x=0xbc, .y=0xee, .sp=0x82, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x19da, .value=0xe8}, {.addr=0x19db, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x19da, .value=0xe8, .type=IO_READ},
        {.addr=0x19db, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x679c, .a=0x62, .x=0x4f, .y=0xce, .sp=0x9b, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x679c, .value=0xe8}, {.addr=0x679d, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x679e, .a=0xc9, .x=0x4f, .y=0xce, .sp=0x9b, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x679c, .value=0xe8}, {.addr=0x679d, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x679c, .value=0xe8, .type=IO_READ},
        {.addr=0x679d, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xa2e6, .a=0x3f, .x=0xd0, .y=0x88, .sp=0xd2, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xa2e6, .value=0xe8}, {.addr=0xa2e7, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xa2e8, .a=0x72, .x=0xd0, .y=0x88, .sp=0xd2, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xa2e6, .value=0xe8}, {.addr=0xa2e7, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xa2e6, .value=0xe8, .type=IO_READ},
        {.addr=0xa2e7, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xf342, .a=0x24, .x=0xfa, .y=0xe2, .sp=0x7d, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xf342, .value=0xe8}, {.addr=0xf343, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xf344, .a=0x4c, .x=0xfa, .y=0xe2, .sp=0x7d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xf342, .value=0xe8}, {.addr=0xf343, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xf342, .value=0xe8, .type=IO_READ},
        {.addr=0xf343, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x6ae3, .a=0x1e, .x=0x34, .y=0x07, .sp=0x43, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x6ae3, .value=0xe8}, {.addr=0x6ae4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6ae5, .a=0x9d, .x=0x34, .y=0x07, .sp=0x43, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x6ae3, .value=0xe8}, {.addr=0x6ae4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6ae3, .value=0xe8, .type=IO_READ},
        {.addr=0x6ae4, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x057c, .a=0xc6, .x=0x0c, .y=0x3d, .sp=0xb7, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x057c, .value=0xe8}, {.addr=0x057d, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x057e, .a=0xf8, .x=0x0c, .y=0x3d, .sp=0xb7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x057c, .value=0xe8}, {.addr=0x057d, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x057c, .value=0xe8, .type=IO_READ},
        {.addr=0x057d, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xfc36, .a=0x66, .x=0x02, .y=0xce, .sp=0x5c, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xfc36, .value=0xe8}, {.addr=0xfc37, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfc38, .a=0x06, .x=0x02, .y=0xce, .sp=0x5c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xfc36, .value=0xe8}, {.addr=0xfc37, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfc36, .value=0xe8, .type=IO_READ},
        {.addr=0xfc37, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x9854, .a=0xbb, .x=0xdb, .y=0x9b, .sp=0x02, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x9854, .value=0xe8}, {.addr=0x9855, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x9856, .a=0x4f, .x=0xdb, .y=0x9b, .sp=0x02, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x9854, .value=0xe8}, {.addr=0x9855, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x9854, .value=0xe8, .type=IO_READ},
        {.addr=0x9855, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x632e, .a=0x95, .x=0x06, .y=0x01, .sp=0x56, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x632e, .value=0xe8}, {.addr=0x632f, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x6330, .a=0x8a, .x=0x06, .y=0x01, .sp=0x56, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x632e, .value=0xe8}, {.addr=0x632f, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x632e, .value=0xe8, .type=IO_READ},
        {.addr=0x632f, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x6452, .a=0x5e, .x=0x86, .y=0x36, .sp=0x81, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x6452, .value=0xe8}, {.addr=0x6453, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x6454, .a=0x43, .x=0x86, .y=0x36, .sp=0x81, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6452, .value=0xe8}, {.addr=0x6453, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x6452, .value=0xe8, .type=IO_READ},
        {.addr=0x6453, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x1da4, .a=0xf9, .x=0x94, .y=0x6e, .sp=0x49, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x1da4, .value=0xe8}, {.addr=0x1da5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1da6, .a=0xae, .x=0x94, .y=0x6e, .sp=0x49, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x1da4, .value=0xe8}, {.addr=0x1da5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1da4, .value=0xe8, .type=IO_READ},
        {.addr=0x1da5, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x8569, .a=0x2a, .x=0x61, .y=0xe3, .sp=0x57, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x8569, .value=0xe8}, {.addr=0x856a, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x856b, .a=0x16, .x=0x61, .y=0xe3, .sp=0x57, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x8569, .value=0xe8}, {.addr=0x856a, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x8569, .value=0xe8, .type=IO_READ},
        {.addr=0x856a, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x277e, .a=0x4b, .x=0x55, .y=0x1e, .sp=0xe6, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x277e, .value=0xe8}, {.addr=0x277f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x2780, .a=0x6d, .x=0x55, .y=0x1e, .sp=0xe6, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x277e, .value=0xe8}, {.addr=0x277f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x277e, .value=0xe8, .type=IO_READ},
        {.addr=0x277f, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x4354, .a=0x12, .x=0x2b, .y=0x03, .sp=0x6a, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x4354, .value=0xe8}, {.addr=0x4355, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x4356, .a=0xc9, .x=0x2b, .y=0x03, .sp=0x6a, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x4354, .value=0xe8}, {.addr=0x4355, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x4354, .value=0xe8, .type=IO_READ},
        {.addr=0x4355, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0300) {
    const struct CPU_State initial_cpu = {.pc=0x06c5, .a=0x2b, .x=0xe0, .y=0x8e, .sp=0xa9, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x06c5, .value=0xe8}, {.addr=0x06c6, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x06c7, .a=0xeb, .x=0xe0, .y=0x8e, .sp=0xa9, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x06c5, .value=0xe8}, {.addr=0x06c6, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x06c5, .value=0xe8, .type=IO_READ},
        {.addr=0x06c6, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0301) {
    const struct CPU_State initial_cpu = {.pc=0x69bc, .a=0x54, .x=0x81, .y=0x43, .sp=0x28, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x69bc, .value=0xe8}, {.addr=0x69bd, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x69be, .a=0xe8, .x=0x81, .y=0x43, .sp=0x28, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x69bc, .value=0xe8}, {.addr=0x69bd, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x69bc, .value=0xe8, .type=IO_READ},
        {.addr=0x69bd, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0302) {
    const struct CPU_State initial_cpu = {.pc=0x4160, .a=0x90, .x=0x41, .y=0x34, .sp=0x4d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x4160, .value=0xe8}, {.addr=0x4161, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4162, .a=0x1d, .x=0x41, .y=0x34, .sp=0x4d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x4160, .value=0xe8}, {.addr=0x4161, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4160, .value=0xe8, .type=IO_READ},
        {.addr=0x4161, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0303) {
    const struct CPU_State initial_cpu = {.pc=0x5120, .a=0x24, .x=0x9e, .y=0x38, .sp=0xd8, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x5120, .value=0xe8}, {.addr=0x5121, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x5122, .a=0xb3, .x=0x9e, .y=0x38, .sp=0xd8, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x5120, .value=0xe8}, {.addr=0x5121, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x5120, .value=0xe8, .type=IO_READ},
        {.addr=0x5121, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0304) {
    const struct CPU_State initial_cpu = {.pc=0x51be, .a=0x07, .x=0xa2, .y=0x4a, .sp=0xd1, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x51be, .value=0xe8}, {.addr=0x51bf, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x51c0, .a=0xb1, .x=0xa2, .y=0x4a, .sp=0xd1, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x51be, .value=0xe8}, {.addr=0x51bf, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x51be, .value=0xe8, .type=IO_READ},
        {.addr=0x51bf, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0305) {
    const struct CPU_State initial_cpu = {.pc=0xad8a, .a=0x04, .x=0x81, .y=0x70, .sp=0x2a, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xad8a, .value=0xe8}, {.addr=0xad8b, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xad8c, .a=0xb2, .x=0x81, .y=0x70, .sp=0x2a, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xad8a, .value=0xe8}, {.addr=0xad8b, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xad8a, .value=0xe8, .type=IO_READ},
        {.addr=0xad8b, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0306) {
    const struct CPU_State initial_cpu = {.pc=0xebc4, .a=0x59, .x=0x5e, .y=0x76, .sp=0x89, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xebc4, .value=0xe8}, {.addr=0xebc5, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xebc6, .a=0x88, .x=0x5e, .y=0x76, .sp=0x89, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xebc4, .value=0xe8}, {.addr=0xebc5, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xebc4, .value=0xe8, .type=IO_READ},
        {.addr=0xebc5, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0307) {
    const struct CPU_State initial_cpu = {.pc=0x39cf, .a=0xe1, .x=0xbc, .y=0x13, .sp=0x94, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x39cf, .value=0xe8}, {.addr=0x39d0, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x39d1, .a=0x25, .x=0xbc, .y=0x13, .sp=0x94, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x39cf, .value=0xe8}, {.addr=0x39d0, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x39cf, .value=0xe8, .type=IO_READ},
        {.addr=0x39d0, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0308) {
    const struct CPU_State initial_cpu = {.pc=0x5cf8, .a=0xb1, .x=0xd8, .y=0x85, .sp=0xad, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x5cf8, .value=0xe8}, {.addr=0x5cf9, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5cfa, .a=0xa6, .x=0xd8, .y=0x85, .sp=0xad, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x5cf8, .value=0xe8}, {.addr=0x5cf9, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x5cf8, .value=0xe8, .type=IO_READ},
        {.addr=0x5cf9, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0309) {
    const struct CPU_State initial_cpu = {.pc=0x1eaa, .a=0xe3, .x=0xd4, .y=0xf7, .sp=0xee, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x1eaa, .value=0xe8}, {.addr=0x1eab, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1eac, .a=0xed, .x=0xd4, .y=0xf7, .sp=0xee, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x1eaa, .value=0xe8}, {.addr=0x1eab, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1eaa, .value=0xe8, .type=IO_READ},
        {.addr=0x1eab, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_030A) {
    const struct CPU_State initial_cpu = {.pc=0x749c, .a=0x3e, .x=0xb7, .y=0xa8, .sp=0x43, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x749c, .value=0xe8}, {.addr=0x749d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x749e, .a=0x40, .x=0xb7, .y=0xa8, .sp=0x43, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x749c, .value=0xe8}, {.addr=0x749d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x749c, .value=0xe8, .type=IO_READ},
        {.addr=0x749d, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_030B) {
    const struct CPU_State initial_cpu = {.pc=0xd0b4, .a=0x52, .x=0x48, .y=0xe7, .sp=0x58, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xd0b4, .value=0xe8}, {.addr=0xd0b5, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd0b6, .a=0x5d, .x=0x48, .y=0xe7, .sp=0x58, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xd0b4, .value=0xe8}, {.addr=0xd0b5, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd0b4, .value=0xe8, .type=IO_READ},
        {.addr=0xd0b5, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_030C) {
    const struct CPU_State initial_cpu = {.pc=0x7e32, .a=0xa7, .x=0x36, .y=0xcb, .sp=0x36, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x7e32, .value=0xe8}, {.addr=0x7e33, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x7e34, .a=0x31, .x=0x36, .y=0xcb, .sp=0x36, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x7e32, .value=0xe8}, {.addr=0x7e33, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x7e32, .value=0xe8, .type=IO_READ},
        {.addr=0x7e33, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_030D) {
    const struct CPU_State initial_cpu = {.pc=0x6800, .a=0x6b, .x=0xfb, .y=0xa5, .sp=0x46, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x6800, .value=0xe8}, {.addr=0x6801, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x6802, .a=0xec, .x=0xfb, .y=0xa5, .sp=0x46, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x6800, .value=0xe8}, {.addr=0x6801, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x6800, .value=0xe8, .type=IO_READ},
        {.addr=0x6801, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_030E) {
    const struct CPU_State initial_cpu = {.pc=0x01e8, .a=0xe1, .x=0x0e, .y=0x38, .sp=0xef, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xe8}, {.addr=0x01e9, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x01ea, .a=0x74, .x=0x0e, .y=0x38, .sp=0xef, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xe8}, {.addr=0x01e9, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x01e8, .value=0xe8, .type=IO_READ},
        {.addr=0x01e9, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_030F) {
    const struct CPU_State initial_cpu = {.pc=0xe40f, .a=0xd6, .x=0x16, .y=0x59, .sp=0x6e, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xe40f, .value=0xe8}, {.addr=0xe410, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xe411, .a=0xa6, .x=0x16, .y=0x59, .sp=0x6e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xe40f, .value=0xe8}, {.addr=0xe410, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xe40f, .value=0xe8, .type=IO_READ},
        {.addr=0xe410, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0310) {
    const struct CPU_State initial_cpu = {.pc=0x58fe, .a=0xf9, .x=0x1d, .y=0xbd, .sp=0x46, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x58fe, .value=0xe8}, {.addr=0x58ff, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x5900, .a=0x93, .x=0x1d, .y=0xbd, .sp=0x46, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x58fe, .value=0xe8}, {.addr=0x58ff, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x58fe, .value=0xe8, .type=IO_READ},
        {.addr=0x58ff, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0311) {
    const struct CPU_State initial_cpu = {.pc=0x7574, .a=0x9c, .x=0xdf, .y=0x93, .sp=0x7f, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x7574, .value=0xe8}, {.addr=0x7575, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x7576, .a=0x9b, .x=0xdf, .y=0x93, .sp=0x7f, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x7574, .value=0xe8}, {.addr=0x7575, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x7574, .value=0xe8, .type=IO_READ},
        {.addr=0x7575, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0312) {
    const struct CPU_State initial_cpu = {.pc=0x085d, .a=0xd4, .x=0xac, .y=0x23, .sp=0x59, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x085d, .value=0xe8}, {.addr=0x085e, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x085f, .a=0xc9, .x=0xac, .y=0x23, .sp=0x59, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x085d, .value=0xe8}, {.addr=0x085e, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x085d, .value=0xe8, .type=IO_READ},
        {.addr=0x085e, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0313) {
    const struct CPU_State initial_cpu = {.pc=0x8ab3, .a=0x7d, .x=0x59, .y=0x81, .sp=0x67, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x8ab3, .value=0xe8}, {.addr=0x8ab4, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x8ab5, .a=0x93, .x=0x59, .y=0x81, .sp=0x67, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x8ab3, .value=0xe8}, {.addr=0x8ab4, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x8ab3, .value=0xe8, .type=IO_READ},
        {.addr=0x8ab4, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0314) {
    const struct CPU_State initial_cpu = {.pc=0xacf7, .a=0x24, .x=0x06, .y=0x4c, .sp=0xf0, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xacf7, .value=0xe8}, {.addr=0xacf8, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xacf9, .a=0xb1, .x=0x06, .y=0x4c, .sp=0xf0, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xacf7, .value=0xe8}, {.addr=0xacf8, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xacf7, .value=0xe8, .type=IO_READ},
        {.addr=0xacf8, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0315) {
    const struct CPU_State initial_cpu = {.pc=0xa772, .a=0x9d, .x=0xa4, .y=0xdc, .sp=0xde, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xa772, .value=0xe8}, {.addr=0xa773, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xa774, .a=0x36, .x=0xa4, .y=0xdc, .sp=0xde, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xa772, .value=0xe8}, {.addr=0xa773, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xa772, .value=0xe8, .type=IO_READ},
        {.addr=0xa773, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0316) {
    const struct CPU_State initial_cpu = {.pc=0xc8fc, .a=0xb7, .x=0xae, .y=0x98, .sp=0x1b, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xc8fc, .value=0xe8}, {.addr=0xc8fd, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xc8fe, .a=0x24, .x=0xae, .y=0x98, .sp=0x1b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xc8fc, .value=0xe8}, {.addr=0xc8fd, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xc8fc, .value=0xe8, .type=IO_READ},
        {.addr=0xc8fd, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0317) {
    const struct CPU_State initial_cpu = {.pc=0x5dbe, .a=0x7e, .x=0x54, .y=0x09, .sp=0x6a, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x5dbe, .value=0xe8}, {.addr=0x5dbf, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x5dc0, .a=0xfc, .x=0x54, .y=0x09, .sp=0x6a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x5dbe, .value=0xe8}, {.addr=0x5dbf, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x5dbe, .value=0xe8, .type=IO_READ},
        {.addr=0x5dbf, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0318) {
    const struct CPU_State initial_cpu = {.pc=0xf521, .a=0x43, .x=0x2b, .y=0x86, .sp=0xca, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xf521, .value=0xe8}, {.addr=0xf522, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xf523, .a=0xb7, .x=0x2b, .y=0x86, .sp=0xca, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xf521, .value=0xe8}, {.addr=0xf522, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xf521, .value=0xe8, .type=IO_READ},
        {.addr=0xf522, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0319) {
    const struct CPU_State initial_cpu = {.pc=0xd596, .a=0x59, .x=0x16, .y=0x27, .sp=0x96, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xd596, .value=0xe8}, {.addr=0xd597, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xd598, .a=0xc1, .x=0x16, .y=0x27, .sp=0x96, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xd596, .value=0xe8}, {.addr=0xd597, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xd596, .value=0xe8, .type=IO_READ},
        {.addr=0xd597, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_031A) {
    const struct CPU_State initial_cpu = {.pc=0xdbca, .a=0x89, .x=0xbd, .y=0x52, .sp=0x6a, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xdbca, .value=0xe8}, {.addr=0xdbcb, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xdbcc, .a=0x8f, .x=0xbd, .y=0x52, .sp=0x6a, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xdbca, .value=0xe8}, {.addr=0xdbcb, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xdbca, .value=0xe8, .type=IO_READ},
        {.addr=0xdbcb, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_031B) {
    const struct CPU_State initial_cpu = {.pc=0xcc8c, .a=0xbe, .x=0x2d, .y=0xd9, .sp=0x49, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xcc8c, .value=0xe8}, {.addr=0xcc8d, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xcc8e, .a=0x92, .x=0x2d, .y=0xd9, .sp=0x49, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xcc8c, .value=0xe8}, {.addr=0xcc8d, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xcc8c, .value=0xe8, .type=IO_READ},
        {.addr=0xcc8d, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_031C) {
    const struct CPU_State initial_cpu = {.pc=0x41a8, .a=0x6c, .x=0x5c, .y=0x51, .sp=0x87, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x41a8, .value=0xe8}, {.addr=0x41a9, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x41aa, .a=0x8c, .x=0x5c, .y=0x51, .sp=0x87, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x41a8, .value=0xe8}, {.addr=0x41a9, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x41a8, .value=0xe8, .type=IO_READ},
        {.addr=0x41a9, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_031D) {
    const struct CPU_State initial_cpu = {.pc=0x6c88, .a=0xcc, .x=0xaf, .y=0x71, .sp=0xf2, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x6c88, .value=0xe8}, {.addr=0x6c89, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x6c8a, .a=0x8a, .x=0xaf, .y=0x71, .sp=0xf2, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x6c88, .value=0xe8}, {.addr=0x6c89, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x6c88, .value=0xe8, .type=IO_READ},
        {.addr=0x6c89, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_031E) {
    const struct CPU_State initial_cpu = {.pc=0x1f81, .a=0x22, .x=0x72, .y=0x77, .sp=0x7b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x1f81, .value=0xe8}, {.addr=0x1f82, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x1f83, .a=0xce, .x=0x72, .y=0x77, .sp=0x7b, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x1f81, .value=0xe8}, {.addr=0x1f82, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x1f81, .value=0xe8, .type=IO_READ},
        {.addr=0x1f82, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_031F) {
    const struct CPU_State initial_cpu = {.pc=0x2cc4, .a=0xf2, .x=0x75, .y=0x11, .sp=0xc0, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x2cc4, .value=0xe8}, {.addr=0x2cc5, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x2cc6, .a=0x3a, .x=0x75, .y=0x11, .sp=0xc0, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x2cc4, .value=0xe8}, {.addr=0x2cc5, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x2cc4, .value=0xe8, .type=IO_READ},
        {.addr=0x2cc5, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0320) {
    const struct CPU_State initial_cpu = {.pc=0xb698, .a=0xfa, .x=0x41, .y=0x46, .sp=0x9c, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xb698, .value=0xe8}, {.addr=0xb699, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xb69a, .a=0x8f, .x=0x41, .y=0x46, .sp=0x9c, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xb698, .value=0xe8}, {.addr=0xb699, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xb698, .value=0xe8, .type=IO_READ},
        {.addr=0xb699, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0321) {
    const struct CPU_State initial_cpu = {.pc=0x3822, .a=0x22, .x=0x86, .y=0xd7, .sp=0x37, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x3822, .value=0xe8}, {.addr=0x3823, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x3824, .a=0x2e, .x=0x86, .y=0xd7, .sp=0x37, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x3822, .value=0xe8}, {.addr=0x3823, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x3822, .value=0xe8, .type=IO_READ},
        {.addr=0x3823, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0322) {
    const struct CPU_State initial_cpu = {.pc=0x8063, .a=0x81, .x=0x4d, .y=0x12, .sp=0x8f, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x8063, .value=0xe8}, {.addr=0x8064, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8065, .a=0xbd, .x=0x4d, .y=0x12, .sp=0x8f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x8063, .value=0xe8}, {.addr=0x8064, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8063, .value=0xe8, .type=IO_READ},
        {.addr=0x8064, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0323) {
    const struct CPU_State initial_cpu = {.pc=0x4983, .a=0xc7, .x=0x8d, .y=0x67, .sp=0x7c, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x4983, .value=0xe8}, {.addr=0x4984, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x4985, .a=0x21, .x=0x8d, .y=0x67, .sp=0x7c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x4983, .value=0xe8}, {.addr=0x4984, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x4983, .value=0xe8, .type=IO_READ},
        {.addr=0x4984, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0324) {
    const struct CPU_State initial_cpu = {.pc=0x5907, .a=0x05, .x=0x68, .y=0xa3, .sp=0x0d, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x5907, .value=0xe8}, {.addr=0x5908, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x5909, .a=0x64, .x=0x68, .y=0xa3, .sp=0x0d, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x5907, .value=0xe8}, {.addr=0x5908, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x5907, .value=0xe8, .type=IO_READ},
        {.addr=0x5908, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0325) {
    const struct CPU_State initial_cpu = {.pc=0x8455, .a=0xb5, .x=0xef, .y=0x30, .sp=0x6e, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x8455, .value=0xe8}, {.addr=0x8456, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x8457, .a=0xc8, .x=0xef, .y=0x30, .sp=0x6e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x8455, .value=0xe8}, {.addr=0x8456, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x8455, .value=0xe8, .type=IO_READ},
        {.addr=0x8456, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0326) {
    const struct CPU_State initial_cpu = {.pc=0xe14e, .a=0xa1, .x=0x93, .y=0x7e, .sp=0x66, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xe14e, .value=0xe8}, {.addr=0xe14f, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xe150, .a=0xda, .x=0x93, .y=0x7e, .sp=0x66, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xe14e, .value=0xe8}, {.addr=0xe14f, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xe14e, .value=0xe8, .type=IO_READ},
        {.addr=0xe14f, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0327) {
    const struct CPU_State initial_cpu = {.pc=0x6838, .a=0x62, .x=0x17, .y=0xb3, .sp=0xad, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x6838, .value=0xe8}, {.addr=0x6839, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x683a, .a=0x2d, .x=0x17, .y=0xb3, .sp=0xad, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x6838, .value=0xe8}, {.addr=0x6839, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6838, .value=0xe8, .type=IO_READ},
        {.addr=0x6839, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0328) {
    const struct CPU_State initial_cpu = {.pc=0x00b0, .a=0x98, .x=0x03, .y=0x18, .sp=0x0a, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0xe8}, {.addr=0x00b1, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x00b2, .a=0x89, .x=0x03, .y=0x18, .sp=0x0a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0xe8}, {.addr=0x00b1, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x00b0, .value=0xe8, .type=IO_READ},
        {.addr=0x00b1, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0329) {
    const struct CPU_State initial_cpu = {.pc=0xb7ae, .a=0x2a, .x=0x1f, .y=0x5a, .sp=0x12, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xb7ae, .value=0xe8}, {.addr=0xb7af, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xb7b0, .a=0xba, .x=0x1f, .y=0x5a, .sp=0x12, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xb7ae, .value=0xe8}, {.addr=0xb7af, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xb7ae, .value=0xe8, .type=IO_READ},
        {.addr=0xb7af, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_032A) {
    const struct CPU_State initial_cpu = {.pc=0xb6ab, .a=0x3c, .x=0xae, .y=0x54, .sp=0xac, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xb6ab, .value=0xe8}, {.addr=0xb6ac, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xb6ad, .a=0x3a, .x=0xae, .y=0x54, .sp=0xac, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xb6ab, .value=0xe8}, {.addr=0xb6ac, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xb6ab, .value=0xe8, .type=IO_READ},
        {.addr=0xb6ac, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_032B) {
    const struct CPU_State initial_cpu = {.pc=0x83f0, .a=0x2a, .x=0x31, .y=0xf0, .sp=0x71, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x83f0, .value=0xe8}, {.addr=0x83f1, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x83f2, .a=0x70, .x=0x31, .y=0xf0, .sp=0x71, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x83f0, .value=0xe8}, {.addr=0x83f1, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x83f0, .value=0xe8, .type=IO_READ},
        {.addr=0x83f1, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_032C) {
    const struct CPU_State initial_cpu = {.pc=0x7873, .a=0x60, .x=0x3c, .y=0x2d, .sp=0xe9, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x7873, .value=0xe8}, {.addr=0x7874, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x7875, .a=0x53, .x=0x3c, .y=0x2d, .sp=0xe9, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7873, .value=0xe8}, {.addr=0x7874, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x7873, .value=0xe8, .type=IO_READ},
        {.addr=0x7874, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_032D) {
    const struct CPU_State initial_cpu = {.pc=0x519b, .a=0xdc, .x=0xd7, .y=0x82, .sp=0xb8, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x519b, .value=0xe8}, {.addr=0x519c, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x519d, .a=0xf3, .x=0xd7, .y=0x82, .sp=0xb8, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x519b, .value=0xe8}, {.addr=0x519c, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x519b, .value=0xe8, .type=IO_READ},
        {.addr=0x519c, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_032E) {
    const struct CPU_State initial_cpu = {.pc=0x1df0, .a=0xb8, .x=0xae, .y=0x69, .sp=0x5e, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x1df0, .value=0xe8}, {.addr=0x1df1, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x1df2, .a=0x2f, .x=0xae, .y=0x69, .sp=0x5e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x1df0, .value=0xe8}, {.addr=0x1df1, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x1df0, .value=0xe8, .type=IO_READ},
        {.addr=0x1df1, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_032F) {
    const struct CPU_State initial_cpu = {.pc=0x8136, .a=0x7c, .x=0x12, .y=0xd9, .sp=0xd1, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x8136, .value=0xe8}, {.addr=0x8137, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x8138, .a=0x4c, .x=0x12, .y=0xd9, .sp=0xd1, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x8136, .value=0xe8}, {.addr=0x8137, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x8136, .value=0xe8, .type=IO_READ},
        {.addr=0x8137, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0330) {
    const struct CPU_State initial_cpu = {.pc=0xa71b, .a=0xc3, .x=0x75, .y=0xa3, .sp=0xee, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xa71b, .value=0xe8}, {.addr=0xa71c, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xa71d, .a=0x9a, .x=0x75, .y=0xa3, .sp=0xee, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xa71b, .value=0xe8}, {.addr=0xa71c, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xa71b, .value=0xe8, .type=IO_READ},
        {.addr=0xa71c, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0331) {
    const struct CPU_State initial_cpu = {.pc=0x3c9e, .a=0x39, .x=0x6e, .y=0x8f, .sp=0x1a, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x3c9e, .value=0xe8}, {.addr=0x3c9f, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x3ca0, .a=0xf1, .x=0x6e, .y=0x8f, .sp=0x1a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x3c9e, .value=0xe8}, {.addr=0x3c9f, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x3c9e, .value=0xe8, .type=IO_READ},
        {.addr=0x3c9f, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0332) {
    const struct CPU_State initial_cpu = {.pc=0x502c, .a=0xe0, .x=0xe8, .y=0x4d, .sp=0x40, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x502c, .value=0xe8}, {.addr=0x502d, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x502e, .a=0xca, .x=0xe8, .y=0x4d, .sp=0x40, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x502c, .value=0xe8}, {.addr=0x502d, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x502c, .value=0xe8, .type=IO_READ},
        {.addr=0x502d, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0333) {
    const struct CPU_State initial_cpu = {.pc=0x31ec, .a=0x2c, .x=0xf5, .y=0x54, .sp=0x08, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x31ec, .value=0xe8}, {.addr=0x31ed, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x31ee, .a=0x68, .x=0xf5, .y=0x54, .sp=0x08, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x31ec, .value=0xe8}, {.addr=0x31ed, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x31ec, .value=0xe8, .type=IO_READ},
        {.addr=0x31ed, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0334) {
    const struct CPU_State initial_cpu = {.pc=0xd941, .a=0xa7, .x=0x8c, .y=0xd3, .sp=0x31, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xd941, .value=0xe8}, {.addr=0xd942, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xd943, .a=0xd2, .x=0x8c, .y=0xd3, .sp=0x31, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xd941, .value=0xe8}, {.addr=0xd942, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xd941, .value=0xe8, .type=IO_READ},
        {.addr=0xd942, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0335) {
    const struct CPU_State initial_cpu = {.pc=0x1b5e, .a=0xdc, .x=0x0d, .y=0x54, .sp=0xf7, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x1b5e, .value=0xe8}, {.addr=0x1b5f, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x1b60, .a=0x18, .x=0x0d, .y=0x54, .sp=0xf7, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x1b5e, .value=0xe8}, {.addr=0x1b5f, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x1b5e, .value=0xe8, .type=IO_READ},
        {.addr=0x1b5f, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0336) {
    const struct CPU_State initial_cpu = {.pc=0x5fe6, .a=0x93, .x=0x7a, .y=0xf0, .sp=0xfc, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x5fe6, .value=0xe8}, {.addr=0x5fe7, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x5fe8, .a=0xab, .x=0x7a, .y=0xf0, .sp=0xfc, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x5fe6, .value=0xe8}, {.addr=0x5fe7, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x5fe6, .value=0xe8, .type=IO_READ},
        {.addr=0x5fe7, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0337) {
    const struct CPU_State initial_cpu = {.pc=0xcb9d, .a=0x88, .x=0x01, .y=0xa2, .sp=0x37, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xcb9d, .value=0xe8}, {.addr=0xcb9e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcb9f, .a=0xaf, .x=0x01, .y=0xa2, .sp=0x37, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xcb9d, .value=0xe8}, {.addr=0xcb9e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcb9d, .value=0xe8, .type=IO_READ},
        {.addr=0xcb9e, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0338) {
    const struct CPU_State initial_cpu = {.pc=0xe583, .a=0xa9, .x=0xf1, .y=0xe5, .sp=0x78, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xe583, .value=0xe8}, {.addr=0xe584, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xe585, .a=0x1b, .x=0xf1, .y=0xe5, .sp=0x78, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xe583, .value=0xe8}, {.addr=0xe584, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xe583, .value=0xe8, .type=IO_READ},
        {.addr=0xe584, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0339) {
    const struct CPU_State initial_cpu = {.pc=0xbad6, .a=0x29, .x=0xec, .y=0xb3, .sp=0xcf, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xbad6, .value=0xe8}, {.addr=0xbad7, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xbad8, .a=0x38, .x=0xec, .y=0xb3, .sp=0xcf, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xbad6, .value=0xe8}, {.addr=0xbad7, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xbad6, .value=0xe8, .type=IO_READ},
        {.addr=0xbad7, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_033A) {
    const struct CPU_State initial_cpu = {.pc=0xd1a3, .a=0xb4, .x=0x25, .y=0x77, .sp=0xd1, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xd1a3, .value=0xe8}, {.addr=0xd1a4, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xd1a5, .a=0x2a, .x=0x25, .y=0x77, .sp=0xd1, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd1a3, .value=0xe8}, {.addr=0xd1a4, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xd1a3, .value=0xe8, .type=IO_READ},
        {.addr=0xd1a4, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_033B) {
    const struct CPU_State initial_cpu = {.pc=0x8d6c, .a=0xcd, .x=0xc6, .y=0xed, .sp=0xa3, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x8d6c, .value=0xe8}, {.addr=0x8d6d, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x8d6e, .a=0x44, .x=0xc6, .y=0xed, .sp=0xa3, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x8d6c, .value=0xe8}, {.addr=0x8d6d, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x8d6c, .value=0xe8, .type=IO_READ},
        {.addr=0x8d6d, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_033C) {
    const struct CPU_State initial_cpu = {.pc=0x1326, .a=0x86, .x=0x90, .y=0x7b, .sp=0xba, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x1326, .value=0xe8}, {.addr=0x1327, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x1328, .a=0xa1, .x=0x90, .y=0x7b, .sp=0xba, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x1326, .value=0xe8}, {.addr=0x1327, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x1326, .value=0xe8, .type=IO_READ},
        {.addr=0x1327, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_033D) {
    const struct CPU_State initial_cpu = {.pc=0x6156, .a=0xf4, .x=0xa5, .y=0xe7, .sp=0x56, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x6156, .value=0xe8}, {.addr=0x6157, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x6158, .a=0xa7, .x=0xa5, .y=0xe7, .sp=0x56, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x6156, .value=0xe8}, {.addr=0x6157, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x6156, .value=0xe8, .type=IO_READ},
        {.addr=0x6157, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_033E) {
    const struct CPU_State initial_cpu = {.pc=0x4805, .a=0x51, .x=0x96, .y=0x53, .sp=0x41, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x4805, .value=0xe8}, {.addr=0x4806, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x4807, .a=0x45, .x=0x96, .y=0x53, .sp=0x41, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x4805, .value=0xe8}, {.addr=0x4806, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x4805, .value=0xe8, .type=IO_READ},
        {.addr=0x4806, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_033F) {
    const struct CPU_State initial_cpu = {.pc=0x9add, .a=0x11, .x=0x99, .y=0x21, .sp=0xa4, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x9add, .value=0xe8}, {.addr=0x9ade, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9adf, .a=0x7c, .x=0x99, .y=0x21, .sp=0xa4, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x9add, .value=0xe8}, {.addr=0x9ade, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9add, .value=0xe8, .type=IO_READ},
        {.addr=0x9ade, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0340) {
    const struct CPU_State initial_cpu = {.pc=0xc318, .a=0xf9, .x=0xaf, .y=0xbd, .sp=0xbb, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xc318, .value=0xe8}, {.addr=0xc319, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xc31a, .a=0xe6, .x=0xaf, .y=0xbd, .sp=0xbb, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xc318, .value=0xe8}, {.addr=0xc319, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xc318, .value=0xe8, .type=IO_READ},
        {.addr=0xc319, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0341) {
    const struct CPU_State initial_cpu = {.pc=0xe877, .a=0x6d, .x=0x48, .y=0xb7, .sp=0x16, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xe877, .value=0xe8}, {.addr=0xe878, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xe879, .a=0x3f, .x=0x48, .y=0xb7, .sp=0x16, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xe877, .value=0xe8}, {.addr=0xe878, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xe877, .value=0xe8, .type=IO_READ},
        {.addr=0xe878, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0342) {
    const struct CPU_State initial_cpu = {.pc=0xc578, .a=0x3a, .x=0x58, .y=0xd8, .sp=0xac, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xc578, .value=0xe8}, {.addr=0xc579, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xc57a, .a=0x52, .x=0x58, .y=0xd8, .sp=0xac, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc578, .value=0xe8}, {.addr=0xc579, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xc578, .value=0xe8, .type=IO_READ},
        {.addr=0xc579, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0343) {
    const struct CPU_State initial_cpu = {.pc=0xef47, .a=0xa2, .x=0x15, .y=0x38, .sp=0x22, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xef47, .value=0xe8}, {.addr=0xef48, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xef49, .a=0xd3, .x=0x15, .y=0x38, .sp=0x22, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xef47, .value=0xe8}, {.addr=0xef48, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xef47, .value=0xe8, .type=IO_READ},
        {.addr=0xef48, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0344) {
    const struct CPU_State initial_cpu = {.pc=0x0fba, .a=0x34, .x=0x03, .y=0xc5, .sp=0x9e, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0fba, .value=0xe8}, {.addr=0x0fbb, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x0fbc, .a=0x41, .x=0x03, .y=0xc5, .sp=0x9e, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0fba, .value=0xe8}, {.addr=0x0fbb, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x0fba, .value=0xe8, .type=IO_READ},
        {.addr=0x0fbb, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0345) {
    const struct CPU_State initial_cpu = {.pc=0xb87d, .a=0xbe, .x=0x90, .y=0x57, .sp=0x71, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xb87d, .value=0xe8}, {.addr=0xb87e, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xb87f, .a=0x16, .x=0x90, .y=0x57, .sp=0x71, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xb87d, .value=0xe8}, {.addr=0xb87e, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xb87d, .value=0xe8, .type=IO_READ},
        {.addr=0xb87e, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0346) {
    const struct CPU_State initial_cpu = {.pc=0xa9e8, .a=0xab, .x=0x12, .y=0xd2, .sp=0x42, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xa9e8, .value=0xe8}, {.addr=0xa9e9, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xa9ea, .a=0x27, .x=0x12, .y=0xd2, .sp=0x42, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xa9e8, .value=0xe8}, {.addr=0xa9e9, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xa9e8, .value=0xe8, .type=IO_READ},
        {.addr=0xa9e9, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0347) {
    const struct CPU_State initial_cpu = {.pc=0x655e, .a=0x24, .x=0xfd, .y=0xa2, .sp=0xa7, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x655e, .value=0xe8}, {.addr=0x655f, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x6560, .a=0x90, .x=0xfd, .y=0xa2, .sp=0xa7, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x655e, .value=0xe8}, {.addr=0x655f, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x655e, .value=0xe8, .type=IO_READ},
        {.addr=0x655f, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0348) {
    const struct CPU_State initial_cpu = {.pc=0x723b, .a=0x6f, .x=0xc2, .y=0x0f, .sp=0x8c, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x723b, .value=0xe8}, {.addr=0x723c, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x723d, .a=0xc2, .x=0xc2, .y=0x0f, .sp=0x8c, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x723b, .value=0xe8}, {.addr=0x723c, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x723b, .value=0xe8, .type=IO_READ},
        {.addr=0x723c, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0349) {
    const struct CPU_State initial_cpu = {.pc=0x890c, .a=0xac, .x=0xfe, .y=0x69, .sp=0x00, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x890c, .value=0xe8}, {.addr=0x890d, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x890e, .a=0xe7, .x=0xfe, .y=0x69, .sp=0x00, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x890c, .value=0xe8}, {.addr=0x890d, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x890c, .value=0xe8, .type=IO_READ},
        {.addr=0x890d, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_034A) {
    const struct CPU_State initial_cpu = {.pc=0x5153, .a=0x1f, .x=0xb9, .y=0x8d, .sp=0xd1, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x5153, .value=0xe8}, {.addr=0x5154, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x5155, .a=0xdd, .x=0xb9, .y=0x8d, .sp=0xd1, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x5153, .value=0xe8}, {.addr=0x5154, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x5153, .value=0xe8, .type=IO_READ},
        {.addr=0x5154, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_034B) {
    const struct CPU_State initial_cpu = {.pc=0xf201, .a=0x2c, .x=0xca, .y=0x40, .sp=0x94, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xf201, .value=0xe8}, {.addr=0xf202, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xf203, .a=0x1a, .x=0xca, .y=0x40, .sp=0x94, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xf201, .value=0xe8}, {.addr=0xf202, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xf201, .value=0xe8, .type=IO_READ},
        {.addr=0xf202, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_034C) {
    const struct CPU_State initial_cpu = {.pc=0x295b, .a=0x55, .x=0x7c, .y=0xf4, .sp=0x88, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x295b, .value=0xe8}, {.addr=0x295c, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x295d, .a=0x67, .x=0x7c, .y=0xf4, .sp=0x88, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x295b, .value=0xe8}, {.addr=0x295c, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x295b, .value=0xe8, .type=IO_READ},
        {.addr=0x295c, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_034D) {
    const struct CPU_State initial_cpu = {.pc=0xbc96, .a=0xdc, .x=0x2a, .y=0x88, .sp=0xf8, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xbc96, .value=0xe8}, {.addr=0xbc97, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xbc98, .a=0xc4, .x=0x2a, .y=0x88, .sp=0xf8, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xbc96, .value=0xe8}, {.addr=0xbc97, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xbc96, .value=0xe8, .type=IO_READ},
        {.addr=0xbc97, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_034E) {
    const struct CPU_State initial_cpu = {.pc=0x0dde, .a=0xb0, .x=0x09, .y=0x13, .sp=0x78, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0dde, .value=0xe8}, {.addr=0x0ddf, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x0de0, .a=0xf5, .x=0x09, .y=0x13, .sp=0x78, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0dde, .value=0xe8}, {.addr=0x0ddf, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x0dde, .value=0xe8, .type=IO_READ},
        {.addr=0x0ddf, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_034F) {
    const struct CPU_State initial_cpu = {.pc=0x9a30, .a=0x46, .x=0xdf, .y=0xf5, .sp=0x6e, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x9a30, .value=0xe8}, {.addr=0x9a31, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x9a32, .a=0xef, .x=0xdf, .y=0xf5, .sp=0x6e, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x9a30, .value=0xe8}, {.addr=0x9a31, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x9a30, .value=0xe8, .type=IO_READ},
        {.addr=0x9a31, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0350) {
    const struct CPU_State initial_cpu = {.pc=0x4bec, .a=0x7b, .x=0x68, .y=0x4e, .sp=0x9f, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x4bec, .value=0xe8}, {.addr=0x4bed, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4bee, .a=0x46, .x=0x68, .y=0x4e, .sp=0x9f, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x4bec, .value=0xe8}, {.addr=0x4bed, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4bec, .value=0xe8, .type=IO_READ},
        {.addr=0x4bed, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0351) {
    const struct CPU_State initial_cpu = {.pc=0xdec9, .a=0xfd, .x=0x83, .y=0xc8, .sp=0x97, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xdec9, .value=0xe8}, {.addr=0xdeca, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xdecb, .a=0xda, .x=0x83, .y=0xc8, .sp=0x97, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xdec9, .value=0xe8}, {.addr=0xdeca, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xdec9, .value=0xe8, .type=IO_READ},
        {.addr=0xdeca, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0352) {
    const struct CPU_State initial_cpu = {.pc=0xa7fe, .a=0x1a, .x=0xcc, .y=0x76, .sp=0x64, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xa7fe, .value=0xe8}, {.addr=0xa7ff, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xa800, .a=0x6f, .x=0xcc, .y=0x76, .sp=0x64, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xa7fe, .value=0xe8}, {.addr=0xa7ff, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xa7fe, .value=0xe8, .type=IO_READ},
        {.addr=0xa7ff, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0353) {
    const struct CPU_State initial_cpu = {.pc=0xe291, .a=0x0c, .x=0xb7, .y=0x2b, .sp=0xf0, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xe291, .value=0xe8}, {.addr=0xe292, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xe293, .a=0xeb, .x=0xb7, .y=0x2b, .sp=0xf0, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xe291, .value=0xe8}, {.addr=0xe292, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xe291, .value=0xe8, .type=IO_READ},
        {.addr=0xe292, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0354) {
    const struct CPU_State initial_cpu = {.pc=0xdc4a, .a=0xcc, .x=0x93, .y=0x51, .sp=0xd7, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xdc4a, .value=0xe8}, {.addr=0xdc4b, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xdc4c, .a=0x76, .x=0x93, .y=0x51, .sp=0xd7, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xdc4a, .value=0xe8}, {.addr=0xdc4b, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xdc4a, .value=0xe8, .type=IO_READ},
        {.addr=0xdc4b, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0355) {
    const struct CPU_State initial_cpu = {.pc=0xecb1, .a=0x2d, .x=0x99, .y=0x66, .sp=0xf1, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xecb1, .value=0xe8}, {.addr=0xecb2, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xecb3, .a=0xc4, .x=0x99, .y=0x66, .sp=0xf1, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xecb1, .value=0xe8}, {.addr=0xecb2, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xecb1, .value=0xe8, .type=IO_READ},
        {.addr=0xecb2, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0356) {
    const struct CPU_State initial_cpu = {.pc=0xd7d5, .a=0x82, .x=0x54, .y=0xdd, .sp=0xc6, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xd7d5, .value=0xe8}, {.addr=0xd7d6, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xd7d7, .a=0x16, .x=0x54, .y=0xdd, .sp=0xc6, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xd7d5, .value=0xe8}, {.addr=0xd7d6, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xd7d5, .value=0xe8, .type=IO_READ},
        {.addr=0xd7d6, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0357) {
    const struct CPU_State initial_cpu = {.pc=0xd1c2, .a=0xb0, .x=0xe6, .y=0xa7, .sp=0x60, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xd1c2, .value=0xe8}, {.addr=0xd1c3, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xd1c4, .a=0x4a, .x=0xe6, .y=0xa7, .sp=0x60, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xd1c2, .value=0xe8}, {.addr=0xd1c3, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xd1c2, .value=0xe8, .type=IO_READ},
        {.addr=0xd1c3, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0358) {
    const struct CPU_State initial_cpu = {.pc=0x8eee, .a=0xea, .x=0xc9, .y=0xd9, .sp=0x3f, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x8eee, .value=0xe8}, {.addr=0x8eef, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x8ef0, .a=0x54, .x=0xc9, .y=0xd9, .sp=0x3f, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x8eee, .value=0xe8}, {.addr=0x8eef, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x8eee, .value=0xe8, .type=IO_READ},
        {.addr=0x8eef, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0359) {
    const struct CPU_State initial_cpu = {.pc=0x4d48, .a=0x04, .x=0x92, .y=0x1f, .sp=0xad, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x4d48, .value=0xe8}, {.addr=0x4d49, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x4d4a, .a=0x18, .x=0x92, .y=0x1f, .sp=0xad, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x4d48, .value=0xe8}, {.addr=0x4d49, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x4d48, .value=0xe8, .type=IO_READ},
        {.addr=0x4d49, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_035A) {
    const struct CPU_State initial_cpu = {.pc=0x4bea, .a=0xe3, .x=0x85, .y=0x3c, .sp=0x6e, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x4bea, .value=0xe8}, {.addr=0x4beb, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x4bec, .a=0x2e, .x=0x85, .y=0x3c, .sp=0x6e, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x4bea, .value=0xe8}, {.addr=0x4beb, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x4bea, .value=0xe8, .type=IO_READ},
        {.addr=0x4beb, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_035B) {
    const struct CPU_State initial_cpu = {.pc=0xc726, .a=0x21, .x=0x1a, .y=0xa8, .sp=0x08, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xc726, .value=0xe8}, {.addr=0xc727, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc728, .a=0x9f, .x=0x1a, .y=0xa8, .sp=0x08, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc726, .value=0xe8}, {.addr=0xc727, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc726, .value=0xe8, .type=IO_READ},
        {.addr=0xc727, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_035C) {
    const struct CPU_State initial_cpu = {.pc=0xe131, .a=0x12, .x=0x3a, .y=0xf8, .sp=0xd0, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xe131, .value=0xe8}, {.addr=0xe132, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xe133, .a=0x88, .x=0x3a, .y=0xf8, .sp=0xd0, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xe131, .value=0xe8}, {.addr=0xe132, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xe131, .value=0xe8, .type=IO_READ},
        {.addr=0xe132, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_035D) {
    const struct CPU_State initial_cpu = {.pc=0x74da, .a=0x7e, .x=0x22, .y=0xa2, .sp=0x3d, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x74da, .value=0xe8}, {.addr=0x74db, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x74dc, .a=0x33, .x=0x22, .y=0xa2, .sp=0x3d, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x74da, .value=0xe8}, {.addr=0x74db, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x74da, .value=0xe8, .type=IO_READ},
        {.addr=0x74db, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_035E) {
    const struct CPU_State initial_cpu = {.pc=0xe8c4, .a=0x2c, .x=0x0e, .y=0x23, .sp=0xaf, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xe8c4, .value=0xe8}, {.addr=0xe8c5, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xe8c6, .a=0xc1, .x=0x0e, .y=0x23, .sp=0xaf, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xe8c4, .value=0xe8}, {.addr=0xe8c5, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xe8c4, .value=0xe8, .type=IO_READ},
        {.addr=0xe8c5, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_035F) {
    const struct CPU_State initial_cpu = {.pc=0x2296, .a=0x4b, .x=0x48, .y=0x2c, .sp=0xab, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x2296, .value=0xe8}, {.addr=0x2297, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x2298, .a=0x30, .x=0x48, .y=0x2c, .sp=0xab, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x2296, .value=0xe8}, {.addr=0x2297, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x2296, .value=0xe8, .type=IO_READ},
        {.addr=0x2297, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0360) {
    const struct CPU_State initial_cpu = {.pc=0x1309, .a=0x18, .x=0xb1, .y=0x32, .sp=0x9b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x1309, .value=0xe8}, {.addr=0x130a, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x130b, .a=0x30, .x=0xb1, .y=0x32, .sp=0x9b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x1309, .value=0xe8}, {.addr=0x130a, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x1309, .value=0xe8, .type=IO_READ},
        {.addr=0x130a, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0361) {
    const struct CPU_State initial_cpu = {.pc=0x1f30, .a=0x2b, .x=0xe5, .y=0x9a, .sp=0xdd, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x1f30, .value=0xe8}, {.addr=0x1f31, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x1f32, .a=0xd5, .x=0xe5, .y=0x9a, .sp=0xdd, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x1f30, .value=0xe8}, {.addr=0x1f31, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x1f30, .value=0xe8, .type=IO_READ},
        {.addr=0x1f31, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0362) {
    const struct CPU_State initial_cpu = {.pc=0xa891, .a=0xe9, .x=0x99, .y=0xb9, .sp=0xf1, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xa891, .value=0xe8}, {.addr=0xa892, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xa893, .a=0x43, .x=0x99, .y=0xb9, .sp=0xf1, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xa891, .value=0xe8}, {.addr=0xa892, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xa891, .value=0xe8, .type=IO_READ},
        {.addr=0xa892, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0363) {
    const struct CPU_State initial_cpu = {.pc=0x79f3, .a=0xb1, .x=0x17, .y=0xc2, .sp=0xa1, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x79f3, .value=0xe8}, {.addr=0x79f4, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x79f5, .a=0x3e, .x=0x17, .y=0xc2, .sp=0xa1, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x79f3, .value=0xe8}, {.addr=0x79f4, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x79f3, .value=0xe8, .type=IO_READ},
        {.addr=0x79f4, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0364) {
    const struct CPU_State initial_cpu = {.pc=0x8953, .a=0x07, .x=0x72, .y=0x5b, .sp=0x0c, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x8953, .value=0xe8}, {.addr=0x8954, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x8955, .a=0x63, .x=0x72, .y=0x5b, .sp=0x0c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x8953, .value=0xe8}, {.addr=0x8954, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x8953, .value=0xe8, .type=IO_READ},
        {.addr=0x8954, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0365) {
    const struct CPU_State initial_cpu = {.pc=0x63c7, .a=0x98, .x=0xc6, .y=0xb4, .sp=0x42, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x63c7, .value=0xe8}, {.addr=0x63c8, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x63c9, .a=0x02, .x=0xc6, .y=0xb4, .sp=0x42, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x63c7, .value=0xe8}, {.addr=0x63c8, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x63c7, .value=0xe8, .type=IO_READ},
        {.addr=0x63c8, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0366) {
    const struct CPU_State initial_cpu = {.pc=0xa013, .a=0xa9, .x=0x43, .y=0x40, .sp=0x56, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xa013, .value=0xe8}, {.addr=0xa014, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xa015, .a=0xef, .x=0x43, .y=0x40, .sp=0x56, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xa013, .value=0xe8}, {.addr=0xa014, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xa013, .value=0xe8, .type=IO_READ},
        {.addr=0xa014, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0367) {
    const struct CPU_State initial_cpu = {.pc=0xfb6a, .a=0x38, .x=0x22, .y=0xa5, .sp=0xa4, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xfb6a, .value=0xe8}, {.addr=0xfb6b, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xfb6c, .a=0xc5, .x=0x22, .y=0xa5, .sp=0xa4, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xfb6a, .value=0xe8}, {.addr=0xfb6b, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xfb6a, .value=0xe8, .type=IO_READ},
        {.addr=0xfb6b, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0368) {
    const struct CPU_State initial_cpu = {.pc=0x4ae3, .a=0x41, .x=0x2d, .y=0xd7, .sp=0xe4, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x4ae3, .value=0xe8}, {.addr=0x4ae4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4ae5, .a=0xe0, .x=0x2d, .y=0xd7, .sp=0xe4, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x4ae3, .value=0xe8}, {.addr=0x4ae4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4ae3, .value=0xe8, .type=IO_READ},
        {.addr=0x4ae4, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0369) {
    const struct CPU_State initial_cpu = {.pc=0x046c, .a=0x45, .x=0x20, .y=0x01, .sp=0xfa, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x046c, .value=0xe8}, {.addr=0x046d, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x046e, .a=0xb0, .x=0x20, .y=0x01, .sp=0xfa, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x046c, .value=0xe8}, {.addr=0x046d, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x046c, .value=0xe8, .type=IO_READ},
        {.addr=0x046d, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_036A) {
    const struct CPU_State initial_cpu = {.pc=0x9f07, .a=0x45, .x=0x01, .y=0xcb, .sp=0xc0, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x9f07, .value=0xe8}, {.addr=0x9f08, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x9f09, .a=0xef, .x=0x01, .y=0xcb, .sp=0xc0, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x9f07, .value=0xe8}, {.addr=0x9f08, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x9f07, .value=0xe8, .type=IO_READ},
        {.addr=0x9f08, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_036B) {
    const struct CPU_State initial_cpu = {.pc=0x5cfd, .a=0x97, .x=0x9d, .y=0xfc, .sp=0x41, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x5cfd, .value=0xe8}, {.addr=0x5cfe, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5cff, .a=0x86, .x=0x9d, .y=0xfc, .sp=0x41, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x5cfd, .value=0xe8}, {.addr=0x5cfe, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5cfd, .value=0xe8, .type=IO_READ},
        {.addr=0x5cfe, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_036C) {
    const struct CPU_State initial_cpu = {.pc=0x5bcd, .a=0x8e, .x=0x5a, .y=0x0e, .sp=0x26, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x5bcd, .value=0xe8}, {.addr=0x5bce, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x5bcf, .a=0x1b, .x=0x5a, .y=0x0e, .sp=0x26, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x5bcd, .value=0xe8}, {.addr=0x5bce, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x5bcd, .value=0xe8, .type=IO_READ},
        {.addr=0x5bce, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_036D) {
    const struct CPU_State initial_cpu = {.pc=0x7205, .a=0xaa, .x=0x1b, .y=0xce, .sp=0x39, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x7205, .value=0xe8}, {.addr=0x7206, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x7207, .a=0xc4, .x=0x1b, .y=0xce, .sp=0x39, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x7205, .value=0xe8}, {.addr=0x7206, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x7205, .value=0xe8, .type=IO_READ},
        {.addr=0x7206, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_036E) {
    const struct CPU_State initial_cpu = {.pc=0xa8f9, .a=0xa1, .x=0x85, .y=0x7e, .sp=0x2e, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xa8f9, .value=0xe8}, {.addr=0xa8fa, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xa8fb, .a=0x5f, .x=0x85, .y=0x7e, .sp=0x2e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xa8f9, .value=0xe8}, {.addr=0xa8fa, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xa8f9, .value=0xe8, .type=IO_READ},
        {.addr=0xa8fa, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_036F) {
    const struct CPU_State initial_cpu = {.pc=0x307d, .a=0x18, .x=0xec, .y=0xfc, .sp=0x7a, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x307d, .value=0xe8}, {.addr=0x307e, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x307f, .a=0x97, .x=0xec, .y=0xfc, .sp=0x7a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x307d, .value=0xe8}, {.addr=0x307e, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x307d, .value=0xe8, .type=IO_READ},
        {.addr=0x307e, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0370) {
    const struct CPU_State initial_cpu = {.pc=0xdfed, .a=0x95, .x=0x1d, .y=0xab, .sp=0x9a, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xdfed, .value=0xe8}, {.addr=0xdfee, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xdfef, .a=0x39, .x=0x1d, .y=0xab, .sp=0x9a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xdfed, .value=0xe8}, {.addr=0xdfee, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xdfed, .value=0xe8, .type=IO_READ},
        {.addr=0xdfee, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0371) {
    const struct CPU_State initial_cpu = {.pc=0xec13, .a=0x49, .x=0x64, .y=0x2b, .sp=0x7b, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xec13, .value=0xe8}, {.addr=0xec14, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xec15, .a=0xaf, .x=0x64, .y=0x2b, .sp=0x7b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xec13, .value=0xe8}, {.addr=0xec14, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xec13, .value=0xe8, .type=IO_READ},
        {.addr=0xec14, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0372) {
    const struct CPU_State initial_cpu = {.pc=0xf564, .a=0x36, .x=0x91, .y=0xde, .sp=0xed, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xf564, .value=0xe8}, {.addr=0xf565, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf566, .a=0x5c, .x=0x91, .y=0xde, .sp=0xed, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xf564, .value=0xe8}, {.addr=0xf565, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf564, .value=0xe8, .type=IO_READ},
        {.addr=0xf565, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0373) {
    const struct CPU_State initial_cpu = {.pc=0x125a, .a=0xe1, .x=0xbf, .y=0xbf, .sp=0x99, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x125a, .value=0xe8}, {.addr=0x125b, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x125c, .a=0x17, .x=0xbf, .y=0xbf, .sp=0x99, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x125a, .value=0xe8}, {.addr=0x125b, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x125a, .value=0xe8, .type=IO_READ},
        {.addr=0x125b, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0374) {
    const struct CPU_State initial_cpu = {.pc=0xd4cc, .a=0xd7, .x=0x6a, .y=0x60, .sp=0x18, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xd4cc, .value=0xe8}, {.addr=0xd4cd, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xd4ce, .a=0x47, .x=0x6a, .y=0x60, .sp=0x18, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xd4cc, .value=0xe8}, {.addr=0xd4cd, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xd4cc, .value=0xe8, .type=IO_READ},
        {.addr=0xd4cd, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0375) {
    const struct CPU_State initial_cpu = {.pc=0xa173, .a=0x44, .x=0x2e, .y=0x83, .sp=0x29, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xa173, .value=0xe8}, {.addr=0xa174, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xa175, .a=0x45, .x=0x2e, .y=0x83, .sp=0x29, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xa173, .value=0xe8}, {.addr=0xa174, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xa173, .value=0xe8, .type=IO_READ},
        {.addr=0xa174, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0376) {
    const struct CPU_State initial_cpu = {.pc=0x9bb1, .a=0x96, .x=0x25, .y=0x1d, .sp=0x46, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x9bb1, .value=0xe8}, {.addr=0x9bb2, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x9bb3, .a=0x68, .x=0x25, .y=0x1d, .sp=0x46, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x9bb1, .value=0xe8}, {.addr=0x9bb2, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x9bb1, .value=0xe8, .type=IO_READ},
        {.addr=0x9bb2, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0377) {
    const struct CPU_State initial_cpu = {.pc=0x9940, .a=0xf7, .x=0x2d, .y=0x34, .sp=0xf5, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x9940, .value=0xe8}, {.addr=0x9941, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x9942, .a=0x41, .x=0x2d, .y=0x34, .sp=0xf5, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x9940, .value=0xe8}, {.addr=0x9941, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x9940, .value=0xe8, .type=IO_READ},
        {.addr=0x9941, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0378) {
    const struct CPU_State initial_cpu = {.pc=0x25ad, .a=0xce, .x=0xe0, .y=0x78, .sp=0xd2, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x25ad, .value=0xe8}, {.addr=0x25ae, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x25af, .a=0xae, .x=0xe0, .y=0x78, .sp=0xd2, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x25ad, .value=0xe8}, {.addr=0x25ae, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x25ad, .value=0xe8, .type=IO_READ},
        {.addr=0x25ae, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0379) {
    const struct CPU_State initial_cpu = {.pc=0xda0c, .a=0xa1, .x=0x96, .y=0xc2, .sp=0x31, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xda0c, .value=0xe8}, {.addr=0xda0d, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xda0e, .a=0xae, .x=0x96, .y=0xc2, .sp=0x31, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xda0c, .value=0xe8}, {.addr=0xda0d, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xda0c, .value=0xe8, .type=IO_READ},
        {.addr=0xda0d, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_037A) {
    const struct CPU_State initial_cpu = {.pc=0x243d, .a=0xd8, .x=0x08, .y=0x5a, .sp=0x79, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x243d, .value=0xe8}, {.addr=0x243e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x243f, .a=0xed, .x=0x08, .y=0x5a, .sp=0x79, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x243d, .value=0xe8}, {.addr=0x243e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x243d, .value=0xe8, .type=IO_READ},
        {.addr=0x243e, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_037B) {
    const struct CPU_State initial_cpu = {.pc=0x9d47, .a=0x08, .x=0xef, .y=0x4e, .sp=0x47, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x9d47, .value=0xe8}, {.addr=0x9d48, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x9d49, .a=0xd5, .x=0xef, .y=0x4e, .sp=0x47, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x9d47, .value=0xe8}, {.addr=0x9d48, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x9d47, .value=0xe8, .type=IO_READ},
        {.addr=0x9d48, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_037C) {
    const struct CPU_State initial_cpu = {.pc=0xd8e7, .a=0xff, .x=0x0b, .y=0x3d, .sp=0x4b, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xd8e7, .value=0xe8}, {.addr=0xd8e8, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xd8e9, .a=0x25, .x=0x0b, .y=0x3d, .sp=0x4b, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xd8e7, .value=0xe8}, {.addr=0xd8e8, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xd8e7, .value=0xe8, .type=IO_READ},
        {.addr=0xd8e8, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_037D) {
    const struct CPU_State initial_cpu = {.pc=0xcfa6, .a=0x9f, .x=0x38, .y=0x90, .sp=0x9a, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xcfa6, .value=0xe8}, {.addr=0xcfa7, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xcfa8, .a=0xd4, .x=0x38, .y=0x90, .sp=0x9a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xcfa6, .value=0xe8}, {.addr=0xcfa7, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xcfa6, .value=0xe8, .type=IO_READ},
        {.addr=0xcfa7, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_037E) {
    const struct CPU_State initial_cpu = {.pc=0x595d, .a=0x6b, .x=0x25, .y=0x63, .sp=0x8b, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x595d, .value=0xe8}, {.addr=0x595e, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x595f, .a=0x09, .x=0x25, .y=0x63, .sp=0x8b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x595d, .value=0xe8}, {.addr=0x595e, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x595d, .value=0xe8, .type=IO_READ},
        {.addr=0x595e, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_037F) {
    const struct CPU_State initial_cpu = {.pc=0xf0a6, .a=0xdc, .x=0xad, .y=0xfb, .sp=0xa0, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xf0a6, .value=0xe8}, {.addr=0xf0a7, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xf0a8, .a=0x75, .x=0xad, .y=0xfb, .sp=0xa0, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xf0a6, .value=0xe8}, {.addr=0xf0a7, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xf0a6, .value=0xe8, .type=IO_READ},
        {.addr=0xf0a7, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0380) {
    const struct CPU_State initial_cpu = {.pc=0x40b5, .a=0xf7, .x=0x52, .y=0xa7, .sp=0xfe, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x40b5, .value=0xe8}, {.addr=0x40b6, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x40b7, .a=0xf2, .x=0x52, .y=0xa7, .sp=0xfe, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x40b5, .value=0xe8}, {.addr=0x40b6, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x40b5, .value=0xe8, .type=IO_READ},
        {.addr=0x40b6, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0381) {
    const struct CPU_State initial_cpu = {.pc=0xdacd, .a=0x95, .x=0xad, .y=0x4d, .sp=0x21, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xdacd, .value=0xe8}, {.addr=0xdace, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xdacf, .a=0x93, .x=0xad, .y=0x4d, .sp=0x21, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xdacd, .value=0xe8}, {.addr=0xdace, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xdacd, .value=0xe8, .type=IO_READ},
        {.addr=0xdace, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0382) {
    const struct CPU_State initial_cpu = {.pc=0x6a93, .a=0x32, .x=0x39, .y=0xda, .sp=0x45, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x6a93, .value=0xe8}, {.addr=0x6a94, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x6a95, .a=0xba, .x=0x39, .y=0xda, .sp=0x45, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x6a93, .value=0xe8}, {.addr=0x6a94, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x6a93, .value=0xe8, .type=IO_READ},
        {.addr=0x6a94, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0383) {
    const struct CPU_State initial_cpu = {.pc=0x88a3, .a=0xef, .x=0xe2, .y=0x98, .sp=0x4c, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x88a3, .value=0xe8}, {.addr=0x88a4, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x88a5, .a=0xfe, .x=0xe2, .y=0x98, .sp=0x4c, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x88a3, .value=0xe8}, {.addr=0x88a4, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x88a3, .value=0xe8, .type=IO_READ},
        {.addr=0x88a4, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0384) {
    const struct CPU_State initial_cpu = {.pc=0x4356, .a=0xff, .x=0xd0, .y=0xbc, .sp=0x8b, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x4356, .value=0xe8}, {.addr=0x4357, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x4358, .a=0x31, .x=0xd0, .y=0xbc, .sp=0x8b, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x4356, .value=0xe8}, {.addr=0x4357, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x4356, .value=0xe8, .type=IO_READ},
        {.addr=0x4357, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0385) {
    const struct CPU_State initial_cpu = {.pc=0x892e, .a=0x79, .x=0xb5, .y=0x85, .sp=0xda, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x892e, .value=0xe8}, {.addr=0x892f, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x8930, .a=0xf0, .x=0xb5, .y=0x85, .sp=0xda, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x892e, .value=0xe8}, {.addr=0x892f, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x892e, .value=0xe8, .type=IO_READ},
        {.addr=0x892f, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0386) {
    const struct CPU_State initial_cpu = {.pc=0x06ee, .a=0xbe, .x=0xc6, .y=0x06, .sp=0x09, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x06ee, .value=0xe8}, {.addr=0x06ef, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x06f0, .a=0x59, .x=0xc6, .y=0x06, .sp=0x09, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x06ee, .value=0xe8}, {.addr=0x06ef, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x06ee, .value=0xe8, .type=IO_READ},
        {.addr=0x06ef, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0387) {
    const struct CPU_State initial_cpu = {.pc=0xc378, .a=0xa4, .x=0x7f, .y=0x64, .sp=0x73, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xc378, .value=0xe8}, {.addr=0xc379, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xc37a, .a=0x90, .x=0x7f, .y=0x64, .sp=0x73, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xc378, .value=0xe8}, {.addr=0xc379, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xc378, .value=0xe8, .type=IO_READ},
        {.addr=0xc379, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0388) {
    const struct CPU_State initial_cpu = {.pc=0xcf95, .a=0xa6, .x=0xe7, .y=0xaf, .sp=0x38, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xcf95, .value=0xe8}, {.addr=0xcf96, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xcf97, .a=0x81, .x=0xe7, .y=0xaf, .sp=0x38, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xcf95, .value=0xe8}, {.addr=0xcf96, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xcf95, .value=0xe8, .type=IO_READ},
        {.addr=0xcf96, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0389) {
    const struct CPU_State initial_cpu = {.pc=0xe1f2, .a=0xa7, .x=0x3f, .y=0xa4, .sp=0x76, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xe1f2, .value=0xe8}, {.addr=0xe1f3, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xe1f4, .a=0x1b, .x=0x3f, .y=0xa4, .sp=0x76, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xe1f2, .value=0xe8}, {.addr=0xe1f3, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xe1f2, .value=0xe8, .type=IO_READ},
        {.addr=0xe1f3, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_038A) {
    const struct CPU_State initial_cpu = {.pc=0xda55, .a=0xfa, .x=0xd3, .y=0x57, .sp=0x5c, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xda55, .value=0xe8}, {.addr=0xda56, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xda57, .a=0xd2, .x=0xd3, .y=0x57, .sp=0x5c, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xda55, .value=0xe8}, {.addr=0xda56, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xda55, .value=0xe8, .type=IO_READ},
        {.addr=0xda56, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_038B) {
    const struct CPU_State initial_cpu = {.pc=0xef88, .a=0x3e, .x=0x12, .y=0x06, .sp=0xe8, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xef88, .value=0xe8}, {.addr=0xef89, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xef8a, .a=0x74, .x=0x12, .y=0x06, .sp=0xe8, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xef88, .value=0xe8}, {.addr=0xef89, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xef88, .value=0xe8, .type=IO_READ},
        {.addr=0xef89, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_038C) {
    const struct CPU_State initial_cpu = {.pc=0x9aab, .a=0xf9, .x=0x7b, .y=0xa1, .sp=0x72, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x9aab, .value=0xe8}, {.addr=0x9aac, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x9aad, .a=0x1a, .x=0x7b, .y=0xa1, .sp=0x72, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9aab, .value=0xe8}, {.addr=0x9aac, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x9aab, .value=0xe8, .type=IO_READ},
        {.addr=0x9aac, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_038D) {
    const struct CPU_State initial_cpu = {.pc=0x5fb9, .a=0xeb, .x=0x25, .y=0x0b, .sp=0xae, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x5fb9, .value=0xe8}, {.addr=0x5fba, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x5fbb, .a=0x0f, .x=0x25, .y=0x0b, .sp=0xae, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x5fb9, .value=0xe8}, {.addr=0x5fba, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x5fb9, .value=0xe8, .type=IO_READ},
        {.addr=0x5fba, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_038E) {
    const struct CPU_State initial_cpu = {.pc=0x46e0, .a=0xd5, .x=0xb5, .y=0x54, .sp=0x5c, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x46e0, .value=0xe8}, {.addr=0x46e1, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x46e2, .a=0x04, .x=0xb5, .y=0x54, .sp=0x5c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x46e0, .value=0xe8}, {.addr=0x46e1, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x46e0, .value=0xe8, .type=IO_READ},
        {.addr=0x46e1, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_038F) {
    const struct CPU_State initial_cpu = {.pc=0x3cb8, .a=0x1b, .x=0x52, .y=0x5b, .sp=0xc7, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x3cb8, .value=0xe8}, {.addr=0x3cb9, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x3cba, .a=0xbb, .x=0x52, .y=0x5b, .sp=0xc7, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x3cb8, .value=0xe8}, {.addr=0x3cb9, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x3cb8, .value=0xe8, .type=IO_READ},
        {.addr=0x3cb9, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0390) {
    const struct CPU_State initial_cpu = {.pc=0x3ef2, .a=0x1f, .x=0x50, .y=0x2b, .sp=0x97, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x3ef2, .value=0xe8}, {.addr=0x3ef3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3ef4, .a=0xae, .x=0x50, .y=0x2b, .sp=0x97, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x3ef2, .value=0xe8}, {.addr=0x3ef3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3ef2, .value=0xe8, .type=IO_READ},
        {.addr=0x3ef3, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0391) {
    const struct CPU_State initial_cpu = {.pc=0x1ab7, .a=0xc1, .x=0x73, .y=0x35, .sp=0x76, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x1ab7, .value=0xe8}, {.addr=0x1ab8, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x1ab9, .a=0x8f, .x=0x73, .y=0x35, .sp=0x76, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x1ab7, .value=0xe8}, {.addr=0x1ab8, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x1ab7, .value=0xe8, .type=IO_READ},
        {.addr=0x1ab8, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0392) {
    const struct CPU_State initial_cpu = {.pc=0x56c6, .a=0x60, .x=0x4f, .y=0x54, .sp=0xe2, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x56c6, .value=0xe8}, {.addr=0x56c7, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x56c8, .a=0x8f, .x=0x4f, .y=0x54, .sp=0xe2, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x56c6, .value=0xe8}, {.addr=0x56c7, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x56c6, .value=0xe8, .type=IO_READ},
        {.addr=0x56c7, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0393) {
    const struct CPU_State initial_cpu = {.pc=0x4501, .a=0x7a, .x=0x42, .y=0x3a, .sp=0x81, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x4501, .value=0xe8}, {.addr=0x4502, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x4503, .a=0xb6, .x=0x42, .y=0x3a, .sp=0x81, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x4501, .value=0xe8}, {.addr=0x4502, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x4501, .value=0xe8, .type=IO_READ},
        {.addr=0x4502, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0394) {
    const struct CPU_State initial_cpu = {.pc=0xdb55, .a=0xe1, .x=0x40, .y=0x73, .sp=0x7c, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xdb55, .value=0xe8}, {.addr=0xdb56, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xdb57, .a=0xd8, .x=0x40, .y=0x73, .sp=0x7c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xdb55, .value=0xe8}, {.addr=0xdb56, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xdb55, .value=0xe8, .type=IO_READ},
        {.addr=0xdb56, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0395) {
    const struct CPU_State initial_cpu = {.pc=0x4cff, .a=0x5f, .x=0xd5, .y=0x8f, .sp=0x86, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x4cff, .value=0xe8}, {.addr=0x4d00, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4d01, .a=0x5d, .x=0xd5, .y=0x8f, .sp=0x86, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4cff, .value=0xe8}, {.addr=0x4d00, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4cff, .value=0xe8, .type=IO_READ},
        {.addr=0x4d00, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0396) {
    const struct CPU_State initial_cpu = {.pc=0xb5c3, .a=0xb2, .x=0x52, .y=0x5b, .sp=0xb4, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xb5c3, .value=0xe8}, {.addr=0xb5c4, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xb5c5, .a=0x42, .x=0x52, .y=0x5b, .sp=0xb4, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xb5c3, .value=0xe8}, {.addr=0xb5c4, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xb5c3, .value=0xe8, .type=IO_READ},
        {.addr=0xb5c4, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0397) {
    const struct CPU_State initial_cpu = {.pc=0x766e, .a=0xb2, .x=0x92, .y=0x76, .sp=0xe2, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x766e, .value=0xe8}, {.addr=0x766f, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x7670, .a=0x01, .x=0x92, .y=0x76, .sp=0xe2, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x766e, .value=0xe8}, {.addr=0x766f, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x766e, .value=0xe8, .type=IO_READ},
        {.addr=0x766f, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0398) {
    const struct CPU_State initial_cpu = {.pc=0x600a, .a=0x0d, .x=0x1e, .y=0x8d, .sp=0xc0, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x600a, .value=0xe8}, {.addr=0x600b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x600c, .a=0x0d, .x=0x1e, .y=0x8d, .sp=0xc0, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x600a, .value=0xe8}, {.addr=0x600b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x600a, .value=0xe8, .type=IO_READ},
        {.addr=0x600b, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_0399) {
    const struct CPU_State initial_cpu = {.pc=0x98ac, .a=0xa7, .x=0xc8, .y=0x00, .sp=0x78, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x98ac, .value=0xe8}, {.addr=0x98ad, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x98ae, .a=0x8b, .x=0xc8, .y=0x00, .sp=0x78, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x98ac, .value=0xe8}, {.addr=0x98ad, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x98ac, .value=0xe8, .type=IO_READ},
        {.addr=0x98ad, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_039A) {
    const struct CPU_State initial_cpu = {.pc=0xb90e, .a=0x62, .x=0xc3, .y=0x5f, .sp=0x51, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xb90e, .value=0xe8}, {.addr=0xb90f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb910, .a=0x8e, .x=0xc3, .y=0x5f, .sp=0x51, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xb90e, .value=0xe8}, {.addr=0xb90f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb90e, .value=0xe8, .type=IO_READ},
        {.addr=0xb90f, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_039B) {
    const struct CPU_State initial_cpu = {.pc=0xf711, .a=0xe3, .x=0x5f, .y=0x5a, .sp=0xc9, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xf711, .value=0xe8}, {.addr=0xf712, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xf713, .a=0x81, .x=0x5f, .y=0x5a, .sp=0xc9, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xf711, .value=0xe8}, {.addr=0xf712, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xf711, .value=0xe8, .type=IO_READ},
        {.addr=0xf712, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_039C) {
    const struct CPU_State initial_cpu = {.pc=0x4549, .a=0x84, .x=0x03, .y=0x54, .sp=0xbf, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x4549, .value=0xe8}, {.addr=0x454a, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x454b, .a=0xd3, .x=0x03, .y=0x54, .sp=0xbf, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4549, .value=0xe8}, {.addr=0x454a, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x4549, .value=0xe8, .type=IO_READ},
        {.addr=0x454a, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_039D) {
    const struct CPU_State initial_cpu = {.pc=0x8037, .a=0x20, .x=0x40, .y=0xb9, .sp=0x44, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x8037, .value=0xe8}, {.addr=0x8038, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8039, .a=0xae, .x=0x40, .y=0xb9, .sp=0x44, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x8037, .value=0xe8}, {.addr=0x8038, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8037, .value=0xe8, .type=IO_READ},
        {.addr=0x8038, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_039E) {
    const struct CPU_State initial_cpu = {.pc=0xd4b7, .a=0x46, .x=0x74, .y=0x73, .sp=0x11, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xd4b7, .value=0xe8}, {.addr=0xd4b8, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xd4b9, .a=0x1e, .x=0x74, .y=0x73, .sp=0x11, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xd4b7, .value=0xe8}, {.addr=0xd4b8, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xd4b7, .value=0xe8, .type=IO_READ},
        {.addr=0xd4b8, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_039F) {
    const struct CPU_State initial_cpu = {.pc=0x5e68, .a=0xdf, .x=0xbf, .y=0x8f, .sp=0xc2, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x5e68, .value=0xe8}, {.addr=0x5e69, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x5e6a, .a=0x2f, .x=0xbf, .y=0x8f, .sp=0xc2, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x5e68, .value=0xe8}, {.addr=0x5e69, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x5e68, .value=0xe8, .type=IO_READ},
        {.addr=0x5e69, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x4d2a, .a=0x41, .x=0x41, .y=0x16, .sp=0xe5, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x4d2a, .value=0xe8}, {.addr=0x4d2b, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x4d2c, .a=0xba, .x=0x41, .y=0x16, .sp=0xe5, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x4d2a, .value=0xe8}, {.addr=0x4d2b, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x4d2a, .value=0xe8, .type=IO_READ},
        {.addr=0x4d2b, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x6fa9, .a=0x95, .x=0x60, .y=0x6e, .sp=0xd7, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x6fa9, .value=0xe8}, {.addr=0x6faa, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6fab, .a=0xae, .x=0x60, .y=0x6e, .sp=0xd7, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x6fa9, .value=0xe8}, {.addr=0x6faa, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6fa9, .value=0xe8, .type=IO_READ},
        {.addr=0x6faa, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x5af0, .a=0x64, .x=0x78, .y=0x93, .sp=0x2a, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x5af0, .value=0xe8}, {.addr=0x5af1, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x5af2, .a=0x53, .x=0x78, .y=0x93, .sp=0x2a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x5af0, .value=0xe8}, {.addr=0x5af1, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x5af0, .value=0xe8, .type=IO_READ},
        {.addr=0x5af1, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x2b8f, .a=0x73, .x=0x23, .y=0xf9, .sp=0x6e, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x2b8f, .value=0xe8}, {.addr=0x2b90, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2b91, .a=0x60, .x=0x23, .y=0xf9, .sp=0x6e, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x2b8f, .value=0xe8}, {.addr=0x2b90, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2b8f, .value=0xe8, .type=IO_READ},
        {.addr=0x2b90, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xe016, .a=0xfb, .x=0x1f, .y=0x5a, .sp=0x60, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xe016, .value=0xe8}, {.addr=0xe017, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xe018, .a=0x4e, .x=0x1f, .y=0x5a, .sp=0x60, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xe016, .value=0xe8}, {.addr=0xe017, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xe016, .value=0xe8, .type=IO_READ},
        {.addr=0xe017, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x7fe3, .a=0x88, .x=0x76, .y=0xf9, .sp=0x8e, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x7fe3, .value=0xe8}, {.addr=0x7fe4, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x7fe5, .a=0x54, .x=0x76, .y=0xf9, .sp=0x8e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x7fe3, .value=0xe8}, {.addr=0x7fe4, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x7fe3, .value=0xe8, .type=IO_READ},
        {.addr=0x7fe4, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x5280, .a=0x4d, .x=0x9e, .y=0x15, .sp=0x2d, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x5280, .value=0xe8}, {.addr=0x5281, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x5282, .a=0x0e, .x=0x9e, .y=0x15, .sp=0x2d, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x5280, .value=0xe8}, {.addr=0x5281, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x5280, .value=0xe8, .type=IO_READ},
        {.addr=0x5281, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xd29a, .a=0xbe, .x=0x78, .y=0x97, .sp=0x50, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xd29a, .value=0xe8}, {.addr=0xd29b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xd29c, .a=0x3d, .x=0x78, .y=0x97, .sp=0x50, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xd29a, .value=0xe8}, {.addr=0xd29b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xd29a, .value=0xe8, .type=IO_READ},
        {.addr=0xd29b, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x66e0, .a=0x0b, .x=0xcc, .y=0xe3, .sp=0x51, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x66e0, .value=0xe8}, {.addr=0x66e1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x66e2, .a=0x9f, .x=0xcc, .y=0xe3, .sp=0x51, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x66e0, .value=0xe8}, {.addr=0x66e1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x66e0, .value=0xe8, .type=IO_READ},
        {.addr=0x66e1, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x8a2c, .a=0xa9, .x=0x17, .y=0xc1, .sp=0x16, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x8a2c, .value=0xe8}, {.addr=0x8a2d, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x8a2e, .a=0x2f, .x=0x17, .y=0xc1, .sp=0x16, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x8a2c, .value=0xe8}, {.addr=0x8a2d, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x8a2c, .value=0xe8, .type=IO_READ},
        {.addr=0x8a2d, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xd84d, .a=0xe8, .x=0x8a, .y=0xf0, .sp=0x9d, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xd84d, .value=0xe8}, {.addr=0xd84e, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xd84f, .a=0x82, .x=0x8a, .y=0xf0, .sp=0x9d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xd84d, .value=0xe8}, {.addr=0xd84e, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xd84d, .value=0xe8, .type=IO_READ},
        {.addr=0xd84e, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xe501, .a=0x9d, .x=0xc7, .y=0xbc, .sp=0x6f, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xe501, .value=0xe8}, {.addr=0xe502, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xe503, .a=0x30, .x=0xc7, .y=0xbc, .sp=0x6f, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xe501, .value=0xe8}, {.addr=0xe502, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xe501, .value=0xe8, .type=IO_READ},
        {.addr=0xe502, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xc6cb, .a=0x79, .x=0x11, .y=0xad, .sp=0xa0, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xc6cb, .value=0xe8}, {.addr=0xc6cc, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xc6cd, .a=0xfa, .x=0x11, .y=0xad, .sp=0xa0, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xc6cb, .value=0xe8}, {.addr=0xc6cc, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xc6cb, .value=0xe8, .type=IO_READ},
        {.addr=0xc6cc, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xfff7, .a=0x2a, .x=0x1a, .y=0x48, .sp=0xc1, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xfff7, .value=0xe8}, {.addr=0xfff8, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xfff9, .a=0x93, .x=0x1a, .y=0x48, .sp=0xc1, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xfff7, .value=0xe8}, {.addr=0xfff8, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xfff7, .value=0xe8, .type=IO_READ},
        {.addr=0xfff8, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xaa28, .a=0xce, .x=0xf1, .y=0xaa, .sp=0xa4, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xaa28, .value=0xe8}, {.addr=0xaa29, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xaa2a, .a=0x91, .x=0xf1, .y=0xaa, .sp=0xa4, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xaa28, .value=0xe8}, {.addr=0xaa29, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xaa28, .value=0xe8, .type=IO_READ},
        {.addr=0xaa29, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x29f6, .a=0x8d, .x=0x30, .y=0x09, .sp=0x2b, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x29f6, .value=0xe8}, {.addr=0x29f7, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x29f8, .a=0x27, .x=0x30, .y=0x09, .sp=0x2b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x29f6, .value=0xe8}, {.addr=0x29f7, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x29f6, .value=0xe8, .type=IO_READ},
        {.addr=0x29f7, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x4013, .a=0x65, .x=0x43, .y=0xd7, .sp=0xe6, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x4013, .value=0xe8}, {.addr=0x4014, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4015, .a=0x66, .x=0x43, .y=0xd7, .sp=0xe6, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4013, .value=0xe8}, {.addr=0x4014, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4013, .value=0xe8, .type=IO_READ},
        {.addr=0x4014, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x03e0, .a=0xb8, .x=0xea, .y=0xfa, .sp=0xd4, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x03e0, .value=0xe8}, {.addr=0x03e1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x03e2, .a=0xbf, .x=0xea, .y=0xfa, .sp=0xd4, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x03e0, .value=0xe8}, {.addr=0x03e1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x03e0, .value=0xe8, .type=IO_READ},
        {.addr=0x03e1, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x6716, .a=0x95, .x=0x44, .y=0xef, .sp=0x76, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x6716, .value=0xe8}, {.addr=0x6717, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x6718, .a=0xd2, .x=0x44, .y=0xef, .sp=0x76, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x6716, .value=0xe8}, {.addr=0x6717, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x6716, .value=0xe8, .type=IO_READ},
        {.addr=0x6717, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xdc0e, .a=0x3b, .x=0x5e, .y=0xc0, .sp=0xea, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xdc0e, .value=0xe8}, {.addr=0xdc0f, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xdc10, .a=0x61, .x=0x5e, .y=0xc0, .sp=0xea, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xdc0e, .value=0xe8}, {.addr=0xdc0f, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xdc0e, .value=0xe8, .type=IO_READ},
        {.addr=0xdc0f, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x3d77, .a=0x5c, .x=0xd8, .y=0x6d, .sp=0x62, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x3d77, .value=0xe8}, {.addr=0x3d78, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x3d79, .a=0xf2, .x=0xd8, .y=0x6d, .sp=0x62, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x3d77, .value=0xe8}, {.addr=0x3d78, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x3d77, .value=0xe8, .type=IO_READ},
        {.addr=0x3d78, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xcc7a, .a=0x88, .x=0xdb, .y=0xd3, .sp=0xfd, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xcc7a, .value=0xe8}, {.addr=0xcc7b, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xcc7c, .a=0x44, .x=0xdb, .y=0xd3, .sp=0xfd, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xcc7a, .value=0xe8}, {.addr=0xcc7b, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xcc7a, .value=0xe8, .type=IO_READ},
        {.addr=0xcc7b, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xcf7a, .a=0x95, .x=0x39, .y=0x42, .sp=0x7d, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xcf7a, .value=0xe8}, {.addr=0xcf7b, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xcf7c, .a=0x57, .x=0x39, .y=0x42, .sp=0x7d, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xcf7a, .value=0xe8}, {.addr=0xcf7b, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xcf7a, .value=0xe8, .type=IO_READ},
        {.addr=0xcf7b, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xe680, .a=0xe5, .x=0xd1, .y=0xc7, .sp=0xbf, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xe680, .value=0xe8}, {.addr=0xe681, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xe682, .a=0x16, .x=0xd1, .y=0xc7, .sp=0xbf, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xe680, .value=0xe8}, {.addr=0xe681, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xe680, .value=0xe8, .type=IO_READ},
        {.addr=0xe681, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xdd55, .a=0xa0, .x=0x83, .y=0xc4, .sp=0x63, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xdd55, .value=0xe8}, {.addr=0xdd56, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xdd57, .a=0x99, .x=0x83, .y=0xc4, .sp=0x63, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xdd55, .value=0xe8}, {.addr=0xdd56, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xdd55, .value=0xe8, .type=IO_READ},
        {.addr=0xdd56, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x58cb, .a=0xe4, .x=0x71, .y=0xa7, .sp=0xfe, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x58cb, .value=0xe8}, {.addr=0x58cc, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x58cd, .a=0xb8, .x=0x71, .y=0xa7, .sp=0xfe, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x58cb, .value=0xe8}, {.addr=0x58cc, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x58cb, .value=0xe8, .type=IO_READ},
        {.addr=0x58cc, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x32d7, .a=0x56, .x=0xfa, .y=0xf8, .sp=0x93, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x32d7, .value=0xe8}, {.addr=0x32d8, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x32d9, .a=0xc8, .x=0xfa, .y=0xf8, .sp=0x93, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x32d7, .value=0xe8}, {.addr=0x32d8, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x32d7, .value=0xe8, .type=IO_READ},
        {.addr=0x32d8, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xdea7, .a=0x88, .x=0x67, .y=0x09, .sp=0xce, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xdea7, .value=0xe8}, {.addr=0xdea8, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xdea9, .a=0xda, .x=0x67, .y=0x09, .sp=0xce, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xdea7, .value=0xe8}, {.addr=0xdea8, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xdea7, .value=0xe8, .type=IO_READ},
        {.addr=0xdea8, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x4786, .a=0x7f, .x=0x87, .y=0xa5, .sp=0x65, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x4786, .value=0xe8}, {.addr=0x4787, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4788, .a=0x06, .x=0x87, .y=0xa5, .sp=0x65, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x4786, .value=0xe8}, {.addr=0x4787, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4786, .value=0xe8, .type=IO_READ},
        {.addr=0x4787, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x8310, .a=0x5e, .x=0x10, .y=0xc8, .sp=0x1c, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x8310, .value=0xe8}, {.addr=0x8311, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x8312, .a=0x56, .x=0x10, .y=0xc8, .sp=0x1c, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x8310, .value=0xe8}, {.addr=0x8311, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x8310, .value=0xe8, .type=IO_READ},
        {.addr=0x8311, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x995c, .a=0x86, .x=0x48, .y=0x71, .sp=0x26, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x995c, .value=0xe8}, {.addr=0x995d, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x995e, .a=0x52, .x=0x48, .y=0x71, .sp=0x26, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x995c, .value=0xe8}, {.addr=0x995d, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x995c, .value=0xe8, .type=IO_READ},
        {.addr=0x995d, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xb1c1, .a=0xa3, .x=0x0f, .y=0x57, .sp=0x4c, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xb1c1, .value=0xe8}, {.addr=0xb1c2, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xb1c3, .a=0x6f, .x=0x0f, .y=0x57, .sp=0x4c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xb1c1, .value=0xe8}, {.addr=0xb1c2, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xb1c1, .value=0xe8, .type=IO_READ},
        {.addr=0xb1c2, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x28bd, .a=0x10, .x=0x16, .y=0xbd, .sp=0x18, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x28bd, .value=0xe8}, {.addr=0x28be, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x28bf, .a=0x7b, .x=0x16, .y=0xbd, .sp=0x18, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x28bd, .value=0xe8}, {.addr=0x28be, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x28bd, .value=0xe8, .type=IO_READ},
        {.addr=0x28be, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xcb19, .a=0x3d, .x=0xb9, .y=0x45, .sp=0x8f, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xcb19, .value=0xe8}, {.addr=0xcb1a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcb1b, .a=0x86, .x=0xb9, .y=0x45, .sp=0x8f, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xcb19, .value=0xe8}, {.addr=0xcb1a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcb19, .value=0xe8, .type=IO_READ},
        {.addr=0xcb1a, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x692e, .a=0x88, .x=0xb8, .y=0xb3, .sp=0xed, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x692e, .value=0xe8}, {.addr=0x692f, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x6930, .a=0x69, .x=0xb8, .y=0xb3, .sp=0xed, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x692e, .value=0xe8}, {.addr=0x692f, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x692e, .value=0xe8, .type=IO_READ},
        {.addr=0x692f, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x5efa, .a=0xe6, .x=0x57, .y=0xbe, .sp=0x68, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x5efa, .value=0xe8}, {.addr=0x5efb, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x5efc, .a=0x53, .x=0x57, .y=0xbe, .sp=0x68, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x5efa, .value=0xe8}, {.addr=0x5efb, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x5efa, .value=0xe8, .type=IO_READ},
        {.addr=0x5efb, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x82a4, .a=0x17, .x=0x14, .y=0x43, .sp=0x98, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x82a4, .value=0xe8}, {.addr=0x82a5, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x82a6, .a=0xdd, .x=0x14, .y=0x43, .sp=0x98, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x82a4, .value=0xe8}, {.addr=0x82a5, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x82a4, .value=0xe8, .type=IO_READ},
        {.addr=0x82a5, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x38fe, .a=0xca, .x=0x78, .y=0xbf, .sp=0x65, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x38fe, .value=0xe8}, {.addr=0x38ff, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x3900, .a=0x15, .x=0x78, .y=0xbf, .sp=0x65, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x38fe, .value=0xe8}, {.addr=0x38ff, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x38fe, .value=0xe8, .type=IO_READ},
        {.addr=0x38ff, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x9102, .a=0xc9, .x=0x4a, .y=0xd2, .sp=0x4d, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x9102, .value=0xe8}, {.addr=0x9103, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9104, .a=0x0d, .x=0x4a, .y=0xd2, .sp=0x4d, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x9102, .value=0xe8}, {.addr=0x9103, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9102, .value=0xe8, .type=IO_READ},
        {.addr=0x9103, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xf0be, .a=0x0c, .x=0x23, .y=0x6f, .sp=0x1e, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xf0be, .value=0xe8}, {.addr=0xf0bf, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xf0c0, .a=0xa8, .x=0x23, .y=0x6f, .sp=0x1e, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xf0be, .value=0xe8}, {.addr=0xf0bf, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xf0be, .value=0xe8, .type=IO_READ},
        {.addr=0xf0bf, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x8ca2, .a=0x5b, .x=0x22, .y=0x6d, .sp=0xbd, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x8ca2, .value=0xe8}, {.addr=0x8ca3, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x8ca4, .a=0x70, .x=0x22, .y=0x6d, .sp=0xbd, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x8ca2, .value=0xe8}, {.addr=0x8ca3, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x8ca2, .value=0xe8, .type=IO_READ},
        {.addr=0x8ca3, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xc8ba, .a=0xd0, .x=0x18, .y=0xa4, .sp=0xa9, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xc8ba, .value=0xe8}, {.addr=0xc8bb, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xc8bc, .a=0x58, .x=0x18, .y=0xa4, .sp=0xa9, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xc8ba, .value=0xe8}, {.addr=0xc8bb, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xc8ba, .value=0xe8, .type=IO_READ},
        {.addr=0xc8bb, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x5709, .a=0xde, .x=0x14, .y=0x92, .sp=0x54, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x5709, .value=0xe8}, {.addr=0x570a, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x570b, .a=0xaa, .x=0x14, .y=0x92, .sp=0x54, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x5709, .value=0xe8}, {.addr=0x570a, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x5709, .value=0xe8, .type=IO_READ},
        {.addr=0x570a, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xae0e, .a=0xa8, .x=0xd2, .y=0x24, .sp=0xd8, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xae0e, .value=0xe8}, {.addr=0xae0f, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xae10, .a=0x6a, .x=0xd2, .y=0x24, .sp=0xd8, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xae0e, .value=0xe8}, {.addr=0xae0f, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xae0e, .value=0xe8, .type=IO_READ},
        {.addr=0xae0f, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xe788, .a=0xad, .x=0x5f, .y=0xfe, .sp=0x9b, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xe788, .value=0xe8}, {.addr=0xe789, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe78a, .a=0x00, .x=0x5f, .y=0xfe, .sp=0x9b, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xe788, .value=0xe8}, {.addr=0xe789, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe788, .value=0xe8, .type=IO_READ},
        {.addr=0xe789, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x1380, .a=0x4b, .x=0xec, .y=0x0e, .sp=0x66, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x1380, .value=0xe8}, {.addr=0x1381, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1382, .a=0x06, .x=0xec, .y=0x0e, .sp=0x66, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x1380, .value=0xe8}, {.addr=0x1381, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1380, .value=0xe8, .type=IO_READ},
        {.addr=0x1381, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xc80a, .a=0xc0, .x=0x8f, .y=0x5c, .sp=0x9f, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xc80a, .value=0xe8}, {.addr=0xc80b, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xc80c, .a=0x22, .x=0x8f, .y=0x5c, .sp=0x9f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc80a, .value=0xe8}, {.addr=0xc80b, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xc80a, .value=0xe8, .type=IO_READ},
        {.addr=0xc80b, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x82e1, .a=0x2a, .x=0x63, .y=0x53, .sp=0x97, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x82e1, .value=0xe8}, {.addr=0x82e2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x82e3, .a=0x4d, .x=0x63, .y=0x53, .sp=0x97, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x82e1, .value=0xe8}, {.addr=0x82e2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x82e1, .value=0xe8, .type=IO_READ},
        {.addr=0x82e2, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x6f82, .a=0xc1, .x=0xbf, .y=0x43, .sp=0x61, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x6f82, .value=0xe8}, {.addr=0x6f83, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x6f84, .a=0x49, .x=0xbf, .y=0x43, .sp=0x61, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x6f82, .value=0xe8}, {.addr=0x6f83, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x6f82, .value=0xe8, .type=IO_READ},
        {.addr=0x6f83, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x8cad, .a=0xde, .x=0x5a, .y=0xe2, .sp=0x64, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x8cad, .value=0xe8}, {.addr=0x8cae, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x8caf, .a=0x8c, .x=0x5a, .y=0xe2, .sp=0x64, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x8cad, .value=0xe8}, {.addr=0x8cae, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x8cad, .value=0xe8, .type=IO_READ},
        {.addr=0x8cae, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x7159, .a=0x40, .x=0xf8, .y=0xe0, .sp=0x8e, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x7159, .value=0xe8}, {.addr=0x715a, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x715b, .a=0x33, .x=0xf8, .y=0xe0, .sp=0x8e, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x7159, .value=0xe8}, {.addr=0x715a, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x7159, .value=0xe8, .type=IO_READ},
        {.addr=0x715a, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xc4ed, .a=0xa7, .x=0xa0, .y=0xb8, .sp=0xa2, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xc4ed, .value=0xe8}, {.addr=0xc4ee, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xc4ef, .a=0x3f, .x=0xa0, .y=0xb8, .sp=0xa2, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xc4ed, .value=0xe8}, {.addr=0xc4ee, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xc4ed, .value=0xe8, .type=IO_READ},
        {.addr=0xc4ee, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x5c40, .a=0xce, .x=0xb6, .y=0x5b, .sp=0xd6, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x5c40, .value=0xe8}, {.addr=0x5c41, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x5c42, .a=0x5b, .x=0xb6, .y=0x5b, .sp=0xd6, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x5c40, .value=0xe8}, {.addr=0x5c41, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x5c40, .value=0xe8, .type=IO_READ},
        {.addr=0x5c41, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x8217, .a=0x86, .x=0x42, .y=0xdc, .sp=0x47, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x8217, .value=0xe8}, {.addr=0x8218, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x8219, .a=0x14, .x=0x42, .y=0xdc, .sp=0x47, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x8217, .value=0xe8}, {.addr=0x8218, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x8217, .value=0xe8, .type=IO_READ},
        {.addr=0x8218, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x4d65, .a=0x8d, .x=0x7d, .y=0x08, .sp=0xe7, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x4d65, .value=0xe8}, {.addr=0x4d66, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x4d67, .a=0x8c, .x=0x7d, .y=0x08, .sp=0xe7, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x4d65, .value=0xe8}, {.addr=0x4d66, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x4d65, .value=0xe8, .type=IO_READ},
        {.addr=0x4d66, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xe0dd, .a=0xf7, .x=0x12, .y=0xc0, .sp=0x2c, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xe0dd, .value=0xe8}, {.addr=0xe0de, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe0df, .a=0x20, .x=0x12, .y=0xc0, .sp=0x2c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xe0dd, .value=0xe8}, {.addr=0xe0de, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe0dd, .value=0xe8, .type=IO_READ},
        {.addr=0xe0de, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x28d8, .a=0x01, .x=0x67, .y=0x01, .sp=0x47, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x28d8, .value=0xe8}, {.addr=0x28d9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x28da, .a=0xe0, .x=0x67, .y=0x01, .sp=0x47, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x28d8, .value=0xe8}, {.addr=0x28d9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x28d8, .value=0xe8, .type=IO_READ},
        {.addr=0x28d9, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xec38, .a=0x95, .x=0xec, .y=0x04, .sp=0xc4, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xec38, .value=0xe8}, {.addr=0xec39, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xec3a, .a=0x73, .x=0xec, .y=0x04, .sp=0xc4, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xec38, .value=0xe8}, {.addr=0xec39, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xec38, .value=0xe8, .type=IO_READ},
        {.addr=0xec39, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xb8b1, .a=0x61, .x=0xd9, .y=0x82, .sp=0xc6, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xb8b1, .value=0xe8}, {.addr=0xb8b2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xb8b3, .a=0x60, .x=0xd9, .y=0x82, .sp=0xc6, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xb8b1, .value=0xe8}, {.addr=0xb8b2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xb8b1, .value=0xe8, .type=IO_READ},
        {.addr=0xb8b2, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x11ba, .a=0x3c, .x=0x7c, .y=0x84, .sp=0x40, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x11ba, .value=0xe8}, {.addr=0x11bb, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x11bc, .a=0x54, .x=0x7c, .y=0x84, .sp=0x40, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x11ba, .value=0xe8}, {.addr=0x11bb, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x11ba, .value=0xe8, .type=IO_READ},
        {.addr=0x11bb, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xb848, .a=0xc2, .x=0xdb, .y=0x30, .sp=0xcd, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xb848, .value=0xe8}, {.addr=0xb849, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb84a, .a=0x20, .x=0xdb, .y=0x30, .sp=0xcd, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xb848, .value=0xe8}, {.addr=0xb849, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb848, .value=0xe8, .type=IO_READ},
        {.addr=0xb849, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x2c52, .a=0x4e, .x=0x31, .y=0x03, .sp=0xd7, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x2c52, .value=0xe8}, {.addr=0x2c53, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x2c54, .a=0x4a, .x=0x31, .y=0x03, .sp=0xd7, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x2c52, .value=0xe8}, {.addr=0x2c53, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x2c52, .value=0xe8, .type=IO_READ},
        {.addr=0x2c53, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x0335, .a=0x3e, .x=0x36, .y=0x98, .sp=0x2a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0335, .value=0xe8}, {.addr=0x0336, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x0337, .a=0x5b, .x=0x36, .y=0x98, .sp=0x2a, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0335, .value=0xe8}, {.addr=0x0336, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x0335, .value=0xe8, .type=IO_READ},
        {.addr=0x0336, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x8642, .a=0xa1, .x=0x0d, .y=0xb3, .sp=0x94, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x8642, .value=0xe8}, {.addr=0x8643, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x8644, .a=0x01, .x=0x0d, .y=0xb3, .sp=0x94, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x8642, .value=0xe8}, {.addr=0x8643, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x8642, .value=0xe8, .type=IO_READ},
        {.addr=0x8643, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x5dfa, .a=0xcb, .x=0xf4, .y=0x3b, .sp=0xb9, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x5dfa, .value=0xe8}, {.addr=0x5dfb, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x5dfc, .a=0x22, .x=0xf4, .y=0x3b, .sp=0xb9, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x5dfa, .value=0xe8}, {.addr=0x5dfb, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x5dfa, .value=0xe8, .type=IO_READ},
        {.addr=0x5dfb, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x9808, .a=0x0c, .x=0x35, .y=0xc8, .sp=0xec, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x9808, .value=0xe8}, {.addr=0x9809, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x980a, .a=0x2e, .x=0x35, .y=0xc8, .sp=0xec, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x9808, .value=0xe8}, {.addr=0x9809, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x9808, .value=0xe8, .type=IO_READ},
        {.addr=0x9809, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xb392, .a=0x25, .x=0xe4, .y=0x63, .sp=0xdd, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xb392, .value=0xe8}, {.addr=0xb393, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xb394, .a=0x19, .x=0xe4, .y=0x63, .sp=0xdd, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xb392, .value=0xe8}, {.addr=0xb393, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xb392, .value=0xe8, .type=IO_READ},
        {.addr=0xb393, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xc3af, .a=0x14, .x=0x5a, .y=0x15, .sp=0x79, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xc3af, .value=0xe8}, {.addr=0xc3b0, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xc3b1, .a=0x6e, .x=0x5a, .y=0x15, .sp=0x79, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc3af, .value=0xe8}, {.addr=0xc3b0, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xc3af, .value=0xe8, .type=IO_READ},
        {.addr=0xc3b0, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x894c, .a=0x80, .x=0xc2, .y=0xdb, .sp=0xc7, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x894c, .value=0xe8}, {.addr=0x894d, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x894e, .a=0xbb, .x=0xc2, .y=0xdb, .sp=0xc7, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x894c, .value=0xe8}, {.addr=0x894d, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x894c, .value=0xe8, .type=IO_READ},
        {.addr=0x894d, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x1caa, .a=0xf6, .x=0x80, .y=0xcc, .sp=0xf9, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x1caa, .value=0xe8}, {.addr=0x1cab, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x1cac, .a=0x82, .x=0x80, .y=0xcc, .sp=0xf9, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x1caa, .value=0xe8}, {.addr=0x1cab, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x1caa, .value=0xe8, .type=IO_READ},
        {.addr=0x1cab, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x4dc7, .a=0xd9, .x=0x61, .y=0xf3, .sp=0x5a, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x4dc7, .value=0xe8}, {.addr=0x4dc8, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x4dc9, .a=0xe7, .x=0x61, .y=0xf3, .sp=0x5a, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4dc7, .value=0xe8}, {.addr=0x4dc8, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x4dc7, .value=0xe8, .type=IO_READ},
        {.addr=0x4dc8, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E8, _E8_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x39ef, .a=0x1c, .x=0x83, .y=0x18, .sp=0x73, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x39ef, .value=0xe8}, {.addr=0x39f0, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x39f1, .a=0x29, .x=0x83, .y=0x18, .sp=0x73, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x39ef, .value=0xe8}, {.addr=0x39f0, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x39ef, .value=0xe8, .type=IO_READ},
        {.addr=0x39f0, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E8 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
