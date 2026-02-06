#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_AD, _AD_0000) {
    const struct CPU_State initial_cpu = {.pc=0xe723, .a=0x01, .x=0x9c, .y=0xea, .sp=0xda, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xe723, .value=0xad}, {.addr=0xe724, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xe725, .a=0x01, .x=0x9c, .y=0xea, .sp=0xda, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xe723, .value=0xad}, {.addr=0xe724, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xe723, .value=0xad, .type=IO_READ},
        {.addr=0xe724, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0001) {
    const struct CPU_State initial_cpu = {.pc=0x2a23, .a=0x2f, .x=0x36, .y=0xdd, .sp=0xc6, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x2a23, .value=0xad}, {.addr=0x2a24, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2a25, .a=0x2f, .x=0x36, .y=0xdd, .sp=0xc6, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x2a23, .value=0xad}, {.addr=0x2a24, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2a23, .value=0xad, .type=IO_READ},
        {.addr=0x2a24, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0002) {
    const struct CPU_State initial_cpu = {.pc=0x2660, .a=0xe5, .x=0xa7, .y=0x5d, .sp=0x7f, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x2660, .value=0xad}, {.addr=0x2661, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x2662, .a=0xe5, .x=0xa7, .y=0x5d, .sp=0x7f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x2660, .value=0xad}, {.addr=0x2661, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x2660, .value=0xad, .type=IO_READ},
        {.addr=0x2661, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0003) {
    const struct CPU_State initial_cpu = {.pc=0x63c5, .a=0xb8, .x=0xe8, .y=0xcf, .sp=0xaa, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x63c5, .value=0xad}, {.addr=0x63c6, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x63c7, .a=0xb8, .x=0xe8, .y=0xcf, .sp=0xaa, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x63c5, .value=0xad}, {.addr=0x63c6, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x63c5, .value=0xad, .type=IO_READ},
        {.addr=0x63c6, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0004) {
    const struct CPU_State initial_cpu = {.pc=0x8415, .a=0xde, .x=0x71, .y=0xea, .sp=0xb9, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x8415, .value=0xad}, {.addr=0x8416, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x8417, .a=0xde, .x=0x71, .y=0xea, .sp=0xb9, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x8415, .value=0xad}, {.addr=0x8416, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x8415, .value=0xad, .type=IO_READ},
        {.addr=0x8416, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0005) {
    const struct CPU_State initial_cpu = {.pc=0x1888, .a=0xcb, .x=0xdb, .y=0x30, .sp=0x4d, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x1888, .value=0xad}, {.addr=0x1889, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x188a, .a=0xcb, .x=0xdb, .y=0x30, .sp=0x4d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x1888, .value=0xad}, {.addr=0x1889, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x1888, .value=0xad, .type=IO_READ},
        {.addr=0x1889, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0006) {
    const struct CPU_State initial_cpu = {.pc=0xfa4e, .a=0x86, .x=0xda, .y=0xd3, .sp=0x8d, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xfa4e, .value=0xad}, {.addr=0xfa4f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfa50, .a=0x86, .x=0xda, .y=0xd3, .sp=0x8d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xfa4e, .value=0xad}, {.addr=0xfa4f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfa4e, .value=0xad, .type=IO_READ},
        {.addr=0xfa4f, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0007) {
    const struct CPU_State initial_cpu = {.pc=0xf152, .a=0x69, .x=0x4b, .y=0xc2, .sp=0x98, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xf152, .value=0xad}, {.addr=0xf153, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xf154, .a=0x69, .x=0x4b, .y=0xc2, .sp=0x98, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xf152, .value=0xad}, {.addr=0xf153, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xf152, .value=0xad, .type=IO_READ},
        {.addr=0xf153, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0008) {
    const struct CPU_State initial_cpu = {.pc=0x7143, .a=0xa9, .x=0xe9, .y=0xe4, .sp=0x46, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x7143, .value=0xad}, {.addr=0x7144, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x7145, .a=0xa9, .x=0xe9, .y=0xe4, .sp=0x46, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x7143, .value=0xad}, {.addr=0x7144, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x7143, .value=0xad, .type=IO_READ},
        {.addr=0x7144, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0009) {
    const struct CPU_State initial_cpu = {.pc=0x8b32, .a=0xeb, .x=0x9b, .y=0xad, .sp=0xc3, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x8b32, .value=0xad}, {.addr=0x8b33, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x8b34, .a=0xeb, .x=0x9b, .y=0xad, .sp=0xc3, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x8b32, .value=0xad}, {.addr=0x8b33, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x8b32, .value=0xad, .type=IO_READ},
        {.addr=0x8b33, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_000A) {
    const struct CPU_State initial_cpu = {.pc=0xee47, .a=0xb2, .x=0x5c, .y=0x06, .sp=0xf4, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xee47, .value=0xad}, {.addr=0xee48, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xee49, .a=0xb2, .x=0x5c, .y=0x06, .sp=0xf4, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xee47, .value=0xad}, {.addr=0xee48, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xee47, .value=0xad, .type=IO_READ},
        {.addr=0xee48, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_000B) {
    const struct CPU_State initial_cpu = {.pc=0xf700, .a=0xe8, .x=0x2f, .y=0x02, .sp=0x8f, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xf700, .value=0xad}, {.addr=0xf701, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xf702, .a=0xe8, .x=0x2f, .y=0x02, .sp=0x8f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xf700, .value=0xad}, {.addr=0xf701, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xf700, .value=0xad, .type=IO_READ},
        {.addr=0xf701, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_000C) {
    const struct CPU_State initial_cpu = {.pc=0x9888, .a=0x43, .x=0x90, .y=0x36, .sp=0x5e, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x9888, .value=0xad}, {.addr=0x9889, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x988a, .a=0x43, .x=0x90, .y=0x36, .sp=0x5e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x9888, .value=0xad}, {.addr=0x9889, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x9888, .value=0xad, .type=IO_READ},
        {.addr=0x9889, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_000D) {
    const struct CPU_State initial_cpu = {.pc=0xd0da, .a=0xc5, .x=0x51, .y=0x24, .sp=0x98, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xd0da, .value=0xad}, {.addr=0xd0db, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xd0dc, .a=0xc5, .x=0x51, .y=0x24, .sp=0x98, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xd0da, .value=0xad}, {.addr=0xd0db, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xd0da, .value=0xad, .type=IO_READ},
        {.addr=0xd0db, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_000E) {
    const struct CPU_State initial_cpu = {.pc=0xc112, .a=0xc5, .x=0x2f, .y=0x80, .sp=0x5a, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xc112, .value=0xad}, {.addr=0xc113, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xc114, .a=0xc5, .x=0x2f, .y=0x80, .sp=0x5a, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xc112, .value=0xad}, {.addr=0xc113, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xc112, .value=0xad, .type=IO_READ},
        {.addr=0xc113, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_000F) {
    const struct CPU_State initial_cpu = {.pc=0x0abc, .a=0x97, .x=0x4e, .y=0x4d, .sp=0x79, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0abc, .value=0xad}, {.addr=0x0abd, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x0abe, .a=0x97, .x=0x4e, .y=0x4d, .sp=0x79, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0abc, .value=0xad}, {.addr=0x0abd, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x0abc, .value=0xad, .type=IO_READ},
        {.addr=0x0abd, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0010) {
    const struct CPU_State initial_cpu = {.pc=0xacd0, .a=0x47, .x=0x85, .y=0xd7, .sp=0x7f, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xacd0, .value=0xad}, {.addr=0xacd1, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xacd2, .a=0x47, .x=0x85, .y=0xd7, .sp=0x7f, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xacd0, .value=0xad}, {.addr=0xacd1, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xacd0, .value=0xad, .type=IO_READ},
        {.addr=0xacd1, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0011) {
    const struct CPU_State initial_cpu = {.pc=0xfae2, .a=0x66, .x=0xf7, .y=0x3f, .sp=0xb2, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xfae2, .value=0xad}, {.addr=0xfae3, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xfae4, .a=0x66, .x=0xf7, .y=0x3f, .sp=0xb2, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xfae2, .value=0xad}, {.addr=0xfae3, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xfae2, .value=0xad, .type=IO_READ},
        {.addr=0xfae3, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0012) {
    const struct CPU_State initial_cpu = {.pc=0x647a, .a=0xd0, .x=0x3e, .y=0x56, .sp=0x5b, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x647a, .value=0xad}, {.addr=0x647b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x647c, .a=0xd0, .x=0x3e, .y=0x56, .sp=0x5b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x647a, .value=0xad}, {.addr=0x647b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x647a, .value=0xad, .type=IO_READ},
        {.addr=0x647b, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0013) {
    const struct CPU_State initial_cpu = {.pc=0xca58, .a=0xcc, .x=0x51, .y=0xbb, .sp=0x2c, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xca58, .value=0xad}, {.addr=0xca59, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xca5a, .a=0xcc, .x=0x51, .y=0xbb, .sp=0x2c, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xca58, .value=0xad}, {.addr=0xca59, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xca58, .value=0xad, .type=IO_READ},
        {.addr=0xca59, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0014) {
    const struct CPU_State initial_cpu = {.pc=0xfb92, .a=0xd7, .x=0x05, .y=0xfb, .sp=0xd2, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xfb92, .value=0xad}, {.addr=0xfb93, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xfb94, .a=0xd7, .x=0x05, .y=0xfb, .sp=0xd2, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xfb92, .value=0xad}, {.addr=0xfb93, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xfb92, .value=0xad, .type=IO_READ},
        {.addr=0xfb93, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0015) {
    const struct CPU_State initial_cpu = {.pc=0x94de, .a=0xa5, .x=0xd3, .y=0xdb, .sp=0x76, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x94de, .value=0xad}, {.addr=0x94df, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x94e0, .a=0xa5, .x=0xd3, .y=0xdb, .sp=0x76, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x94de, .value=0xad}, {.addr=0x94df, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x94de, .value=0xad, .type=IO_READ},
        {.addr=0x94df, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0016) {
    const struct CPU_State initial_cpu = {.pc=0x4827, .a=0xf7, .x=0x57, .y=0xaa, .sp=0x60, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x4827, .value=0xad}, {.addr=0x4828, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4829, .a=0xf7, .x=0x57, .y=0xaa, .sp=0x60, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x4827, .value=0xad}, {.addr=0x4828, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4827, .value=0xad, .type=IO_READ},
        {.addr=0x4828, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0017) {
    const struct CPU_State initial_cpu = {.pc=0x656f, .a=0xda, .x=0x18, .y=0x8d, .sp=0x37, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x656f, .value=0xad}, {.addr=0x6570, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6571, .a=0xda, .x=0x18, .y=0x8d, .sp=0x37, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x656f, .value=0xad}, {.addr=0x6570, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x656f, .value=0xad, .type=IO_READ},
        {.addr=0x6570, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0018) {
    const struct CPU_State initial_cpu = {.pc=0xe83b, .a=0x5b, .x=0x0c, .y=0x48, .sp=0xd0, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xe83b, .value=0xad}, {.addr=0xe83c, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xe83d, .a=0x5b, .x=0x0c, .y=0x48, .sp=0xd0, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xe83b, .value=0xad}, {.addr=0xe83c, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xe83b, .value=0xad, .type=IO_READ},
        {.addr=0xe83c, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0019) {
    const struct CPU_State initial_cpu = {.pc=0x31fc, .a=0x67, .x=0x00, .y=0xb4, .sp=0xb7, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x31fc, .value=0xad}, {.addr=0x31fd, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x31fe, .a=0x67, .x=0x00, .y=0xb4, .sp=0xb7, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x31fc, .value=0xad}, {.addr=0x31fd, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x31fc, .value=0xad, .type=IO_READ},
        {.addr=0x31fd, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_001A) {
    const struct CPU_State initial_cpu = {.pc=0x2460, .a=0x3b, .x=0xd8, .y=0xe5, .sp=0xcf, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x2460, .value=0xad}, {.addr=0x2461, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x2462, .a=0x3b, .x=0xd8, .y=0xe5, .sp=0xcf, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x2460, .value=0xad}, {.addr=0x2461, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x2460, .value=0xad, .type=IO_READ},
        {.addr=0x2461, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_001B) {
    const struct CPU_State initial_cpu = {.pc=0xd6fa, .a=0x4c, .x=0xa0, .y=0x83, .sp=0x17, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xd6fa, .value=0xad}, {.addr=0xd6fb, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd6fc, .a=0x4c, .x=0xa0, .y=0x83, .sp=0x17, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xd6fa, .value=0xad}, {.addr=0xd6fb, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd6fa, .value=0xad, .type=IO_READ},
        {.addr=0xd6fb, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_001C) {
    const struct CPU_State initial_cpu = {.pc=0x81d4, .a=0x0a, .x=0xc5, .y=0x99, .sp=0xcf, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x81d4, .value=0xad}, {.addr=0x81d5, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x81d6, .a=0x0a, .x=0xc5, .y=0x99, .sp=0xcf, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x81d4, .value=0xad}, {.addr=0x81d5, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x81d4, .value=0xad, .type=IO_READ},
        {.addr=0x81d5, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_001D) {
    const struct CPU_State initial_cpu = {.pc=0xe733, .a=0x2e, .x=0xf5, .y=0x44, .sp=0x80, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xe733, .value=0xad}, {.addr=0xe734, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xe735, .a=0x2e, .x=0xf5, .y=0x44, .sp=0x80, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xe733, .value=0xad}, {.addr=0xe734, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xe733, .value=0xad, .type=IO_READ},
        {.addr=0xe734, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_001E) {
    const struct CPU_State initial_cpu = {.pc=0xddcc, .a=0x4d, .x=0x0c, .y=0x48, .sp=0xa9, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xddcc, .value=0xad}, {.addr=0xddcd, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xddce, .a=0x4d, .x=0x0c, .y=0x48, .sp=0xa9, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xddcc, .value=0xad}, {.addr=0xddcd, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xddcc, .value=0xad, .type=IO_READ},
        {.addr=0xddcd, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_001F) {
    const struct CPU_State initial_cpu = {.pc=0xeb0a, .a=0xb9, .x=0xa1, .y=0xa7, .sp=0x2c, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xeb0a, .value=0xad}, {.addr=0xeb0b, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xeb0c, .a=0xb9, .x=0xa1, .y=0xa7, .sp=0x2c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xeb0a, .value=0xad}, {.addr=0xeb0b, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xeb0a, .value=0xad, .type=IO_READ},
        {.addr=0xeb0b, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0020) {
    const struct CPU_State initial_cpu = {.pc=0x991d, .a=0xa2, .x=0xf4, .y=0xbe, .sp=0x81, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x991d, .value=0xad}, {.addr=0x991e, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x991f, .a=0xa2, .x=0xf4, .y=0xbe, .sp=0x81, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x991d, .value=0xad}, {.addr=0x991e, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x991d, .value=0xad, .type=IO_READ},
        {.addr=0x991e, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0021) {
    const struct CPU_State initial_cpu = {.pc=0x9d2f, .a=0x78, .x=0x46, .y=0x3a, .sp=0xf8, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x9d2f, .value=0xad}, {.addr=0x9d30, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x9d31, .a=0x78, .x=0x46, .y=0x3a, .sp=0xf8, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x9d2f, .value=0xad}, {.addr=0x9d30, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x9d2f, .value=0xad, .type=IO_READ},
        {.addr=0x9d30, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0022) {
    const struct CPU_State initial_cpu = {.pc=0x1679, .a=0x14, .x=0xdc, .y=0x31, .sp=0x74, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x1679, .value=0xad}, {.addr=0x167a, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x167b, .a=0x14, .x=0xdc, .y=0x31, .sp=0x74, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x1679, .value=0xad}, {.addr=0x167a, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x1679, .value=0xad, .type=IO_READ},
        {.addr=0x167a, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0023) {
    const struct CPU_State initial_cpu = {.pc=0xbe6a, .a=0xfe, .x=0x0f, .y=0x0b, .sp=0xa4, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xbe6a, .value=0xad}, {.addr=0xbe6b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xbe6c, .a=0xfe, .x=0x0f, .y=0x0b, .sp=0xa4, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xbe6a, .value=0xad}, {.addr=0xbe6b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xbe6a, .value=0xad, .type=IO_READ},
        {.addr=0xbe6b, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0024) {
    const struct CPU_State initial_cpu = {.pc=0xcc0a, .a=0x67, .x=0xa2, .y=0xcf, .sp=0xcd, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xcc0a, .value=0xad}, {.addr=0xcc0b, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xcc0c, .a=0x67, .x=0xa2, .y=0xcf, .sp=0xcd, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xcc0a, .value=0xad}, {.addr=0xcc0b, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xcc0a, .value=0xad, .type=IO_READ},
        {.addr=0xcc0b, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0025) {
    const struct CPU_State initial_cpu = {.pc=0x03b3, .a=0x3a, .x=0x8f, .y=0xb8, .sp=0x0d, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x03b3, .value=0xad}, {.addr=0x03b4, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x03b5, .a=0x3a, .x=0x8f, .y=0xb8, .sp=0x0d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x03b3, .value=0xad}, {.addr=0x03b4, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x03b3, .value=0xad, .type=IO_READ},
        {.addr=0x03b4, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0026) {
    const struct CPU_State initial_cpu = {.pc=0x5b53, .a=0x54, .x=0x05, .y=0x8a, .sp=0x4b, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x5b53, .value=0xad}, {.addr=0x5b54, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x5b55, .a=0x54, .x=0x05, .y=0x8a, .sp=0x4b, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x5b53, .value=0xad}, {.addr=0x5b54, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x5b53, .value=0xad, .type=IO_READ},
        {.addr=0x5b54, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0027) {
    const struct CPU_State initial_cpu = {.pc=0x4529, .a=0x9b, .x=0x34, .y=0xe2, .sp=0x67, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x4529, .value=0xad}, {.addr=0x452a, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x452b, .a=0x9b, .x=0x34, .y=0xe2, .sp=0x67, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x4529, .value=0xad}, {.addr=0x452a, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x4529, .value=0xad, .type=IO_READ},
        {.addr=0x452a, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0028) {
    const struct CPU_State initial_cpu = {.pc=0x425f, .a=0x64, .x=0x56, .y=0x8e, .sp=0x43, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x425f, .value=0xad}, {.addr=0x4260, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x4261, .a=0x64, .x=0x56, .y=0x8e, .sp=0x43, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x425f, .value=0xad}, {.addr=0x4260, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x425f, .value=0xad, .type=IO_READ},
        {.addr=0x4260, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0029) {
    const struct CPU_State initial_cpu = {.pc=0xc7c7, .a=0xee, .x=0xde, .y=0x64, .sp=0xd0, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xc7c7, .value=0xad}, {.addr=0xc7c8, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xc7c9, .a=0xee, .x=0xde, .y=0x64, .sp=0xd0, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xc7c7, .value=0xad}, {.addr=0xc7c8, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xc7c7, .value=0xad, .type=IO_READ},
        {.addr=0xc7c8, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_002A) {
    const struct CPU_State initial_cpu = {.pc=0x5cf8, .a=0x46, .x=0xab, .y=0x10, .sp=0xb6, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x5cf8, .value=0xad}, {.addr=0x5cf9, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x5cfa, .a=0x46, .x=0xab, .y=0x10, .sp=0xb6, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x5cf8, .value=0xad}, {.addr=0x5cf9, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x5cf8, .value=0xad, .type=IO_READ},
        {.addr=0x5cf9, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_002B) {
    const struct CPU_State initial_cpu = {.pc=0x446b, .a=0xa7, .x=0x7c, .y=0x9f, .sp=0x1f, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x446b, .value=0xad}, {.addr=0x446c, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x446d, .a=0xa7, .x=0x7c, .y=0x9f, .sp=0x1f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x446b, .value=0xad}, {.addr=0x446c, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x446b, .value=0xad, .type=IO_READ},
        {.addr=0x446c, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_002C) {
    const struct CPU_State initial_cpu = {.pc=0x8ad6, .a=0x2a, .x=0x96, .y=0x92, .sp=0x7f, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x8ad6, .value=0xad}, {.addr=0x8ad7, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x8ad8, .a=0x2a, .x=0x96, .y=0x92, .sp=0x7f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x8ad6, .value=0xad}, {.addr=0x8ad7, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x8ad6, .value=0xad, .type=IO_READ},
        {.addr=0x8ad7, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_002D) {
    const struct CPU_State initial_cpu = {.pc=0xea4b, .a=0x7e, .x=0x33, .y=0x5d, .sp=0x43, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xea4b, .value=0xad}, {.addr=0xea4c, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xea4d, .a=0x7e, .x=0x33, .y=0x5d, .sp=0x43, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xea4b, .value=0xad}, {.addr=0xea4c, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xea4b, .value=0xad, .type=IO_READ},
        {.addr=0xea4c, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_002E) {
    const struct CPU_State initial_cpu = {.pc=0xcee1, .a=0xcb, .x=0x4f, .y=0x95, .sp=0x5b, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xcee1, .value=0xad}, {.addr=0xcee2, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0xcee3, .a=0xcb, .x=0x4f, .y=0x95, .sp=0x5b, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xcee1, .value=0xad}, {.addr=0xcee2, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0xcee1, .value=0xad, .type=IO_READ},
        {.addr=0xcee2, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_002F) {
    const struct CPU_State initial_cpu = {.pc=0xa8b5, .a=0xb5, .x=0x60, .y=0x80, .sp=0x33, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xa8b5, .value=0xad}, {.addr=0xa8b6, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa8b7, .a=0xb5, .x=0x60, .y=0x80, .sp=0x33, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xa8b5, .value=0xad}, {.addr=0xa8b6, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa8b5, .value=0xad, .type=IO_READ},
        {.addr=0xa8b6, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0030) {
    const struct CPU_State initial_cpu = {.pc=0xa926, .a=0xf2, .x=0xea, .y=0x8c, .sp=0xd6, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xa926, .value=0xad}, {.addr=0xa927, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xa928, .a=0xf2, .x=0xea, .y=0x8c, .sp=0xd6, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xa926, .value=0xad}, {.addr=0xa927, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xa926, .value=0xad, .type=IO_READ},
        {.addr=0xa927, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0031) {
    const struct CPU_State initial_cpu = {.pc=0x7c3e, .a=0xdb, .x=0xc7, .y=0x71, .sp=0x12, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x7c3e, .value=0xad}, {.addr=0x7c3f, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x7c40, .a=0xdb, .x=0xc7, .y=0x71, .sp=0x12, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7c3e, .value=0xad}, {.addr=0x7c3f, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x7c3e, .value=0xad, .type=IO_READ},
        {.addr=0x7c3f, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0032) {
    const struct CPU_State initial_cpu = {.pc=0x10b4, .a=0x50, .x=0xd0, .y=0xa8, .sp=0x5a, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x10b4, .value=0xad}, {.addr=0x10b5, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x10b6, .a=0x50, .x=0xd0, .y=0xa8, .sp=0x5a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x10b4, .value=0xad}, {.addr=0x10b5, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x10b4, .value=0xad, .type=IO_READ},
        {.addr=0x10b5, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0033) {
    const struct CPU_State initial_cpu = {.pc=0xee4a, .a=0x70, .x=0xb8, .y=0x1c, .sp=0x36, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xee4a, .value=0xad}, {.addr=0xee4b, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xee4c, .a=0x70, .x=0xb8, .y=0x1c, .sp=0x36, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xee4a, .value=0xad}, {.addr=0xee4b, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xee4a, .value=0xad, .type=IO_READ},
        {.addr=0xee4b, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0034) {
    const struct CPU_State initial_cpu = {.pc=0x7f73, .a=0x3e, .x=0xc7, .y=0x9d, .sp=0x97, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x7f73, .value=0xad}, {.addr=0x7f74, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x7f75, .a=0x3e, .x=0xc7, .y=0x9d, .sp=0x97, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x7f73, .value=0xad}, {.addr=0x7f74, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x7f73, .value=0xad, .type=IO_READ},
        {.addr=0x7f74, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0035) {
    const struct CPU_State initial_cpu = {.pc=0x8c92, .a=0x67, .x=0xb4, .y=0x39, .sp=0xd3, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x8c92, .value=0xad}, {.addr=0x8c93, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x8c94, .a=0x67, .x=0xb4, .y=0x39, .sp=0xd3, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8c92, .value=0xad}, {.addr=0x8c93, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x8c92, .value=0xad, .type=IO_READ},
        {.addr=0x8c93, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0036) {
    const struct CPU_State initial_cpu = {.pc=0x08c7, .a=0x3a, .x=0xc8, .y=0xa8, .sp=0x3f, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x08c7, .value=0xad}, {.addr=0x08c8, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x08c9, .a=0x3a, .x=0xc8, .y=0xa8, .sp=0x3f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x08c7, .value=0xad}, {.addr=0x08c8, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x08c7, .value=0xad, .type=IO_READ},
        {.addr=0x08c8, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0037) {
    const struct CPU_State initial_cpu = {.pc=0xde85, .a=0xf6, .x=0x36, .y=0xca, .sp=0x3b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xde85, .value=0xad}, {.addr=0xde86, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xde87, .a=0xf6, .x=0x36, .y=0xca, .sp=0x3b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xde85, .value=0xad}, {.addr=0xde86, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xde85, .value=0xad, .type=IO_READ},
        {.addr=0xde86, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0038) {
    const struct CPU_State initial_cpu = {.pc=0xf0c7, .a=0xc3, .x=0xce, .y=0x6b, .sp=0x05, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xf0c7, .value=0xad}, {.addr=0xf0c8, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xf0c9, .a=0xc3, .x=0xce, .y=0x6b, .sp=0x05, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf0c7, .value=0xad}, {.addr=0xf0c8, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xf0c7, .value=0xad, .type=IO_READ},
        {.addr=0xf0c8, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0039) {
    const struct CPU_State initial_cpu = {.pc=0x2ad4, .a=0xa9, .x=0x16, .y=0x2c, .sp=0x2f, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x2ad4, .value=0xad}, {.addr=0x2ad5, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x2ad6, .a=0xa9, .x=0x16, .y=0x2c, .sp=0x2f, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x2ad4, .value=0xad}, {.addr=0x2ad5, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x2ad4, .value=0xad, .type=IO_READ},
        {.addr=0x2ad5, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_003A) {
    const struct CPU_State initial_cpu = {.pc=0xa1f7, .a=0xb7, .x=0x57, .y=0x22, .sp=0x83, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xa1f7, .value=0xad}, {.addr=0xa1f8, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xa1f9, .a=0xb7, .x=0x57, .y=0x22, .sp=0x83, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xa1f7, .value=0xad}, {.addr=0xa1f8, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xa1f7, .value=0xad, .type=IO_READ},
        {.addr=0xa1f8, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_003B) {
    const struct CPU_State initial_cpu = {.pc=0x073c, .a=0x69, .x=0x2e, .y=0xb6, .sp=0x19, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x073c, .value=0xad}, {.addr=0x073d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x073e, .a=0x69, .x=0x2e, .y=0xb6, .sp=0x19, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x073c, .value=0xad}, {.addr=0x073d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x073c, .value=0xad, .type=IO_READ},
        {.addr=0x073d, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_003C) {
    const struct CPU_State initial_cpu = {.pc=0x24d3, .a=0x2d, .x=0x7e, .y=0x5d, .sp=0xea, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x24d3, .value=0xad}, {.addr=0x24d4, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x24d5, .a=0x2d, .x=0x7e, .y=0x5d, .sp=0xea, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x24d3, .value=0xad}, {.addr=0x24d4, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x24d3, .value=0xad, .type=IO_READ},
        {.addr=0x24d4, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_003D) {
    const struct CPU_State initial_cpu = {.pc=0x2c27, .a=0xf9, .x=0x9c, .y=0xf2, .sp=0xf8, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x2c27, .value=0xad}, {.addr=0x2c28, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x2c29, .a=0xf9, .x=0x9c, .y=0xf2, .sp=0xf8, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x2c27, .value=0xad}, {.addr=0x2c28, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x2c27, .value=0xad, .type=IO_READ},
        {.addr=0x2c28, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_003E) {
    const struct CPU_State initial_cpu = {.pc=0x5ed9, .a=0xa8, .x=0x4a, .y=0x81, .sp=0x20, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x5ed9, .value=0xad}, {.addr=0x5eda, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x5edb, .a=0xa8, .x=0x4a, .y=0x81, .sp=0x20, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x5ed9, .value=0xad}, {.addr=0x5eda, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x5ed9, .value=0xad, .type=IO_READ},
        {.addr=0x5eda, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_003F) {
    const struct CPU_State initial_cpu = {.pc=0x223a, .a=0x76, .x=0xad, .y=0x19, .sp=0x15, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x223a, .value=0xad}, {.addr=0x223b, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x223c, .a=0x76, .x=0xad, .y=0x19, .sp=0x15, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x223a, .value=0xad}, {.addr=0x223b, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x223a, .value=0xad, .type=IO_READ},
        {.addr=0x223b, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0040) {
    const struct CPU_State initial_cpu = {.pc=0xfc94, .a=0x62, .x=0x15, .y=0xd3, .sp=0xe7, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xfc94, .value=0xad}, {.addr=0xfc95, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xfc96, .a=0x62, .x=0x15, .y=0xd3, .sp=0xe7, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xfc94, .value=0xad}, {.addr=0xfc95, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xfc94, .value=0xad, .type=IO_READ},
        {.addr=0xfc95, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0041) {
    const struct CPU_State initial_cpu = {.pc=0x277c, .a=0x70, .x=0xf5, .y=0x67, .sp=0x8f, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x277c, .value=0xad}, {.addr=0x277d, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x277e, .a=0x70, .x=0xf5, .y=0x67, .sp=0x8f, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x277c, .value=0xad}, {.addr=0x277d, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x277c, .value=0xad, .type=IO_READ},
        {.addr=0x277d, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0042) {
    const struct CPU_State initial_cpu = {.pc=0x8010, .a=0x29, .x=0xb6, .y=0xa5, .sp=0x5a, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x8010, .value=0xad}, {.addr=0x8011, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x8012, .a=0x29, .x=0xb6, .y=0xa5, .sp=0x5a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x8010, .value=0xad}, {.addr=0x8011, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x8010, .value=0xad, .type=IO_READ},
        {.addr=0x8011, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0043) {
    const struct CPU_State initial_cpu = {.pc=0x188e, .a=0x15, .x=0xb9, .y=0x7a, .sp=0x14, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x188e, .value=0xad}, {.addr=0x188f, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x1890, .a=0x15, .x=0xb9, .y=0x7a, .sp=0x14, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x188e, .value=0xad}, {.addr=0x188f, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x188e, .value=0xad, .type=IO_READ},
        {.addr=0x188f, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0044) {
    const struct CPU_State initial_cpu = {.pc=0xc9c8, .a=0xe5, .x=0x75, .y=0xc5, .sp=0x2e, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xc9c8, .value=0xad}, {.addr=0xc9c9, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xc9ca, .a=0xe5, .x=0x75, .y=0xc5, .sp=0x2e, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xc9c8, .value=0xad}, {.addr=0xc9c9, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xc9c8, .value=0xad, .type=IO_READ},
        {.addr=0xc9c9, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0045) {
    const struct CPU_State initial_cpu = {.pc=0xf657, .a=0x53, .x=0xd1, .y=0x79, .sp=0xa9, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xf657, .value=0xad}, {.addr=0xf658, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf659, .a=0x53, .x=0xd1, .y=0x79, .sp=0xa9, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xf657, .value=0xad}, {.addr=0xf658, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf657, .value=0xad, .type=IO_READ},
        {.addr=0xf658, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0046) {
    const struct CPU_State initial_cpu = {.pc=0xc597, .a=0x7d, .x=0x5a, .y=0x2b, .sp=0xfe, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xc597, .value=0xad}, {.addr=0xc598, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xc599, .a=0x7d, .x=0x5a, .y=0x2b, .sp=0xfe, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xc597, .value=0xad}, {.addr=0xc598, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xc597, .value=0xad, .type=IO_READ},
        {.addr=0xc598, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0047) {
    const struct CPU_State initial_cpu = {.pc=0x1487, .a=0x62, .x=0x5c, .y=0x58, .sp=0x3c, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x1487, .value=0xad}, {.addr=0x1488, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x1489, .a=0x62, .x=0x5c, .y=0x58, .sp=0x3c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x1487, .value=0xad}, {.addr=0x1488, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x1487, .value=0xad, .type=IO_READ},
        {.addr=0x1488, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0048) {
    const struct CPU_State initial_cpu = {.pc=0x9df5, .a=0x4e, .x=0x5d, .y=0xfa, .sp=0xc5, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x9df5, .value=0xad}, {.addr=0x9df6, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x9df7, .a=0x4e, .x=0x5d, .y=0xfa, .sp=0xc5, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x9df5, .value=0xad}, {.addr=0x9df6, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x9df5, .value=0xad, .type=IO_READ},
        {.addr=0x9df6, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0049) {
    const struct CPU_State initial_cpu = {.pc=0x2277, .a=0x7c, .x=0xa4, .y=0xa5, .sp=0x04, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x2277, .value=0xad}, {.addr=0x2278, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x2279, .a=0x7c, .x=0xa4, .y=0xa5, .sp=0x04, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x2277, .value=0xad}, {.addr=0x2278, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x2277, .value=0xad, .type=IO_READ},
        {.addr=0x2278, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_004A) {
    const struct CPU_State initial_cpu = {.pc=0xf428, .a=0xae, .x=0xb7, .y=0xcc, .sp=0x73, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xf428, .value=0xad}, {.addr=0xf429, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xf42a, .a=0xae, .x=0xb7, .y=0xcc, .sp=0x73, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xf428, .value=0xad}, {.addr=0xf429, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xf428, .value=0xad, .type=IO_READ},
        {.addr=0xf429, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_004B) {
    const struct CPU_State initial_cpu = {.pc=0x984e, .a=0x89, .x=0x47, .y=0x44, .sp=0xd0, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x984e, .value=0xad}, {.addr=0x984f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9850, .a=0x89, .x=0x47, .y=0x44, .sp=0xd0, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x984e, .value=0xad}, {.addr=0x984f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x984e, .value=0xad, .type=IO_READ},
        {.addr=0x984f, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_004C) {
    const struct CPU_State initial_cpu = {.pc=0x5c99, .a=0x1b, .x=0x5a, .y=0x7a, .sp=0xe2, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x5c99, .value=0xad}, {.addr=0x5c9a, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x5c9b, .a=0x1b, .x=0x5a, .y=0x7a, .sp=0xe2, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x5c99, .value=0xad}, {.addr=0x5c9a, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x5c99, .value=0xad, .type=IO_READ},
        {.addr=0x5c9a, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_004D) {
    const struct CPU_State initial_cpu = {.pc=0xc4d6, .a=0x44, .x=0x5a, .y=0x8a, .sp=0x46, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xc4d6, .value=0xad}, {.addr=0xc4d7, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xc4d8, .a=0x44, .x=0x5a, .y=0x8a, .sp=0x46, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xc4d6, .value=0xad}, {.addr=0xc4d7, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xc4d6, .value=0xad, .type=IO_READ},
        {.addr=0xc4d7, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_004E) {
    const struct CPU_State initial_cpu = {.pc=0x1ce5, .a=0xf0, .x=0x1b, .y=0x9c, .sp=0x4e, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x1ce5, .value=0xad}, {.addr=0x1ce6, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x1ce7, .a=0xf0, .x=0x1b, .y=0x9c, .sp=0x4e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x1ce5, .value=0xad}, {.addr=0x1ce6, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x1ce5, .value=0xad, .type=IO_READ},
        {.addr=0x1ce6, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_004F) {
    const struct CPU_State initial_cpu = {.pc=0xcfe2, .a=0x46, .x=0x48, .y=0x6f, .sp=0x7d, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xcfe2, .value=0xad}, {.addr=0xcfe3, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xcfe4, .a=0x46, .x=0x48, .y=0x6f, .sp=0x7d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xcfe2, .value=0xad}, {.addr=0xcfe3, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xcfe2, .value=0xad, .type=IO_READ},
        {.addr=0xcfe3, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0050) {
    const struct CPU_State initial_cpu = {.pc=0x02cc, .a=0x4f, .x=0x8a, .y=0x79, .sp=0x44, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x02cc, .value=0xad}, {.addr=0x02cd, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x02ce, .a=0x4f, .x=0x8a, .y=0x79, .sp=0x44, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x02cc, .value=0xad}, {.addr=0x02cd, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x02cc, .value=0xad, .type=IO_READ},
        {.addr=0x02cd, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0051) {
    const struct CPU_State initial_cpu = {.pc=0x6bd6, .a=0x01, .x=0xd4, .y=0xe6, .sp=0x95, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x6bd6, .value=0xad}, {.addr=0x6bd7, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x6bd8, .a=0x01, .x=0xd4, .y=0xe6, .sp=0x95, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6bd6, .value=0xad}, {.addr=0x6bd7, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x6bd6, .value=0xad, .type=IO_READ},
        {.addr=0x6bd7, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0052) {
    const struct CPU_State initial_cpu = {.pc=0x6bf9, .a=0xa5, .x=0x86, .y=0xc6, .sp=0x75, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x6bf9, .value=0xad}, {.addr=0x6bfa, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x6bfb, .a=0xa5, .x=0x86, .y=0xc6, .sp=0x75, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x6bf9, .value=0xad}, {.addr=0x6bfa, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x6bf9, .value=0xad, .type=IO_READ},
        {.addr=0x6bfa, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0053) {
    const struct CPU_State initial_cpu = {.pc=0x0154, .a=0x0b, .x=0xb4, .y=0x45, .sp=0x40, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0xad}, {.addr=0x0155, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x0156, .a=0x0b, .x=0xb4, .y=0x45, .sp=0x40, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xad}, {.addr=0x0155, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x0154, .value=0xad, .type=IO_READ},
        {.addr=0x0155, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0054) {
    const struct CPU_State initial_cpu = {.pc=0x707c, .a=0x85, .x=0x2c, .y=0x75, .sp=0x4e, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x707c, .value=0xad}, {.addr=0x707d, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x707e, .a=0x85, .x=0x2c, .y=0x75, .sp=0x4e, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x707c, .value=0xad}, {.addr=0x707d, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x707c, .value=0xad, .type=IO_READ},
        {.addr=0x707d, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0055) {
    const struct CPU_State initial_cpu = {.pc=0x7534, .a=0x5a, .x=0x57, .y=0xdc, .sp=0x5d, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x7534, .value=0xad}, {.addr=0x7535, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x7536, .a=0x5a, .x=0x57, .y=0xdc, .sp=0x5d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x7534, .value=0xad}, {.addr=0x7535, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x7534, .value=0xad, .type=IO_READ},
        {.addr=0x7535, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0056) {
    const struct CPU_State initial_cpu = {.pc=0x3b39, .a=0xe7, .x=0x6c, .y=0x3d, .sp=0xe7, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x3b39, .value=0xad}, {.addr=0x3b3a, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x3b3b, .a=0xe7, .x=0x6c, .y=0x3d, .sp=0xe7, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x3b39, .value=0xad}, {.addr=0x3b3a, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x3b39, .value=0xad, .type=IO_READ},
        {.addr=0x3b3a, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0057) {
    const struct CPU_State initial_cpu = {.pc=0x42bb, .a=0xcc, .x=0xad, .y=0xea, .sp=0xdd, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x42bb, .value=0xad}, {.addr=0x42bc, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x42bd, .a=0xcc, .x=0xad, .y=0xea, .sp=0xdd, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x42bb, .value=0xad}, {.addr=0x42bc, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x42bb, .value=0xad, .type=IO_READ},
        {.addr=0x42bc, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0058) {
    const struct CPU_State initial_cpu = {.pc=0xf140, .a=0x7f, .x=0x68, .y=0xd6, .sp=0xb7, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xf140, .value=0xad}, {.addr=0xf141, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xf142, .a=0x7f, .x=0x68, .y=0xd6, .sp=0xb7, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xf140, .value=0xad}, {.addr=0xf141, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xf140, .value=0xad, .type=IO_READ},
        {.addr=0xf141, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0059) {
    const struct CPU_State initial_cpu = {.pc=0xafc0, .a=0x26, .x=0x75, .y=0x7d, .sp=0x6d, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xafc0, .value=0xad}, {.addr=0xafc1, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xafc2, .a=0x26, .x=0x75, .y=0x7d, .sp=0x6d, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xafc0, .value=0xad}, {.addr=0xafc1, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xafc0, .value=0xad, .type=IO_READ},
        {.addr=0xafc1, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_005A) {
    const struct CPU_State initial_cpu = {.pc=0x58ad, .a=0x85, .x=0x15, .y=0x7b, .sp=0x44, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x58ad, .value=0xad}, {.addr=0x58ae, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x58af, .a=0x85, .x=0x15, .y=0x7b, .sp=0x44, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x58ad, .value=0xad}, {.addr=0x58ae, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x58ad, .value=0xad, .type=IO_READ},
        {.addr=0x58ae, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_005B) {
    const struct CPU_State initial_cpu = {.pc=0x2768, .a=0x51, .x=0x92, .y=0x48, .sp=0x80, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x2768, .value=0xad}, {.addr=0x2769, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x276a, .a=0x51, .x=0x92, .y=0x48, .sp=0x80, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x2768, .value=0xad}, {.addr=0x2769, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2768, .value=0xad, .type=IO_READ},
        {.addr=0x2769, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_005C) {
    const struct CPU_State initial_cpu = {.pc=0x486a, .a=0x53, .x=0xd0, .y=0xb8, .sp=0xe2, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x486a, .value=0xad}, {.addr=0x486b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x486c, .a=0x53, .x=0xd0, .y=0xb8, .sp=0xe2, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x486a, .value=0xad}, {.addr=0x486b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x486a, .value=0xad, .type=IO_READ},
        {.addr=0x486b, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_005D) {
    const struct CPU_State initial_cpu = {.pc=0xa8c8, .a=0xd3, .x=0x8b, .y=0x8f, .sp=0xf7, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xa8c8, .value=0xad}, {.addr=0xa8c9, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xa8ca, .a=0xd3, .x=0x8b, .y=0x8f, .sp=0xf7, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xa8c8, .value=0xad}, {.addr=0xa8c9, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xa8c8, .value=0xad, .type=IO_READ},
        {.addr=0xa8c9, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_005E) {
    const struct CPU_State initial_cpu = {.pc=0x64d6, .a=0x0c, .x=0x09, .y=0x60, .sp=0x31, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x64d6, .value=0xad}, {.addr=0x64d7, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x64d8, .a=0x0c, .x=0x09, .y=0x60, .sp=0x31, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x64d6, .value=0xad}, {.addr=0x64d7, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x64d6, .value=0xad, .type=IO_READ},
        {.addr=0x64d7, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_005F) {
    const struct CPU_State initial_cpu = {.pc=0x85fc, .a=0x7b, .x=0x08, .y=0xf8, .sp=0x99, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x85fc, .value=0xad}, {.addr=0x85fd, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x85fe, .a=0x7b, .x=0x08, .y=0xf8, .sp=0x99, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x85fc, .value=0xad}, {.addr=0x85fd, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x85fc, .value=0xad, .type=IO_READ},
        {.addr=0x85fd, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0060) {
    const struct CPU_State initial_cpu = {.pc=0xa3ca, .a=0x37, .x=0x3f, .y=0xdf, .sp=0x8a, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xa3ca, .value=0xad}, {.addr=0xa3cb, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xa3cc, .a=0x37, .x=0x3f, .y=0xdf, .sp=0x8a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xa3ca, .value=0xad}, {.addr=0xa3cb, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xa3ca, .value=0xad, .type=IO_READ},
        {.addr=0xa3cb, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0061) {
    const struct CPU_State initial_cpu = {.pc=0x9c48, .a=0x0d, .x=0x2e, .y=0xe1, .sp=0xbe, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x9c48, .value=0xad}, {.addr=0x9c49, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x9c4a, .a=0x0d, .x=0x2e, .y=0xe1, .sp=0xbe, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x9c48, .value=0xad}, {.addr=0x9c49, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x9c48, .value=0xad, .type=IO_READ},
        {.addr=0x9c49, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0062) {
    const struct CPU_State initial_cpu = {.pc=0xc1d8, .a=0xca, .x=0x03, .y=0x8b, .sp=0x6b, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xc1d8, .value=0xad}, {.addr=0xc1d9, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc1da, .a=0xca, .x=0x03, .y=0x8b, .sp=0x6b, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xc1d8, .value=0xad}, {.addr=0xc1d9, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc1d8, .value=0xad, .type=IO_READ},
        {.addr=0xc1d9, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0063) {
    const struct CPU_State initial_cpu = {.pc=0x4af8, .a=0xdd, .x=0x6b, .y=0x83, .sp=0xf5, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x4af8, .value=0xad}, {.addr=0x4af9, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x4afa, .a=0xdd, .x=0x6b, .y=0x83, .sp=0xf5, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4af8, .value=0xad}, {.addr=0x4af9, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x4af8, .value=0xad, .type=IO_READ},
        {.addr=0x4af9, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0064) {
    const struct CPU_State initial_cpu = {.pc=0xe5e4, .a=0x9a, .x=0x35, .y=0x02, .sp=0x93, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xe5e4, .value=0xad}, {.addr=0xe5e5, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xe5e6, .a=0x9a, .x=0x35, .y=0x02, .sp=0x93, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xe5e4, .value=0xad}, {.addr=0xe5e5, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xe5e4, .value=0xad, .type=IO_READ},
        {.addr=0xe5e5, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0065) {
    const struct CPU_State initial_cpu = {.pc=0xa14c, .a=0xd2, .x=0x27, .y=0x9c, .sp=0xff, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xa14c, .value=0xad}, {.addr=0xa14d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa14e, .a=0xd2, .x=0x27, .y=0x9c, .sp=0xff, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa14c, .value=0xad}, {.addr=0xa14d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa14c, .value=0xad, .type=IO_READ},
        {.addr=0xa14d, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0066) {
    const struct CPU_State initial_cpu = {.pc=0x6e40, .a=0xe3, .x=0x8a, .y=0x9c, .sp=0x60, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x6e40, .value=0xad}, {.addr=0x6e41, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x6e42, .a=0xe3, .x=0x8a, .y=0x9c, .sp=0x60, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x6e40, .value=0xad}, {.addr=0x6e41, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x6e40, .value=0xad, .type=IO_READ},
        {.addr=0x6e41, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0067) {
    const struct CPU_State initial_cpu = {.pc=0x370d, .a=0xd3, .x=0x52, .y=0xc4, .sp=0x0a, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x370d, .value=0xad}, {.addr=0x370e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x370f, .a=0xd3, .x=0x52, .y=0xc4, .sp=0x0a, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x370d, .value=0xad}, {.addr=0x370e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x370d, .value=0xad, .type=IO_READ},
        {.addr=0x370e, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0068) {
    const struct CPU_State initial_cpu = {.pc=0x0d6a, .a=0x3e, .x=0xd6, .y=0x4f, .sp=0x16, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0d6a, .value=0xad}, {.addr=0x0d6b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0d6c, .a=0x3e, .x=0xd6, .y=0x4f, .sp=0x16, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0d6a, .value=0xad}, {.addr=0x0d6b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0d6a, .value=0xad, .type=IO_READ},
        {.addr=0x0d6b, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0069) {
    const struct CPU_State initial_cpu = {.pc=0xdf1e, .a=0x4c, .x=0xbc, .y=0x15, .sp=0x07, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xdf1e, .value=0xad}, {.addr=0xdf1f, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xdf20, .a=0x4c, .x=0xbc, .y=0x15, .sp=0x07, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xdf1e, .value=0xad}, {.addr=0xdf1f, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xdf1e, .value=0xad, .type=IO_READ},
        {.addr=0xdf1f, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_006A) {
    const struct CPU_State initial_cpu = {.pc=0x3432, .a=0x01, .x=0xa3, .y=0xa9, .sp=0x0a, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x3432, .value=0xad}, {.addr=0x3433, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x3434, .a=0x01, .x=0xa3, .y=0xa9, .sp=0x0a, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x3432, .value=0xad}, {.addr=0x3433, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x3432, .value=0xad, .type=IO_READ},
        {.addr=0x3433, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_006B) {
    const struct CPU_State initial_cpu = {.pc=0x62e5, .a=0xd8, .x=0x8b, .y=0x2f, .sp=0x78, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x62e5, .value=0xad}, {.addr=0x62e6, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x62e7, .a=0xd8, .x=0x8b, .y=0x2f, .sp=0x78, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x62e5, .value=0xad}, {.addr=0x62e6, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x62e5, .value=0xad, .type=IO_READ},
        {.addr=0x62e6, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_006C) {
    const struct CPU_State initial_cpu = {.pc=0x4dee, .a=0xd1, .x=0xa2, .y=0x7f, .sp=0xc5, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x4dee, .value=0xad}, {.addr=0x4def, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x4df0, .a=0xd1, .x=0xa2, .y=0x7f, .sp=0xc5, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x4dee, .value=0xad}, {.addr=0x4def, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x4dee, .value=0xad, .type=IO_READ},
        {.addr=0x4def, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_006D) {
    const struct CPU_State initial_cpu = {.pc=0xd681, .a=0xd2, .x=0xe2, .y=0xe8, .sp=0x48, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xd681, .value=0xad}, {.addr=0xd682, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xd683, .a=0xd2, .x=0xe2, .y=0xe8, .sp=0x48, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xd681, .value=0xad}, {.addr=0xd682, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xd681, .value=0xad, .type=IO_READ},
        {.addr=0xd682, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_006E) {
    const struct CPU_State initial_cpu = {.pc=0x6b20, .a=0x74, .x=0xe0, .y=0x87, .sp=0xd5, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x6b20, .value=0xad}, {.addr=0x6b21, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x6b22, .a=0x74, .x=0xe0, .y=0x87, .sp=0xd5, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x6b20, .value=0xad}, {.addr=0x6b21, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x6b20, .value=0xad, .type=IO_READ},
        {.addr=0x6b21, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_006F) {
    const struct CPU_State initial_cpu = {.pc=0x335c, .a=0x48, .x=0xdc, .y=0x11, .sp=0x3e, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x335c, .value=0xad}, {.addr=0x335d, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x335e, .a=0x48, .x=0xdc, .y=0x11, .sp=0x3e, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x335c, .value=0xad}, {.addr=0x335d, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x335c, .value=0xad, .type=IO_READ},
        {.addr=0x335d, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0070) {
    const struct CPU_State initial_cpu = {.pc=0x7084, .a=0x2b, .x=0x8f, .y=0xf0, .sp=0xea, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x7084, .value=0xad}, {.addr=0x7085, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x7086, .a=0x2b, .x=0x8f, .y=0xf0, .sp=0xea, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x7084, .value=0xad}, {.addr=0x7085, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x7084, .value=0xad, .type=IO_READ},
        {.addr=0x7085, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0071) {
    const struct CPU_State initial_cpu = {.pc=0x3535, .a=0x43, .x=0x67, .y=0x6d, .sp=0x97, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x3535, .value=0xad}, {.addr=0x3536, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x3537, .a=0x43, .x=0x67, .y=0x6d, .sp=0x97, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x3535, .value=0xad}, {.addr=0x3536, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x3535, .value=0xad, .type=IO_READ},
        {.addr=0x3536, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0072) {
    const struct CPU_State initial_cpu = {.pc=0x8ed7, .a=0x46, .x=0xed, .y=0x1a, .sp=0x19, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x8ed7, .value=0xad}, {.addr=0x8ed8, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x8ed9, .a=0x46, .x=0xed, .y=0x1a, .sp=0x19, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x8ed7, .value=0xad}, {.addr=0x8ed8, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x8ed7, .value=0xad, .type=IO_READ},
        {.addr=0x8ed8, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0073) {
    const struct CPU_State initial_cpu = {.pc=0x7ff5, .a=0x24, .x=0x5b, .y=0xaa, .sp=0x3a, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x7ff5, .value=0xad}, {.addr=0x7ff6, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x7ff7, .a=0x24, .x=0x5b, .y=0xaa, .sp=0x3a, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x7ff5, .value=0xad}, {.addr=0x7ff6, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x7ff5, .value=0xad, .type=IO_READ},
        {.addr=0x7ff6, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0074) {
    const struct CPU_State initial_cpu = {.pc=0x6c56, .a=0xb6, .x=0x8d, .y=0xca, .sp=0xdd, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x6c56, .value=0xad}, {.addr=0x6c57, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x6c58, .a=0xb6, .x=0x8d, .y=0xca, .sp=0xdd, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x6c56, .value=0xad}, {.addr=0x6c57, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x6c56, .value=0xad, .type=IO_READ},
        {.addr=0x6c57, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0075) {
    const struct CPU_State initial_cpu = {.pc=0x49b8, .a=0x5b, .x=0xbe, .y=0x98, .sp=0x30, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x49b8, .value=0xad}, {.addr=0x49b9, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x49ba, .a=0x5b, .x=0xbe, .y=0x98, .sp=0x30, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x49b8, .value=0xad}, {.addr=0x49b9, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x49b8, .value=0xad, .type=IO_READ},
        {.addr=0x49b9, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0076) {
    const struct CPU_State initial_cpu = {.pc=0xc8a3, .a=0xad, .x=0xdf, .y=0xf5, .sp=0x6f, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xc8a3, .value=0xad}, {.addr=0xc8a4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc8a5, .a=0xad, .x=0xdf, .y=0xf5, .sp=0x6f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xc8a3, .value=0xad}, {.addr=0xc8a4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc8a3, .value=0xad, .type=IO_READ},
        {.addr=0xc8a4, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0077) {
    const struct CPU_State initial_cpu = {.pc=0xdea9, .a=0x44, .x=0x8d, .y=0xea, .sp=0xf3, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xdea9, .value=0xad}, {.addr=0xdeaa, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xdeab, .a=0x44, .x=0x8d, .y=0xea, .sp=0xf3, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xdea9, .value=0xad}, {.addr=0xdeaa, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xdea9, .value=0xad, .type=IO_READ},
        {.addr=0xdeaa, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0078) {
    const struct CPU_State initial_cpu = {.pc=0x0a16, .a=0x58, .x=0x3b, .y=0xd2, .sp=0xb4, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0a16, .value=0xad}, {.addr=0x0a17, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x0a18, .a=0x58, .x=0x3b, .y=0xd2, .sp=0xb4, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0a16, .value=0xad}, {.addr=0x0a17, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x0a16, .value=0xad, .type=IO_READ},
        {.addr=0x0a17, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0079) {
    const struct CPU_State initial_cpu = {.pc=0x4af0, .a=0xab, .x=0xc7, .y=0x33, .sp=0x27, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x4af0, .value=0xad}, {.addr=0x4af1, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x4af2, .a=0xab, .x=0xc7, .y=0x33, .sp=0x27, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x4af0, .value=0xad}, {.addr=0x4af1, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x4af0, .value=0xad, .type=IO_READ},
        {.addr=0x4af1, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_007A) {
    const struct CPU_State initial_cpu = {.pc=0x802a, .a=0xfa, .x=0xb1, .y=0xfc, .sp=0xee, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x802a, .value=0xad}, {.addr=0x802b, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x802c, .a=0xfa, .x=0xb1, .y=0xfc, .sp=0xee, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x802a, .value=0xad}, {.addr=0x802b, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x802a, .value=0xad, .type=IO_READ},
        {.addr=0x802b, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_007B) {
    const struct CPU_State initial_cpu = {.pc=0x9d27, .a=0x0a, .x=0x4b, .y=0xc8, .sp=0xfd, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x9d27, .value=0xad}, {.addr=0x9d28, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x9d29, .a=0x0a, .x=0x4b, .y=0xc8, .sp=0xfd, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x9d27, .value=0xad}, {.addr=0x9d28, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x9d27, .value=0xad, .type=IO_READ},
        {.addr=0x9d28, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_007C) {
    const struct CPU_State initial_cpu = {.pc=0x9a38, .a=0xde, .x=0x27, .y=0x91, .sp=0xa0, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x9a38, .value=0xad}, {.addr=0x9a39, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x9a3a, .a=0xde, .x=0x27, .y=0x91, .sp=0xa0, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9a38, .value=0xad}, {.addr=0x9a39, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x9a38, .value=0xad, .type=IO_READ},
        {.addr=0x9a39, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_007D) {
    const struct CPU_State initial_cpu = {.pc=0x825f, .a=0x3c, .x=0xe9, .y=0xf9, .sp=0xf9, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x825f, .value=0xad}, {.addr=0x8260, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x8261, .a=0x3c, .x=0xe9, .y=0xf9, .sp=0xf9, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x825f, .value=0xad}, {.addr=0x8260, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x825f, .value=0xad, .type=IO_READ},
        {.addr=0x8260, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_007E) {
    const struct CPU_State initial_cpu = {.pc=0x0064, .a=0xe3, .x=0x0a, .y=0xf6, .sp=0x95, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0xad}, {.addr=0x0065, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x0066, .a=0xe3, .x=0x0a, .y=0xf6, .sp=0x95, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0xad}, {.addr=0x0065, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x0064, .value=0xad, .type=IO_READ},
        {.addr=0x0065, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_007F) {
    const struct CPU_State initial_cpu = {.pc=0xdb16, .a=0x5d, .x=0xf1, .y=0xbb, .sp=0xfd, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xdb16, .value=0xad}, {.addr=0xdb17, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xdb18, .a=0x5d, .x=0xf1, .y=0xbb, .sp=0xfd, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xdb16, .value=0xad}, {.addr=0xdb17, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xdb16, .value=0xad, .type=IO_READ},
        {.addr=0xdb17, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0080) {
    const struct CPU_State initial_cpu = {.pc=0x47f1, .a=0x1a, .x=0x51, .y=0x59, .sp=0x50, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x47f1, .value=0xad}, {.addr=0x47f2, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x47f3, .a=0x1a, .x=0x51, .y=0x59, .sp=0x50, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x47f1, .value=0xad}, {.addr=0x47f2, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x47f1, .value=0xad, .type=IO_READ},
        {.addr=0x47f2, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0081) {
    const struct CPU_State initial_cpu = {.pc=0xdfa9, .a=0xe8, .x=0xaf, .y=0x78, .sp=0x21, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xdfa9, .value=0xad}, {.addr=0xdfaa, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xdfab, .a=0xe8, .x=0xaf, .y=0x78, .sp=0x21, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xdfa9, .value=0xad}, {.addr=0xdfaa, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xdfa9, .value=0xad, .type=IO_READ},
        {.addr=0xdfaa, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0082) {
    const struct CPU_State initial_cpu = {.pc=0x37ed, .a=0x08, .x=0xc8, .y=0x1f, .sp=0x55, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x37ed, .value=0xad}, {.addr=0x37ee, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x37ef, .a=0x08, .x=0xc8, .y=0x1f, .sp=0x55, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x37ed, .value=0xad}, {.addr=0x37ee, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x37ed, .value=0xad, .type=IO_READ},
        {.addr=0x37ee, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0083) {
    const struct CPU_State initial_cpu = {.pc=0x4580, .a=0x6d, .x=0xce, .y=0xf4, .sp=0xa2, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x4580, .value=0xad}, {.addr=0x4581, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4582, .a=0x6d, .x=0xce, .y=0xf4, .sp=0xa2, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x4580, .value=0xad}, {.addr=0x4581, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4580, .value=0xad, .type=IO_READ},
        {.addr=0x4581, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0084) {
    const struct CPU_State initial_cpu = {.pc=0x6042, .a=0x86, .x=0x10, .y=0x4e, .sp=0x1b, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x6042, .value=0xad}, {.addr=0x6043, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x6044, .a=0x86, .x=0x10, .y=0x4e, .sp=0x1b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x6042, .value=0xad}, {.addr=0x6043, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x6042, .value=0xad, .type=IO_READ},
        {.addr=0x6043, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0085) {
    const struct CPU_State initial_cpu = {.pc=0x21e8, .a=0xad, .x=0x79, .y=0x74, .sp=0xb2, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x21e8, .value=0xad}, {.addr=0x21e9, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x21ea, .a=0xad, .x=0x79, .y=0x74, .sp=0xb2, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x21e8, .value=0xad}, {.addr=0x21e9, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x21e8, .value=0xad, .type=IO_READ},
        {.addr=0x21e9, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0086) {
    const struct CPU_State initial_cpu = {.pc=0xa2ba, .a=0x29, .x=0x06, .y=0xff, .sp=0x9d, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xa2ba, .value=0xad}, {.addr=0xa2bb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xa2bc, .a=0x29, .x=0x06, .y=0xff, .sp=0x9d, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xa2ba, .value=0xad}, {.addr=0xa2bb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xa2ba, .value=0xad, .type=IO_READ},
        {.addr=0xa2bb, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0087) {
    const struct CPU_State initial_cpu = {.pc=0xaa15, .a=0xee, .x=0xae, .y=0x9c, .sp=0x29, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xaa15, .value=0xad}, {.addr=0xaa16, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xaa17, .a=0xee, .x=0xae, .y=0x9c, .sp=0x29, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xaa15, .value=0xad}, {.addr=0xaa16, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xaa15, .value=0xad, .type=IO_READ},
        {.addr=0xaa16, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0088) {
    const struct CPU_State initial_cpu = {.pc=0x05c3, .a=0x8c, .x=0x7e, .y=0xf0, .sp=0x16, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x05c3, .value=0xad}, {.addr=0x05c4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x05c5, .a=0x8c, .x=0x7e, .y=0xf0, .sp=0x16, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x05c3, .value=0xad}, {.addr=0x05c4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x05c3, .value=0xad, .type=IO_READ},
        {.addr=0x05c4, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0089) {
    const struct CPU_State initial_cpu = {.pc=0xfe1b, .a=0xc4, .x=0xb1, .y=0x5e, .sp=0x63, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xfe1b, .value=0xad}, {.addr=0xfe1c, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xfe1d, .a=0xc4, .x=0xb1, .y=0x5e, .sp=0x63, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xfe1b, .value=0xad}, {.addr=0xfe1c, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xfe1b, .value=0xad, .type=IO_READ},
        {.addr=0xfe1c, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_008A) {
    const struct CPU_State initial_cpu = {.pc=0x5d57, .a=0x46, .x=0xb9, .y=0x62, .sp=0x8a, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x5d57, .value=0xad}, {.addr=0x5d58, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x5d59, .a=0x46, .x=0xb9, .y=0x62, .sp=0x8a, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x5d57, .value=0xad}, {.addr=0x5d58, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x5d57, .value=0xad, .type=IO_READ},
        {.addr=0x5d58, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_008B) {
    const struct CPU_State initial_cpu = {.pc=0x1fa4, .a=0x4e, .x=0x21, .y=0x05, .sp=0x5b, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x1fa4, .value=0xad}, {.addr=0x1fa5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1fa6, .a=0x4e, .x=0x21, .y=0x05, .sp=0x5b, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x1fa4, .value=0xad}, {.addr=0x1fa5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1fa4, .value=0xad, .type=IO_READ},
        {.addr=0x1fa5, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_008C) {
    const struct CPU_State initial_cpu = {.pc=0x4608, .a=0x15, .x=0xe1, .y=0x20, .sp=0x9e, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x4608, .value=0xad}, {.addr=0x4609, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x460a, .a=0x15, .x=0xe1, .y=0x20, .sp=0x9e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x4608, .value=0xad}, {.addr=0x4609, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x4608, .value=0xad, .type=IO_READ},
        {.addr=0x4609, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_008D) {
    const struct CPU_State initial_cpu = {.pc=0x1dd0, .a=0x91, .x=0xba, .y=0xce, .sp=0x50, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x1dd0, .value=0xad}, {.addr=0x1dd1, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x1dd2, .a=0x91, .x=0xba, .y=0xce, .sp=0x50, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x1dd0, .value=0xad}, {.addr=0x1dd1, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x1dd0, .value=0xad, .type=IO_READ},
        {.addr=0x1dd1, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_008E) {
    const struct CPU_State initial_cpu = {.pc=0x80ba, .a=0x6c, .x=0xaa, .y=0x05, .sp=0x0e, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x80ba, .value=0xad}, {.addr=0x80bb, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x80bc, .a=0x6c, .x=0xaa, .y=0x05, .sp=0x0e, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x80ba, .value=0xad}, {.addr=0x80bb, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x80ba, .value=0xad, .type=IO_READ},
        {.addr=0x80bb, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_008F) {
    const struct CPU_State initial_cpu = {.pc=0x8f5a, .a=0xde, .x=0xbb, .y=0x9c, .sp=0x03, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x8f5a, .value=0xad}, {.addr=0x8f5b, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x8f5c, .a=0xde, .x=0xbb, .y=0x9c, .sp=0x03, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x8f5a, .value=0xad}, {.addr=0x8f5b, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x8f5a, .value=0xad, .type=IO_READ},
        {.addr=0x8f5b, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0090) {
    const struct CPU_State initial_cpu = {.pc=0xaae9, .a=0xea, .x=0xf3, .y=0x1b, .sp=0xce, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xaae9, .value=0xad}, {.addr=0xaaea, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xaaeb, .a=0xea, .x=0xf3, .y=0x1b, .sp=0xce, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xaae9, .value=0xad}, {.addr=0xaaea, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xaae9, .value=0xad, .type=IO_READ},
        {.addr=0xaaea, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0091) {
    const struct CPU_State initial_cpu = {.pc=0x1e5b, .a=0x38, .x=0x6c, .y=0x68, .sp=0x1a, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x1e5b, .value=0xad}, {.addr=0x1e5c, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x1e5d, .a=0x38, .x=0x6c, .y=0x68, .sp=0x1a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x1e5b, .value=0xad}, {.addr=0x1e5c, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x1e5b, .value=0xad, .type=IO_READ},
        {.addr=0x1e5c, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0092) {
    const struct CPU_State initial_cpu = {.pc=0xb618, .a=0x17, .x=0xb4, .y=0xb7, .sp=0x16, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xb618, .value=0xad}, {.addr=0xb619, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xb61a, .a=0x17, .x=0xb4, .y=0xb7, .sp=0x16, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xb618, .value=0xad}, {.addr=0xb619, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xb618, .value=0xad, .type=IO_READ},
        {.addr=0xb619, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0093) {
    const struct CPU_State initial_cpu = {.pc=0x871d, .a=0x00, .x=0xdf, .y=0x6f, .sp=0x99, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x871d, .value=0xad}, {.addr=0x871e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x871f, .a=0x00, .x=0xdf, .y=0x6f, .sp=0x99, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x871d, .value=0xad}, {.addr=0x871e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x871d, .value=0xad, .type=IO_READ},
        {.addr=0x871e, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0094) {
    const struct CPU_State initial_cpu = {.pc=0xa2a5, .a=0x3a, .x=0xdb, .y=0xa0, .sp=0xe7, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xa2a5, .value=0xad}, {.addr=0xa2a6, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xa2a7, .a=0x3a, .x=0xdb, .y=0xa0, .sp=0xe7, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xa2a5, .value=0xad}, {.addr=0xa2a6, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xa2a5, .value=0xad, .type=IO_READ},
        {.addr=0xa2a6, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0095) {
    const struct CPU_State initial_cpu = {.pc=0xa2e5, .a=0x8e, .x=0xd4, .y=0x84, .sp=0x26, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xa2e5, .value=0xad}, {.addr=0xa2e6, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xa2e7, .a=0x8e, .x=0xd4, .y=0x84, .sp=0x26, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xa2e5, .value=0xad}, {.addr=0xa2e6, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xa2e5, .value=0xad, .type=IO_READ},
        {.addr=0xa2e6, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0096) {
    const struct CPU_State initial_cpu = {.pc=0x0746, .a=0x51, .x=0x4a, .y=0x9a, .sp=0xb8, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0746, .value=0xad}, {.addr=0x0747, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0748, .a=0x51, .x=0x4a, .y=0x9a, .sp=0xb8, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0746, .value=0xad}, {.addr=0x0747, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0746, .value=0xad, .type=IO_READ},
        {.addr=0x0747, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0097) {
    const struct CPU_State initial_cpu = {.pc=0x834e, .a=0x85, .x=0xd4, .y=0x16, .sp=0x8d, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x834e, .value=0xad}, {.addr=0x834f, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x8350, .a=0x85, .x=0xd4, .y=0x16, .sp=0x8d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x834e, .value=0xad}, {.addr=0x834f, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x834e, .value=0xad, .type=IO_READ},
        {.addr=0x834f, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0098) {
    const struct CPU_State initial_cpu = {.pc=0x7eb9, .a=0x2d, .x=0x9f, .y=0x47, .sp=0x87, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x7eb9, .value=0xad}, {.addr=0x7eba, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7ebb, .a=0x2d, .x=0x9f, .y=0x47, .sp=0x87, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x7eb9, .value=0xad}, {.addr=0x7eba, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7eb9, .value=0xad, .type=IO_READ},
        {.addr=0x7eba, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0099) {
    const struct CPU_State initial_cpu = {.pc=0xbbee, .a=0x02, .x=0xef, .y=0x6a, .sp=0x69, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xbbee, .value=0xad}, {.addr=0xbbef, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xbbf0, .a=0x02, .x=0xef, .y=0x6a, .sp=0x69, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xbbee, .value=0xad}, {.addr=0xbbef, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xbbee, .value=0xad, .type=IO_READ},
        {.addr=0xbbef, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_009A) {
    const struct CPU_State initial_cpu = {.pc=0x003b, .a=0xd9, .x=0xe3, .y=0x56, .sp=0x29, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0xad}, {.addr=0x003c, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x003d, .a=0xd9, .x=0xe3, .y=0x56, .sp=0x29, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0xad}, {.addr=0x003c, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x003b, .value=0xad, .type=IO_READ},
        {.addr=0x003c, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_009B) {
    const struct CPU_State initial_cpu = {.pc=0xb636, .a=0xda, .x=0xd1, .y=0xb5, .sp=0xab, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xb636, .value=0xad}, {.addr=0xb637, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb638, .a=0xda, .x=0xd1, .y=0xb5, .sp=0xab, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xb636, .value=0xad}, {.addr=0xb637, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb636, .value=0xad, .type=IO_READ},
        {.addr=0xb637, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_009C) {
    const struct CPU_State initial_cpu = {.pc=0xe7bc, .a=0xf9, .x=0x23, .y=0xc6, .sp=0xfd, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xe7bc, .value=0xad}, {.addr=0xe7bd, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xe7be, .a=0xf9, .x=0x23, .y=0xc6, .sp=0xfd, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xe7bc, .value=0xad}, {.addr=0xe7bd, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xe7bc, .value=0xad, .type=IO_READ},
        {.addr=0xe7bd, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_009D) {
    const struct CPU_State initial_cpu = {.pc=0x89f5, .a=0xd2, .x=0x10, .y=0x23, .sp=0xf0, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x89f5, .value=0xad}, {.addr=0x89f6, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x89f7, .a=0xd2, .x=0x10, .y=0x23, .sp=0xf0, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x89f5, .value=0xad}, {.addr=0x89f6, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x89f5, .value=0xad, .type=IO_READ},
        {.addr=0x89f6, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_009E) {
    const struct CPU_State initial_cpu = {.pc=0x1ccd, .a=0x4a, .x=0xfc, .y=0x1f, .sp=0x62, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x1ccd, .value=0xad}, {.addr=0x1cce, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1ccf, .a=0x4a, .x=0xfc, .y=0x1f, .sp=0x62, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x1ccd, .value=0xad}, {.addr=0x1cce, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1ccd, .value=0xad, .type=IO_READ},
        {.addr=0x1cce, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_009F) {
    const struct CPU_State initial_cpu = {.pc=0x576c, .a=0xfd, .x=0x30, .y=0x10, .sp=0xb2, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x576c, .value=0xad}, {.addr=0x576d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x576e, .a=0xfd, .x=0x30, .y=0x10, .sp=0xb2, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x576c, .value=0xad}, {.addr=0x576d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x576c, .value=0xad, .type=IO_READ},
        {.addr=0x576d, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x67ce, .a=0x74, .x=0xb3, .y=0xfe, .sp=0x06, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x67ce, .value=0xad}, {.addr=0x67cf, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x67d0, .a=0x74, .x=0xb3, .y=0xfe, .sp=0x06, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x67ce, .value=0xad}, {.addr=0x67cf, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x67ce, .value=0xad, .type=IO_READ},
        {.addr=0x67cf, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x6459, .a=0x25, .x=0x1a, .y=0x58, .sp=0x8e, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x6459, .value=0xad}, {.addr=0x645a, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x645b, .a=0x25, .x=0x1a, .y=0x58, .sp=0x8e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x6459, .value=0xad}, {.addr=0x645a, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x6459, .value=0xad, .type=IO_READ},
        {.addr=0x645a, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xdd37, .a=0xef, .x=0x1e, .y=0x6c, .sp=0x44, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xdd37, .value=0xad}, {.addr=0xdd38, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xdd39, .a=0xef, .x=0x1e, .y=0x6c, .sp=0x44, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xdd37, .value=0xad}, {.addr=0xdd38, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xdd37, .value=0xad, .type=IO_READ},
        {.addr=0xdd38, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x899a, .a=0xd4, .x=0x8d, .y=0x5b, .sp=0x0b, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x899a, .value=0xad}, {.addr=0x899b, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x899c, .a=0xd4, .x=0x8d, .y=0x5b, .sp=0x0b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x899a, .value=0xad}, {.addr=0x899b, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x899a, .value=0xad, .type=IO_READ},
        {.addr=0x899b, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x988b, .a=0x93, .x=0x4e, .y=0xa2, .sp=0x46, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x988b, .value=0xad}, {.addr=0x988c, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x988d, .a=0x93, .x=0x4e, .y=0xa2, .sp=0x46, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x988b, .value=0xad}, {.addr=0x988c, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x988b, .value=0xad, .type=IO_READ},
        {.addr=0x988c, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x2475, .a=0x2c, .x=0x17, .y=0x85, .sp=0x29, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x2475, .value=0xad}, {.addr=0x2476, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x2477, .a=0x2c, .x=0x17, .y=0x85, .sp=0x29, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x2475, .value=0xad}, {.addr=0x2476, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x2475, .value=0xad, .type=IO_READ},
        {.addr=0x2476, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x488e, .a=0x50, .x=0xb4, .y=0x3f, .sp=0xa2, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x488e, .value=0xad}, {.addr=0x488f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4890, .a=0x50, .x=0xb4, .y=0x3f, .sp=0xa2, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x488e, .value=0xad}, {.addr=0x488f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x488e, .value=0xad, .type=IO_READ},
        {.addr=0x488f, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x777b, .a=0x0b, .x=0x0f, .y=0xe6, .sp=0x27, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x777b, .value=0xad}, {.addr=0x777c, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x777d, .a=0x0b, .x=0x0f, .y=0xe6, .sp=0x27, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x777b, .value=0xad}, {.addr=0x777c, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x777b, .value=0xad, .type=IO_READ},
        {.addr=0x777c, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x338e, .a=0x0e, .x=0x01, .y=0xe1, .sp=0xc6, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x338e, .value=0xad}, {.addr=0x338f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3390, .a=0x0e, .x=0x01, .y=0xe1, .sp=0xc6, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x338e, .value=0xad}, {.addr=0x338f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x338e, .value=0xad, .type=IO_READ},
        {.addr=0x338f, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x42ff, .a=0xab, .x=0x95, .y=0xc1, .sp=0xbe, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x42ff, .value=0xad}, {.addr=0x4300, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x4301, .a=0xab, .x=0x95, .y=0xc1, .sp=0xbe, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x42ff, .value=0xad}, {.addr=0x4300, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x42ff, .value=0xad, .type=IO_READ},
        {.addr=0x4300, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xe6a5, .a=0xb8, .x=0x9d, .y=0xcc, .sp=0xb6, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xe6a5, .value=0xad}, {.addr=0xe6a6, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xe6a7, .a=0xb8, .x=0x9d, .y=0xcc, .sp=0xb6, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xe6a5, .value=0xad}, {.addr=0xe6a6, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xe6a5, .value=0xad, .type=IO_READ},
        {.addr=0xe6a6, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x16a5, .a=0xf6, .x=0xb2, .y=0xb1, .sp=0x78, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x16a5, .value=0xad}, {.addr=0x16a6, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x16a7, .a=0xf6, .x=0xb2, .y=0xb1, .sp=0x78, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x16a5, .value=0xad}, {.addr=0x16a6, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x16a5, .value=0xad, .type=IO_READ},
        {.addr=0x16a6, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x0960, .a=0xf7, .x=0xc2, .y=0x67, .sp=0xe8, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0960, .value=0xad}, {.addr=0x0961, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x0962, .a=0xf7, .x=0xc2, .y=0x67, .sp=0xe8, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0960, .value=0xad}, {.addr=0x0961, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x0960, .value=0xad, .type=IO_READ},
        {.addr=0x0961, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x1e0c, .a=0x26, .x=0x22, .y=0x5e, .sp=0xe0, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x1e0c, .value=0xad}, {.addr=0x1e0d, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x1e0e, .a=0x26, .x=0x22, .y=0x5e, .sp=0xe0, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x1e0c, .value=0xad}, {.addr=0x1e0d, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x1e0c, .value=0xad, .type=IO_READ},
        {.addr=0x1e0d, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xdeab, .a=0x3d, .x=0xc1, .y=0x03, .sp=0xd2, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xdeab, .value=0xad}, {.addr=0xdeac, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xdead, .a=0x3d, .x=0xc1, .y=0x03, .sp=0xd2, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xdeab, .value=0xad}, {.addr=0xdeac, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xdeab, .value=0xad, .type=IO_READ},
        {.addr=0xdeac, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x5324, .a=0x94, .x=0x77, .y=0xec, .sp=0xe8, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x5324, .value=0xad}, {.addr=0x5325, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x5326, .a=0x94, .x=0x77, .y=0xec, .sp=0xe8, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x5324, .value=0xad}, {.addr=0x5325, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x5324, .value=0xad, .type=IO_READ},
        {.addr=0x5325, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x4981, .a=0x41, .x=0x82, .y=0x5e, .sp=0x6b, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x4981, .value=0xad}, {.addr=0x4982, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x4983, .a=0x41, .x=0x82, .y=0x5e, .sp=0x6b, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x4981, .value=0xad}, {.addr=0x4982, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x4981, .value=0xad, .type=IO_READ},
        {.addr=0x4982, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xcc33, .a=0x2d, .x=0xc9, .y=0xf9, .sp=0xd7, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xcc33, .value=0xad}, {.addr=0xcc34, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xcc35, .a=0x2d, .x=0xc9, .y=0xf9, .sp=0xd7, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xcc33, .value=0xad}, {.addr=0xcc34, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xcc33, .value=0xad, .type=IO_READ},
        {.addr=0xcc34, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xe35d, .a=0x7e, .x=0xc6, .y=0xef, .sp=0x21, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xe35d, .value=0xad}, {.addr=0xe35e, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xe35f, .a=0x7e, .x=0xc6, .y=0xef, .sp=0x21, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xe35d, .value=0xad}, {.addr=0xe35e, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xe35d, .value=0xad, .type=IO_READ},
        {.addr=0xe35e, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x39ed, .a=0x05, .x=0x29, .y=0x20, .sp=0xe4, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x39ed, .value=0xad}, {.addr=0x39ee, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x39ef, .a=0x05, .x=0x29, .y=0x20, .sp=0xe4, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x39ed, .value=0xad}, {.addr=0x39ee, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x39ed, .value=0xad, .type=IO_READ},
        {.addr=0x39ee, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x40d7, .a=0x2a, .x=0x46, .y=0x23, .sp=0xd9, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x40d7, .value=0xad}, {.addr=0x40d8, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x40d9, .a=0x2a, .x=0x46, .y=0x23, .sp=0xd9, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x40d7, .value=0xad}, {.addr=0x40d8, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x40d7, .value=0xad, .type=IO_READ},
        {.addr=0x40d8, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xf0c8, .a=0x0c, .x=0xc0, .y=0xfa, .sp=0xe4, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xf0c8, .value=0xad}, {.addr=0xf0c9, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xf0ca, .a=0x0c, .x=0xc0, .y=0xfa, .sp=0xe4, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xf0c8, .value=0xad}, {.addr=0xf0c9, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xf0c8, .value=0xad, .type=IO_READ},
        {.addr=0xf0c9, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xc172, .a=0x22, .x=0xd1, .y=0xe9, .sp=0xc4, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xc172, .value=0xad}, {.addr=0xc173, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xc174, .a=0x22, .x=0xd1, .y=0xe9, .sp=0xc4, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xc172, .value=0xad}, {.addr=0xc173, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xc172, .value=0xad, .type=IO_READ},
        {.addr=0xc173, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x38b8, .a=0x3f, .x=0x9c, .y=0xf4, .sp=0x31, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x38b8, .value=0xad}, {.addr=0x38b9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x38ba, .a=0x3f, .x=0x9c, .y=0xf4, .sp=0x31, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x38b8, .value=0xad}, {.addr=0x38b9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x38b8, .value=0xad, .type=IO_READ},
        {.addr=0x38b9, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xc369, .a=0x36, .x=0x2c, .y=0x1d, .sp=0xaa, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xc369, .value=0xad}, {.addr=0xc36a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc36b, .a=0x36, .x=0x2c, .y=0x1d, .sp=0xaa, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xc369, .value=0xad}, {.addr=0xc36a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc369, .value=0xad, .type=IO_READ},
        {.addr=0xc36a, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xf64f, .a=0xd4, .x=0x2d, .y=0x89, .sp=0x69, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xf64f, .value=0xad}, {.addr=0xf650, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xf651, .a=0xd4, .x=0x2d, .y=0x89, .sp=0x69, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xf64f, .value=0xad}, {.addr=0xf650, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xf64f, .value=0xad, .type=IO_READ},
        {.addr=0xf650, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xc116, .a=0x46, .x=0xff, .y=0x7d, .sp=0xc1, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xc116, .value=0xad}, {.addr=0xc117, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xc118, .a=0x46, .x=0xff, .y=0x7d, .sp=0xc1, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc116, .value=0xad}, {.addr=0xc117, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xc116, .value=0xad, .type=IO_READ},
        {.addr=0xc117, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xed3f, .a=0x25, .x=0xce, .y=0xdf, .sp=0xcd, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xed3f, .value=0xad}, {.addr=0xed40, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xed41, .a=0x25, .x=0xce, .y=0xdf, .sp=0xcd, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xed3f, .value=0xad}, {.addr=0xed40, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xed3f, .value=0xad, .type=IO_READ},
        {.addr=0xed40, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x4a28, .a=0x5c, .x=0x28, .y=0xdd, .sp=0x08, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x4a28, .value=0xad}, {.addr=0x4a29, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4a2a, .a=0x5c, .x=0x28, .y=0xdd, .sp=0x08, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x4a28, .value=0xad}, {.addr=0x4a29, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4a28, .value=0xad, .type=IO_READ},
        {.addr=0x4a29, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x523b, .a=0x33, .x=0xc1, .y=0x17, .sp=0x58, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x523b, .value=0xad}, {.addr=0x523c, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x523d, .a=0x33, .x=0xc1, .y=0x17, .sp=0x58, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x523b, .value=0xad}, {.addr=0x523c, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x523b, .value=0xad, .type=IO_READ},
        {.addr=0x523c, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x3489, .a=0x70, .x=0xe3, .y=0x29, .sp=0xbf, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x3489, .value=0xad}, {.addr=0x348a, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x348b, .a=0x70, .x=0xe3, .y=0x29, .sp=0xbf, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x3489, .value=0xad}, {.addr=0x348a, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x3489, .value=0xad, .type=IO_READ},
        {.addr=0x348a, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xf47f, .a=0xcd, .x=0x2a, .y=0x12, .sp=0x1e, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xf47f, .value=0xad}, {.addr=0xf480, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf481, .a=0xcd, .x=0x2a, .y=0x12, .sp=0x1e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xf47f, .value=0xad}, {.addr=0xf480, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf47f, .value=0xad, .type=IO_READ},
        {.addr=0xf480, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x85b8, .a=0x14, .x=0x0c, .y=0x60, .sp=0x59, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x85b8, .value=0xad}, {.addr=0x85b9, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x85ba, .a=0x14, .x=0x0c, .y=0x60, .sp=0x59, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x85b8, .value=0xad}, {.addr=0x85b9, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x85b8, .value=0xad, .type=IO_READ},
        {.addr=0x85b9, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x8d24, .a=0xce, .x=0x2e, .y=0x3f, .sp=0x37, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x8d24, .value=0xad}, {.addr=0x8d25, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x8d26, .a=0xce, .x=0x2e, .y=0x3f, .sp=0x37, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x8d24, .value=0xad}, {.addr=0x8d25, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x8d24, .value=0xad, .type=IO_READ},
        {.addr=0x8d25, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xec22, .a=0x94, .x=0xad, .y=0x53, .sp=0xc5, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xec22, .value=0xad}, {.addr=0xec23, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xec24, .a=0x94, .x=0xad, .y=0x53, .sp=0xc5, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xec22, .value=0xad}, {.addr=0xec23, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xec22, .value=0xad, .type=IO_READ},
        {.addr=0xec23, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xe60e, .a=0x46, .x=0x7f, .y=0xc8, .sp=0x41, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xe60e, .value=0xad}, {.addr=0xe60f, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xe610, .a=0x46, .x=0x7f, .y=0xc8, .sp=0x41, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xe60e, .value=0xad}, {.addr=0xe60f, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xe60e, .value=0xad, .type=IO_READ},
        {.addr=0xe60f, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x481c, .a=0xf0, .x=0x3b, .y=0xa3, .sp=0xd0, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x481c, .value=0xad}, {.addr=0x481d, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x481e, .a=0xf0, .x=0x3b, .y=0xa3, .sp=0xd0, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x481c, .value=0xad}, {.addr=0x481d, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x481c, .value=0xad, .type=IO_READ},
        {.addr=0x481d, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x05dc, .a=0x86, .x=0xa9, .y=0x1c, .sp=0x36, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x05dc, .value=0xad}, {.addr=0x05dd, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x05de, .a=0x86, .x=0xa9, .y=0x1c, .sp=0x36, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x05dc, .value=0xad}, {.addr=0x05dd, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x05dc, .value=0xad, .type=IO_READ},
        {.addr=0x05dd, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x0273, .a=0xeb, .x=0xed, .y=0x24, .sp=0x6a, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0273, .value=0xad}, {.addr=0x0274, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x0275, .a=0xeb, .x=0xed, .y=0x24, .sp=0x6a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0273, .value=0xad}, {.addr=0x0274, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x0273, .value=0xad, .type=IO_READ},
        {.addr=0x0274, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x76ee, .a=0x04, .x=0x20, .y=0xf0, .sp=0xa0, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x76ee, .value=0xad}, {.addr=0x76ef, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x76f0, .a=0x04, .x=0x20, .y=0xf0, .sp=0xa0, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x76ee, .value=0xad}, {.addr=0x76ef, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x76ee, .value=0xad, .type=IO_READ},
        {.addr=0x76ef, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x4504, .a=0x05, .x=0xa3, .y=0xc2, .sp=0x45, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x4504, .value=0xad}, {.addr=0x4505, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4506, .a=0x05, .x=0xa3, .y=0xc2, .sp=0x45, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x4504, .value=0xad}, {.addr=0x4505, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4504, .value=0xad, .type=IO_READ},
        {.addr=0x4505, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x7fee, .a=0x88, .x=0xe5, .y=0x3d, .sp=0x3f, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x7fee, .value=0xad}, {.addr=0x7fef, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x7ff0, .a=0x88, .x=0xe5, .y=0x3d, .sp=0x3f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x7fee, .value=0xad}, {.addr=0x7fef, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x7fee, .value=0xad, .type=IO_READ},
        {.addr=0x7fef, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x1b06, .a=0x71, .x=0x57, .y=0xe8, .sp=0x47, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x1b06, .value=0xad}, {.addr=0x1b07, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x1b08, .a=0x71, .x=0x57, .y=0xe8, .sp=0x47, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x1b06, .value=0xad}, {.addr=0x1b07, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x1b06, .value=0xad, .type=IO_READ},
        {.addr=0x1b07, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xb7ff, .a=0xab, .x=0xb6, .y=0x6f, .sp=0xaa, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xb7ff, .value=0xad}, {.addr=0xb800, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xb801, .a=0xab, .x=0xb6, .y=0x6f, .sp=0xaa, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb7ff, .value=0xad}, {.addr=0xb800, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xb7ff, .value=0xad, .type=IO_READ},
        {.addr=0xb800, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x1d20, .a=0xfb, .x=0x0f, .y=0x58, .sp=0x82, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x1d20, .value=0xad}, {.addr=0x1d21, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x1d22, .a=0xfb, .x=0x0f, .y=0x58, .sp=0x82, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x1d20, .value=0xad}, {.addr=0x1d21, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x1d20, .value=0xad, .type=IO_READ},
        {.addr=0x1d21, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x8a47, .a=0x8b, .x=0x26, .y=0xe3, .sp=0xf4, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x8a47, .value=0xad}, {.addr=0x8a48, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x8a49, .a=0x8b, .x=0x26, .y=0xe3, .sp=0xf4, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x8a47, .value=0xad}, {.addr=0x8a48, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x8a47, .value=0xad, .type=IO_READ},
        {.addr=0x8a48, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xa11d, .a=0x30, .x=0x77, .y=0x21, .sp=0xe9, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xa11d, .value=0xad}, {.addr=0xa11e, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xa11f, .a=0x30, .x=0x77, .y=0x21, .sp=0xe9, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xa11d, .value=0xad}, {.addr=0xa11e, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xa11d, .value=0xad, .type=IO_READ},
        {.addr=0xa11e, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xe1e6, .a=0x0a, .x=0xe3, .y=0x4a, .sp=0xe1, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xe1e6, .value=0xad}, {.addr=0xe1e7, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xe1e8, .a=0x0a, .x=0xe3, .y=0x4a, .sp=0xe1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xe1e6, .value=0xad}, {.addr=0xe1e7, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xe1e6, .value=0xad, .type=IO_READ},
        {.addr=0xe1e7, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x0935, .a=0x30, .x=0x8a, .y=0xb9, .sp=0x65, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0935, .value=0xad}, {.addr=0x0936, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x0937, .a=0x30, .x=0x8a, .y=0xb9, .sp=0x65, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0935, .value=0xad}, {.addr=0x0936, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x0935, .value=0xad, .type=IO_READ},
        {.addr=0x0936, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xc6ec, .a=0x4b, .x=0x60, .y=0x7d, .sp=0x19, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xc6ec, .value=0xad}, {.addr=0xc6ed, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xc6ee, .a=0x4b, .x=0x60, .y=0x7d, .sp=0x19, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xc6ec, .value=0xad}, {.addr=0xc6ed, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xc6ec, .value=0xad, .type=IO_READ},
        {.addr=0xc6ed, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x0927, .a=0xcd, .x=0xaf, .y=0x68, .sp=0x23, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0927, .value=0xad}, {.addr=0x0928, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x0929, .a=0xcd, .x=0xaf, .y=0x68, .sp=0x23, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0927, .value=0xad}, {.addr=0x0928, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x0927, .value=0xad, .type=IO_READ},
        {.addr=0x0928, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xc789, .a=0xc8, .x=0x87, .y=0xdd, .sp=0x2b, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xc789, .value=0xad}, {.addr=0xc78a, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xc78b, .a=0xc8, .x=0x87, .y=0xdd, .sp=0x2b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xc789, .value=0xad}, {.addr=0xc78a, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xc789, .value=0xad, .type=IO_READ},
        {.addr=0xc78a, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x937a, .a=0x08, .x=0x91, .y=0xc8, .sp=0x39, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x937a, .value=0xad}, {.addr=0x937b, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x937c, .a=0x08, .x=0x91, .y=0xc8, .sp=0x39, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x937a, .value=0xad}, {.addr=0x937b, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x937a, .value=0xad, .type=IO_READ},
        {.addr=0x937b, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x004b, .a=0x73, .x=0xbc, .y=0xe6, .sp=0x02, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0xad}, {.addr=0x004c, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x004d, .a=0x73, .x=0xbc, .y=0xe6, .sp=0x02, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0xad}, {.addr=0x004c, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x004b, .value=0xad, .type=IO_READ},
        {.addr=0x004c, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xb6e8, .a=0x88, .x=0xaa, .y=0xba, .sp=0x71, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xb6e8, .value=0xad}, {.addr=0xb6e9, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xb6ea, .a=0x88, .x=0xaa, .y=0xba, .sp=0x71, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xb6e8, .value=0xad}, {.addr=0xb6e9, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xb6e8, .value=0xad, .type=IO_READ},
        {.addr=0xb6e9, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x1e23, .a=0xd8, .x=0xa8, .y=0x50, .sp=0xbd, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x1e23, .value=0xad}, {.addr=0x1e24, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x1e25, .a=0xd8, .x=0xa8, .y=0x50, .sp=0xbd, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x1e23, .value=0xad}, {.addr=0x1e24, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x1e23, .value=0xad, .type=IO_READ},
        {.addr=0x1e24, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xb188, .a=0xd0, .x=0xdc, .y=0xe1, .sp=0x34, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xb188, .value=0xad}, {.addr=0xb189, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb18a, .a=0xd0, .x=0xdc, .y=0xe1, .sp=0x34, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xb188, .value=0xad}, {.addr=0xb189, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb188, .value=0xad, .type=IO_READ},
        {.addr=0xb189, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xcd1b, .a=0xf2, .x=0xa3, .y=0x94, .sp=0x63, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xcd1b, .value=0xad}, {.addr=0xcd1c, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xcd1d, .a=0xf2, .x=0xa3, .y=0x94, .sp=0x63, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xcd1b, .value=0xad}, {.addr=0xcd1c, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xcd1b, .value=0xad, .type=IO_READ},
        {.addr=0xcd1c, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x0c7f, .a=0x5e, .x=0xee, .y=0x7b, .sp=0x2c, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0c7f, .value=0xad}, {.addr=0x0c80, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x0c81, .a=0x5e, .x=0xee, .y=0x7b, .sp=0x2c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0c7f, .value=0xad}, {.addr=0x0c80, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x0c7f, .value=0xad, .type=IO_READ},
        {.addr=0x0c80, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x062f, .a=0xc0, .x=0x4b, .y=0xe5, .sp=0x20, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x062f, .value=0xad}, {.addr=0x0630, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x0631, .a=0xc0, .x=0x4b, .y=0xe5, .sp=0x20, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x062f, .value=0xad}, {.addr=0x0630, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x062f, .value=0xad, .type=IO_READ},
        {.addr=0x0630, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x21b3, .a=0x80, .x=0xee, .y=0xd3, .sp=0x0b, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x21b3, .value=0xad}, {.addr=0x21b4, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x21b5, .a=0x80, .x=0xee, .y=0xd3, .sp=0x0b, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x21b3, .value=0xad}, {.addr=0x21b4, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x21b3, .value=0xad, .type=IO_READ},
        {.addr=0x21b4, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x605c, .a=0x42, .x=0x70, .y=0xb6, .sp=0x6a, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x605c, .value=0xad}, {.addr=0x605d, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x605e, .a=0x42, .x=0x70, .y=0xb6, .sp=0x6a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x605c, .value=0xad}, {.addr=0x605d, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x605c, .value=0xad, .type=IO_READ},
        {.addr=0x605d, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x751c, .a=0x2f, .x=0x80, .y=0xb7, .sp=0x23, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x751c, .value=0xad}, {.addr=0x751d, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x751e, .a=0x2f, .x=0x80, .y=0xb7, .sp=0x23, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x751c, .value=0xad}, {.addr=0x751d, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x751c, .value=0xad, .type=IO_READ},
        {.addr=0x751d, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x8853, .a=0x05, .x=0x32, .y=0xa7, .sp=0x38, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x8853, .value=0xad}, {.addr=0x8854, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8855, .a=0x05, .x=0x32, .y=0xa7, .sp=0x38, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x8853, .value=0xad}, {.addr=0x8854, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8853, .value=0xad, .type=IO_READ},
        {.addr=0x8854, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x7c55, .a=0x5d, .x=0xe4, .y=0x46, .sp=0x99, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x7c55, .value=0xad}, {.addr=0x7c56, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x7c57, .a=0x5d, .x=0xe4, .y=0x46, .sp=0x99, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7c55, .value=0xad}, {.addr=0x7c56, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x7c55, .value=0xad, .type=IO_READ},
        {.addr=0x7c56, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x11a5, .a=0xfe, .x=0xd3, .y=0x8a, .sp=0x9e, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x11a5, .value=0xad}, {.addr=0x11a6, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x11a7, .a=0xfe, .x=0xd3, .y=0x8a, .sp=0x9e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x11a5, .value=0xad}, {.addr=0x11a6, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x11a5, .value=0xad, .type=IO_READ},
        {.addr=0x11a6, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x97b4, .a=0x09, .x=0xe8, .y=0x73, .sp=0x6c, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x97b4, .value=0xad}, {.addr=0x97b5, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x97b6, .a=0x09, .x=0xe8, .y=0x73, .sp=0x6c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x97b4, .value=0xad}, {.addr=0x97b5, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x97b4, .value=0xad, .type=IO_READ},
        {.addr=0x97b5, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xdf68, .a=0xfa, .x=0x6b, .y=0x82, .sp=0x4b, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xdf68, .value=0xad}, {.addr=0xdf69, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xdf6a, .a=0xfa, .x=0x6b, .y=0x82, .sp=0x4b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xdf68, .value=0xad}, {.addr=0xdf69, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xdf68, .value=0xad, .type=IO_READ},
        {.addr=0xdf69, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x0aad, .a=0x4f, .x=0x7f, .y=0x24, .sp=0xb3, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0aad, .value=0xad}, {.addr=0x0aae, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x0aaf, .a=0x4f, .x=0x7f, .y=0x24, .sp=0xb3, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0aad, .value=0xad}, {.addr=0x0aae, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x0aad, .value=0xad, .type=IO_READ},
        {.addr=0x0aae, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x5e22, .a=0x7c, .x=0x02, .y=0x76, .sp=0x9b, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x5e22, .value=0xad}, {.addr=0x5e23, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x5e24, .a=0x7c, .x=0x02, .y=0x76, .sp=0x9b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x5e22, .value=0xad}, {.addr=0x5e23, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x5e22, .value=0xad, .type=IO_READ},
        {.addr=0x5e23, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xc183, .a=0x5f, .x=0x61, .y=0x7d, .sp=0xe9, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xc183, .value=0xad}, {.addr=0xc184, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xc185, .a=0x5f, .x=0x61, .y=0x7d, .sp=0xe9, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xc183, .value=0xad}, {.addr=0xc184, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xc183, .value=0xad, .type=IO_READ},
        {.addr=0xc184, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xa100, .a=0x0b, .x=0x69, .y=0xd8, .sp=0xe3, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xa100, .value=0xad}, {.addr=0xa101, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa102, .a=0x0b, .x=0x69, .y=0xd8, .sp=0xe3, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xa100, .value=0xad}, {.addr=0xa101, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa100, .value=0xad, .type=IO_READ},
        {.addr=0xa101, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x1fa6, .a=0xca, .x=0xd1, .y=0x47, .sp=0xa1, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x1fa6, .value=0xad}, {.addr=0x1fa7, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x1fa8, .a=0xca, .x=0xd1, .y=0x47, .sp=0xa1, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x1fa6, .value=0xad}, {.addr=0x1fa7, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x1fa6, .value=0xad, .type=IO_READ},
        {.addr=0x1fa7, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x6b8c, .a=0x67, .x=0x84, .y=0xb7, .sp=0xbc, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x6b8c, .value=0xad}, {.addr=0x6b8d, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x6b8e, .a=0x67, .x=0x84, .y=0xb7, .sp=0xbc, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x6b8c, .value=0xad}, {.addr=0x6b8d, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x6b8c, .value=0xad, .type=IO_READ},
        {.addr=0x6b8d, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x926f, .a=0xc8, .x=0x36, .y=0x9a, .sp=0x80, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x926f, .value=0xad}, {.addr=0x9270, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x9271, .a=0xc8, .x=0x36, .y=0x9a, .sp=0x80, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x926f, .value=0xad}, {.addr=0x9270, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x926f, .value=0xad, .type=IO_READ},
        {.addr=0x9270, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x20e8, .a=0x28, .x=0x06, .y=0x0d, .sp=0xdb, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x20e8, .value=0xad}, {.addr=0x20e9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x20ea, .a=0x28, .x=0x06, .y=0x0d, .sp=0xdb, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x20e8, .value=0xad}, {.addr=0x20e9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x20e8, .value=0xad, .type=IO_READ},
        {.addr=0x20e9, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xcf25, .a=0x6e, .x=0x32, .y=0xc2, .sp=0xd9, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xcf25, .value=0xad}, {.addr=0xcf26, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xcf27, .a=0x6e, .x=0x32, .y=0xc2, .sp=0xd9, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xcf25, .value=0xad}, {.addr=0xcf26, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xcf25, .value=0xad, .type=IO_READ},
        {.addr=0xcf26, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x9be9, .a=0x76, .x=0x9b, .y=0xc9, .sp=0xb5, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x9be9, .value=0xad}, {.addr=0x9bea, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x9beb, .a=0x76, .x=0x9b, .y=0xc9, .sp=0xb5, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x9be9, .value=0xad}, {.addr=0x9bea, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x9be9, .value=0xad, .type=IO_READ},
        {.addr=0x9bea, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x46a3, .a=0x6f, .x=0xd6, .y=0xe5, .sp=0x3c, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x46a3, .value=0xad}, {.addr=0x46a4, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x46a5, .a=0x6f, .x=0xd6, .y=0xe5, .sp=0x3c, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x46a3, .value=0xad}, {.addr=0x46a4, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x46a3, .value=0xad, .type=IO_READ},
        {.addr=0x46a4, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x3468, .a=0x1e, .x=0xd6, .y=0x95, .sp=0x86, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x3468, .value=0xad}, {.addr=0x3469, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x346a, .a=0x1e, .x=0xd6, .y=0x95, .sp=0x86, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3468, .value=0xad}, {.addr=0x3469, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x3468, .value=0xad, .type=IO_READ},
        {.addr=0x3469, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x5b3d, .a=0x18, .x=0x6a, .y=0xbf, .sp=0x45, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x5b3d, .value=0xad}, {.addr=0x5b3e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5b3f, .a=0x18, .x=0x6a, .y=0xbf, .sp=0x45, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x5b3d, .value=0xad}, {.addr=0x5b3e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5b3d, .value=0xad, .type=IO_READ},
        {.addr=0x5b3e, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xd75b, .a=0xc4, .x=0xfa, .y=0x59, .sp=0x81, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xd75b, .value=0xad}, {.addr=0xd75c, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xd75d, .a=0xc4, .x=0xfa, .y=0x59, .sp=0x81, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xd75b, .value=0xad}, {.addr=0xd75c, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xd75b, .value=0xad, .type=IO_READ},
        {.addr=0xd75c, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xdde3, .a=0x27, .x=0x4a, .y=0x7a, .sp=0x67, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xdde3, .value=0xad}, {.addr=0xdde4, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xdde5, .a=0x27, .x=0x4a, .y=0x7a, .sp=0x67, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xdde3, .value=0xad}, {.addr=0xdde4, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xdde3, .value=0xad, .type=IO_READ},
        {.addr=0xdde4, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x08ef, .a=0xe4, .x=0x65, .y=0x1f, .sp=0x9b, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x08ef, .value=0xad}, {.addr=0x08f0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x08f1, .a=0xe4, .x=0x65, .y=0x1f, .sp=0x9b, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x08ef, .value=0xad}, {.addr=0x08f0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x08ef, .value=0xad, .type=IO_READ},
        {.addr=0x08f0, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x2745, .a=0x29, .x=0x5a, .y=0xd1, .sp=0x50, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x2745, .value=0xad}, {.addr=0x2746, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x2747, .a=0x29, .x=0x5a, .y=0xd1, .sp=0x50, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x2745, .value=0xad}, {.addr=0x2746, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x2745, .value=0xad, .type=IO_READ},
        {.addr=0x2746, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xeb3d, .a=0xf1, .x=0xe7, .y=0xa3, .sp=0xdc, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xeb3d, .value=0xad}, {.addr=0xeb3e, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xeb3f, .a=0xf1, .x=0xe7, .y=0xa3, .sp=0xdc, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xeb3d, .value=0xad}, {.addr=0xeb3e, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xeb3d, .value=0xad, .type=IO_READ},
        {.addr=0xeb3e, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x7a1e, .a=0xe4, .x=0xa2, .y=0x0c, .sp=0x29, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x7a1e, .value=0xad}, {.addr=0x7a1f, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x7a20, .a=0xe4, .x=0xa2, .y=0x0c, .sp=0x29, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7a1e, .value=0xad}, {.addr=0x7a1f, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x7a1e, .value=0xad, .type=IO_READ},
        {.addr=0x7a1f, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xd55a, .a=0x63, .x=0xc4, .y=0x5a, .sp=0xb5, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xd55a, .value=0xad}, {.addr=0xd55b, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xd55c, .a=0x63, .x=0xc4, .y=0x5a, .sp=0xb5, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xd55a, .value=0xad}, {.addr=0xd55b, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xd55a, .value=0xad, .type=IO_READ},
        {.addr=0xd55b, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x98ed, .a=0xcd, .x=0x74, .y=0x8f, .sp=0xc6, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x98ed, .value=0xad}, {.addr=0x98ee, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x98ef, .a=0xcd, .x=0x74, .y=0x8f, .sp=0xc6, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x98ed, .value=0xad}, {.addr=0x98ee, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x98ed, .value=0xad, .type=IO_READ},
        {.addr=0x98ee, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xb36d, .a=0x8c, .x=0xad, .y=0x36, .sp=0x87, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xb36d, .value=0xad}, {.addr=0xb36e, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xb36f, .a=0x8c, .x=0xad, .y=0x36, .sp=0x87, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xb36d, .value=0xad}, {.addr=0xb36e, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xb36d, .value=0xad, .type=IO_READ},
        {.addr=0xb36e, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xff2c, .a=0x8a, .x=0x88, .y=0xb6, .sp=0x20, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xff2c, .value=0xad}, {.addr=0xff2d, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xff2e, .a=0x8a, .x=0x88, .y=0xb6, .sp=0x20, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xff2c, .value=0xad}, {.addr=0xff2d, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xff2c, .value=0xad, .type=IO_READ},
        {.addr=0xff2d, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x459a, .a=0x1a, .x=0x12, .y=0x93, .sp=0xa5, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x459a, .value=0xad}, {.addr=0x459b, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x459c, .a=0x1a, .x=0x12, .y=0x93, .sp=0xa5, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x459a, .value=0xad}, {.addr=0x459b, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x459a, .value=0xad, .type=IO_READ},
        {.addr=0x459b, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x2e4e, .a=0xfa, .x=0xbe, .y=0x31, .sp=0xc7, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x2e4e, .value=0xad}, {.addr=0x2e4f, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x2e50, .a=0xfa, .x=0xbe, .y=0x31, .sp=0xc7, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x2e4e, .value=0xad}, {.addr=0x2e4f, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x2e4e, .value=0xad, .type=IO_READ},
        {.addr=0x2e4f, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xf905, .a=0x5d, .x=0x44, .y=0xc8, .sp=0x02, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xf905, .value=0xad}, {.addr=0xf906, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xf907, .a=0x5d, .x=0x44, .y=0xc8, .sp=0x02, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xf905, .value=0xad}, {.addr=0xf906, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xf905, .value=0xad, .type=IO_READ},
        {.addr=0xf906, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xd814, .a=0xd3, .x=0xf3, .y=0x33, .sp=0xc7, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xd814, .value=0xad}, {.addr=0xd815, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xd816, .a=0xd3, .x=0xf3, .y=0x33, .sp=0xc7, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xd814, .value=0xad}, {.addr=0xd815, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xd814, .value=0xad, .type=IO_READ},
        {.addr=0xd815, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xf823, .a=0xeb, .x=0x29, .y=0x92, .sp=0xfb, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xf823, .value=0xad}, {.addr=0xf824, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xf825, .a=0xeb, .x=0x29, .y=0x92, .sp=0xfb, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xf823, .value=0xad}, {.addr=0xf824, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xf823, .value=0xad, .type=IO_READ},
        {.addr=0xf824, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0100) {
    const struct CPU_State initial_cpu = {.pc=0xf8c4, .a=0xe9, .x=0xf5, .y=0x7a, .sp=0x21, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xf8c4, .value=0xad}, {.addr=0xf8c5, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xf8c6, .a=0xe9, .x=0xf5, .y=0x7a, .sp=0x21, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xf8c4, .value=0xad}, {.addr=0xf8c5, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xf8c4, .value=0xad, .type=IO_READ},
        {.addr=0xf8c5, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0101) {
    const struct CPU_State initial_cpu = {.pc=0x2b09, .a=0xfa, .x=0x8a, .y=0x68, .sp=0x7c, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x2b09, .value=0xad}, {.addr=0x2b0a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2b0b, .a=0xfa, .x=0x8a, .y=0x68, .sp=0x7c, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x2b09, .value=0xad}, {.addr=0x2b0a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2b09, .value=0xad, .type=IO_READ},
        {.addr=0x2b0a, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0102) {
    const struct CPU_State initial_cpu = {.pc=0x0024, .a=0xbb, .x=0x21, .y=0x71, .sp=0xce, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0024, .value=0xad}, {.addr=0x0025, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0026, .a=0xbb, .x=0x21, .y=0x71, .sp=0xce, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0024, .value=0xad}, {.addr=0x0025, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0024, .value=0xad, .type=IO_READ},
        {.addr=0x0025, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0103) {
    const struct CPU_State initial_cpu = {.pc=0xfdae, .a=0x8f, .x=0x37, .y=0x8a, .sp=0x45, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xfdae, .value=0xad}, {.addr=0xfdaf, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfdb0, .a=0x8f, .x=0x37, .y=0x8a, .sp=0x45, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xfdae, .value=0xad}, {.addr=0xfdaf, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfdae, .value=0xad, .type=IO_READ},
        {.addr=0xfdaf, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0104) {
    const struct CPU_State initial_cpu = {.pc=0x5445, .a=0xb9, .x=0xa8, .y=0x2f, .sp=0xd7, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x5445, .value=0xad}, {.addr=0x5446, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x5447, .a=0xb9, .x=0xa8, .y=0x2f, .sp=0xd7, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x5445, .value=0xad}, {.addr=0x5446, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x5445, .value=0xad, .type=IO_READ},
        {.addr=0x5446, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0105) {
    const struct CPU_State initial_cpu = {.pc=0x39e1, .a=0xfe, .x=0x88, .y=0x58, .sp=0x76, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x39e1, .value=0xad}, {.addr=0x39e2, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x39e3, .a=0xfe, .x=0x88, .y=0x58, .sp=0x76, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x39e1, .value=0xad}, {.addr=0x39e2, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x39e1, .value=0xad, .type=IO_READ},
        {.addr=0x39e2, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0106) {
    const struct CPU_State initial_cpu = {.pc=0xb57e, .a=0x3e, .x=0x05, .y=0xd4, .sp=0xd2, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xb57e, .value=0xad}, {.addr=0xb57f, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xb580, .a=0x3e, .x=0x05, .y=0xd4, .sp=0xd2, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xb57e, .value=0xad}, {.addr=0xb57f, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xb57e, .value=0xad, .type=IO_READ},
        {.addr=0xb57f, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0107) {
    const struct CPU_State initial_cpu = {.pc=0x8118, .a=0x77, .x=0xfc, .y=0x3a, .sp=0xb5, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x8118, .value=0xad}, {.addr=0x8119, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x811a, .a=0x77, .x=0xfc, .y=0x3a, .sp=0xb5, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8118, .value=0xad}, {.addr=0x8119, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x8118, .value=0xad, .type=IO_READ},
        {.addr=0x8119, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0108) {
    const struct CPU_State initial_cpu = {.pc=0x57db, .a=0x7f, .x=0xe7, .y=0x5f, .sp=0x4a, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x57db, .value=0xad}, {.addr=0x57dc, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x57dd, .a=0x7f, .x=0xe7, .y=0x5f, .sp=0x4a, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x57db, .value=0xad}, {.addr=0x57dc, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x57db, .value=0xad, .type=IO_READ},
        {.addr=0x57dc, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0109) {
    const struct CPU_State initial_cpu = {.pc=0x55f7, .a=0xda, .x=0x3c, .y=0xc6, .sp=0x1e, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x55f7, .value=0xad}, {.addr=0x55f8, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x55f9, .a=0xda, .x=0x3c, .y=0xc6, .sp=0x1e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x55f7, .value=0xad}, {.addr=0x55f8, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x55f7, .value=0xad, .type=IO_READ},
        {.addr=0x55f8, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_010A) {
    const struct CPU_State initial_cpu = {.pc=0x9781, .a=0x00, .x=0x21, .y=0x89, .sp=0x18, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x9781, .value=0xad}, {.addr=0x9782, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x9783, .a=0x00, .x=0x21, .y=0x89, .sp=0x18, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9781, .value=0xad}, {.addr=0x9782, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x9781, .value=0xad, .type=IO_READ},
        {.addr=0x9782, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_010B) {
    const struct CPU_State initial_cpu = {.pc=0x2483, .a=0x6a, .x=0xe0, .y=0x62, .sp=0xf9, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x2483, .value=0xad}, {.addr=0x2484, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x2485, .a=0x6a, .x=0xe0, .y=0x62, .sp=0xf9, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x2483, .value=0xad}, {.addr=0x2484, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x2483, .value=0xad, .type=IO_READ},
        {.addr=0x2484, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_010C) {
    const struct CPU_State initial_cpu = {.pc=0x96ee, .a=0x7a, .x=0x75, .y=0x42, .sp=0x90, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x96ee, .value=0xad}, {.addr=0x96ef, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x96f0, .a=0x7a, .x=0x75, .y=0x42, .sp=0x90, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x96ee, .value=0xad}, {.addr=0x96ef, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x96ee, .value=0xad, .type=IO_READ},
        {.addr=0x96ef, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_010D) {
    const struct CPU_State initial_cpu = {.pc=0xc179, .a=0xb7, .x=0x9b, .y=0xe6, .sp=0xe3, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xc179, .value=0xad}, {.addr=0xc17a, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xc17b, .a=0xb7, .x=0x9b, .y=0xe6, .sp=0xe3, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xc179, .value=0xad}, {.addr=0xc17a, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xc179, .value=0xad, .type=IO_READ},
        {.addr=0xc17a, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_010E) {
    const struct CPU_State initial_cpu = {.pc=0x8c26, .a=0x56, .x=0xd4, .y=0xfa, .sp=0xce, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x8c26, .value=0xad}, {.addr=0x8c27, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x8c28, .a=0x56, .x=0xd4, .y=0xfa, .sp=0xce, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x8c26, .value=0xad}, {.addr=0x8c27, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x8c26, .value=0xad, .type=IO_READ},
        {.addr=0x8c27, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_010F) {
    const struct CPU_State initial_cpu = {.pc=0x1684, .a=0x0d, .x=0x4f, .y=0x0b, .sp=0x6a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x1684, .value=0xad}, {.addr=0x1685, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x1686, .a=0x0d, .x=0x4f, .y=0x0b, .sp=0x6a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x1684, .value=0xad}, {.addr=0x1685, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x1684, .value=0xad, .type=IO_READ},
        {.addr=0x1685, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0110) {
    const struct CPU_State initial_cpu = {.pc=0xfacf, .a=0x41, .x=0x69, .y=0xb8, .sp=0x25, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xfacf, .value=0xad}, {.addr=0xfad0, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xfad1, .a=0x41, .x=0x69, .y=0xb8, .sp=0x25, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xfacf, .value=0xad}, {.addr=0xfad0, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xfacf, .value=0xad, .type=IO_READ},
        {.addr=0xfad0, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0111) {
    const struct CPU_State initial_cpu = {.pc=0x16b0, .a=0x57, .x=0x4b, .y=0x0f, .sp=0x1b, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x16b0, .value=0xad}, {.addr=0x16b1, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x16b2, .a=0x57, .x=0x4b, .y=0x0f, .sp=0x1b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x16b0, .value=0xad}, {.addr=0x16b1, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x16b0, .value=0xad, .type=IO_READ},
        {.addr=0x16b1, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0112) {
    const struct CPU_State initial_cpu = {.pc=0x572f, .a=0xac, .x=0x44, .y=0xfd, .sp=0xf7, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x572f, .value=0xad}, {.addr=0x5730, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x5731, .a=0xac, .x=0x44, .y=0xfd, .sp=0xf7, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x572f, .value=0xad}, {.addr=0x5730, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x572f, .value=0xad, .type=IO_READ},
        {.addr=0x5730, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0113) {
    const struct CPU_State initial_cpu = {.pc=0xc481, .a=0x1f, .x=0x22, .y=0xe2, .sp=0xf4, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xc481, .value=0xad}, {.addr=0xc482, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xc483, .a=0x1f, .x=0x22, .y=0xe2, .sp=0xf4, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xc481, .value=0xad}, {.addr=0xc482, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xc481, .value=0xad, .type=IO_READ},
        {.addr=0xc482, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0114) {
    const struct CPU_State initial_cpu = {.pc=0x7a2b, .a=0x41, .x=0x4d, .y=0xb7, .sp=0x12, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x7a2b, .value=0xad}, {.addr=0x7a2c, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x7a2d, .a=0x41, .x=0x4d, .y=0xb7, .sp=0x12, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x7a2b, .value=0xad}, {.addr=0x7a2c, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x7a2b, .value=0xad, .type=IO_READ},
        {.addr=0x7a2c, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0115) {
    const struct CPU_State initial_cpu = {.pc=0x434e, .a=0xac, .x=0x7a, .y=0xee, .sp=0x00, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x434e, .value=0xad}, {.addr=0x434f, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x4350, .a=0xac, .x=0x7a, .y=0xee, .sp=0x00, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x434e, .value=0xad}, {.addr=0x434f, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x434e, .value=0xad, .type=IO_READ},
        {.addr=0x434f, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0116) {
    const struct CPU_State initial_cpu = {.pc=0xd78b, .a=0xda, .x=0x00, .y=0x98, .sp=0x7f, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xd78b, .value=0xad}, {.addr=0xd78c, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xd78d, .a=0xda, .x=0x00, .y=0x98, .sp=0x7f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xd78b, .value=0xad}, {.addr=0xd78c, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xd78b, .value=0xad, .type=IO_READ},
        {.addr=0xd78c, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0117) {
    const struct CPU_State initial_cpu = {.pc=0xde56, .a=0x4c, .x=0xc7, .y=0x43, .sp=0xb6, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xde56, .value=0xad}, {.addr=0xde57, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xde58, .a=0x4c, .x=0xc7, .y=0x43, .sp=0xb6, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xde56, .value=0xad}, {.addr=0xde57, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xde56, .value=0xad, .type=IO_READ},
        {.addr=0xde57, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0118) {
    const struct CPU_State initial_cpu = {.pc=0xb74e, .a=0x03, .x=0x77, .y=0xfa, .sp=0x52, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xb74e, .value=0xad}, {.addr=0xb74f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb750, .a=0x03, .x=0x77, .y=0xfa, .sp=0x52, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb74e, .value=0xad}, {.addr=0xb74f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb74e, .value=0xad, .type=IO_READ},
        {.addr=0xb74f, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0119) {
    const struct CPU_State initial_cpu = {.pc=0x0808, .a=0xe0, .x=0x9f, .y=0x87, .sp=0xf9, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0808, .value=0xad}, {.addr=0x0809, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x080a, .a=0xe0, .x=0x9f, .y=0x87, .sp=0xf9, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0808, .value=0xad}, {.addr=0x0809, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x0808, .value=0xad, .type=IO_READ},
        {.addr=0x0809, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_011A) {
    const struct CPU_State initial_cpu = {.pc=0x42a9, .a=0xb6, .x=0x37, .y=0x72, .sp=0xfc, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x42a9, .value=0xad}, {.addr=0x42aa, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x42ab, .a=0xb6, .x=0x37, .y=0x72, .sp=0xfc, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x42a9, .value=0xad}, {.addr=0x42aa, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x42a9, .value=0xad, .type=IO_READ},
        {.addr=0x42aa, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_011B) {
    const struct CPU_State initial_cpu = {.pc=0x19c1, .a=0xcc, .x=0x67, .y=0xe2, .sp=0x27, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x19c1, .value=0xad}, {.addr=0x19c2, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x19c3, .a=0xcc, .x=0x67, .y=0xe2, .sp=0x27, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x19c1, .value=0xad}, {.addr=0x19c2, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x19c1, .value=0xad, .type=IO_READ},
        {.addr=0x19c2, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_011C) {
    const struct CPU_State initial_cpu = {.pc=0x59e6, .a=0xee, .x=0xf2, .y=0x45, .sp=0xf2, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x59e6, .value=0xad}, {.addr=0x59e7, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x59e8, .a=0xee, .x=0xf2, .y=0x45, .sp=0xf2, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x59e6, .value=0xad}, {.addr=0x59e7, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x59e6, .value=0xad, .type=IO_READ},
        {.addr=0x59e7, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_011D) {
    const struct CPU_State initial_cpu = {.pc=0x536d, .a=0xeb, .x=0x06, .y=0xc3, .sp=0xcc, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x536d, .value=0xad}, {.addr=0x536e, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x536f, .a=0xeb, .x=0x06, .y=0xc3, .sp=0xcc, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x536d, .value=0xad}, {.addr=0x536e, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x536d, .value=0xad, .type=IO_READ},
        {.addr=0x536e, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_011E) {
    const struct CPU_State initial_cpu = {.pc=0x267d, .a=0x39, .x=0x73, .y=0x4a, .sp=0x15, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x267d, .value=0xad}, {.addr=0x267e, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x267f, .a=0x39, .x=0x73, .y=0x4a, .sp=0x15, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x267d, .value=0xad}, {.addr=0x267e, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x267d, .value=0xad, .type=IO_READ},
        {.addr=0x267e, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_011F) {
    const struct CPU_State initial_cpu = {.pc=0x5f84, .a=0x6a, .x=0x58, .y=0xed, .sp=0x26, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x5f84, .value=0xad}, {.addr=0x5f85, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x5f86, .a=0x6a, .x=0x58, .y=0xed, .sp=0x26, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x5f84, .value=0xad}, {.addr=0x5f85, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x5f84, .value=0xad, .type=IO_READ},
        {.addr=0x5f85, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0120) {
    const struct CPU_State initial_cpu = {.pc=0xcdda, .a=0x91, .x=0x84, .y=0x78, .sp=0xba, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xcdda, .value=0xad}, {.addr=0xcddb, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xcddc, .a=0x91, .x=0x84, .y=0x78, .sp=0xba, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xcdda, .value=0xad}, {.addr=0xcddb, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xcdda, .value=0xad, .type=IO_READ},
        {.addr=0xcddb, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0121) {
    const struct CPU_State initial_cpu = {.pc=0xff4d, .a=0xa7, .x=0xc2, .y=0x0c, .sp=0xa4, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xff4d, .value=0xad}, {.addr=0xff4e, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xff4f, .a=0xa7, .x=0xc2, .y=0x0c, .sp=0xa4, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xff4d, .value=0xad}, {.addr=0xff4e, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xff4d, .value=0xad, .type=IO_READ},
        {.addr=0xff4e, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0122) {
    const struct CPU_State initial_cpu = {.pc=0x97bf, .a=0xcf, .x=0x74, .y=0x83, .sp=0xad, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x97bf, .value=0xad}, {.addr=0x97c0, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x97c1, .a=0xcf, .x=0x74, .y=0x83, .sp=0xad, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x97bf, .value=0xad}, {.addr=0x97c0, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x97bf, .value=0xad, .type=IO_READ},
        {.addr=0x97c0, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0123) {
    const struct CPU_State initial_cpu = {.pc=0x20b6, .a=0xeb, .x=0xdd, .y=0x87, .sp=0x77, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x20b6, .value=0xad}, {.addr=0x20b7, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x20b8, .a=0xeb, .x=0xdd, .y=0x87, .sp=0x77, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x20b6, .value=0xad}, {.addr=0x20b7, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x20b6, .value=0xad, .type=IO_READ},
        {.addr=0x20b7, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0124) {
    const struct CPU_State initial_cpu = {.pc=0x9cd0, .a=0x46, .x=0xeb, .y=0x60, .sp=0x73, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x9cd0, .value=0xad}, {.addr=0x9cd1, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x9cd2, .a=0x46, .x=0xeb, .y=0x60, .sp=0x73, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x9cd0, .value=0xad}, {.addr=0x9cd1, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x9cd0, .value=0xad, .type=IO_READ},
        {.addr=0x9cd1, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0125) {
    const struct CPU_State initial_cpu = {.pc=0x1154, .a=0x03, .x=0x05, .y=0x29, .sp=0x3d, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x1154, .value=0xad}, {.addr=0x1155, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x1156, .a=0x03, .x=0x05, .y=0x29, .sp=0x3d, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x1154, .value=0xad}, {.addr=0x1155, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x1154, .value=0xad, .type=IO_READ},
        {.addr=0x1155, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0126) {
    const struct CPU_State initial_cpu = {.pc=0x6944, .a=0x7a, .x=0xb5, .y=0xda, .sp=0xf2, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x6944, .value=0xad}, {.addr=0x6945, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x6946, .a=0x7a, .x=0xb5, .y=0xda, .sp=0xf2, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x6944, .value=0xad}, {.addr=0x6945, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x6944, .value=0xad, .type=IO_READ},
        {.addr=0x6945, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0127) {
    const struct CPU_State initial_cpu = {.pc=0x5f37, .a=0x32, .x=0x44, .y=0x4b, .sp=0x1f, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x5f37, .value=0xad}, {.addr=0x5f38, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x5f39, .a=0x32, .x=0x44, .y=0x4b, .sp=0x1f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x5f37, .value=0xad}, {.addr=0x5f38, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x5f37, .value=0xad, .type=IO_READ},
        {.addr=0x5f38, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0128) {
    const struct CPU_State initial_cpu = {.pc=0x8a94, .a=0x3f, .x=0x2f, .y=0x86, .sp=0x42, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x8a94, .value=0xad}, {.addr=0x8a95, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x8a96, .a=0x3f, .x=0x2f, .y=0x86, .sp=0x42, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x8a94, .value=0xad}, {.addr=0x8a95, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x8a94, .value=0xad, .type=IO_READ},
        {.addr=0x8a95, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0129) {
    const struct CPU_State initial_cpu = {.pc=0xc135, .a=0x79, .x=0xcb, .y=0x96, .sp=0x6e, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xc135, .value=0xad}, {.addr=0xc136, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xc137, .a=0x79, .x=0xcb, .y=0x96, .sp=0x6e, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc135, .value=0xad}, {.addr=0xc136, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xc135, .value=0xad, .type=IO_READ},
        {.addr=0xc136, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_012A) {
    const struct CPU_State initial_cpu = {.pc=0x4974, .a=0xd6, .x=0x9a, .y=0xf6, .sp=0xcf, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x4974, .value=0xad}, {.addr=0x4975, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4976, .a=0xd6, .x=0x9a, .y=0xf6, .sp=0xcf, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x4974, .value=0xad}, {.addr=0x4975, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4974, .value=0xad, .type=IO_READ},
        {.addr=0x4975, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_012B) {
    const struct CPU_State initial_cpu = {.pc=0x2a65, .a=0xac, .x=0x1b, .y=0xe6, .sp=0x39, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x2a65, .value=0xad}, {.addr=0x2a66, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x2a67, .a=0xac, .x=0x1b, .y=0xe6, .sp=0x39, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2a65, .value=0xad}, {.addr=0x2a66, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x2a65, .value=0xad, .type=IO_READ},
        {.addr=0x2a66, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_012C) {
    const struct CPU_State initial_cpu = {.pc=0xb3d1, .a=0x81, .x=0x4f, .y=0x46, .sp=0xf0, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xb3d1, .value=0xad}, {.addr=0xb3d2, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xb3d3, .a=0x81, .x=0x4f, .y=0x46, .sp=0xf0, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xb3d1, .value=0xad}, {.addr=0xb3d2, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xb3d1, .value=0xad, .type=IO_READ},
        {.addr=0xb3d2, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_012D) {
    const struct CPU_State initial_cpu = {.pc=0xca32, .a=0xc6, .x=0x41, .y=0x9f, .sp=0x86, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xca32, .value=0xad}, {.addr=0xca33, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xca34, .a=0xc6, .x=0x41, .y=0x9f, .sp=0x86, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xca32, .value=0xad}, {.addr=0xca33, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xca32, .value=0xad, .type=IO_READ},
        {.addr=0xca33, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_012E) {
    const struct CPU_State initial_cpu = {.pc=0x843b, .a=0x6b, .x=0xa0, .y=0x4d, .sp=0x59, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x843b, .value=0xad}, {.addr=0x843c, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x843d, .a=0x6b, .x=0xa0, .y=0x4d, .sp=0x59, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x843b, .value=0xad}, {.addr=0x843c, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x843b, .value=0xad, .type=IO_READ},
        {.addr=0x843c, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_012F) {
    const struct CPU_State initial_cpu = {.pc=0x3a13, .a=0x52, .x=0x31, .y=0x51, .sp=0x38, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x3a13, .value=0xad}, {.addr=0x3a14, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x3a15, .a=0x52, .x=0x31, .y=0x51, .sp=0x38, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x3a13, .value=0xad}, {.addr=0x3a14, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x3a13, .value=0xad, .type=IO_READ},
        {.addr=0x3a14, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0130) {
    const struct CPU_State initial_cpu = {.pc=0x62ae, .a=0x84, .x=0x2d, .y=0xd9, .sp=0x73, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x62ae, .value=0xad}, {.addr=0x62af, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x62b0, .a=0x84, .x=0x2d, .y=0xd9, .sp=0x73, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x62ae, .value=0xad}, {.addr=0x62af, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x62ae, .value=0xad, .type=IO_READ},
        {.addr=0x62af, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0131) {
    const struct CPU_State initial_cpu = {.pc=0xdb60, .a=0x27, .x=0x4e, .y=0x68, .sp=0x49, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xdb60, .value=0xad}, {.addr=0xdb61, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xdb62, .a=0x27, .x=0x4e, .y=0x68, .sp=0x49, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xdb60, .value=0xad}, {.addr=0xdb61, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xdb60, .value=0xad, .type=IO_READ},
        {.addr=0xdb61, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0132) {
    const struct CPU_State initial_cpu = {.pc=0x4084, .a=0x00, .x=0xa6, .y=0xd6, .sp=0xb4, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x4084, .value=0xad}, {.addr=0x4085, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x4086, .a=0x00, .x=0xa6, .y=0xd6, .sp=0xb4, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x4084, .value=0xad}, {.addr=0x4085, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x4084, .value=0xad, .type=IO_READ},
        {.addr=0x4085, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0133) {
    const struct CPU_State initial_cpu = {.pc=0xbb8d, .a=0xdd, .x=0xa4, .y=0xd4, .sp=0xbe, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xbb8d, .value=0xad}, {.addr=0xbb8e, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xbb8f, .a=0xdd, .x=0xa4, .y=0xd4, .sp=0xbe, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xbb8d, .value=0xad}, {.addr=0xbb8e, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xbb8d, .value=0xad, .type=IO_READ},
        {.addr=0xbb8e, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0134) {
    const struct CPU_State initial_cpu = {.pc=0xfed1, .a=0xec, .x=0xc3, .y=0x3c, .sp=0xa3, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xfed1, .value=0xad}, {.addr=0xfed2, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xfed3, .a=0xec, .x=0xc3, .y=0x3c, .sp=0xa3, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xfed1, .value=0xad}, {.addr=0xfed2, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xfed1, .value=0xad, .type=IO_READ},
        {.addr=0xfed2, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0135) {
    const struct CPU_State initial_cpu = {.pc=0x8178, .a=0x4b, .x=0x6b, .y=0x90, .sp=0x35, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x8178, .value=0xad}, {.addr=0x8179, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x817a, .a=0x4b, .x=0x6b, .y=0x90, .sp=0x35, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x8178, .value=0xad}, {.addr=0x8179, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x8178, .value=0xad, .type=IO_READ},
        {.addr=0x8179, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0136) {
    const struct CPU_State initial_cpu = {.pc=0x1b59, .a=0xc7, .x=0xaf, .y=0xe5, .sp=0x79, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x1b59, .value=0xad}, {.addr=0x1b5a, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x1b5b, .a=0xc7, .x=0xaf, .y=0xe5, .sp=0x79, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x1b59, .value=0xad}, {.addr=0x1b5a, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x1b59, .value=0xad, .type=IO_READ},
        {.addr=0x1b5a, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0137) {
    const struct CPU_State initial_cpu = {.pc=0x277f, .a=0xef, .x=0x4b, .y=0x4b, .sp=0x12, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x277f, .value=0xad}, {.addr=0x2780, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x2781, .a=0xef, .x=0x4b, .y=0x4b, .sp=0x12, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x277f, .value=0xad}, {.addr=0x2780, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x277f, .value=0xad, .type=IO_READ},
        {.addr=0x2780, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0138) {
    const struct CPU_State initial_cpu = {.pc=0xef15, .a=0x2b, .x=0xcc, .y=0x9d, .sp=0xcb, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xef15, .value=0xad}, {.addr=0xef16, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xef17, .a=0x2b, .x=0xcc, .y=0x9d, .sp=0xcb, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xef15, .value=0xad}, {.addr=0xef16, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xef15, .value=0xad, .type=IO_READ},
        {.addr=0xef16, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0139) {
    const struct CPU_State initial_cpu = {.pc=0x70a6, .a=0xfe, .x=0x2a, .y=0x28, .sp=0x3e, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x70a6, .value=0xad}, {.addr=0x70a7, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x70a8, .a=0xfe, .x=0x2a, .y=0x28, .sp=0x3e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x70a6, .value=0xad}, {.addr=0x70a7, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x70a6, .value=0xad, .type=IO_READ},
        {.addr=0x70a7, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_013A) {
    const struct CPU_State initial_cpu = {.pc=0x8bab, .a=0x39, .x=0xcd, .y=0xb6, .sp=0x6b, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x8bab, .value=0xad}, {.addr=0x8bac, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x8bad, .a=0x39, .x=0xcd, .y=0xb6, .sp=0x6b, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x8bab, .value=0xad}, {.addr=0x8bac, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x8bab, .value=0xad, .type=IO_READ},
        {.addr=0x8bac, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_013B) {
    const struct CPU_State initial_cpu = {.pc=0xa974, .a=0x97, .x=0xeb, .y=0xbb, .sp=0x87, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xa974, .value=0xad}, {.addr=0xa975, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xa976, .a=0x97, .x=0xeb, .y=0xbb, .sp=0x87, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xa974, .value=0xad}, {.addr=0xa975, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xa974, .value=0xad, .type=IO_READ},
        {.addr=0xa975, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_013C) {
    const struct CPU_State initial_cpu = {.pc=0x8f6d, .a=0x49, .x=0x32, .y=0x24, .sp=0x3c, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x8f6d, .value=0xad}, {.addr=0x8f6e, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x8f6f, .a=0x49, .x=0x32, .y=0x24, .sp=0x3c, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x8f6d, .value=0xad}, {.addr=0x8f6e, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x8f6d, .value=0xad, .type=IO_READ},
        {.addr=0x8f6e, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_013D) {
    const struct CPU_State initial_cpu = {.pc=0xf5f8, .a=0x29, .x=0x85, .y=0xb1, .sp=0x99, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xf5f8, .value=0xad}, {.addr=0xf5f9, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xf5fa, .a=0x29, .x=0x85, .y=0xb1, .sp=0x99, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xf5f8, .value=0xad}, {.addr=0xf5f9, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xf5f8, .value=0xad, .type=IO_READ},
        {.addr=0xf5f9, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_013E) {
    const struct CPU_State initial_cpu = {.pc=0x3d16, .a=0xd9, .x=0xc1, .y=0x4b, .sp=0xa9, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x3d16, .value=0xad}, {.addr=0x3d17, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x3d18, .a=0xd9, .x=0xc1, .y=0x4b, .sp=0xa9, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x3d16, .value=0xad}, {.addr=0x3d17, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x3d16, .value=0xad, .type=IO_READ},
        {.addr=0x3d17, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_013F) {
    const struct CPU_State initial_cpu = {.pc=0xe523, .a=0xa3, .x=0x8b, .y=0x2a, .sp=0xa2, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xe523, .value=0xad}, {.addr=0xe524, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe525, .a=0xa3, .x=0x8b, .y=0x2a, .sp=0xa2, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xe523, .value=0xad}, {.addr=0xe524, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe523, .value=0xad, .type=IO_READ},
        {.addr=0xe524, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0140) {
    const struct CPU_State initial_cpu = {.pc=0x65ea, .a=0x98, .x=0x76, .y=0xba, .sp=0xde, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x65ea, .value=0xad}, {.addr=0x65eb, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x65ec, .a=0x98, .x=0x76, .y=0xba, .sp=0xde, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x65ea, .value=0xad}, {.addr=0x65eb, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x65ea, .value=0xad, .type=IO_READ},
        {.addr=0x65eb, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0141) {
    const struct CPU_State initial_cpu = {.pc=0xb26a, .a=0xe0, .x=0xde, .y=0x8d, .sp=0xd1, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xb26a, .value=0xad}, {.addr=0xb26b, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xb26c, .a=0xe0, .x=0xde, .y=0x8d, .sp=0xd1, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xb26a, .value=0xad}, {.addr=0xb26b, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xb26a, .value=0xad, .type=IO_READ},
        {.addr=0xb26b, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0142) {
    const struct CPU_State initial_cpu = {.pc=0x124f, .a=0xfa, .x=0x09, .y=0x01, .sp=0xd2, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x124f, .value=0xad}, {.addr=0x1250, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x1251, .a=0xfa, .x=0x09, .y=0x01, .sp=0xd2, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x124f, .value=0xad}, {.addr=0x1250, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x124f, .value=0xad, .type=IO_READ},
        {.addr=0x1250, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0143) {
    const struct CPU_State initial_cpu = {.pc=0xb8c5, .a=0x04, .x=0x5e, .y=0x1a, .sp=0x9f, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xb8c5, .value=0xad}, {.addr=0xb8c6, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xb8c7, .a=0x04, .x=0x5e, .y=0x1a, .sp=0x9f, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xb8c5, .value=0xad}, {.addr=0xb8c6, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xb8c5, .value=0xad, .type=IO_READ},
        {.addr=0xb8c6, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0144) {
    const struct CPU_State initial_cpu = {.pc=0x280c, .a=0xf9, .x=0xbb, .y=0x20, .sp=0xcf, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x280c, .value=0xad}, {.addr=0x280d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x280e, .a=0xf9, .x=0xbb, .y=0x20, .sp=0xcf, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x280c, .value=0xad}, {.addr=0x280d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x280c, .value=0xad, .type=IO_READ},
        {.addr=0x280d, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0145) {
    const struct CPU_State initial_cpu = {.pc=0xacf8, .a=0xf2, .x=0x86, .y=0xa3, .sp=0xa3, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xacf8, .value=0xad}, {.addr=0xacf9, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xacfa, .a=0xf2, .x=0x86, .y=0xa3, .sp=0xa3, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xacf8, .value=0xad}, {.addr=0xacf9, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xacf8, .value=0xad, .type=IO_READ},
        {.addr=0xacf9, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0146) {
    const struct CPU_State initial_cpu = {.pc=0xc881, .a=0xd6, .x=0x10, .y=0xe4, .sp=0xd9, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xc881, .value=0xad}, {.addr=0xc882, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xc883, .a=0xd6, .x=0x10, .y=0xe4, .sp=0xd9, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xc881, .value=0xad}, {.addr=0xc882, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xc881, .value=0xad, .type=IO_READ},
        {.addr=0xc882, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0147) {
    const struct CPU_State initial_cpu = {.pc=0x2783, .a=0x40, .x=0xed, .y=0xcc, .sp=0xf0, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x2783, .value=0xad}, {.addr=0x2784, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x2785, .a=0x40, .x=0xed, .y=0xcc, .sp=0xf0, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x2783, .value=0xad}, {.addr=0x2784, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x2783, .value=0xad, .type=IO_READ},
        {.addr=0x2784, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0148) {
    const struct CPU_State initial_cpu = {.pc=0x9524, .a=0x10, .x=0x32, .y=0x6b, .sp=0x26, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x9524, .value=0xad}, {.addr=0x9525, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x9526, .a=0x10, .x=0x32, .y=0x6b, .sp=0x26, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9524, .value=0xad}, {.addr=0x9525, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x9524, .value=0xad, .type=IO_READ},
        {.addr=0x9525, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0149) {
    const struct CPU_State initial_cpu = {.pc=0x6b35, .a=0xdb, .x=0x4f, .y=0x5e, .sp=0xba, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x6b35, .value=0xad}, {.addr=0x6b36, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x6b37, .a=0xdb, .x=0x4f, .y=0x5e, .sp=0xba, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x6b35, .value=0xad}, {.addr=0x6b36, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x6b35, .value=0xad, .type=IO_READ},
        {.addr=0x6b36, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_014A) {
    const struct CPU_State initial_cpu = {.pc=0x94ea, .a=0x0c, .x=0x25, .y=0x35, .sp=0x9f, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x94ea, .value=0xad}, {.addr=0x94eb, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x94ec, .a=0x0c, .x=0x25, .y=0x35, .sp=0x9f, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x94ea, .value=0xad}, {.addr=0x94eb, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x94ea, .value=0xad, .type=IO_READ},
        {.addr=0x94eb, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_014B) {
    const struct CPU_State initial_cpu = {.pc=0xd589, .a=0xea, .x=0x71, .y=0x92, .sp=0xd7, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xd589, .value=0xad}, {.addr=0xd58a, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xd58b, .a=0xea, .x=0x71, .y=0x92, .sp=0xd7, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xd589, .value=0xad}, {.addr=0xd58a, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xd589, .value=0xad, .type=IO_READ},
        {.addr=0xd58a, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_014C) {
    const struct CPU_State initial_cpu = {.pc=0x3699, .a=0xdb, .x=0x72, .y=0x3f, .sp=0x9a, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x3699, .value=0xad}, {.addr=0x369a, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x369b, .a=0xdb, .x=0x72, .y=0x3f, .sp=0x9a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x3699, .value=0xad}, {.addr=0x369a, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x3699, .value=0xad, .type=IO_READ},
        {.addr=0x369a, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_014D) {
    const struct CPU_State initial_cpu = {.pc=0x43af, .a=0xf2, .x=0x73, .y=0x66, .sp=0x14, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x43af, .value=0xad}, {.addr=0x43b0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x43b1, .a=0xf2, .x=0x73, .y=0x66, .sp=0x14, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x43af, .value=0xad}, {.addr=0x43b0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x43af, .value=0xad, .type=IO_READ},
        {.addr=0x43b0, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_014E) {
    const struct CPU_State initial_cpu = {.pc=0x5742, .a=0x7d, .x=0x0f, .y=0x88, .sp=0x89, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x5742, .value=0xad}, {.addr=0x5743, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x5744, .a=0x7d, .x=0x0f, .y=0x88, .sp=0x89, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x5742, .value=0xad}, {.addr=0x5743, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x5742, .value=0xad, .type=IO_READ},
        {.addr=0x5743, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_014F) {
    const struct CPU_State initial_cpu = {.pc=0x7b8b, .a=0x03, .x=0xea, .y=0x70, .sp=0x22, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x7b8b, .value=0xad}, {.addr=0x7b8c, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x7b8d, .a=0x03, .x=0xea, .y=0x70, .sp=0x22, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x7b8b, .value=0xad}, {.addr=0x7b8c, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x7b8b, .value=0xad, .type=IO_READ},
        {.addr=0x7b8c, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0150) {
    const struct CPU_State initial_cpu = {.pc=0xa2d3, .a=0xb1, .x=0x46, .y=0x05, .sp=0x35, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xa2d3, .value=0xad}, {.addr=0xa2d4, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xa2d5, .a=0xb1, .x=0x46, .y=0x05, .sp=0x35, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa2d3, .value=0xad}, {.addr=0xa2d4, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xa2d3, .value=0xad, .type=IO_READ},
        {.addr=0xa2d4, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0151) {
    const struct CPU_State initial_cpu = {.pc=0xa971, .a=0x0a, .x=0x73, .y=0xdb, .sp=0x90, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xa971, .value=0xad}, {.addr=0xa972, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xa973, .a=0x0a, .x=0x73, .y=0xdb, .sp=0x90, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xa971, .value=0xad}, {.addr=0xa972, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xa971, .value=0xad, .type=IO_READ},
        {.addr=0xa972, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0152) {
    const struct CPU_State initial_cpu = {.pc=0xbea9, .a=0x24, .x=0x54, .y=0x88, .sp=0xa4, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xbea9, .value=0xad}, {.addr=0xbeaa, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xbeab, .a=0x24, .x=0x54, .y=0x88, .sp=0xa4, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xbea9, .value=0xad}, {.addr=0xbeaa, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xbea9, .value=0xad, .type=IO_READ},
        {.addr=0xbeaa, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0153) {
    const struct CPU_State initial_cpu = {.pc=0x292c, .a=0xfc, .x=0xd7, .y=0x68, .sp=0xb1, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x292c, .value=0xad}, {.addr=0x292d, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x292e, .a=0xfc, .x=0xd7, .y=0x68, .sp=0xb1, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x292c, .value=0xad}, {.addr=0x292d, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x292c, .value=0xad, .type=IO_READ},
        {.addr=0x292d, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0154) {
    const struct CPU_State initial_cpu = {.pc=0xbe23, .a=0x39, .x=0xe8, .y=0x56, .sp=0xb2, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xbe23, .value=0xad}, {.addr=0xbe24, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbe25, .a=0x39, .x=0xe8, .y=0x56, .sp=0xb2, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xbe23, .value=0xad}, {.addr=0xbe24, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbe23, .value=0xad, .type=IO_READ},
        {.addr=0xbe24, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0155) {
    const struct CPU_State initial_cpu = {.pc=0x8bb6, .a=0x6a, .x=0x18, .y=0x3c, .sp=0x55, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x8bb6, .value=0xad}, {.addr=0x8bb7, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x8bb8, .a=0x6a, .x=0x18, .y=0x3c, .sp=0x55, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x8bb6, .value=0xad}, {.addr=0x8bb7, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x8bb6, .value=0xad, .type=IO_READ},
        {.addr=0x8bb7, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0156) {
    const struct CPU_State initial_cpu = {.pc=0xbdec, .a=0x6f, .x=0x97, .y=0x66, .sp=0x88, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xbdec, .value=0xad}, {.addr=0xbded, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xbdee, .a=0x6f, .x=0x97, .y=0x66, .sp=0x88, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xbdec, .value=0xad}, {.addr=0xbded, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xbdec, .value=0xad, .type=IO_READ},
        {.addr=0xbded, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0157) {
    const struct CPU_State initial_cpu = {.pc=0x73b7, .a=0xfb, .x=0x76, .y=0xde, .sp=0x4f, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x73b7, .value=0xad}, {.addr=0x73b8, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x73b9, .a=0xfb, .x=0x76, .y=0xde, .sp=0x4f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x73b7, .value=0xad}, {.addr=0x73b8, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x73b7, .value=0xad, .type=IO_READ},
        {.addr=0x73b8, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0158) {
    const struct CPU_State initial_cpu = {.pc=0x12f9, .a=0xe2, .x=0x6f, .y=0x29, .sp=0xfc, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x12f9, .value=0xad}, {.addr=0x12fa, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x12fb, .a=0xe2, .x=0x6f, .y=0x29, .sp=0xfc, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x12f9, .value=0xad}, {.addr=0x12fa, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x12f9, .value=0xad, .type=IO_READ},
        {.addr=0x12fa, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0159) {
    const struct CPU_State initial_cpu = {.pc=0xca31, .a=0xbe, .x=0xd8, .y=0x0e, .sp=0x1e, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xca31, .value=0xad}, {.addr=0xca32, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xca33, .a=0xbe, .x=0xd8, .y=0x0e, .sp=0x1e, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xca31, .value=0xad}, {.addr=0xca32, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xca31, .value=0xad, .type=IO_READ},
        {.addr=0xca32, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_015A) {
    const struct CPU_State initial_cpu = {.pc=0x9c8f, .a=0xfc, .x=0x16, .y=0x6f, .sp=0xfe, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x9c8f, .value=0xad}, {.addr=0x9c90, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x9c91, .a=0xfc, .x=0x16, .y=0x6f, .sp=0xfe, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x9c8f, .value=0xad}, {.addr=0x9c90, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x9c8f, .value=0xad, .type=IO_READ},
        {.addr=0x9c90, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_015B) {
    const struct CPU_State initial_cpu = {.pc=0x36ff, .a=0xbc, .x=0xeb, .y=0xac, .sp=0x7a, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x36ff, .value=0xad}, {.addr=0x3700, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3701, .a=0xbc, .x=0xeb, .y=0xac, .sp=0x7a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x36ff, .value=0xad}, {.addr=0x3700, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x36ff, .value=0xad, .type=IO_READ},
        {.addr=0x3700, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_015C) {
    const struct CPU_State initial_cpu = {.pc=0x36a5, .a=0x15, .x=0x38, .y=0x14, .sp=0xc8, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x36a5, .value=0xad}, {.addr=0x36a6, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x36a7, .a=0x15, .x=0x38, .y=0x14, .sp=0xc8, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x36a5, .value=0xad}, {.addr=0x36a6, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x36a5, .value=0xad, .type=IO_READ},
        {.addr=0x36a6, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_015D) {
    const struct CPU_State initial_cpu = {.pc=0x74eb, .a=0xf3, .x=0x83, .y=0x97, .sp=0x69, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x74eb, .value=0xad}, {.addr=0x74ec, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x74ed, .a=0xf3, .x=0x83, .y=0x97, .sp=0x69, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x74eb, .value=0xad}, {.addr=0x74ec, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x74eb, .value=0xad, .type=IO_READ},
        {.addr=0x74ec, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_015E) {
    const struct CPU_State initial_cpu = {.pc=0xd71e, .a=0x7c, .x=0x3e, .y=0xfa, .sp=0x25, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xd71e, .value=0xad}, {.addr=0xd71f, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xd720, .a=0x7c, .x=0x3e, .y=0xfa, .sp=0x25, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xd71e, .value=0xad}, {.addr=0xd71f, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xd71e, .value=0xad, .type=IO_READ},
        {.addr=0xd71f, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_015F) {
    const struct CPU_State initial_cpu = {.pc=0xc465, .a=0xde, .x=0xc6, .y=0xc7, .sp=0xc6, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xc465, .value=0xad}, {.addr=0xc466, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xc467, .a=0xde, .x=0xc6, .y=0xc7, .sp=0xc6, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xc465, .value=0xad}, {.addr=0xc466, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xc465, .value=0xad, .type=IO_READ},
        {.addr=0xc466, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0160) {
    const struct CPU_State initial_cpu = {.pc=0xb559, .a=0x45, .x=0x6f, .y=0x10, .sp=0x22, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xb559, .value=0xad}, {.addr=0xb55a, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0xb55b, .a=0x45, .x=0x6f, .y=0x10, .sp=0x22, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xb559, .value=0xad}, {.addr=0xb55a, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0xb559, .value=0xad, .type=IO_READ},
        {.addr=0xb55a, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0161) {
    const struct CPU_State initial_cpu = {.pc=0x8628, .a=0x9e, .x=0x02, .y=0x36, .sp=0x00, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x8628, .value=0xad}, {.addr=0x8629, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x862a, .a=0x9e, .x=0x02, .y=0x36, .sp=0x00, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8628, .value=0xad}, {.addr=0x8629, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x8628, .value=0xad, .type=IO_READ},
        {.addr=0x8629, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0162) {
    const struct CPU_State initial_cpu = {.pc=0xc5ac, .a=0xd3, .x=0xaf, .y=0x49, .sp=0x30, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xc5ac, .value=0xad}, {.addr=0xc5ad, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xc5ae, .a=0xd3, .x=0xaf, .y=0x49, .sp=0x30, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xc5ac, .value=0xad}, {.addr=0xc5ad, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xc5ac, .value=0xad, .type=IO_READ},
        {.addr=0xc5ad, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0163) {
    const struct CPU_State initial_cpu = {.pc=0x7973, .a=0x35, .x=0x03, .y=0x17, .sp=0x9a, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x7973, .value=0xad}, {.addr=0x7974, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x7975, .a=0x35, .x=0x03, .y=0x17, .sp=0x9a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7973, .value=0xad}, {.addr=0x7974, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x7973, .value=0xad, .type=IO_READ},
        {.addr=0x7974, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0164) {
    const struct CPU_State initial_cpu = {.pc=0x9621, .a=0x00, .x=0xe5, .y=0x8c, .sp=0x4d, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x9621, .value=0xad}, {.addr=0x9622, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9623, .a=0x00, .x=0xe5, .y=0x8c, .sp=0x4d, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x9621, .value=0xad}, {.addr=0x9622, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9621, .value=0xad, .type=IO_READ},
        {.addr=0x9622, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0165) {
    const struct CPU_State initial_cpu = {.pc=0x69bc, .a=0x70, .x=0xaf, .y=0x5f, .sp=0xd0, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x69bc, .value=0xad}, {.addr=0x69bd, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x69be, .a=0x70, .x=0xaf, .y=0x5f, .sp=0xd0, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x69bc, .value=0xad}, {.addr=0x69bd, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x69bc, .value=0xad, .type=IO_READ},
        {.addr=0x69bd, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0166) {
    const struct CPU_State initial_cpu = {.pc=0xca26, .a=0x90, .x=0x61, .y=0xbb, .sp=0x8a, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xca26, .value=0xad}, {.addr=0xca27, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xca28, .a=0x90, .x=0x61, .y=0xbb, .sp=0x8a, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xca26, .value=0xad}, {.addr=0xca27, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xca26, .value=0xad, .type=IO_READ},
        {.addr=0xca27, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0167) {
    const struct CPU_State initial_cpu = {.pc=0x7685, .a=0x7e, .x=0x87, .y=0x8f, .sp=0xbf, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x7685, .value=0xad}, {.addr=0x7686, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x7687, .a=0x7e, .x=0x87, .y=0x8f, .sp=0xbf, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x7685, .value=0xad}, {.addr=0x7686, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x7685, .value=0xad, .type=IO_READ},
        {.addr=0x7686, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0168) {
    const struct CPU_State initial_cpu = {.pc=0x4254, .a=0x4b, .x=0x56, .y=0xf0, .sp=0xe7, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x4254, .value=0xad}, {.addr=0x4255, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4256, .a=0x4b, .x=0x56, .y=0xf0, .sp=0xe7, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x4254, .value=0xad}, {.addr=0x4255, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4254, .value=0xad, .type=IO_READ},
        {.addr=0x4255, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0169) {
    const struct CPU_State initial_cpu = {.pc=0xef72, .a=0xda, .x=0x6f, .y=0xa6, .sp=0x11, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xef72, .value=0xad}, {.addr=0xef73, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xef74, .a=0xda, .x=0x6f, .y=0xa6, .sp=0x11, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xef72, .value=0xad}, {.addr=0xef73, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xef72, .value=0xad, .type=IO_READ},
        {.addr=0xef73, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_016A) {
    const struct CPU_State initial_cpu = {.pc=0x46cd, .a=0x50, .x=0x84, .y=0xd6, .sp=0x7f, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x46cd, .value=0xad}, {.addr=0x46ce, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x46cf, .a=0x50, .x=0x84, .y=0xd6, .sp=0x7f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x46cd, .value=0xad}, {.addr=0x46ce, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x46cd, .value=0xad, .type=IO_READ},
        {.addr=0x46ce, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_016B) {
    const struct CPU_State initial_cpu = {.pc=0x0c0a, .a=0x09, .x=0x17, .y=0xe7, .sp=0xa6, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0c0a, .value=0xad}, {.addr=0x0c0b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0c0c, .a=0x09, .x=0x17, .y=0xe7, .sp=0xa6, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0c0a, .value=0xad}, {.addr=0x0c0b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0c0a, .value=0xad, .type=IO_READ},
        {.addr=0x0c0b, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_016C) {
    const struct CPU_State initial_cpu = {.pc=0x6cb1, .a=0x9d, .x=0xa5, .y=0xeb, .sp=0x4b, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x6cb1, .value=0xad}, {.addr=0x6cb2, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x6cb3, .a=0x9d, .x=0xa5, .y=0xeb, .sp=0x4b, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x6cb1, .value=0xad}, {.addr=0x6cb2, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x6cb1, .value=0xad, .type=IO_READ},
        {.addr=0x6cb2, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_016D) {
    const struct CPU_State initial_cpu = {.pc=0x5282, .a=0x32, .x=0xe0, .y=0x55, .sp=0xc2, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x5282, .value=0xad}, {.addr=0x5283, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x5284, .a=0x32, .x=0xe0, .y=0x55, .sp=0xc2, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x5282, .value=0xad}, {.addr=0x5283, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x5282, .value=0xad, .type=IO_READ},
        {.addr=0x5283, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_016E) {
    const struct CPU_State initial_cpu = {.pc=0x9090, .a=0x6f, .x=0x27, .y=0x16, .sp=0x91, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x9090, .value=0xad}, {.addr=0x9091, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x9092, .a=0x6f, .x=0x27, .y=0x16, .sp=0x91, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x9090, .value=0xad}, {.addr=0x9091, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x9090, .value=0xad, .type=IO_READ},
        {.addr=0x9091, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_016F) {
    const struct CPU_State initial_cpu = {.pc=0x7dca, .a=0x02, .x=0xdb, .y=0x22, .sp=0x37, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x7dca, .value=0xad}, {.addr=0x7dcb, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x7dcc, .a=0x02, .x=0xdb, .y=0x22, .sp=0x37, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x7dca, .value=0xad}, {.addr=0x7dcb, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x7dca, .value=0xad, .type=IO_READ},
        {.addr=0x7dcb, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0170) {
    const struct CPU_State initial_cpu = {.pc=0xfa3c, .a=0x01, .x=0x41, .y=0xbf, .sp=0x10, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xfa3c, .value=0xad}, {.addr=0xfa3d, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xfa3e, .a=0x01, .x=0x41, .y=0xbf, .sp=0x10, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xfa3c, .value=0xad}, {.addr=0xfa3d, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xfa3c, .value=0xad, .type=IO_READ},
        {.addr=0xfa3d, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0171) {
    const struct CPU_State initial_cpu = {.pc=0x431c, .a=0xd4, .x=0x6b, .y=0x86, .sp=0xe1, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x431c, .value=0xad}, {.addr=0x431d, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x431e, .a=0xd4, .x=0x6b, .y=0x86, .sp=0xe1, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x431c, .value=0xad}, {.addr=0x431d, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x431c, .value=0xad, .type=IO_READ},
        {.addr=0x431d, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0172) {
    const struct CPU_State initial_cpu = {.pc=0xab0c, .a=0x69, .x=0x6a, .y=0xc3, .sp=0x7e, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xab0c, .value=0xad}, {.addr=0xab0d, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xab0e, .a=0x69, .x=0x6a, .y=0xc3, .sp=0x7e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xab0c, .value=0xad}, {.addr=0xab0d, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xab0c, .value=0xad, .type=IO_READ},
        {.addr=0xab0d, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0173) {
    const struct CPU_State initial_cpu = {.pc=0x1ba9, .a=0x6e, .x=0x8c, .y=0xf2, .sp=0x92, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x1ba9, .value=0xad}, {.addr=0x1baa, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x1bab, .a=0x6e, .x=0x8c, .y=0xf2, .sp=0x92, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x1ba9, .value=0xad}, {.addr=0x1baa, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x1ba9, .value=0xad, .type=IO_READ},
        {.addr=0x1baa, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0174) {
    const struct CPU_State initial_cpu = {.pc=0x268d, .a=0x9f, .x=0xcd, .y=0xbb, .sp=0xa7, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x268d, .value=0xad}, {.addr=0x268e, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x268f, .a=0x9f, .x=0xcd, .y=0xbb, .sp=0xa7, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x268d, .value=0xad}, {.addr=0x268e, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x268d, .value=0xad, .type=IO_READ},
        {.addr=0x268e, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0175) {
    const struct CPU_State initial_cpu = {.pc=0x8d31, .a=0x10, .x=0x5e, .y=0x09, .sp=0xca, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x8d31, .value=0xad}, {.addr=0x8d32, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8d33, .a=0x10, .x=0x5e, .y=0x09, .sp=0xca, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x8d31, .value=0xad}, {.addr=0x8d32, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8d31, .value=0xad, .type=IO_READ},
        {.addr=0x8d32, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0176) {
    const struct CPU_State initial_cpu = {.pc=0xee14, .a=0x1a, .x=0xaa, .y=0x2d, .sp=0xb6, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xee14, .value=0xad}, {.addr=0xee15, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xee16, .a=0x1a, .x=0xaa, .y=0x2d, .sp=0xb6, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xee14, .value=0xad}, {.addr=0xee15, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xee14, .value=0xad, .type=IO_READ},
        {.addr=0xee15, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0177) {
    const struct CPU_State initial_cpu = {.pc=0xa934, .a=0x41, .x=0x6d, .y=0x56, .sp=0xc8, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xa934, .value=0xad}, {.addr=0xa935, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xa936, .a=0x41, .x=0x6d, .y=0x56, .sp=0xc8, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xa934, .value=0xad}, {.addr=0xa935, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xa934, .value=0xad, .type=IO_READ},
        {.addr=0xa935, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0178) {
    const struct CPU_State initial_cpu = {.pc=0x5c38, .a=0xc7, .x=0xf3, .y=0x51, .sp=0xaf, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x5c38, .value=0xad}, {.addr=0x5c39, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5c3a, .a=0xc7, .x=0xf3, .y=0x51, .sp=0xaf, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x5c38, .value=0xad}, {.addr=0x5c39, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5c38, .value=0xad, .type=IO_READ},
        {.addr=0x5c39, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0179) {
    const struct CPU_State initial_cpu = {.pc=0xb9c0, .a=0xf9, .x=0x7a, .y=0xd8, .sp=0xad, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xb9c0, .value=0xad}, {.addr=0xb9c1, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xb9c2, .a=0xf9, .x=0x7a, .y=0xd8, .sp=0xad, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xb9c0, .value=0xad}, {.addr=0xb9c1, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xb9c0, .value=0xad, .type=IO_READ},
        {.addr=0xb9c1, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_017A) {
    const struct CPU_State initial_cpu = {.pc=0x8532, .a=0xbd, .x=0xdd, .y=0x61, .sp=0x7f, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x8532, .value=0xad}, {.addr=0x8533, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x8534, .a=0xbd, .x=0xdd, .y=0x61, .sp=0x7f, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x8532, .value=0xad}, {.addr=0x8533, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x8532, .value=0xad, .type=IO_READ},
        {.addr=0x8533, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_017B) {
    const struct CPU_State initial_cpu = {.pc=0xdc56, .a=0x54, .x=0x00, .y=0x45, .sp=0x5a, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xdc56, .value=0xad}, {.addr=0xdc57, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdc58, .a=0x54, .x=0x00, .y=0x45, .sp=0x5a, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xdc56, .value=0xad}, {.addr=0xdc57, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdc56, .value=0xad, .type=IO_READ},
        {.addr=0xdc57, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_017C) {
    const struct CPU_State initial_cpu = {.pc=0xa53b, .a=0x7a, .x=0x19, .y=0xb2, .sp=0x1b, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xa53b, .value=0xad}, {.addr=0xa53c, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xa53d, .a=0x7a, .x=0x19, .y=0xb2, .sp=0x1b, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xa53b, .value=0xad}, {.addr=0xa53c, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xa53b, .value=0xad, .type=IO_READ},
        {.addr=0xa53c, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_017D) {
    const struct CPU_State initial_cpu = {.pc=0x5853, .a=0xd7, .x=0xdd, .y=0x23, .sp=0x21, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x5853, .value=0xad}, {.addr=0x5854, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5855, .a=0xd7, .x=0xdd, .y=0x23, .sp=0x21, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5853, .value=0xad}, {.addr=0x5854, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5853, .value=0xad, .type=IO_READ},
        {.addr=0x5854, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_017E) {
    const struct CPU_State initial_cpu = {.pc=0x76ee, .a=0xcf, .x=0x14, .y=0x3c, .sp=0xe5, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x76ee, .value=0xad}, {.addr=0x76ef, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x76f0, .a=0xcf, .x=0x14, .y=0x3c, .sp=0xe5, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x76ee, .value=0xad}, {.addr=0x76ef, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x76ee, .value=0xad, .type=IO_READ},
        {.addr=0x76ef, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_017F) {
    const struct CPU_State initial_cpu = {.pc=0xd05c, .a=0x6d, .x=0x00, .y=0x85, .sp=0xf8, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xd05c, .value=0xad}, {.addr=0xd05d, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xd05e, .a=0x6d, .x=0x00, .y=0x85, .sp=0xf8, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xd05c, .value=0xad}, {.addr=0xd05d, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xd05c, .value=0xad, .type=IO_READ},
        {.addr=0xd05d, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0180) {
    const struct CPU_State initial_cpu = {.pc=0xf229, .a=0xbd, .x=0x9c, .y=0x76, .sp=0xea, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xf229, .value=0xad}, {.addr=0xf22a, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xf22b, .a=0xbd, .x=0x9c, .y=0x76, .sp=0xea, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xf229, .value=0xad}, {.addr=0xf22a, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xf229, .value=0xad, .type=IO_READ},
        {.addr=0xf22a, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0181) {
    const struct CPU_State initial_cpu = {.pc=0xe0c8, .a=0xf6, .x=0x75, .y=0x75, .sp=0xc4, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xe0c8, .value=0xad}, {.addr=0xe0c9, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xe0ca, .a=0xf6, .x=0x75, .y=0x75, .sp=0xc4, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xe0c8, .value=0xad}, {.addr=0xe0c9, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xe0c8, .value=0xad, .type=IO_READ},
        {.addr=0xe0c9, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0182) {
    const struct CPU_State initial_cpu = {.pc=0x522e, .a=0xc3, .x=0x46, .y=0x60, .sp=0x85, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x522e, .value=0xad}, {.addr=0x522f, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x5230, .a=0xc3, .x=0x46, .y=0x60, .sp=0x85, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x522e, .value=0xad}, {.addr=0x522f, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x522e, .value=0xad, .type=IO_READ},
        {.addr=0x522f, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0183) {
    const struct CPU_State initial_cpu = {.pc=0xb59a, .a=0xa3, .x=0x76, .y=0xbc, .sp=0x28, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xb59a, .value=0xad}, {.addr=0xb59b, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xb59c, .a=0xa3, .x=0x76, .y=0xbc, .sp=0x28, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xb59a, .value=0xad}, {.addr=0xb59b, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xb59a, .value=0xad, .type=IO_READ},
        {.addr=0xb59b, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0184) {
    const struct CPU_State initial_cpu = {.pc=0xd930, .a=0xea, .x=0xcc, .y=0x62, .sp=0x94, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xd930, .value=0xad}, {.addr=0xd931, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xd932, .a=0xea, .x=0xcc, .y=0x62, .sp=0x94, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xd930, .value=0xad}, {.addr=0xd931, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xd930, .value=0xad, .type=IO_READ},
        {.addr=0xd931, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0185) {
    const struct CPU_State initial_cpu = {.pc=0xdb22, .a=0xa0, .x=0x45, .y=0x7a, .sp=0x47, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xdb22, .value=0xad}, {.addr=0xdb23, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdb24, .a=0xa0, .x=0x45, .y=0x7a, .sp=0x47, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xdb22, .value=0xad}, {.addr=0xdb23, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdb22, .value=0xad, .type=IO_READ},
        {.addr=0xdb23, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0186) {
    const struct CPU_State initial_cpu = {.pc=0xfbb8, .a=0xd3, .x=0x16, .y=0xff, .sp=0x12, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xfbb8, .value=0xad}, {.addr=0xfbb9, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xfbba, .a=0xd3, .x=0x16, .y=0xff, .sp=0x12, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xfbb8, .value=0xad}, {.addr=0xfbb9, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xfbb8, .value=0xad, .type=IO_READ},
        {.addr=0xfbb9, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0187) {
    const struct CPU_State initial_cpu = {.pc=0x976b, .a=0x31, .x=0x23, .y=0xe9, .sp=0x10, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x976b, .value=0xad}, {.addr=0x976c, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x976d, .a=0x31, .x=0x23, .y=0xe9, .sp=0x10, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x976b, .value=0xad}, {.addr=0x976c, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x976b, .value=0xad, .type=IO_READ},
        {.addr=0x976c, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0188) {
    const struct CPU_State initial_cpu = {.pc=0x6fcb, .a=0xc8, .x=0x19, .y=0x65, .sp=0xb3, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x6fcb, .value=0xad}, {.addr=0x6fcc, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6fcd, .a=0xc8, .x=0x19, .y=0x65, .sp=0xb3, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x6fcb, .value=0xad}, {.addr=0x6fcc, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6fcb, .value=0xad, .type=IO_READ},
        {.addr=0x6fcc, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0189) {
    const struct CPU_State initial_cpu = {.pc=0xea06, .a=0x19, .x=0x28, .y=0x13, .sp=0x14, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xea06, .value=0xad}, {.addr=0xea07, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xea08, .a=0x19, .x=0x28, .y=0x13, .sp=0x14, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xea06, .value=0xad}, {.addr=0xea07, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xea06, .value=0xad, .type=IO_READ},
        {.addr=0xea07, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_018A) {
    const struct CPU_State initial_cpu = {.pc=0x1088, .a=0x91, .x=0x97, .y=0xc0, .sp=0xfd, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x1088, .value=0xad}, {.addr=0x1089, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x108a, .a=0x91, .x=0x97, .y=0xc0, .sp=0xfd, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x1088, .value=0xad}, {.addr=0x1089, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x1088, .value=0xad, .type=IO_READ},
        {.addr=0x1089, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_018B) {
    const struct CPU_State initial_cpu = {.pc=0x4eb6, .a=0x17, .x=0xdb, .y=0xa2, .sp=0xe4, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x4eb6, .value=0xad}, {.addr=0x4eb7, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x4eb8, .a=0x17, .x=0xdb, .y=0xa2, .sp=0xe4, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x4eb6, .value=0xad}, {.addr=0x4eb7, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x4eb6, .value=0xad, .type=IO_READ},
        {.addr=0x4eb7, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_018C) {
    const struct CPU_State initial_cpu = {.pc=0x50f7, .a=0xa0, .x=0x51, .y=0xfa, .sp=0x5f, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x50f7, .value=0xad}, {.addr=0x50f8, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x50f9, .a=0xa0, .x=0x51, .y=0xfa, .sp=0x5f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x50f7, .value=0xad}, {.addr=0x50f8, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x50f7, .value=0xad, .type=IO_READ},
        {.addr=0x50f8, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_018D) {
    const struct CPU_State initial_cpu = {.pc=0x3075, .a=0xa6, .x=0xf3, .y=0x5e, .sp=0x80, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x3075, .value=0xad}, {.addr=0x3076, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x3077, .a=0xa6, .x=0xf3, .y=0x5e, .sp=0x80, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x3075, .value=0xad}, {.addr=0x3076, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x3075, .value=0xad, .type=IO_READ},
        {.addr=0x3076, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_018E) {
    const struct CPU_State initial_cpu = {.pc=0xc05d, .a=0x3c, .x=0xa0, .y=0xa7, .sp=0xcf, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xc05d, .value=0xad}, {.addr=0xc05e, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xc05f, .a=0x3c, .x=0xa0, .y=0xa7, .sp=0xcf, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xc05d, .value=0xad}, {.addr=0xc05e, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xc05d, .value=0xad, .type=IO_READ},
        {.addr=0xc05e, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_018F) {
    const struct CPU_State initial_cpu = {.pc=0x25fc, .a=0x8b, .x=0x2b, .y=0x26, .sp=0xcc, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x25fc, .value=0xad}, {.addr=0x25fd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x25fe, .a=0x8b, .x=0x2b, .y=0x26, .sp=0xcc, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x25fc, .value=0xad}, {.addr=0x25fd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x25fc, .value=0xad, .type=IO_READ},
        {.addr=0x25fd, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0190) {
    const struct CPU_State initial_cpu = {.pc=0x0219, .a=0x0b, .x=0x14, .y=0x78, .sp=0xf7, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0219, .value=0xad}, {.addr=0x021a, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x021b, .a=0x0b, .x=0x14, .y=0x78, .sp=0xf7, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0219, .value=0xad}, {.addr=0x021a, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x0219, .value=0xad, .type=IO_READ},
        {.addr=0x021a, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0191) {
    const struct CPU_State initial_cpu = {.pc=0xc280, .a=0x84, .x=0x02, .y=0x5a, .sp=0x20, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xc280, .value=0xad}, {.addr=0xc281, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xc282, .a=0x84, .x=0x02, .y=0x5a, .sp=0x20, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xc280, .value=0xad}, {.addr=0xc281, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xc280, .value=0xad, .type=IO_READ},
        {.addr=0xc281, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0192) {
    const struct CPU_State initial_cpu = {.pc=0x893d, .a=0x3d, .x=0x57, .y=0xbd, .sp=0x0d, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x893d, .value=0xad}, {.addr=0x893e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x893f, .a=0x3d, .x=0x57, .y=0xbd, .sp=0x0d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x893d, .value=0xad}, {.addr=0x893e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x893d, .value=0xad, .type=IO_READ},
        {.addr=0x893e, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0193) {
    const struct CPU_State initial_cpu = {.pc=0x51c8, .a=0xf3, .x=0xf2, .y=0xeb, .sp=0x3c, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x51c8, .value=0xad}, {.addr=0x51c9, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x51ca, .a=0xf3, .x=0xf2, .y=0xeb, .sp=0x3c, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x51c8, .value=0xad}, {.addr=0x51c9, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x51c8, .value=0xad, .type=IO_READ},
        {.addr=0x51c9, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0194) {
    const struct CPU_State initial_cpu = {.pc=0x73fb, .a=0x7d, .x=0xfb, .y=0xed, .sp=0x5e, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x73fb, .value=0xad}, {.addr=0x73fc, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x73fd, .a=0x7d, .x=0xfb, .y=0xed, .sp=0x5e, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x73fb, .value=0xad}, {.addr=0x73fc, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x73fb, .value=0xad, .type=IO_READ},
        {.addr=0x73fc, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0195) {
    const struct CPU_State initial_cpu = {.pc=0xfd55, .a=0xc9, .x=0x2a, .y=0xa9, .sp=0x5d, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xfd55, .value=0xad}, {.addr=0xfd56, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xfd57, .a=0xc9, .x=0x2a, .y=0xa9, .sp=0x5d, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xfd55, .value=0xad}, {.addr=0xfd56, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xfd55, .value=0xad, .type=IO_READ},
        {.addr=0xfd56, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0196) {
    const struct CPU_State initial_cpu = {.pc=0xaef2, .a=0x65, .x=0x46, .y=0xf8, .sp=0x6a, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xaef2, .value=0xad}, {.addr=0xaef3, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xaef4, .a=0x65, .x=0x46, .y=0xf8, .sp=0x6a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xaef2, .value=0xad}, {.addr=0xaef3, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xaef2, .value=0xad, .type=IO_READ},
        {.addr=0xaef3, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0197) {
    const struct CPU_State initial_cpu = {.pc=0x97bb, .a=0x7e, .x=0x8d, .y=0xc8, .sp=0xa3, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x97bb, .value=0xad}, {.addr=0x97bc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x97bd, .a=0x7e, .x=0x8d, .y=0xc8, .sp=0xa3, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x97bb, .value=0xad}, {.addr=0x97bc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x97bb, .value=0xad, .type=IO_READ},
        {.addr=0x97bc, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0198) {
    const struct CPU_State initial_cpu = {.pc=0x943d, .a=0x1c, .x=0xc2, .y=0x58, .sp=0x70, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x943d, .value=0xad}, {.addr=0x943e, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x943f, .a=0x1c, .x=0xc2, .y=0x58, .sp=0x70, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x943d, .value=0xad}, {.addr=0x943e, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x943d, .value=0xad, .type=IO_READ},
        {.addr=0x943e, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0199) {
    const struct CPU_State initial_cpu = {.pc=0xd1aa, .a=0x66, .x=0x83, .y=0x4f, .sp=0xce, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xd1aa, .value=0xad}, {.addr=0xd1ab, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xd1ac, .a=0x66, .x=0x83, .y=0x4f, .sp=0xce, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xd1aa, .value=0xad}, {.addr=0xd1ab, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xd1aa, .value=0xad, .type=IO_READ},
        {.addr=0xd1ab, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_019A) {
    const struct CPU_State initial_cpu = {.pc=0xb6cf, .a=0x0e, .x=0x6c, .y=0x4e, .sp=0x72, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xb6cf, .value=0xad}, {.addr=0xb6d0, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xb6d1, .a=0x0e, .x=0x6c, .y=0x4e, .sp=0x72, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb6cf, .value=0xad}, {.addr=0xb6d0, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xb6cf, .value=0xad, .type=IO_READ},
        {.addr=0xb6d0, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_019B) {
    const struct CPU_State initial_cpu = {.pc=0xadd3, .a=0xab, .x=0x52, .y=0x57, .sp=0x0e, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xadd3, .value=0xad}, {.addr=0xadd4, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xadd5, .a=0xab, .x=0x52, .y=0x57, .sp=0x0e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xadd3, .value=0xad}, {.addr=0xadd4, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xadd3, .value=0xad, .type=IO_READ},
        {.addr=0xadd4, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_019C) {
    const struct CPU_State initial_cpu = {.pc=0x88d1, .a=0x03, .x=0x3b, .y=0x0b, .sp=0x6b, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x88d1, .value=0xad}, {.addr=0x88d2, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x88d3, .a=0x03, .x=0x3b, .y=0x0b, .sp=0x6b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x88d1, .value=0xad}, {.addr=0x88d2, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x88d1, .value=0xad, .type=IO_READ},
        {.addr=0x88d2, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_019D) {
    const struct CPU_State initial_cpu = {.pc=0x6b32, .a=0x5d, .x=0x13, .y=0x97, .sp=0x98, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x6b32, .value=0xad}, {.addr=0x6b33, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x6b34, .a=0x5d, .x=0x13, .y=0x97, .sp=0x98, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x6b32, .value=0xad}, {.addr=0x6b33, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x6b32, .value=0xad, .type=IO_READ},
        {.addr=0x6b33, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_019E) {
    const struct CPU_State initial_cpu = {.pc=0xd10d, .a=0x24, .x=0x6f, .y=0x8e, .sp=0xea, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xd10d, .value=0xad}, {.addr=0xd10e, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xd10f, .a=0x24, .x=0x6f, .y=0x8e, .sp=0xea, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd10d, .value=0xad}, {.addr=0xd10e, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xd10d, .value=0xad, .type=IO_READ},
        {.addr=0xd10e, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_019F) {
    const struct CPU_State initial_cpu = {.pc=0xa217, .a=0x0e, .x=0xd1, .y=0x99, .sp=0x26, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xa217, .value=0xad}, {.addr=0xa218, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xa219, .a=0x0e, .x=0xd1, .y=0x99, .sp=0x26, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xa217, .value=0xad}, {.addr=0xa218, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xa217, .value=0xad, .type=IO_READ},
        {.addr=0xa218, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x0e80, .a=0x88, .x=0x8f, .y=0x06, .sp=0xef, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0e80, .value=0xad}, {.addr=0x0e81, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x0e82, .a=0x88, .x=0x8f, .y=0x06, .sp=0xef, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0e80, .value=0xad}, {.addr=0x0e81, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x0e80, .value=0xad, .type=IO_READ},
        {.addr=0x0e81, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x032f, .a=0x0c, .x=0x3e, .y=0x50, .sp=0x03, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x032f, .value=0xad}, {.addr=0x0330, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0331, .a=0x0c, .x=0x3e, .y=0x50, .sp=0x03, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x032f, .value=0xad}, {.addr=0x0330, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x032f, .value=0xad, .type=IO_READ},
        {.addr=0x0330, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xa314, .a=0xe5, .x=0xd1, .y=0x99, .sp=0x96, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xa314, .value=0xad}, {.addr=0xa315, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xa316, .a=0xe5, .x=0xd1, .y=0x99, .sp=0x96, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa314, .value=0xad}, {.addr=0xa315, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xa314, .value=0xad, .type=IO_READ},
        {.addr=0xa315, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x76fe, .a=0x37, .x=0x5a, .y=0x07, .sp=0xd8, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x76fe, .value=0xad}, {.addr=0x76ff, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x7700, .a=0x37, .x=0x5a, .y=0x07, .sp=0xd8, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x76fe, .value=0xad}, {.addr=0x76ff, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x76fe, .value=0xad, .type=IO_READ},
        {.addr=0x76ff, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x170f, .a=0x4b, .x=0x01, .y=0xb0, .sp=0xa7, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x170f, .value=0xad}, {.addr=0x1710, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x1711, .a=0x4b, .x=0x01, .y=0xb0, .sp=0xa7, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x170f, .value=0xad}, {.addr=0x1710, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x170f, .value=0xad, .type=IO_READ},
        {.addr=0x1710, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x1a69, .a=0x26, .x=0x44, .y=0x03, .sp=0xcf, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x1a69, .value=0xad}, {.addr=0x1a6a, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x1a6b, .a=0x26, .x=0x44, .y=0x03, .sp=0xcf, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x1a69, .value=0xad}, {.addr=0x1a6a, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x1a69, .value=0xad, .type=IO_READ},
        {.addr=0x1a6a, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x086e, .a=0x5d, .x=0x3a, .y=0xe8, .sp=0x76, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x086e, .value=0xad}, {.addr=0x086f, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x0870, .a=0x5d, .x=0x3a, .y=0xe8, .sp=0x76, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x086e, .value=0xad}, {.addr=0x086f, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x086e, .value=0xad, .type=IO_READ},
        {.addr=0x086f, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x0dbe, .a=0x57, .x=0x09, .y=0xfd, .sp=0xd6, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0dbe, .value=0xad}, {.addr=0x0dbf, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x0dc0, .a=0x57, .x=0x09, .y=0xfd, .sp=0xd6, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0dbe, .value=0xad}, {.addr=0x0dbf, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x0dbe, .value=0xad, .type=IO_READ},
        {.addr=0x0dbf, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x815b, .a=0x4d, .x=0xc8, .y=0xd4, .sp=0xd5, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x815b, .value=0xad}, {.addr=0x815c, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x815d, .a=0x4d, .x=0xc8, .y=0xd4, .sp=0xd5, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x815b, .value=0xad}, {.addr=0x815c, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x815b, .value=0xad, .type=IO_READ},
        {.addr=0x815c, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xcb73, .a=0xc2, .x=0x4a, .y=0x66, .sp=0xdc, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xcb73, .value=0xad}, {.addr=0xcb74, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xcb75, .a=0xc2, .x=0x4a, .y=0x66, .sp=0xdc, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xcb73, .value=0xad}, {.addr=0xcb74, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xcb73, .value=0xad, .type=IO_READ},
        {.addr=0xcb74, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xc25c, .a=0x21, .x=0xe3, .y=0x05, .sp=0x2b, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xc25c, .value=0xad}, {.addr=0xc25d, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xc25e, .a=0x21, .x=0xe3, .y=0x05, .sp=0x2b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xc25c, .value=0xad}, {.addr=0xc25d, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xc25c, .value=0xad, .type=IO_READ},
        {.addr=0xc25d, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xb1d8, .a=0xd6, .x=0x9f, .y=0xc1, .sp=0xaa, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xb1d8, .value=0xad}, {.addr=0xb1d9, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xb1da, .a=0xd6, .x=0x9f, .y=0xc1, .sp=0xaa, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xb1d8, .value=0xad}, {.addr=0xb1d9, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xb1d8, .value=0xad, .type=IO_READ},
        {.addr=0xb1d9, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xaa3f, .a=0xcc, .x=0x26, .y=0xdd, .sp=0x13, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xaa3f, .value=0xad}, {.addr=0xaa40, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xaa41, .a=0xcc, .x=0x26, .y=0xdd, .sp=0x13, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xaa3f, .value=0xad}, {.addr=0xaa40, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xaa3f, .value=0xad, .type=IO_READ},
        {.addr=0xaa40, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xdc10, .a=0x6a, .x=0x99, .y=0x6d, .sp=0x2d, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xdc10, .value=0xad}, {.addr=0xdc11, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xdc12, .a=0x6a, .x=0x99, .y=0x6d, .sp=0x2d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xdc10, .value=0xad}, {.addr=0xdc11, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xdc10, .value=0xad, .type=IO_READ},
        {.addr=0xdc11, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xeec5, .a=0x6c, .x=0x63, .y=0x07, .sp=0xb8, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xeec5, .value=0xad}, {.addr=0xeec6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xeec7, .a=0x6c, .x=0x63, .y=0x07, .sp=0xb8, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xeec5, .value=0xad}, {.addr=0xeec6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xeec5, .value=0xad, .type=IO_READ},
        {.addr=0xeec6, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x4522, .a=0xbf, .x=0x57, .y=0xac, .sp=0xe2, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x4522, .value=0xad}, {.addr=0x4523, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x4524, .a=0xbf, .x=0x57, .y=0xac, .sp=0xe2, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x4522, .value=0xad}, {.addr=0x4523, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x4522, .value=0xad, .type=IO_READ},
        {.addr=0x4523, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x5158, .a=0x24, .x=0xce, .y=0x8a, .sp=0x37, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x5158, .value=0xad}, {.addr=0x5159, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x515a, .a=0x24, .x=0xce, .y=0x8a, .sp=0x37, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x5158, .value=0xad}, {.addr=0x5159, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5158, .value=0xad, .type=IO_READ},
        {.addr=0x5159, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x0e7c, .a=0xb9, .x=0x1e, .y=0xfd, .sp=0x89, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0e7c, .value=0xad}, {.addr=0x0e7d, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x0e7e, .a=0xb9, .x=0x1e, .y=0xfd, .sp=0x89, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0e7c, .value=0xad}, {.addr=0x0e7d, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x0e7c, .value=0xad, .type=IO_READ},
        {.addr=0x0e7d, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x8d92, .a=0xde, .x=0x3b, .y=0xe3, .sp=0x9e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x8d92, .value=0xad}, {.addr=0x8d93, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8d94, .a=0xde, .x=0x3b, .y=0xe3, .sp=0x9e, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x8d92, .value=0xad}, {.addr=0x8d93, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8d92, .value=0xad, .type=IO_READ},
        {.addr=0x8d93, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xe071, .a=0x1b, .x=0xc5, .y=0x24, .sp=0x68, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xe071, .value=0xad}, {.addr=0xe072, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xe073, .a=0x1b, .x=0xc5, .y=0x24, .sp=0x68, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xe071, .value=0xad}, {.addr=0xe072, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xe071, .value=0xad, .type=IO_READ},
        {.addr=0xe072, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xc01c, .a=0x84, .x=0x3d, .y=0x49, .sp=0x1d, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xc01c, .value=0xad}, {.addr=0xc01d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc01e, .a=0x84, .x=0x3d, .y=0x49, .sp=0x1d, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xc01c, .value=0xad}, {.addr=0xc01d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc01c, .value=0xad, .type=IO_READ},
        {.addr=0xc01d, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x97e0, .a=0xd2, .x=0x5a, .y=0x05, .sp=0x70, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x97e0, .value=0xad}, {.addr=0x97e1, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x97e2, .a=0xd2, .x=0x5a, .y=0x05, .sp=0x70, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x97e0, .value=0xad}, {.addr=0x97e1, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x97e0, .value=0xad, .type=IO_READ},
        {.addr=0x97e1, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x277c, .a=0x16, .x=0x00, .y=0xd9, .sp=0xbb, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x277c, .value=0xad}, {.addr=0x277d, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x277e, .a=0x16, .x=0x00, .y=0xd9, .sp=0xbb, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x277c, .value=0xad}, {.addr=0x277d, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x277c, .value=0xad, .type=IO_READ},
        {.addr=0x277d, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x2456, .a=0x30, .x=0x3b, .y=0x85, .sp=0x95, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x2456, .value=0xad}, {.addr=0x2457, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x2458, .a=0x30, .x=0x3b, .y=0x85, .sp=0x95, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x2456, .value=0xad}, {.addr=0x2457, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x2456, .value=0xad, .type=IO_READ},
        {.addr=0x2457, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x4e2b, .a=0xaa, .x=0x93, .y=0xe0, .sp=0x1f, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x4e2b, .value=0xad}, {.addr=0x4e2c, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x4e2d, .a=0xaa, .x=0x93, .y=0xe0, .sp=0x1f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x4e2b, .value=0xad}, {.addr=0x4e2c, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x4e2b, .value=0xad, .type=IO_READ},
        {.addr=0x4e2c, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x6318, .a=0x2f, .x=0x78, .y=0x86, .sp=0xe3, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x6318, .value=0xad}, {.addr=0x6319, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x631a, .a=0x2f, .x=0x78, .y=0x86, .sp=0xe3, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6318, .value=0xad}, {.addr=0x6319, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x6318, .value=0xad, .type=IO_READ},
        {.addr=0x6319, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x9f25, .a=0xdd, .x=0x74, .y=0x1d, .sp=0x56, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x9f25, .value=0xad}, {.addr=0x9f26, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x9f27, .a=0xdd, .x=0x74, .y=0x1d, .sp=0x56, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x9f25, .value=0xad}, {.addr=0x9f26, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x9f25, .value=0xad, .type=IO_READ},
        {.addr=0x9f26, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x20b5, .a=0x50, .x=0x06, .y=0x06, .sp=0x1f, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x20b5, .value=0xad}, {.addr=0x20b6, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x20b7, .a=0x50, .x=0x06, .y=0x06, .sp=0x1f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x20b5, .value=0xad}, {.addr=0x20b6, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x20b5, .value=0xad, .type=IO_READ},
        {.addr=0x20b6, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xe1df, .a=0x99, .x=0xd2, .y=0x77, .sp=0x85, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xe1df, .value=0xad}, {.addr=0xe1e0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xe1e1, .a=0x99, .x=0xd2, .y=0x77, .sp=0x85, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xe1df, .value=0xad}, {.addr=0xe1e0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xe1df, .value=0xad, .type=IO_READ},
        {.addr=0xe1e0, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xf6ef, .a=0xfd, .x=0x0c, .y=0xdc, .sp=0xac, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xf6ef, .value=0xad}, {.addr=0xf6f0, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xf6f1, .a=0xfd, .x=0x0c, .y=0xdc, .sp=0xac, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xf6ef, .value=0xad}, {.addr=0xf6f0, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xf6ef, .value=0xad, .type=IO_READ},
        {.addr=0xf6f0, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x4d0f, .a=0x5e, .x=0x6e, .y=0x9e, .sp=0x5c, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x4d0f, .value=0xad}, {.addr=0x4d10, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x4d11, .a=0x5e, .x=0x6e, .y=0x9e, .sp=0x5c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x4d0f, .value=0xad}, {.addr=0x4d10, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x4d0f, .value=0xad, .type=IO_READ},
        {.addr=0x4d10, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x807b, .a=0xcd, .x=0x41, .y=0x67, .sp=0x06, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x807b, .value=0xad}, {.addr=0x807c, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x807d, .a=0xcd, .x=0x41, .y=0x67, .sp=0x06, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x807b, .value=0xad}, {.addr=0x807c, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x807b, .value=0xad, .type=IO_READ},
        {.addr=0x807c, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xd5bb, .a=0xd6, .x=0xc0, .y=0xb8, .sp=0x23, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xd5bb, .value=0xad}, {.addr=0xd5bc, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xd5bd, .a=0xd6, .x=0xc0, .y=0xb8, .sp=0x23, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xd5bb, .value=0xad}, {.addr=0xd5bc, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xd5bb, .value=0xad, .type=IO_READ},
        {.addr=0xd5bc, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x4654, .a=0x7f, .x=0xb8, .y=0x24, .sp=0x66, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x4654, .value=0xad}, {.addr=0x4655, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x4656, .a=0x7f, .x=0xb8, .y=0x24, .sp=0x66, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x4654, .value=0xad}, {.addr=0x4655, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x4654, .value=0xad, .type=IO_READ},
        {.addr=0x4655, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x44af, .a=0x75, .x=0x4f, .y=0xec, .sp=0x3a, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x44af, .value=0xad}, {.addr=0x44b0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x44b1, .a=0x75, .x=0x4f, .y=0xec, .sp=0x3a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x44af, .value=0xad}, {.addr=0x44b0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x44af, .value=0xad, .type=IO_READ},
        {.addr=0x44b0, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xcf09, .a=0x07, .x=0x7b, .y=0x35, .sp=0x79, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xcf09, .value=0xad}, {.addr=0xcf0a, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xcf0b, .a=0x07, .x=0x7b, .y=0x35, .sp=0x79, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xcf09, .value=0xad}, {.addr=0xcf0a, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xcf09, .value=0xad, .type=IO_READ},
        {.addr=0xcf0a, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x9445, .a=0x1f, .x=0x95, .y=0x03, .sp=0xb7, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x9445, .value=0xad}, {.addr=0x9446, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x9447, .a=0x1f, .x=0x95, .y=0x03, .sp=0xb7, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x9445, .value=0xad}, {.addr=0x9446, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x9445, .value=0xad, .type=IO_READ},
        {.addr=0x9446, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x59e8, .a=0xdd, .x=0xf8, .y=0xf5, .sp=0x1e, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x59e8, .value=0xad}, {.addr=0x59e9, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x59ea, .a=0xdd, .x=0xf8, .y=0xf5, .sp=0x1e, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x59e8, .value=0xad}, {.addr=0x59e9, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x59e8, .value=0xad, .type=IO_READ},
        {.addr=0x59e9, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xfd79, .a=0x4b, .x=0xb2, .y=0x86, .sp=0xd0, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xfd79, .value=0xad}, {.addr=0xfd7a, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xfd7b, .a=0x4b, .x=0xb2, .y=0x86, .sp=0xd0, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xfd79, .value=0xad}, {.addr=0xfd7a, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xfd79, .value=0xad, .type=IO_READ},
        {.addr=0xfd7a, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xface, .a=0x11, .x=0xbe, .y=0xeb, .sp=0xfb, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xface, .value=0xad}, {.addr=0xfacf, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xfad0, .a=0x11, .x=0xbe, .y=0xeb, .sp=0xfb, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xface, .value=0xad}, {.addr=0xfacf, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xface, .value=0xad, .type=IO_READ},
        {.addr=0xfacf, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x0c1a, .a=0x5a, .x=0xa6, .y=0x5f, .sp=0xf2, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0c1a, .value=0xad}, {.addr=0x0c1b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0c1c, .a=0x5a, .x=0xa6, .y=0x5f, .sp=0xf2, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0c1a, .value=0xad}, {.addr=0x0c1b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0c1a, .value=0xad, .type=IO_READ},
        {.addr=0x0c1b, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xdb0a, .a=0xf0, .x=0x4f, .y=0xdc, .sp=0x32, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xdb0a, .value=0xad}, {.addr=0xdb0b, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xdb0c, .a=0xf0, .x=0x4f, .y=0xdc, .sp=0x32, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xdb0a, .value=0xad}, {.addr=0xdb0b, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xdb0a, .value=0xad, .type=IO_READ},
        {.addr=0xdb0b, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x7196, .a=0x9f, .x=0x8b, .y=0xbd, .sp=0x08, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x7196, .value=0xad}, {.addr=0x7197, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x7198, .a=0x9f, .x=0x8b, .y=0xbd, .sp=0x08, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7196, .value=0xad}, {.addr=0x7197, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x7196, .value=0xad, .type=IO_READ},
        {.addr=0x7197, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xa510, .a=0x18, .x=0x26, .y=0x67, .sp=0x2c, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xa510, .value=0xad}, {.addr=0xa511, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xa512, .a=0x18, .x=0x26, .y=0x67, .sp=0x2c, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xa510, .value=0xad}, {.addr=0xa511, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xa510, .value=0xad, .type=IO_READ},
        {.addr=0xa511, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xe9b6, .a=0x5e, .x=0xf2, .y=0xad, .sp=0xbf, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xe9b6, .value=0xad}, {.addr=0xe9b7, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xe9b8, .a=0x5e, .x=0xf2, .y=0xad, .sp=0xbf, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xe9b6, .value=0xad}, {.addr=0xe9b7, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xe9b6, .value=0xad, .type=IO_READ},
        {.addr=0xe9b7, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x83f8, .a=0xc6, .x=0xb4, .y=0x0b, .sp=0x58, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x83f8, .value=0xad}, {.addr=0x83f9, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x83fa, .a=0xc6, .x=0xb4, .y=0x0b, .sp=0x58, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x83f8, .value=0xad}, {.addr=0x83f9, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x83f8, .value=0xad, .type=IO_READ},
        {.addr=0x83f9, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x6cf0, .a=0x2c, .x=0x49, .y=0xd3, .sp=0x5d, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x6cf0, .value=0xad}, {.addr=0x6cf1, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x6cf2, .a=0x2c, .x=0x49, .y=0xd3, .sp=0x5d, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x6cf0, .value=0xad}, {.addr=0x6cf1, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x6cf0, .value=0xad, .type=IO_READ},
        {.addr=0x6cf1, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x6bcf, .a=0xbd, .x=0x0d, .y=0x93, .sp=0x3e, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x6bcf, .value=0xad}, {.addr=0x6bd0, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x6bd1, .a=0xbd, .x=0x0d, .y=0x93, .sp=0x3e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x6bcf, .value=0xad}, {.addr=0x6bd0, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x6bcf, .value=0xad, .type=IO_READ},
        {.addr=0x6bd0, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xa5a1, .a=0x1c, .x=0x85, .y=0xe2, .sp=0x5d, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xa5a1, .value=0xad}, {.addr=0xa5a2, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xa5a3, .a=0x1c, .x=0x85, .y=0xe2, .sp=0x5d, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xa5a1, .value=0xad}, {.addr=0xa5a2, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xa5a1, .value=0xad, .type=IO_READ},
        {.addr=0xa5a2, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xf027, .a=0x07, .x=0x1a, .y=0xee, .sp=0x62, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xf027, .value=0xad}, {.addr=0xf028, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf029, .a=0x07, .x=0x1a, .y=0xee, .sp=0x62, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xf027, .value=0xad}, {.addr=0xf028, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf027, .value=0xad, .type=IO_READ},
        {.addr=0xf028, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xefe8, .a=0x48, .x=0x2a, .y=0xf1, .sp=0x83, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xefe8, .value=0xad}, {.addr=0xefe9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xefea, .a=0x48, .x=0x2a, .y=0xf1, .sp=0x83, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xefe8, .value=0xad}, {.addr=0xefe9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xefe8, .value=0xad, .type=IO_READ},
        {.addr=0xefe9, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x7c24, .a=0x55, .x=0x65, .y=0xb3, .sp=0x97, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x7c24, .value=0xad}, {.addr=0x7c25, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x7c26, .a=0x55, .x=0x65, .y=0xb3, .sp=0x97, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x7c24, .value=0xad}, {.addr=0x7c25, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x7c24, .value=0xad, .type=IO_READ},
        {.addr=0x7c25, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x4640, .a=0xb1, .x=0x12, .y=0xb3, .sp=0x4f, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x4640, .value=0xad}, {.addr=0x4641, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x4642, .a=0xb1, .x=0x12, .y=0xb3, .sp=0x4f, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x4640, .value=0xad}, {.addr=0x4641, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x4640, .value=0xad, .type=IO_READ},
        {.addr=0x4641, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x1d8f, .a=0xf0, .x=0x2a, .y=0x4a, .sp=0x30, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x1d8f, .value=0xad}, {.addr=0x1d90, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x1d91, .a=0xf0, .x=0x2a, .y=0x4a, .sp=0x30, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x1d8f, .value=0xad}, {.addr=0x1d90, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x1d8f, .value=0xad, .type=IO_READ},
        {.addr=0x1d90, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x0ec4, .a=0xd3, .x=0x95, .y=0x3a, .sp=0x8a, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0ec4, .value=0xad}, {.addr=0x0ec5, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x0ec6, .a=0xd3, .x=0x95, .y=0x3a, .sp=0x8a, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0ec4, .value=0xad}, {.addr=0x0ec5, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x0ec4, .value=0xad, .type=IO_READ},
        {.addr=0x0ec5, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xeef0, .a=0xaa, .x=0xd5, .y=0xad, .sp=0x82, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xeef0, .value=0xad}, {.addr=0xeef1, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xeef2, .a=0xaa, .x=0xd5, .y=0xad, .sp=0x82, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xeef0, .value=0xad}, {.addr=0xeef1, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xeef0, .value=0xad, .type=IO_READ},
        {.addr=0xeef1, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xf7df, .a=0x56, .x=0xc2, .y=0x20, .sp=0xc7, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xf7df, .value=0xad}, {.addr=0xf7e0, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xf7e1, .a=0x56, .x=0xc2, .y=0x20, .sp=0xc7, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xf7df, .value=0xad}, {.addr=0xf7e0, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xf7df, .value=0xad, .type=IO_READ},
        {.addr=0xf7e0, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xb051, .a=0x8e, .x=0x16, .y=0xe8, .sp=0xdf, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xb051, .value=0xad}, {.addr=0xb052, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xb053, .a=0x8e, .x=0x16, .y=0xe8, .sp=0xdf, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xb051, .value=0xad}, {.addr=0xb052, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xb051, .value=0xad, .type=IO_READ},
        {.addr=0xb052, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x2a01, .a=0xb6, .x=0xe2, .y=0x0a, .sp=0xf9, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x2a01, .value=0xad}, {.addr=0x2a02, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x2a03, .a=0xb6, .x=0xe2, .y=0x0a, .sp=0xf9, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x2a01, .value=0xad}, {.addr=0x2a02, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x2a01, .value=0xad, .type=IO_READ},
        {.addr=0x2a02, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x4871, .a=0xad, .x=0x0b, .y=0x67, .sp=0x3e, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x4871, .value=0xad}, {.addr=0x4872, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x4873, .a=0xad, .x=0x0b, .y=0x67, .sp=0x3e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x4871, .value=0xad}, {.addr=0x4872, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x4871, .value=0xad, .type=IO_READ},
        {.addr=0x4872, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xd404, .a=0x01, .x=0x06, .y=0xff, .sp=0x2c, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xd404, .value=0xad}, {.addr=0xd405, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xd406, .a=0x01, .x=0x06, .y=0xff, .sp=0x2c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xd404, .value=0xad}, {.addr=0xd405, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xd404, .value=0xad, .type=IO_READ},
        {.addr=0xd405, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x32c3, .a=0x13, .x=0x91, .y=0xbe, .sp=0x9d, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x32c3, .value=0xad}, {.addr=0x32c4, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x32c5, .a=0x13, .x=0x91, .y=0xbe, .sp=0x9d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x32c3, .value=0xad}, {.addr=0x32c4, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x32c3, .value=0xad, .type=IO_READ},
        {.addr=0x32c4, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x2404, .a=0x6f, .x=0x6d, .y=0x12, .sp=0x9f, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x2404, .value=0xad}, {.addr=0x2405, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x2406, .a=0x6f, .x=0x6d, .y=0x12, .sp=0x9f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x2404, .value=0xad}, {.addr=0x2405, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x2404, .value=0xad, .type=IO_READ},
        {.addr=0x2405, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x6303, .a=0xed, .x=0x62, .y=0xc1, .sp=0xed, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x6303, .value=0xad}, {.addr=0x6304, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x6305, .a=0xed, .x=0x62, .y=0xc1, .sp=0xed, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x6303, .value=0xad}, {.addr=0x6304, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x6303, .value=0xad, .type=IO_READ},
        {.addr=0x6304, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x18b1, .a=0x3a, .x=0x01, .y=0x76, .sp=0xa6, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x18b1, .value=0xad}, {.addr=0x18b2, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x18b3, .a=0x3a, .x=0x01, .y=0x76, .sp=0xa6, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x18b1, .value=0xad}, {.addr=0x18b2, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x18b1, .value=0xad, .type=IO_READ},
        {.addr=0x18b2, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x1426, .a=0xdb, .x=0x48, .y=0x0a, .sp=0xcd, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x1426, .value=0xad}, {.addr=0x1427, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x1428, .a=0xdb, .x=0x48, .y=0x0a, .sp=0xcd, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x1426, .value=0xad}, {.addr=0x1427, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x1426, .value=0xad, .type=IO_READ},
        {.addr=0x1427, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xedbc, .a=0x57, .x=0x61, .y=0xe6, .sp=0xd7, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xedbc, .value=0xad}, {.addr=0xedbd, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xedbe, .a=0x57, .x=0x61, .y=0xe6, .sp=0xd7, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xedbc, .value=0xad}, {.addr=0xedbd, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xedbc, .value=0xad, .type=IO_READ},
        {.addr=0xedbd, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x6bcf, .a=0x7e, .x=0x66, .y=0x76, .sp=0xa6, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x6bcf, .value=0xad}, {.addr=0x6bd0, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x6bd1, .a=0x7e, .x=0x66, .y=0x76, .sp=0xa6, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x6bcf, .value=0xad}, {.addr=0x6bd0, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x6bcf, .value=0xad, .type=IO_READ},
        {.addr=0x6bd0, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xa78f, .a=0x1f, .x=0xde, .y=0x5d, .sp=0xc5, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xa78f, .value=0xad}, {.addr=0xa790, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xa791, .a=0x1f, .x=0xde, .y=0x5d, .sp=0xc5, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xa78f, .value=0xad}, {.addr=0xa790, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xa78f, .value=0xad, .type=IO_READ},
        {.addr=0xa790, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x9470, .a=0x65, .x=0x25, .y=0xc0, .sp=0xb8, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x9470, .value=0xad}, {.addr=0x9471, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9472, .a=0x65, .x=0x25, .y=0xc0, .sp=0xb8, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9470, .value=0xad}, {.addr=0x9471, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9470, .value=0xad, .type=IO_READ},
        {.addr=0x9471, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x5230, .a=0xe4, .x=0x02, .y=0xa3, .sp=0x8f, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x5230, .value=0xad}, {.addr=0x5231, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x5232, .a=0xe4, .x=0x02, .y=0xa3, .sp=0x8f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x5230, .value=0xad}, {.addr=0x5231, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x5230, .value=0xad, .type=IO_READ},
        {.addr=0x5231, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x3c38, .a=0x57, .x=0x7e, .y=0xbd, .sp=0xfe, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x3c38, .value=0xad}, {.addr=0x3c39, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x3c3a, .a=0x57, .x=0x7e, .y=0xbd, .sp=0xfe, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x3c38, .value=0xad}, {.addr=0x3c39, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x3c38, .value=0xad, .type=IO_READ},
        {.addr=0x3c39, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xa3f1, .a=0x06, .x=0x67, .y=0x21, .sp=0x98, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xa3f1, .value=0xad}, {.addr=0xa3f2, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xa3f3, .a=0x06, .x=0x67, .y=0x21, .sp=0x98, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xa3f1, .value=0xad}, {.addr=0xa3f2, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xa3f1, .value=0xad, .type=IO_READ},
        {.addr=0xa3f2, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x473d, .a=0xff, .x=0xfd, .y=0x51, .sp=0x59, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x473d, .value=0xad}, {.addr=0x473e, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x473f, .a=0xff, .x=0xfd, .y=0x51, .sp=0x59, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x473d, .value=0xad}, {.addr=0x473e, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x473d, .value=0xad, .type=IO_READ},
        {.addr=0x473e, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x2a14, .a=0x47, .x=0x20, .y=0x07, .sp=0x34, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x2a14, .value=0xad}, {.addr=0x2a15, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x2a16, .a=0x47, .x=0x20, .y=0x07, .sp=0x34, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x2a14, .value=0xad}, {.addr=0x2a15, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x2a14, .value=0xad, .type=IO_READ},
        {.addr=0x2a15, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xc46e, .a=0x93, .x=0x8e, .y=0xf2, .sp=0xc2, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xc46e, .value=0xad}, {.addr=0xc46f, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xc470, .a=0x93, .x=0x8e, .y=0xf2, .sp=0xc2, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xc46e, .value=0xad}, {.addr=0xc46f, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xc46e, .value=0xad, .type=IO_READ},
        {.addr=0xc46f, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xa0c9, .a=0xec, .x=0xad, .y=0x09, .sp=0xd8, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xa0c9, .value=0xad}, {.addr=0xa0ca, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xa0cb, .a=0xec, .x=0xad, .y=0x09, .sp=0xd8, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xa0c9, .value=0xad}, {.addr=0xa0ca, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xa0c9, .value=0xad, .type=IO_READ},
        {.addr=0xa0ca, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x302b, .a=0x12, .x=0x28, .y=0x3a, .sp=0x64, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x302b, .value=0xad}, {.addr=0x302c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x302d, .a=0x12, .x=0x28, .y=0x3a, .sp=0x64, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x302b, .value=0xad}, {.addr=0x302c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x302b, .value=0xad, .type=IO_READ},
        {.addr=0x302c, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xf54b, .a=0xce, .x=0xbe, .y=0x0a, .sp=0x1e, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xf54b, .value=0xad}, {.addr=0xf54c, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xf54d, .a=0xce, .x=0xbe, .y=0x0a, .sp=0x1e, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xf54b, .value=0xad}, {.addr=0xf54c, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xf54b, .value=0xad, .type=IO_READ},
        {.addr=0xf54c, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x7d0c, .a=0x8a, .x=0x27, .y=0xcc, .sp=0x69, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x7d0c, .value=0xad}, {.addr=0x7d0d, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x7d0e, .a=0x8a, .x=0x27, .y=0xcc, .sp=0x69, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x7d0c, .value=0xad}, {.addr=0x7d0d, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x7d0c, .value=0xad, .type=IO_READ},
        {.addr=0x7d0d, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x04d6, .a=0xc5, .x=0xb4, .y=0xd2, .sp=0x20, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x04d6, .value=0xad}, {.addr=0x04d7, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x04d8, .a=0xc5, .x=0xb4, .y=0xd2, .sp=0x20, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x04d6, .value=0xad}, {.addr=0x04d7, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x04d6, .value=0xad, .type=IO_READ},
        {.addr=0x04d7, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x6ffa, .a=0x83, .x=0xed, .y=0xa8, .sp=0x39, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x6ffa, .value=0xad}, {.addr=0x6ffb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6ffc, .a=0x83, .x=0xed, .y=0xa8, .sp=0x39, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x6ffa, .value=0xad}, {.addr=0x6ffb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6ffa, .value=0xad, .type=IO_READ},
        {.addr=0x6ffb, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xdbf5, .a=0x22, .x=0x7b, .y=0x9c, .sp=0xac, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xdbf5, .value=0xad}, {.addr=0xdbf6, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xdbf7, .a=0x22, .x=0x7b, .y=0x9c, .sp=0xac, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xdbf5, .value=0xad}, {.addr=0xdbf6, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xdbf5, .value=0xad, .type=IO_READ},
        {.addr=0xdbf6, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xb154, .a=0x3a, .x=0x63, .y=0xc9, .sp=0x48, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xb154, .value=0xad}, {.addr=0xb155, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xb156, .a=0x3a, .x=0x63, .y=0xc9, .sp=0x48, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xb154, .value=0xad}, {.addr=0xb155, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xb154, .value=0xad, .type=IO_READ},
        {.addr=0xb155, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x2dc3, .a=0xfc, .x=0x2c, .y=0x4d, .sp=0xf2, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x2dc3, .value=0xad}, {.addr=0x2dc4, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x2dc5, .a=0xfc, .x=0x2c, .y=0x4d, .sp=0xf2, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x2dc3, .value=0xad}, {.addr=0x2dc4, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x2dc3, .value=0xad, .type=IO_READ},
        {.addr=0x2dc4, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x0f04, .a=0xce, .x=0x1e, .y=0x31, .sp=0xba, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0f04, .value=0xad}, {.addr=0x0f05, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x0f06, .a=0xce, .x=0x1e, .y=0x31, .sp=0xba, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0f04, .value=0xad}, {.addr=0x0f05, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x0f04, .value=0xad, .type=IO_READ},
        {.addr=0x0f05, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x62cd, .a=0x6b, .x=0xc5, .y=0xc8, .sp=0x02, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x62cd, .value=0xad}, {.addr=0x62ce, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x62cf, .a=0x6b, .x=0xc5, .y=0xc8, .sp=0x02, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x62cd, .value=0xad}, {.addr=0x62ce, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x62cd, .value=0xad, .type=IO_READ},
        {.addr=0x62ce, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x89ab, .a=0x29, .x=0x48, .y=0x31, .sp=0xad, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x89ab, .value=0xad}, {.addr=0x89ac, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x89ad, .a=0x29, .x=0x48, .y=0x31, .sp=0xad, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x89ab, .value=0xad}, {.addr=0x89ac, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x89ab, .value=0xad, .type=IO_READ},
        {.addr=0x89ac, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x4cfa, .a=0x03, .x=0x76, .y=0x48, .sp=0xe7, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x4cfa, .value=0xad}, {.addr=0x4cfb, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x4cfc, .a=0x03, .x=0x76, .y=0x48, .sp=0xe7, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x4cfa, .value=0xad}, {.addr=0x4cfb, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x4cfa, .value=0xad, .type=IO_READ},
        {.addr=0x4cfb, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x5e8e, .a=0x28, .x=0xf0, .y=0xcf, .sp=0x5f, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x5e8e, .value=0xad}, {.addr=0x5e8f, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x5e90, .a=0x28, .x=0xf0, .y=0xcf, .sp=0x5f, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x5e8e, .value=0xad}, {.addr=0x5e8f, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x5e8e, .value=0xad, .type=IO_READ},
        {.addr=0x5e8f, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x8f38, .a=0x39, .x=0x5c, .y=0x46, .sp=0x6f, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x8f38, .value=0xad}, {.addr=0x8f39, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x8f3a, .a=0x39, .x=0x5c, .y=0x46, .sp=0x6f, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x8f38, .value=0xad}, {.addr=0x8f39, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x8f38, .value=0xad, .type=IO_READ},
        {.addr=0x8f39, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x3435, .a=0xd4, .x=0x7a, .y=0x8c, .sp=0x02, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x3435, .value=0xad}, {.addr=0x3436, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x3437, .a=0xd4, .x=0x7a, .y=0x8c, .sp=0x02, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x3435, .value=0xad}, {.addr=0x3436, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x3435, .value=0xad, .type=IO_READ},
        {.addr=0x3436, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xc1e9, .a=0x94, .x=0xb7, .y=0x6e, .sp=0xa0, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xc1e9, .value=0xad}, {.addr=0xc1ea, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xc1eb, .a=0x94, .x=0xb7, .y=0x6e, .sp=0xa0, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xc1e9, .value=0xad}, {.addr=0xc1ea, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xc1e9, .value=0xad, .type=IO_READ},
        {.addr=0xc1ea, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xf1ee, .a=0xc2, .x=0xd0, .y=0x78, .sp=0x71, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xf1ee, .value=0xad}, {.addr=0xf1ef, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xf1f0, .a=0xc2, .x=0xd0, .y=0x78, .sp=0x71, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xf1ee, .value=0xad}, {.addr=0xf1ef, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xf1ee, .value=0xad, .type=IO_READ},
        {.addr=0xf1ef, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xa770, .a=0x73, .x=0x80, .y=0x3c, .sp=0x7a, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xa770, .value=0xad}, {.addr=0xa771, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xa772, .a=0x73, .x=0x80, .y=0x3c, .sp=0x7a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xa770, .value=0xad}, {.addr=0xa771, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xa770, .value=0xad, .type=IO_READ},
        {.addr=0xa771, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x9091, .a=0xe1, .x=0x1c, .y=0x39, .sp=0x73, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x9091, .value=0xad}, {.addr=0x9092, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x9093, .a=0xe1, .x=0x1c, .y=0x39, .sp=0x73, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x9091, .value=0xad}, {.addr=0x9092, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x9091, .value=0xad, .type=IO_READ},
        {.addr=0x9092, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0200) {
    const struct CPU_State initial_cpu = {.pc=0x0802, .a=0x2d, .x=0xab, .y=0xd0, .sp=0x4d, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0802, .value=0xad}, {.addr=0x0803, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0804, .a=0x2d, .x=0xab, .y=0xd0, .sp=0x4d, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0802, .value=0xad}, {.addr=0x0803, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0802, .value=0xad, .type=IO_READ},
        {.addr=0x0803, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0201) {
    const struct CPU_State initial_cpu = {.pc=0x79ba, .a=0x04, .x=0x70, .y=0xba, .sp=0x3b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x79ba, .value=0xad}, {.addr=0x79bb, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x79bc, .a=0x04, .x=0x70, .y=0xba, .sp=0x3b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x79ba, .value=0xad}, {.addr=0x79bb, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x79ba, .value=0xad, .type=IO_READ},
        {.addr=0x79bb, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0202) {
    const struct CPU_State initial_cpu = {.pc=0x8d22, .a=0x73, .x=0x49, .y=0xda, .sp=0x31, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x8d22, .value=0xad}, {.addr=0x8d23, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x8d24, .a=0x73, .x=0x49, .y=0xda, .sp=0x31, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8d22, .value=0xad}, {.addr=0x8d23, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x8d22, .value=0xad, .type=IO_READ},
        {.addr=0x8d23, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0203) {
    const struct CPU_State initial_cpu = {.pc=0xbe94, .a=0xc8, .x=0xea, .y=0x05, .sp=0xf4, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xbe94, .value=0xad}, {.addr=0xbe95, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xbe96, .a=0xc8, .x=0xea, .y=0x05, .sp=0xf4, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xbe94, .value=0xad}, {.addr=0xbe95, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xbe94, .value=0xad, .type=IO_READ},
        {.addr=0xbe95, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0204) {
    const struct CPU_State initial_cpu = {.pc=0x2fd1, .a=0xe6, .x=0xe8, .y=0xb5, .sp=0x94, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x2fd1, .value=0xad}, {.addr=0x2fd2, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x2fd3, .a=0xe6, .x=0xe8, .y=0xb5, .sp=0x94, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x2fd1, .value=0xad}, {.addr=0x2fd2, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x2fd1, .value=0xad, .type=IO_READ},
        {.addr=0x2fd2, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0205) {
    const struct CPU_State initial_cpu = {.pc=0xb4ca, .a=0xe1, .x=0x7f, .y=0x99, .sp=0x36, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xb4ca, .value=0xad}, {.addr=0xb4cb, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xb4cc, .a=0xe1, .x=0x7f, .y=0x99, .sp=0x36, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xb4ca, .value=0xad}, {.addr=0xb4cb, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xb4ca, .value=0xad, .type=IO_READ},
        {.addr=0xb4cb, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0206) {
    const struct CPU_State initial_cpu = {.pc=0xdbea, .a=0x83, .x=0x31, .y=0x62, .sp=0xb8, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xdbea, .value=0xad}, {.addr=0xdbeb, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xdbec, .a=0x83, .x=0x31, .y=0x62, .sp=0xb8, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xdbea, .value=0xad}, {.addr=0xdbeb, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xdbea, .value=0xad, .type=IO_READ},
        {.addr=0xdbeb, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0207) {
    const struct CPU_State initial_cpu = {.pc=0x06c2, .a=0x5d, .x=0x77, .y=0xcb, .sp=0xc5, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x06c2, .value=0xad}, {.addr=0x06c3, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x06c4, .a=0x5d, .x=0x77, .y=0xcb, .sp=0xc5, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x06c2, .value=0xad}, {.addr=0x06c3, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x06c2, .value=0xad, .type=IO_READ},
        {.addr=0x06c3, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0208) {
    const struct CPU_State initial_cpu = {.pc=0xb6df, .a=0x1a, .x=0xb4, .y=0xf8, .sp=0xfa, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xb6df, .value=0xad}, {.addr=0xb6e0, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xb6e1, .a=0x1a, .x=0xb4, .y=0xf8, .sp=0xfa, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xb6df, .value=0xad}, {.addr=0xb6e0, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xb6df, .value=0xad, .type=IO_READ},
        {.addr=0xb6e0, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0209) {
    const struct CPU_State initial_cpu = {.pc=0xe329, .a=0xe9, .x=0x63, .y=0xda, .sp=0xc5, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xe329, .value=0xad}, {.addr=0xe32a, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xe32b, .a=0xe9, .x=0x63, .y=0xda, .sp=0xc5, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xe329, .value=0xad}, {.addr=0xe32a, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xe329, .value=0xad, .type=IO_READ},
        {.addr=0xe32a, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_020A) {
    const struct CPU_State initial_cpu = {.pc=0xe826, .a=0xe9, .x=0x80, .y=0x37, .sp=0x93, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xe826, .value=0xad}, {.addr=0xe827, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xe828, .a=0xe9, .x=0x80, .y=0x37, .sp=0x93, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xe826, .value=0xad}, {.addr=0xe827, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xe826, .value=0xad, .type=IO_READ},
        {.addr=0xe827, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_020B) {
    const struct CPU_State initial_cpu = {.pc=0xfec3, .a=0xfd, .x=0xd1, .y=0xb2, .sp=0x01, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xfec3, .value=0xad}, {.addr=0xfec4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xfec5, .a=0xfd, .x=0xd1, .y=0xb2, .sp=0x01, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xfec3, .value=0xad}, {.addr=0xfec4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xfec3, .value=0xad, .type=IO_READ},
        {.addr=0xfec4, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_020C) {
    const struct CPU_State initial_cpu = {.pc=0xb0ba, .a=0x95, .x=0x19, .y=0x48, .sp=0x1d, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xb0ba, .value=0xad}, {.addr=0xb0bb, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xb0bc, .a=0x95, .x=0x19, .y=0x48, .sp=0x1d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xb0ba, .value=0xad}, {.addr=0xb0bb, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xb0ba, .value=0xad, .type=IO_READ},
        {.addr=0xb0bb, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_020D) {
    const struct CPU_State initial_cpu = {.pc=0x12a7, .a=0x59, .x=0x0f, .y=0x62, .sp=0x72, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x12a7, .value=0xad}, {.addr=0x12a8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x12a9, .a=0x59, .x=0x0f, .y=0x62, .sp=0x72, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x12a7, .value=0xad}, {.addr=0x12a8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x12a7, .value=0xad, .type=IO_READ},
        {.addr=0x12a8, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_020E) {
    const struct CPU_State initial_cpu = {.pc=0xd927, .a=0x5b, .x=0x35, .y=0x45, .sp=0xf0, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xd927, .value=0xad}, {.addr=0xd928, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xd929, .a=0x5b, .x=0x35, .y=0x45, .sp=0xf0, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xd927, .value=0xad}, {.addr=0xd928, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xd927, .value=0xad, .type=IO_READ},
        {.addr=0xd928, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_020F) {
    const struct CPU_State initial_cpu = {.pc=0x9f1e, .a=0xc5, .x=0x17, .y=0x58, .sp=0x55, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x9f1e, .value=0xad}, {.addr=0x9f1f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9f20, .a=0xc5, .x=0x17, .y=0x58, .sp=0x55, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x9f1e, .value=0xad}, {.addr=0x9f1f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9f1e, .value=0xad, .type=IO_READ},
        {.addr=0x9f1f, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0210) {
    const struct CPU_State initial_cpu = {.pc=0x980f, .a=0x89, .x=0x52, .y=0x80, .sp=0x14, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x980f, .value=0xad}, {.addr=0x9810, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x9811, .a=0x89, .x=0x52, .y=0x80, .sp=0x14, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x980f, .value=0xad}, {.addr=0x9810, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x980f, .value=0xad, .type=IO_READ},
        {.addr=0x9810, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0211) {
    const struct CPU_State initial_cpu = {.pc=0xd1c5, .a=0x97, .x=0x91, .y=0x1b, .sp=0x72, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xd1c5, .value=0xad}, {.addr=0xd1c6, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xd1c7, .a=0x97, .x=0x91, .y=0x1b, .sp=0x72, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xd1c5, .value=0xad}, {.addr=0xd1c6, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xd1c5, .value=0xad, .type=IO_READ},
        {.addr=0xd1c6, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0212) {
    const struct CPU_State initial_cpu = {.pc=0xde52, .a=0x3e, .x=0x6b, .y=0x2c, .sp=0xc6, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xde52, .value=0xad}, {.addr=0xde53, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xde54, .a=0x3e, .x=0x6b, .y=0x2c, .sp=0xc6, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xde52, .value=0xad}, {.addr=0xde53, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xde52, .value=0xad, .type=IO_READ},
        {.addr=0xde53, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0213) {
    const struct CPU_State initial_cpu = {.pc=0xa6dc, .a=0x29, .x=0x50, .y=0x6e, .sp=0x3c, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xa6dc, .value=0xad}, {.addr=0xa6dd, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xa6de, .a=0x29, .x=0x50, .y=0x6e, .sp=0x3c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xa6dc, .value=0xad}, {.addr=0xa6dd, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xa6dc, .value=0xad, .type=IO_READ},
        {.addr=0xa6dd, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0214) {
    const struct CPU_State initial_cpu = {.pc=0x8b5f, .a=0x41, .x=0xa9, .y=0xc8, .sp=0x7c, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x8b5f, .value=0xad}, {.addr=0x8b60, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8b61, .a=0x41, .x=0xa9, .y=0xc8, .sp=0x7c, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x8b5f, .value=0xad}, {.addr=0x8b60, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8b5f, .value=0xad, .type=IO_READ},
        {.addr=0x8b60, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0215) {
    const struct CPU_State initial_cpu = {.pc=0x3014, .a=0x92, .x=0x55, .y=0x5a, .sp=0x94, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x3014, .value=0xad}, {.addr=0x3015, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x3016, .a=0x92, .x=0x55, .y=0x5a, .sp=0x94, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3014, .value=0xad}, {.addr=0x3015, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x3014, .value=0xad, .type=IO_READ},
        {.addr=0x3015, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0216) {
    const struct CPU_State initial_cpu = {.pc=0xf5a1, .a=0x80, .x=0x31, .y=0x57, .sp=0xcc, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xf5a1, .value=0xad}, {.addr=0xf5a2, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xf5a3, .a=0x80, .x=0x31, .y=0x57, .sp=0xcc, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xf5a1, .value=0xad}, {.addr=0xf5a2, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xf5a1, .value=0xad, .type=IO_READ},
        {.addr=0xf5a2, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0217) {
    const struct CPU_State initial_cpu = {.pc=0x5bc3, .a=0xa9, .x=0x54, .y=0x29, .sp=0xa5, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x5bc3, .value=0xad}, {.addr=0x5bc4, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x5bc5, .a=0xa9, .x=0x54, .y=0x29, .sp=0xa5, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x5bc3, .value=0xad}, {.addr=0x5bc4, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x5bc3, .value=0xad, .type=IO_READ},
        {.addr=0x5bc4, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0218) {
    const struct CPU_State initial_cpu = {.pc=0x5afd, .a=0x42, .x=0x0d, .y=0x7a, .sp=0x27, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x5afd, .value=0xad}, {.addr=0x5afe, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x5aff, .a=0x42, .x=0x0d, .y=0x7a, .sp=0x27, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x5afd, .value=0xad}, {.addr=0x5afe, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x5afd, .value=0xad, .type=IO_READ},
        {.addr=0x5afe, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0219) {
    const struct CPU_State initial_cpu = {.pc=0x46fa, .a=0x87, .x=0xb1, .y=0x0d, .sp=0x02, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x46fa, .value=0xad}, {.addr=0x46fb, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x46fc, .a=0x87, .x=0xb1, .y=0x0d, .sp=0x02, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x46fa, .value=0xad}, {.addr=0x46fb, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x46fa, .value=0xad, .type=IO_READ},
        {.addr=0x46fb, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_021A) {
    const struct CPU_State initial_cpu = {.pc=0xf816, .a=0x61, .x=0xa5, .y=0x5c, .sp=0x8b, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xf816, .value=0xad}, {.addr=0xf817, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xf818, .a=0x61, .x=0xa5, .y=0x5c, .sp=0x8b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xf816, .value=0xad}, {.addr=0xf817, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xf816, .value=0xad, .type=IO_READ},
        {.addr=0xf817, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_021B) {
    const struct CPU_State initial_cpu = {.pc=0xb338, .a=0xc1, .x=0xa8, .y=0x32, .sp=0x57, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xb338, .value=0xad}, {.addr=0xb339, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xb33a, .a=0xc1, .x=0xa8, .y=0x32, .sp=0x57, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xb338, .value=0xad}, {.addr=0xb339, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xb338, .value=0xad, .type=IO_READ},
        {.addr=0xb339, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_021C) {
    const struct CPU_State initial_cpu = {.pc=0x99a3, .a=0x31, .x=0xa8, .y=0x3e, .sp=0x55, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x99a3, .value=0xad}, {.addr=0x99a4, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x99a5, .a=0x31, .x=0xa8, .y=0x3e, .sp=0x55, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x99a3, .value=0xad}, {.addr=0x99a4, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x99a3, .value=0xad, .type=IO_READ},
        {.addr=0x99a4, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_021D) {
    const struct CPU_State initial_cpu = {.pc=0x0427, .a=0xc7, .x=0x7b, .y=0x9e, .sp=0x27, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0427, .value=0xad}, {.addr=0x0428, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x0429, .a=0xc7, .x=0x7b, .y=0x9e, .sp=0x27, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0427, .value=0xad}, {.addr=0x0428, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x0427, .value=0xad, .type=IO_READ},
        {.addr=0x0428, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_021E) {
    const struct CPU_State initial_cpu = {.pc=0xf442, .a=0x6a, .x=0x35, .y=0xfe, .sp=0x5b, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xf442, .value=0xad}, {.addr=0xf443, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xf444, .a=0x6a, .x=0x35, .y=0xfe, .sp=0x5b, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xf442, .value=0xad}, {.addr=0xf443, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xf442, .value=0xad, .type=IO_READ},
        {.addr=0xf443, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_021F) {
    const struct CPU_State initial_cpu = {.pc=0xa0f9, .a=0x3d, .x=0x3f, .y=0x47, .sp=0x3c, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xa0f9, .value=0xad}, {.addr=0xa0fa, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xa0fb, .a=0x3d, .x=0x3f, .y=0x47, .sp=0x3c, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xa0f9, .value=0xad}, {.addr=0xa0fa, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xa0f9, .value=0xad, .type=IO_READ},
        {.addr=0xa0fa, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0220) {
    const struct CPU_State initial_cpu = {.pc=0x8bb6, .a=0x29, .x=0xdc, .y=0x36, .sp=0x20, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x8bb6, .value=0xad}, {.addr=0x8bb7, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x8bb8, .a=0x29, .x=0xdc, .y=0x36, .sp=0x20, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x8bb6, .value=0xad}, {.addr=0x8bb7, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x8bb6, .value=0xad, .type=IO_READ},
        {.addr=0x8bb7, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0221) {
    const struct CPU_State initial_cpu = {.pc=0x399a, .a=0x38, .x=0xec, .y=0x87, .sp=0x0d, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x399a, .value=0xad}, {.addr=0x399b, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x399c, .a=0x38, .x=0xec, .y=0x87, .sp=0x0d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x399a, .value=0xad}, {.addr=0x399b, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x399a, .value=0xad, .type=IO_READ},
        {.addr=0x399b, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0222) {
    const struct CPU_State initial_cpu = {.pc=0x8b9f, .a=0x0e, .x=0x42, .y=0x9c, .sp=0x7c, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x8b9f, .value=0xad}, {.addr=0x8ba0, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x8ba1, .a=0x0e, .x=0x42, .y=0x9c, .sp=0x7c, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x8b9f, .value=0xad}, {.addr=0x8ba0, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x8b9f, .value=0xad, .type=IO_READ},
        {.addr=0x8ba0, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0223) {
    const struct CPU_State initial_cpu = {.pc=0x582f, .a=0x59, .x=0xce, .y=0xc7, .sp=0x95, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x582f, .value=0xad}, {.addr=0x5830, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x5831, .a=0x59, .x=0xce, .y=0xc7, .sp=0x95, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x582f, .value=0xad}, {.addr=0x5830, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x582f, .value=0xad, .type=IO_READ},
        {.addr=0x5830, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0224) {
    const struct CPU_State initial_cpu = {.pc=0x87fb, .a=0x31, .x=0xd2, .y=0x0d, .sp=0x6a, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x87fb, .value=0xad}, {.addr=0x87fc, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x87fd, .a=0x31, .x=0xd2, .y=0x0d, .sp=0x6a, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x87fb, .value=0xad}, {.addr=0x87fc, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x87fb, .value=0xad, .type=IO_READ},
        {.addr=0x87fc, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0225) {
    const struct CPU_State initial_cpu = {.pc=0xfe22, .a=0xfd, .x=0x19, .y=0xc8, .sp=0x47, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xfe22, .value=0xad}, {.addr=0xfe23, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xfe24, .a=0xfd, .x=0x19, .y=0xc8, .sp=0x47, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xfe22, .value=0xad}, {.addr=0xfe23, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xfe22, .value=0xad, .type=IO_READ},
        {.addr=0xfe23, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0226) {
    const struct CPU_State initial_cpu = {.pc=0xa0a3, .a=0xea, .x=0x32, .y=0x4c, .sp=0x7f, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xa0a3, .value=0xad}, {.addr=0xa0a4, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xa0a5, .a=0xea, .x=0x32, .y=0x4c, .sp=0x7f, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xa0a3, .value=0xad}, {.addr=0xa0a4, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xa0a3, .value=0xad, .type=IO_READ},
        {.addr=0xa0a4, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0227) {
    const struct CPU_State initial_cpu = {.pc=0xb3b9, .a=0x52, .x=0xd1, .y=0xbf, .sp=0xd3, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xb3b9, .value=0xad}, {.addr=0xb3ba, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb3bb, .a=0x52, .x=0xd1, .y=0xbf, .sp=0xd3, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb3b9, .value=0xad}, {.addr=0xb3ba, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb3b9, .value=0xad, .type=IO_READ},
        {.addr=0xb3ba, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0228) {
    const struct CPU_State initial_cpu = {.pc=0xc3c9, .a=0x27, .x=0x7e, .y=0xb5, .sp=0xd8, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xc3c9, .value=0xad}, {.addr=0xc3ca, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xc3cb, .a=0x27, .x=0x7e, .y=0xb5, .sp=0xd8, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xc3c9, .value=0xad}, {.addr=0xc3ca, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xc3c9, .value=0xad, .type=IO_READ},
        {.addr=0xc3ca, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0229) {
    const struct CPU_State initial_cpu = {.pc=0x8fbe, .a=0xfb, .x=0x3d, .y=0x69, .sp=0x9f, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x8fbe, .value=0xad}, {.addr=0x8fbf, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x8fc0, .a=0xfb, .x=0x3d, .y=0x69, .sp=0x9f, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x8fbe, .value=0xad}, {.addr=0x8fbf, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x8fbe, .value=0xad, .type=IO_READ},
        {.addr=0x8fbf, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_022A) {
    const struct CPU_State initial_cpu = {.pc=0xf4cd, .a=0x7d, .x=0x70, .y=0x24, .sp=0x09, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xf4cd, .value=0xad}, {.addr=0xf4ce, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf4cf, .a=0x7d, .x=0x70, .y=0x24, .sp=0x09, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xf4cd, .value=0xad}, {.addr=0xf4ce, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf4cd, .value=0xad, .type=IO_READ},
        {.addr=0xf4ce, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_022B) {
    const struct CPU_State initial_cpu = {.pc=0x60d8, .a=0x51, .x=0x6b, .y=0x2c, .sp=0x75, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x60d8, .value=0xad}, {.addr=0x60d9, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x60da, .a=0x51, .x=0x6b, .y=0x2c, .sp=0x75, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x60d8, .value=0xad}, {.addr=0x60d9, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x60d8, .value=0xad, .type=IO_READ},
        {.addr=0x60d9, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_022C) {
    const struct CPU_State initial_cpu = {.pc=0x284a, .a=0x85, .x=0x75, .y=0x3f, .sp=0x15, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x284a, .value=0xad}, {.addr=0x284b, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x284c, .a=0x85, .x=0x75, .y=0x3f, .sp=0x15, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x284a, .value=0xad}, {.addr=0x284b, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x284a, .value=0xad, .type=IO_READ},
        {.addr=0x284b, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_022D) {
    const struct CPU_State initial_cpu = {.pc=0xee91, .a=0x03, .x=0xc2, .y=0x60, .sp=0xa3, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xee91, .value=0xad}, {.addr=0xee92, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xee93, .a=0x03, .x=0xc2, .y=0x60, .sp=0xa3, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xee91, .value=0xad}, {.addr=0xee92, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xee91, .value=0xad, .type=IO_READ},
        {.addr=0xee92, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_022E) {
    const struct CPU_State initial_cpu = {.pc=0x30b5, .a=0xda, .x=0xd6, .y=0x67, .sp=0xdb, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x30b5, .value=0xad}, {.addr=0x30b6, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x30b7, .a=0xda, .x=0xd6, .y=0x67, .sp=0xdb, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x30b5, .value=0xad}, {.addr=0x30b6, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x30b5, .value=0xad, .type=IO_READ},
        {.addr=0x30b6, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_022F) {
    const struct CPU_State initial_cpu = {.pc=0x6ec8, .a=0x47, .x=0xba, .y=0x79, .sp=0x29, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x6ec8, .value=0xad}, {.addr=0x6ec9, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x6eca, .a=0x47, .x=0xba, .y=0x79, .sp=0x29, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x6ec8, .value=0xad}, {.addr=0x6ec9, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x6ec8, .value=0xad, .type=IO_READ},
        {.addr=0x6ec9, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0230) {
    const struct CPU_State initial_cpu = {.pc=0x1998, .a=0xa7, .x=0x09, .y=0x1c, .sp=0xbe, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x1998, .value=0xad}, {.addr=0x1999, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x199a, .a=0xa7, .x=0x09, .y=0x1c, .sp=0xbe, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x1998, .value=0xad}, {.addr=0x1999, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x1998, .value=0xad, .type=IO_READ},
        {.addr=0x1999, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0231) {
    const struct CPU_State initial_cpu = {.pc=0x1e2b, .a=0x25, .x=0x3d, .y=0x08, .sp=0x6f, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x1e2b, .value=0xad}, {.addr=0x1e2c, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x1e2d, .a=0x25, .x=0x3d, .y=0x08, .sp=0x6f, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x1e2b, .value=0xad}, {.addr=0x1e2c, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x1e2b, .value=0xad, .type=IO_READ},
        {.addr=0x1e2c, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0232) {
    const struct CPU_State initial_cpu = {.pc=0x3dd1, .a=0x97, .x=0x95, .y=0x03, .sp=0x90, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x3dd1, .value=0xad}, {.addr=0x3dd2, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x3dd3, .a=0x97, .x=0x95, .y=0x03, .sp=0x90, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x3dd1, .value=0xad}, {.addr=0x3dd2, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x3dd1, .value=0xad, .type=IO_READ},
        {.addr=0x3dd2, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0233) {
    const struct CPU_State initial_cpu = {.pc=0x3733, .a=0x3e, .x=0x1e, .y=0xf7, .sp=0x56, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x3733, .value=0xad}, {.addr=0x3734, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x3735, .a=0x3e, .x=0x1e, .y=0xf7, .sp=0x56, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x3733, .value=0xad}, {.addr=0x3734, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x3733, .value=0xad, .type=IO_READ},
        {.addr=0x3734, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0234) {
    const struct CPU_State initial_cpu = {.pc=0x0f72, .a=0xc5, .x=0xb6, .y=0xc1, .sp=0x8d, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0f72, .value=0xad}, {.addr=0x0f73, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x0f74, .a=0xc5, .x=0xb6, .y=0xc1, .sp=0x8d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0f72, .value=0xad}, {.addr=0x0f73, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x0f72, .value=0xad, .type=IO_READ},
        {.addr=0x0f73, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0235) {
    const struct CPU_State initial_cpu = {.pc=0x52ed, .a=0xc4, .x=0x7d, .y=0x48, .sp=0x4b, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x52ed, .value=0xad}, {.addr=0x52ee, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x52ef, .a=0xc4, .x=0x7d, .y=0x48, .sp=0x4b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x52ed, .value=0xad}, {.addr=0x52ee, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x52ed, .value=0xad, .type=IO_READ},
        {.addr=0x52ee, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0236) {
    const struct CPU_State initial_cpu = {.pc=0xd607, .a=0x96, .x=0xa7, .y=0x30, .sp=0x38, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xd607, .value=0xad}, {.addr=0xd608, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xd609, .a=0x96, .x=0xa7, .y=0x30, .sp=0x38, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xd607, .value=0xad}, {.addr=0xd608, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xd607, .value=0xad, .type=IO_READ},
        {.addr=0xd608, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0237) {
    const struct CPU_State initial_cpu = {.pc=0xa086, .a=0x7a, .x=0xa8, .y=0x55, .sp=0x6b, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xa086, .value=0xad}, {.addr=0xa087, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xa088, .a=0x7a, .x=0xa8, .y=0x55, .sp=0x6b, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xa086, .value=0xad}, {.addr=0xa087, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xa086, .value=0xad, .type=IO_READ},
        {.addr=0xa087, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0238) {
    const struct CPU_State initial_cpu = {.pc=0x8e02, .a=0xd3, .x=0x3a, .y=0xb5, .sp=0xc0, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x8e02, .value=0xad}, {.addr=0x8e03, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x8e04, .a=0xd3, .x=0x3a, .y=0xb5, .sp=0xc0, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x8e02, .value=0xad}, {.addr=0x8e03, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x8e02, .value=0xad, .type=IO_READ},
        {.addr=0x8e03, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0239) {
    const struct CPU_State initial_cpu = {.pc=0x810b, .a=0x28, .x=0x80, .y=0xc1, .sp=0x9b, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x810b, .value=0xad}, {.addr=0x810c, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x810d, .a=0x28, .x=0x80, .y=0xc1, .sp=0x9b, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x810b, .value=0xad}, {.addr=0x810c, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x810b, .value=0xad, .type=IO_READ},
        {.addr=0x810c, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_023A) {
    const struct CPU_State initial_cpu = {.pc=0x5310, .a=0x92, .x=0x65, .y=0x41, .sp=0x10, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x5310, .value=0xad}, {.addr=0x5311, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x5312, .a=0x92, .x=0x65, .y=0x41, .sp=0x10, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x5310, .value=0xad}, {.addr=0x5311, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x5310, .value=0xad, .type=IO_READ},
        {.addr=0x5311, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_023B) {
    const struct CPU_State initial_cpu = {.pc=0xa6b8, .a=0x42, .x=0xe1, .y=0xa4, .sp=0x16, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xa6b8, .value=0xad}, {.addr=0xa6b9, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xa6ba, .a=0x42, .x=0xe1, .y=0xa4, .sp=0x16, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xa6b8, .value=0xad}, {.addr=0xa6b9, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xa6b8, .value=0xad, .type=IO_READ},
        {.addr=0xa6b9, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_023C) {
    const struct CPU_State initial_cpu = {.pc=0xed61, .a=0x88, .x=0xe6, .y=0xa1, .sp=0xe3, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xed61, .value=0xad}, {.addr=0xed62, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xed63, .a=0x88, .x=0xe6, .y=0xa1, .sp=0xe3, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xed61, .value=0xad}, {.addr=0xed62, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xed61, .value=0xad, .type=IO_READ},
        {.addr=0xed62, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_023D) {
    const struct CPU_State initial_cpu = {.pc=0xa6cf, .a=0x32, .x=0x54, .y=0x36, .sp=0x8b, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xa6cf, .value=0xad}, {.addr=0xa6d0, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xa6d1, .a=0x32, .x=0x54, .y=0x36, .sp=0x8b, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xa6cf, .value=0xad}, {.addr=0xa6d0, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xa6cf, .value=0xad, .type=IO_READ},
        {.addr=0xa6d0, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_023E) {
    const struct CPU_State initial_cpu = {.pc=0x4250, .a=0x30, .x=0xbd, .y=0xf3, .sp=0x7e, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x4250, .value=0xad}, {.addr=0x4251, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x4252, .a=0x30, .x=0xbd, .y=0xf3, .sp=0x7e, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x4250, .value=0xad}, {.addr=0x4251, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x4250, .value=0xad, .type=IO_READ},
        {.addr=0x4251, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_023F) {
    const struct CPU_State initial_cpu = {.pc=0xc12b, .a=0x16, .x=0x23, .y=0x93, .sp=0x9e, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xc12b, .value=0xad}, {.addr=0xc12c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc12d, .a=0x16, .x=0x23, .y=0x93, .sp=0x9e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xc12b, .value=0xad}, {.addr=0xc12c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc12b, .value=0xad, .type=IO_READ},
        {.addr=0xc12c, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0240) {
    const struct CPU_State initial_cpu = {.pc=0x2af4, .a=0xd0, .x=0x47, .y=0xd6, .sp=0x47, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x2af4, .value=0xad}, {.addr=0x2af5, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x2af6, .a=0xd0, .x=0x47, .y=0xd6, .sp=0x47, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x2af4, .value=0xad}, {.addr=0x2af5, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x2af4, .value=0xad, .type=IO_READ},
        {.addr=0x2af5, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0241) {
    const struct CPU_State initial_cpu = {.pc=0x0b1d, .a=0x91, .x=0x8e, .y=0x57, .sp=0xe1, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0b1d, .value=0xad}, {.addr=0x0b1e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0b1f, .a=0x91, .x=0x8e, .y=0x57, .sp=0xe1, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0b1d, .value=0xad}, {.addr=0x0b1e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0b1d, .value=0xad, .type=IO_READ},
        {.addr=0x0b1e, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0242) {
    const struct CPU_State initial_cpu = {.pc=0x19c2, .a=0x20, .x=0x3e, .y=0xe5, .sp=0x6d, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x19c2, .value=0xad}, {.addr=0x19c3, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x19c4, .a=0x20, .x=0x3e, .y=0xe5, .sp=0x6d, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x19c2, .value=0xad}, {.addr=0x19c3, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x19c2, .value=0xad, .type=IO_READ},
        {.addr=0x19c3, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0243) {
    const struct CPU_State initial_cpu = {.pc=0x1c33, .a=0x2a, .x=0xad, .y=0x31, .sp=0xa1, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x1c33, .value=0xad}, {.addr=0x1c34, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x1c35, .a=0x2a, .x=0xad, .y=0x31, .sp=0xa1, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1c33, .value=0xad}, {.addr=0x1c34, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x1c33, .value=0xad, .type=IO_READ},
        {.addr=0x1c34, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0244) {
    const struct CPU_State initial_cpu = {.pc=0xd633, .a=0x2d, .x=0xd2, .y=0x6b, .sp=0xfa, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xd633, .value=0xad}, {.addr=0xd634, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xd635, .a=0x2d, .x=0xd2, .y=0x6b, .sp=0xfa, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd633, .value=0xad}, {.addr=0xd634, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xd633, .value=0xad, .type=IO_READ},
        {.addr=0xd634, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0245) {
    const struct CPU_State initial_cpu = {.pc=0x3f5c, .a=0x51, .x=0x12, .y=0x71, .sp=0x1c, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x3f5c, .value=0xad}, {.addr=0x3f5d, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x3f5e, .a=0x51, .x=0x12, .y=0x71, .sp=0x1c, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x3f5c, .value=0xad}, {.addr=0x3f5d, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x3f5c, .value=0xad, .type=IO_READ},
        {.addr=0x3f5d, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0246) {
    const struct CPU_State initial_cpu = {.pc=0xc47d, .a=0xc7, .x=0x97, .y=0xc1, .sp=0x7b, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xc47d, .value=0xad}, {.addr=0xc47e, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xc47f, .a=0xc7, .x=0x97, .y=0xc1, .sp=0x7b, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xc47d, .value=0xad}, {.addr=0xc47e, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xc47d, .value=0xad, .type=IO_READ},
        {.addr=0xc47e, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0247) {
    const struct CPU_State initial_cpu = {.pc=0x6da3, .a=0xc4, .x=0xda, .y=0x3a, .sp=0xc0, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x6da3, .value=0xad}, {.addr=0x6da4, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x6da5, .a=0xc4, .x=0xda, .y=0x3a, .sp=0xc0, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x6da3, .value=0xad}, {.addr=0x6da4, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x6da3, .value=0xad, .type=IO_READ},
        {.addr=0x6da4, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0248) {
    const struct CPU_State initial_cpu = {.pc=0xc3d7, .a=0xc9, .x=0x33, .y=0x31, .sp=0x5f, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xc3d7, .value=0xad}, {.addr=0xc3d8, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xc3d9, .a=0xc9, .x=0x33, .y=0x31, .sp=0x5f, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xc3d7, .value=0xad}, {.addr=0xc3d8, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xc3d7, .value=0xad, .type=IO_READ},
        {.addr=0xc3d8, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0249) {
    const struct CPU_State initial_cpu = {.pc=0x3de3, .a=0x0a, .x=0xe6, .y=0xf4, .sp=0x5a, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x3de3, .value=0xad}, {.addr=0x3de4, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x3de5, .a=0x0a, .x=0xe6, .y=0xf4, .sp=0x5a, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3de3, .value=0xad}, {.addr=0x3de4, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x3de3, .value=0xad, .type=IO_READ},
        {.addr=0x3de4, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_024A) {
    const struct CPU_State initial_cpu = {.pc=0x6f1d, .a=0x58, .x=0x1b, .y=0x60, .sp=0x16, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x6f1d, .value=0xad}, {.addr=0x6f1e, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x6f1f, .a=0x58, .x=0x1b, .y=0x60, .sp=0x16, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x6f1d, .value=0xad}, {.addr=0x6f1e, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x6f1d, .value=0xad, .type=IO_READ},
        {.addr=0x6f1e, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_024B) {
    const struct CPU_State initial_cpu = {.pc=0xda52, .a=0x88, .x=0xf1, .y=0x54, .sp=0x73, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xda52, .value=0xad}, {.addr=0xda53, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xda54, .a=0x88, .x=0xf1, .y=0x54, .sp=0x73, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xda52, .value=0xad}, {.addr=0xda53, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xda52, .value=0xad, .type=IO_READ},
        {.addr=0xda53, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_024C) {
    const struct CPU_State initial_cpu = {.pc=0x0429, .a=0x28, .x=0x1d, .y=0xd4, .sp=0x3e, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0429, .value=0xad}, {.addr=0x042a, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x042b, .a=0x28, .x=0x1d, .y=0xd4, .sp=0x3e, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0429, .value=0xad}, {.addr=0x042a, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x0429, .value=0xad, .type=IO_READ},
        {.addr=0x042a, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_024D) {
    const struct CPU_State initial_cpu = {.pc=0x75e1, .a=0x0a, .x=0xb6, .y=0xc1, .sp=0x34, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x75e1, .value=0xad}, {.addr=0x75e2, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x75e3, .a=0x0a, .x=0xb6, .y=0xc1, .sp=0x34, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x75e1, .value=0xad}, {.addr=0x75e2, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x75e1, .value=0xad, .type=IO_READ},
        {.addr=0x75e2, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_024E) {
    const struct CPU_State initial_cpu = {.pc=0x5893, .a=0x1a, .x=0xa1, .y=0xa8, .sp=0x07, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x5893, .value=0xad}, {.addr=0x5894, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x5895, .a=0x1a, .x=0xa1, .y=0xa8, .sp=0x07, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x5893, .value=0xad}, {.addr=0x5894, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x5893, .value=0xad, .type=IO_READ},
        {.addr=0x5894, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_024F) {
    const struct CPU_State initial_cpu = {.pc=0x54b9, .a=0x02, .x=0xef, .y=0xa0, .sp=0x87, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x54b9, .value=0xad}, {.addr=0x54ba, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x54bb, .a=0x02, .x=0xef, .y=0xa0, .sp=0x87, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x54b9, .value=0xad}, {.addr=0x54ba, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x54b9, .value=0xad, .type=IO_READ},
        {.addr=0x54ba, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0250) {
    const struct CPU_State initial_cpu = {.pc=0xc7fa, .a=0xa0, .x=0x4f, .y=0x99, .sp=0x06, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xc7fa, .value=0xad}, {.addr=0xc7fb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc7fc, .a=0xa0, .x=0x4f, .y=0x99, .sp=0x06, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xc7fa, .value=0xad}, {.addr=0xc7fb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc7fa, .value=0xad, .type=IO_READ},
        {.addr=0xc7fb, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0251) {
    const struct CPU_State initial_cpu = {.pc=0xb630, .a=0xdb, .x=0x47, .y=0x5c, .sp=0x43, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xb630, .value=0xad}, {.addr=0xb631, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xb632, .a=0xdb, .x=0x47, .y=0x5c, .sp=0x43, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xb630, .value=0xad}, {.addr=0xb631, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xb630, .value=0xad, .type=IO_READ},
        {.addr=0xb631, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0252) {
    const struct CPU_State initial_cpu = {.pc=0xa019, .a=0x17, .x=0x31, .y=0x0e, .sp=0x4c, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xa019, .value=0xad}, {.addr=0xa01a, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xa01b, .a=0x17, .x=0x31, .y=0x0e, .sp=0x4c, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xa019, .value=0xad}, {.addr=0xa01a, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xa019, .value=0xad, .type=IO_READ},
        {.addr=0xa01a, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0253) {
    const struct CPU_State initial_cpu = {.pc=0x63df, .a=0x83, .x=0x34, .y=0xf2, .sp=0xa1, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x63df, .value=0xad}, {.addr=0x63e0, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x63e1, .a=0x83, .x=0x34, .y=0xf2, .sp=0xa1, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x63df, .value=0xad}, {.addr=0x63e0, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x63df, .value=0xad, .type=IO_READ},
        {.addr=0x63e0, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0254) {
    const struct CPU_State initial_cpu = {.pc=0x7b60, .a=0xdd, .x=0x56, .y=0xa4, .sp=0xc3, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x7b60, .value=0xad}, {.addr=0x7b61, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x7b62, .a=0xdd, .x=0x56, .y=0xa4, .sp=0xc3, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x7b60, .value=0xad}, {.addr=0x7b61, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x7b60, .value=0xad, .type=IO_READ},
        {.addr=0x7b61, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0255) {
    const struct CPU_State initial_cpu = {.pc=0x6a76, .a=0xf3, .x=0xcd, .y=0xa0, .sp=0x99, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x6a76, .value=0xad}, {.addr=0x6a77, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x6a78, .a=0xf3, .x=0xcd, .y=0xa0, .sp=0x99, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x6a76, .value=0xad}, {.addr=0x6a77, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x6a76, .value=0xad, .type=IO_READ},
        {.addr=0x6a77, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0256) {
    const struct CPU_State initial_cpu = {.pc=0xfcdf, .a=0x1c, .x=0x69, .y=0x2d, .sp=0xfe, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xfcdf, .value=0xad}, {.addr=0xfce0, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xfce1, .a=0x1c, .x=0x69, .y=0x2d, .sp=0xfe, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xfcdf, .value=0xad}, {.addr=0xfce0, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xfcdf, .value=0xad, .type=IO_READ},
        {.addr=0xfce0, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0257) {
    const struct CPU_State initial_cpu = {.pc=0xbfc3, .a=0x51, .x=0xff, .y=0xbd, .sp=0x71, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xbfc3, .value=0xad}, {.addr=0xbfc4, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xbfc5, .a=0x51, .x=0xff, .y=0xbd, .sp=0x71, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xbfc3, .value=0xad}, {.addr=0xbfc4, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xbfc3, .value=0xad, .type=IO_READ},
        {.addr=0xbfc4, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0258) {
    const struct CPU_State initial_cpu = {.pc=0x3a95, .a=0x10, .x=0xae, .y=0x87, .sp=0x45, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x3a95, .value=0xad}, {.addr=0x3a96, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x3a97, .a=0x10, .x=0xae, .y=0x87, .sp=0x45, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x3a95, .value=0xad}, {.addr=0x3a96, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x3a95, .value=0xad, .type=IO_READ},
        {.addr=0x3a96, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0259) {
    const struct CPU_State initial_cpu = {.pc=0xb3a3, .a=0xe5, .x=0xa6, .y=0x0c, .sp=0x06, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xb3a3, .value=0xad}, {.addr=0xb3a4, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xb3a5, .a=0xe5, .x=0xa6, .y=0x0c, .sp=0x06, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xb3a3, .value=0xad}, {.addr=0xb3a4, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xb3a3, .value=0xad, .type=IO_READ},
        {.addr=0xb3a4, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_025A) {
    const struct CPU_State initial_cpu = {.pc=0xf92b, .a=0x65, .x=0x17, .y=0xc4, .sp=0xaf, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xf92b, .value=0xad}, {.addr=0xf92c, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xf92d, .a=0x65, .x=0x17, .y=0xc4, .sp=0xaf, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xf92b, .value=0xad}, {.addr=0xf92c, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xf92b, .value=0xad, .type=IO_READ},
        {.addr=0xf92c, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_025B) {
    const struct CPU_State initial_cpu = {.pc=0x7c5d, .a=0xcc, .x=0x58, .y=0x5e, .sp=0xfe, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x7c5d, .value=0xad}, {.addr=0x7c5e, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x7c5f, .a=0xcc, .x=0x58, .y=0x5e, .sp=0xfe, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x7c5d, .value=0xad}, {.addr=0x7c5e, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x7c5d, .value=0xad, .type=IO_READ},
        {.addr=0x7c5e, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_025C) {
    const struct CPU_State initial_cpu = {.pc=0x5c84, .a=0x2c, .x=0x24, .y=0xc0, .sp=0x27, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x5c84, .value=0xad}, {.addr=0x5c85, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x5c86, .a=0x2c, .x=0x24, .y=0xc0, .sp=0x27, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x5c84, .value=0xad}, {.addr=0x5c85, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x5c84, .value=0xad, .type=IO_READ},
        {.addr=0x5c85, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_025D) {
    const struct CPU_State initial_cpu = {.pc=0x7c87, .a=0x42, .x=0xae, .y=0x65, .sp=0x7b, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x7c87, .value=0xad}, {.addr=0x7c88, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x7c89, .a=0x42, .x=0xae, .y=0x65, .sp=0x7b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7c87, .value=0xad}, {.addr=0x7c88, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7c87, .value=0xad, .type=IO_READ},
        {.addr=0x7c88, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_025E) {
    const struct CPU_State initial_cpu = {.pc=0xfa17, .a=0x0f, .x=0xec, .y=0xd1, .sp=0x9c, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xfa17, .value=0xad}, {.addr=0xfa18, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xfa19, .a=0x0f, .x=0xec, .y=0xd1, .sp=0x9c, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xfa17, .value=0xad}, {.addr=0xfa18, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xfa17, .value=0xad, .type=IO_READ},
        {.addr=0xfa18, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_025F) {
    const struct CPU_State initial_cpu = {.pc=0xc94f, .a=0x96, .x=0x41, .y=0xd8, .sp=0xd1, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xc94f, .value=0xad}, {.addr=0xc950, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xc951, .a=0x96, .x=0x41, .y=0xd8, .sp=0xd1, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc94f, .value=0xad}, {.addr=0xc950, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xc94f, .value=0xad, .type=IO_READ},
        {.addr=0xc950, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0260) {
    const struct CPU_State initial_cpu = {.pc=0x9ef3, .a=0x06, .x=0xac, .y=0xcb, .sp=0x73, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x9ef3, .value=0xad}, {.addr=0x9ef4, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x9ef5, .a=0x06, .x=0xac, .y=0xcb, .sp=0x73, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x9ef3, .value=0xad}, {.addr=0x9ef4, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x9ef3, .value=0xad, .type=IO_READ},
        {.addr=0x9ef4, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0261) {
    const struct CPU_State initial_cpu = {.pc=0x5879, .a=0x58, .x=0x13, .y=0xa9, .sp=0x21, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x5879, .value=0xad}, {.addr=0x587a, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x587b, .a=0x58, .x=0x13, .y=0xa9, .sp=0x21, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x5879, .value=0xad}, {.addr=0x587a, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x5879, .value=0xad, .type=IO_READ},
        {.addr=0x587a, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0262) {
    const struct CPU_State initial_cpu = {.pc=0x87e4, .a=0x23, .x=0x7d, .y=0xdc, .sp=0x5d, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x87e4, .value=0xad}, {.addr=0x87e5, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x87e6, .a=0x23, .x=0x7d, .y=0xdc, .sp=0x5d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x87e4, .value=0xad}, {.addr=0x87e5, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x87e4, .value=0xad, .type=IO_READ},
        {.addr=0x87e5, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0263) {
    const struct CPU_State initial_cpu = {.pc=0x3ac9, .a=0x41, .x=0x33, .y=0x91, .sp=0x9b, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x3ac9, .value=0xad}, {.addr=0x3aca, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x3acb, .a=0x41, .x=0x33, .y=0x91, .sp=0x9b, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x3ac9, .value=0xad}, {.addr=0x3aca, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x3ac9, .value=0xad, .type=IO_READ},
        {.addr=0x3aca, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0264) {
    const struct CPU_State initial_cpu = {.pc=0xc3d5, .a=0xd2, .x=0x11, .y=0x04, .sp=0x6d, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xc3d5, .value=0xad}, {.addr=0xc3d6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc3d7, .a=0xd2, .x=0x11, .y=0x04, .sp=0x6d, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xc3d5, .value=0xad}, {.addr=0xc3d6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc3d5, .value=0xad, .type=IO_READ},
        {.addr=0xc3d6, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0265) {
    const struct CPU_State initial_cpu = {.pc=0xe980, .a=0x9e, .x=0x4e, .y=0x4b, .sp=0x06, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xe980, .value=0xad}, {.addr=0xe981, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xe982, .a=0x9e, .x=0x4e, .y=0x4b, .sp=0x06, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xe980, .value=0xad}, {.addr=0xe981, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xe980, .value=0xad, .type=IO_READ},
        {.addr=0xe981, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0266) {
    const struct CPU_State initial_cpu = {.pc=0x1a58, .a=0x87, .x=0x3e, .y=0x24, .sp=0xf1, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x1a58, .value=0xad}, {.addr=0x1a59, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x1a5a, .a=0x87, .x=0x3e, .y=0x24, .sp=0xf1, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x1a58, .value=0xad}, {.addr=0x1a59, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x1a58, .value=0xad, .type=IO_READ},
        {.addr=0x1a59, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0267) {
    const struct CPU_State initial_cpu = {.pc=0xf722, .a=0x6a, .x=0xcb, .y=0xaa, .sp=0x6e, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xf722, .value=0xad}, {.addr=0xf723, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xf724, .a=0x6a, .x=0xcb, .y=0xaa, .sp=0x6e, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xf722, .value=0xad}, {.addr=0xf723, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xf722, .value=0xad, .type=IO_READ},
        {.addr=0xf723, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0268) {
    const struct CPU_State initial_cpu = {.pc=0x6c3e, .a=0xe9, .x=0x21, .y=0xaf, .sp=0xa4, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x6c3e, .value=0xad}, {.addr=0x6c3f, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x6c40, .a=0xe9, .x=0x21, .y=0xaf, .sp=0xa4, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x6c3e, .value=0xad}, {.addr=0x6c3f, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x6c3e, .value=0xad, .type=IO_READ},
        {.addr=0x6c3f, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0269) {
    const struct CPU_State initial_cpu = {.pc=0x3f44, .a=0x97, .x=0x90, .y=0x86, .sp=0x5b, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x3f44, .value=0xad}, {.addr=0x3f45, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3f46, .a=0x97, .x=0x90, .y=0x86, .sp=0x5b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x3f44, .value=0xad}, {.addr=0x3f45, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3f44, .value=0xad, .type=IO_READ},
        {.addr=0x3f45, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_026A) {
    const struct CPU_State initial_cpu = {.pc=0x531c, .a=0xa1, .x=0xc4, .y=0x63, .sp=0x9c, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x531c, .value=0xad}, {.addr=0x531d, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x531e, .a=0xa1, .x=0xc4, .y=0x63, .sp=0x9c, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x531c, .value=0xad}, {.addr=0x531d, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x531c, .value=0xad, .type=IO_READ},
        {.addr=0x531d, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_026B) {
    const struct CPU_State initial_cpu = {.pc=0x9d43, .a=0x5c, .x=0xb7, .y=0xea, .sp=0x82, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x9d43, .value=0xad}, {.addr=0x9d44, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9d45, .a=0x5c, .x=0xb7, .y=0xea, .sp=0x82, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x9d43, .value=0xad}, {.addr=0x9d44, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9d43, .value=0xad, .type=IO_READ},
        {.addr=0x9d44, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_026C) {
    const struct CPU_State initial_cpu = {.pc=0x3929, .a=0x92, .x=0xac, .y=0x51, .sp=0x70, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x3929, .value=0xad}, {.addr=0x392a, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x392b, .a=0x92, .x=0xac, .y=0x51, .sp=0x70, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3929, .value=0xad}, {.addr=0x392a, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x3929, .value=0xad, .type=IO_READ},
        {.addr=0x392a, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_026D) {
    const struct CPU_State initial_cpu = {.pc=0x2fa4, .a=0xb6, .x=0xd1, .y=0x3d, .sp=0xda, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x2fa4, .value=0xad}, {.addr=0x2fa5, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x2fa6, .a=0xb6, .x=0xd1, .y=0x3d, .sp=0xda, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x2fa4, .value=0xad}, {.addr=0x2fa5, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x2fa4, .value=0xad, .type=IO_READ},
        {.addr=0x2fa5, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_026E) {
    const struct CPU_State initial_cpu = {.pc=0xdf8b, .a=0xd8, .x=0x8f, .y=0x4b, .sp=0x8e, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xdf8b, .value=0xad}, {.addr=0xdf8c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xdf8d, .a=0xd8, .x=0x8f, .y=0x4b, .sp=0x8e, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xdf8b, .value=0xad}, {.addr=0xdf8c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xdf8b, .value=0xad, .type=IO_READ},
        {.addr=0xdf8c, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_026F) {
    const struct CPU_State initial_cpu = {.pc=0xe272, .a=0xc1, .x=0x61, .y=0xb6, .sp=0xe8, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xe272, .value=0xad}, {.addr=0xe273, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe274, .a=0xc1, .x=0x61, .y=0xb6, .sp=0xe8, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xe272, .value=0xad}, {.addr=0xe273, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe272, .value=0xad, .type=IO_READ},
        {.addr=0xe273, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0270) {
    const struct CPU_State initial_cpu = {.pc=0xc024, .a=0xa6, .x=0xb9, .y=0x4f, .sp=0x45, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xc024, .value=0xad}, {.addr=0xc025, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xc026, .a=0xa6, .x=0xb9, .y=0x4f, .sp=0x45, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xc024, .value=0xad}, {.addr=0xc025, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xc024, .value=0xad, .type=IO_READ},
        {.addr=0xc025, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0271) {
    const struct CPU_State initial_cpu = {.pc=0x54bf, .a=0x34, .x=0x78, .y=0x11, .sp=0xcb, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x54bf, .value=0xad}, {.addr=0x54c0, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x54c1, .a=0x34, .x=0x78, .y=0x11, .sp=0xcb, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x54bf, .value=0xad}, {.addr=0x54c0, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x54bf, .value=0xad, .type=IO_READ},
        {.addr=0x54c0, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0272) {
    const struct CPU_State initial_cpu = {.pc=0xd368, .a=0xdc, .x=0x40, .y=0xfb, .sp=0xa2, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xd368, .value=0xad}, {.addr=0xd369, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xd36a, .a=0xdc, .x=0x40, .y=0xfb, .sp=0xa2, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd368, .value=0xad}, {.addr=0xd369, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xd368, .value=0xad, .type=IO_READ},
        {.addr=0xd369, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0273) {
    const struct CPU_State initial_cpu = {.pc=0x2ded, .a=0xa6, .x=0xb0, .y=0x69, .sp=0xca, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x2ded, .value=0xad}, {.addr=0x2dee, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x2def, .a=0xa6, .x=0xb0, .y=0x69, .sp=0xca, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x2ded, .value=0xad}, {.addr=0x2dee, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x2ded, .value=0xad, .type=IO_READ},
        {.addr=0x2dee, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0274) {
    const struct CPU_State initial_cpu = {.pc=0x59d6, .a=0x08, .x=0xf7, .y=0x34, .sp=0x1d, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x59d6, .value=0xad}, {.addr=0x59d7, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x59d8, .a=0x08, .x=0xf7, .y=0x34, .sp=0x1d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x59d6, .value=0xad}, {.addr=0x59d7, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x59d6, .value=0xad, .type=IO_READ},
        {.addr=0x59d7, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0275) {
    const struct CPU_State initial_cpu = {.pc=0xdcb6, .a=0x75, .x=0x31, .y=0xe7, .sp=0x06, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xdcb6, .value=0xad}, {.addr=0xdcb7, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xdcb8, .a=0x75, .x=0x31, .y=0xe7, .sp=0x06, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xdcb6, .value=0xad}, {.addr=0xdcb7, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xdcb6, .value=0xad, .type=IO_READ},
        {.addr=0xdcb7, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0276) {
    const struct CPU_State initial_cpu = {.pc=0x92a4, .a=0x7c, .x=0xaf, .y=0x16, .sp=0x09, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x92a4, .value=0xad}, {.addr=0x92a5, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x92a6, .a=0x7c, .x=0xaf, .y=0x16, .sp=0x09, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x92a4, .value=0xad}, {.addr=0x92a5, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x92a4, .value=0xad, .type=IO_READ},
        {.addr=0x92a5, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0277) {
    const struct CPU_State initial_cpu = {.pc=0xe4f4, .a=0xa6, .x=0x21, .y=0x32, .sp=0x08, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xe4f4, .value=0xad}, {.addr=0xe4f5, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xe4f6, .a=0xa6, .x=0x21, .y=0x32, .sp=0x08, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xe4f4, .value=0xad}, {.addr=0xe4f5, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xe4f4, .value=0xad, .type=IO_READ},
        {.addr=0xe4f5, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0278) {
    const struct CPU_State initial_cpu = {.pc=0xfe9e, .a=0x0f, .x=0x48, .y=0xe9, .sp=0x5d, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xfe9e, .value=0xad}, {.addr=0xfe9f, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xfea0, .a=0x0f, .x=0x48, .y=0xe9, .sp=0x5d, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xfe9e, .value=0xad}, {.addr=0xfe9f, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xfe9e, .value=0xad, .type=IO_READ},
        {.addr=0xfe9f, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0279) {
    const struct CPU_State initial_cpu = {.pc=0x76c9, .a=0x3a, .x=0xe0, .y=0x2b, .sp=0xf2, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x76c9, .value=0xad}, {.addr=0x76ca, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x76cb, .a=0x3a, .x=0xe0, .y=0x2b, .sp=0xf2, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x76c9, .value=0xad}, {.addr=0x76ca, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x76c9, .value=0xad, .type=IO_READ},
        {.addr=0x76ca, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_027A) {
    const struct CPU_State initial_cpu = {.pc=0x867b, .a=0xb5, .x=0x1e, .y=0x89, .sp=0xd0, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x867b, .value=0xad}, {.addr=0x867c, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x867d, .a=0xb5, .x=0x1e, .y=0x89, .sp=0xd0, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x867b, .value=0xad}, {.addr=0x867c, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x867b, .value=0xad, .type=IO_READ},
        {.addr=0x867c, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_027B) {
    const struct CPU_State initial_cpu = {.pc=0x2f94, .a=0xd8, .x=0xcd, .y=0x1f, .sp=0xa5, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x2f94, .value=0xad}, {.addr=0x2f95, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x2f96, .a=0xd8, .x=0xcd, .y=0x1f, .sp=0xa5, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x2f94, .value=0xad}, {.addr=0x2f95, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x2f94, .value=0xad, .type=IO_READ},
        {.addr=0x2f95, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_027C) {
    const struct CPU_State initial_cpu = {.pc=0xa1f9, .a=0x4b, .x=0xea, .y=0x79, .sp=0x77, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xa1f9, .value=0xad}, {.addr=0xa1fa, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa1fb, .a=0x4b, .x=0xea, .y=0x79, .sp=0x77, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa1f9, .value=0xad}, {.addr=0xa1fa, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa1f9, .value=0xad, .type=IO_READ},
        {.addr=0xa1fa, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_027D) {
    const struct CPU_State initial_cpu = {.pc=0x00ed, .a=0x41, .x=0xd1, .y=0x57, .sp=0xd5, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0xad}, {.addr=0x00ee, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x00ef, .a=0x41, .x=0xd1, .y=0x57, .sp=0xd5, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0xad}, {.addr=0x00ee, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x00ed, .value=0xad, .type=IO_READ},
        {.addr=0x00ee, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_027E) {
    const struct CPU_State initial_cpu = {.pc=0xae11, .a=0xf2, .x=0x5a, .y=0xb2, .sp=0xff, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xae11, .value=0xad}, {.addr=0xae12, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xae13, .a=0xf2, .x=0x5a, .y=0xb2, .sp=0xff, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xae11, .value=0xad}, {.addr=0xae12, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xae11, .value=0xad, .type=IO_READ},
        {.addr=0xae12, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_027F) {
    const struct CPU_State initial_cpu = {.pc=0x4106, .a=0x55, .x=0xb2, .y=0x1a, .sp=0x45, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x4106, .value=0xad}, {.addr=0x4107, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x4108, .a=0x55, .x=0xb2, .y=0x1a, .sp=0x45, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x4106, .value=0xad}, {.addr=0x4107, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x4106, .value=0xad, .type=IO_READ},
        {.addr=0x4107, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0280) {
    const struct CPU_State initial_cpu = {.pc=0x35d8, .a=0x50, .x=0x8f, .y=0xbe, .sp=0x09, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x35d8, .value=0xad}, {.addr=0x35d9, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x35da, .a=0x50, .x=0x8f, .y=0xbe, .sp=0x09, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x35d8, .value=0xad}, {.addr=0x35d9, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x35d8, .value=0xad, .type=IO_READ},
        {.addr=0x35d9, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0281) {
    const struct CPU_State initial_cpu = {.pc=0x0e52, .a=0x54, .x=0xff, .y=0x3c, .sp=0x55, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0e52, .value=0xad}, {.addr=0x0e53, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x0e54, .a=0x54, .x=0xff, .y=0x3c, .sp=0x55, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0e52, .value=0xad}, {.addr=0x0e53, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x0e52, .value=0xad, .type=IO_READ},
        {.addr=0x0e53, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0282) {
    const struct CPU_State initial_cpu = {.pc=0x633f, .a=0x99, .x=0x2d, .y=0x10, .sp=0xd9, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x633f, .value=0xad}, {.addr=0x6340, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x6341, .a=0x99, .x=0x2d, .y=0x10, .sp=0xd9, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x633f, .value=0xad}, {.addr=0x6340, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x633f, .value=0xad, .type=IO_READ},
        {.addr=0x6340, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0283) {
    const struct CPU_State initial_cpu = {.pc=0x422d, .a=0x92, .x=0x77, .y=0x0b, .sp=0x32, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x422d, .value=0xad}, {.addr=0x422e, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x422f, .a=0x92, .x=0x77, .y=0x0b, .sp=0x32, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x422d, .value=0xad}, {.addr=0x422e, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x422d, .value=0xad, .type=IO_READ},
        {.addr=0x422e, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0284) {
    const struct CPU_State initial_cpu = {.pc=0x92c6, .a=0x84, .x=0xe7, .y=0xf3, .sp=0x63, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x92c6, .value=0xad}, {.addr=0x92c7, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x92c8, .a=0x84, .x=0xe7, .y=0xf3, .sp=0x63, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x92c6, .value=0xad}, {.addr=0x92c7, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x92c6, .value=0xad, .type=IO_READ},
        {.addr=0x92c7, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0285) {
    const struct CPU_State initial_cpu = {.pc=0x508d, .a=0xb2, .x=0x31, .y=0x36, .sp=0x56, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x508d, .value=0xad}, {.addr=0x508e, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x508f, .a=0xb2, .x=0x31, .y=0x36, .sp=0x56, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x508d, .value=0xad}, {.addr=0x508e, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x508d, .value=0xad, .type=IO_READ},
        {.addr=0x508e, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0286) {
    const struct CPU_State initial_cpu = {.pc=0x02c0, .a=0xd2, .x=0xa6, .y=0xf9, .sp=0x34, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x02c0, .value=0xad}, {.addr=0x02c1, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x02c2, .a=0xd2, .x=0xa6, .y=0xf9, .sp=0x34, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x02c0, .value=0xad}, {.addr=0x02c1, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x02c0, .value=0xad, .type=IO_READ},
        {.addr=0x02c1, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0287) {
    const struct CPU_State initial_cpu = {.pc=0xaa4a, .a=0x1e, .x=0xa9, .y=0xf7, .sp=0x16, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xaa4a, .value=0xad}, {.addr=0xaa4b, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xaa4c, .a=0x1e, .x=0xa9, .y=0xf7, .sp=0x16, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xaa4a, .value=0xad}, {.addr=0xaa4b, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xaa4a, .value=0xad, .type=IO_READ},
        {.addr=0xaa4b, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0288) {
    const struct CPU_State initial_cpu = {.pc=0xeddc, .a=0xd1, .x=0x07, .y=0xca, .sp=0x4a, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xeddc, .value=0xad}, {.addr=0xeddd, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xedde, .a=0xd1, .x=0x07, .y=0xca, .sp=0x4a, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xeddc, .value=0xad}, {.addr=0xeddd, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xeddc, .value=0xad, .type=IO_READ},
        {.addr=0xeddd, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0289) {
    const struct CPU_State initial_cpu = {.pc=0x4338, .a=0x3c, .x=0x39, .y=0x6c, .sp=0x7f, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x4338, .value=0xad}, {.addr=0x4339, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x433a, .a=0x3c, .x=0x39, .y=0x6c, .sp=0x7f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x4338, .value=0xad}, {.addr=0x4339, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4338, .value=0xad, .type=IO_READ},
        {.addr=0x4339, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_028A) {
    const struct CPU_State initial_cpu = {.pc=0xc025, .a=0xad, .x=0x72, .y=0xa1, .sp=0xbf, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xc025, .value=0xad}, {.addr=0xc026, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xc027, .a=0xad, .x=0x72, .y=0xa1, .sp=0xbf, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xc025, .value=0xad}, {.addr=0xc026, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xc025, .value=0xad, .type=IO_READ},
        {.addr=0xc026, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_028B) {
    const struct CPU_State initial_cpu = {.pc=0x3cfa, .a=0xfb, .x=0x4b, .y=0x5d, .sp=0x27, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x3cfa, .value=0xad}, {.addr=0x3cfb, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3cfc, .a=0xfb, .x=0x4b, .y=0x5d, .sp=0x27, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x3cfa, .value=0xad}, {.addr=0x3cfb, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3cfa, .value=0xad, .type=IO_READ},
        {.addr=0x3cfb, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_028C) {
    const struct CPU_State initial_cpu = {.pc=0x5371, .a=0x34, .x=0xf1, .y=0x53, .sp=0xed, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x5371, .value=0xad}, {.addr=0x5372, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x5373, .a=0x34, .x=0xf1, .y=0x53, .sp=0xed, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x5371, .value=0xad}, {.addr=0x5372, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x5371, .value=0xad, .type=IO_READ},
        {.addr=0x5372, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_028D) {
    const struct CPU_State initial_cpu = {.pc=0x3cbb, .a=0xd2, .x=0x44, .y=0x32, .sp=0xd9, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x3cbb, .value=0xad}, {.addr=0x3cbc, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x3cbd, .a=0xd2, .x=0x44, .y=0x32, .sp=0xd9, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x3cbb, .value=0xad}, {.addr=0x3cbc, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x3cbb, .value=0xad, .type=IO_READ},
        {.addr=0x3cbc, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_028E) {
    const struct CPU_State initial_cpu = {.pc=0x94c6, .a=0xe9, .x=0xa0, .y=0xd9, .sp=0x9e, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x94c6, .value=0xad}, {.addr=0x94c7, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x94c8, .a=0xe9, .x=0xa0, .y=0xd9, .sp=0x9e, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x94c6, .value=0xad}, {.addr=0x94c7, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x94c6, .value=0xad, .type=IO_READ},
        {.addr=0x94c7, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_028F) {
    const struct CPU_State initial_cpu = {.pc=0xf1c5, .a=0x5b, .x=0xbd, .y=0xa4, .sp=0x2e, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xf1c5, .value=0xad}, {.addr=0xf1c6, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xf1c7, .a=0x5b, .x=0xbd, .y=0xa4, .sp=0x2e, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf1c5, .value=0xad}, {.addr=0xf1c6, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xf1c5, .value=0xad, .type=IO_READ},
        {.addr=0xf1c6, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0290) {
    const struct CPU_State initial_cpu = {.pc=0x50a6, .a=0xd6, .x=0x8f, .y=0x94, .sp=0x95, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x50a6, .value=0xad}, {.addr=0x50a7, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x50a8, .a=0xd6, .x=0x8f, .y=0x94, .sp=0x95, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x50a6, .value=0xad}, {.addr=0x50a7, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x50a6, .value=0xad, .type=IO_READ},
        {.addr=0x50a7, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0291) {
    const struct CPU_State initial_cpu = {.pc=0x628e, .a=0x5f, .x=0x61, .y=0xd8, .sp=0xc1, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x628e, .value=0xad}, {.addr=0x628f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6290, .a=0x5f, .x=0x61, .y=0xd8, .sp=0xc1, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x628e, .value=0xad}, {.addr=0x628f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x628e, .value=0xad, .type=IO_READ},
        {.addr=0x628f, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0292) {
    const struct CPU_State initial_cpu = {.pc=0xfa5b, .a=0xa7, .x=0x63, .y=0x76, .sp=0x9e, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xfa5b, .value=0xad}, {.addr=0xfa5c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xfa5d, .a=0xa7, .x=0x63, .y=0x76, .sp=0x9e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xfa5b, .value=0xad}, {.addr=0xfa5c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xfa5b, .value=0xad, .type=IO_READ},
        {.addr=0xfa5c, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0293) {
    const struct CPU_State initial_cpu = {.pc=0x999d, .a=0x30, .x=0xf6, .y=0xc7, .sp=0x75, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x999d, .value=0xad}, {.addr=0x999e, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x999f, .a=0x30, .x=0xf6, .y=0xc7, .sp=0x75, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x999d, .value=0xad}, {.addr=0x999e, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x999d, .value=0xad, .type=IO_READ},
        {.addr=0x999e, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0294) {
    const struct CPU_State initial_cpu = {.pc=0xda9a, .a=0xd6, .x=0xb6, .y=0x3a, .sp=0xff, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xda9a, .value=0xad}, {.addr=0xda9b, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xda9c, .a=0xd6, .x=0xb6, .y=0x3a, .sp=0xff, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xda9a, .value=0xad}, {.addr=0xda9b, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xda9a, .value=0xad, .type=IO_READ},
        {.addr=0xda9b, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0295) {
    const struct CPU_State initial_cpu = {.pc=0x5701, .a=0x2f, .x=0xf2, .y=0x31, .sp=0x64, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x5701, .value=0xad}, {.addr=0x5702, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5703, .a=0x2f, .x=0xf2, .y=0x31, .sp=0x64, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x5701, .value=0xad}, {.addr=0x5702, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5701, .value=0xad, .type=IO_READ},
        {.addr=0x5702, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0296) {
    const struct CPU_State initial_cpu = {.pc=0x1bcf, .a=0xb0, .x=0x42, .y=0x48, .sp=0xa7, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x1bcf, .value=0xad}, {.addr=0x1bd0, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x1bd1, .a=0xb0, .x=0x42, .y=0x48, .sp=0xa7, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x1bcf, .value=0xad}, {.addr=0x1bd0, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x1bcf, .value=0xad, .type=IO_READ},
        {.addr=0x1bd0, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0297) {
    const struct CPU_State initial_cpu = {.pc=0xf2cc, .a=0xe0, .x=0x80, .y=0x0d, .sp=0xfb, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xf2cc, .value=0xad}, {.addr=0xf2cd, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xf2ce, .a=0xe0, .x=0x80, .y=0x0d, .sp=0xfb, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xf2cc, .value=0xad}, {.addr=0xf2cd, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xf2cc, .value=0xad, .type=IO_READ},
        {.addr=0xf2cd, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0298) {
    const struct CPU_State initial_cpu = {.pc=0xfcb2, .a=0xf6, .x=0x21, .y=0x67, .sp=0x8c, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xfcb2, .value=0xad}, {.addr=0xfcb3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xfcb4, .a=0xf6, .x=0x21, .y=0x67, .sp=0x8c, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xfcb2, .value=0xad}, {.addr=0xfcb3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xfcb2, .value=0xad, .type=IO_READ},
        {.addr=0xfcb3, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0299) {
    const struct CPU_State initial_cpu = {.pc=0x8952, .a=0xff, .x=0x22, .y=0xe2, .sp=0x6b, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x8952, .value=0xad}, {.addr=0x8953, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x8954, .a=0xff, .x=0x22, .y=0xe2, .sp=0x6b, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x8952, .value=0xad}, {.addr=0x8953, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x8952, .value=0xad, .type=IO_READ},
        {.addr=0x8953, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_029A) {
    const struct CPU_State initial_cpu = {.pc=0x9a60, .a=0x0d, .x=0x90, .y=0x93, .sp=0x00, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x9a60, .value=0xad}, {.addr=0x9a61, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x9a62, .a=0x0d, .x=0x90, .y=0x93, .sp=0x00, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x9a60, .value=0xad}, {.addr=0x9a61, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x9a60, .value=0xad, .type=IO_READ},
        {.addr=0x9a61, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_029B) {
    const struct CPU_State initial_cpu = {.pc=0x1689, .a=0xcb, .x=0xee, .y=0xdf, .sp=0x36, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x1689, .value=0xad}, {.addr=0x168a, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x168b, .a=0xcb, .x=0xee, .y=0xdf, .sp=0x36, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x1689, .value=0xad}, {.addr=0x168a, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x1689, .value=0xad, .type=IO_READ},
        {.addr=0x168a, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_029C) {
    const struct CPU_State initial_cpu = {.pc=0x452c, .a=0x11, .x=0xfa, .y=0xd1, .sp=0x53, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x452c, .value=0xad}, {.addr=0x452d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x452e, .a=0x11, .x=0xfa, .y=0xd1, .sp=0x53, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x452c, .value=0xad}, {.addr=0x452d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x452c, .value=0xad, .type=IO_READ},
        {.addr=0x452d, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_029D) {
    const struct CPU_State initial_cpu = {.pc=0x763c, .a=0x54, .x=0x0d, .y=0x68, .sp=0x1d, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x763c, .value=0xad}, {.addr=0x763d, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x763e, .a=0x54, .x=0x0d, .y=0x68, .sp=0x1d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x763c, .value=0xad}, {.addr=0x763d, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x763c, .value=0xad, .type=IO_READ},
        {.addr=0x763d, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_029E) {
    const struct CPU_State initial_cpu = {.pc=0x7b7d, .a=0xef, .x=0x75, .y=0x98, .sp=0x46, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x7b7d, .value=0xad}, {.addr=0x7b7e, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x7b7f, .a=0xef, .x=0x75, .y=0x98, .sp=0x46, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x7b7d, .value=0xad}, {.addr=0x7b7e, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x7b7d, .value=0xad, .type=IO_READ},
        {.addr=0x7b7e, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_029F) {
    const struct CPU_State initial_cpu = {.pc=0x7d09, .a=0x4b, .x=0x10, .y=0xa9, .sp=0x91, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x7d09, .value=0xad}, {.addr=0x7d0a, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7d0b, .a=0x4b, .x=0x10, .y=0xa9, .sp=0x91, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x7d09, .value=0xad}, {.addr=0x7d0a, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7d09, .value=0xad, .type=IO_READ},
        {.addr=0x7d0a, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x9f3c, .a=0x81, .x=0x08, .y=0x36, .sp=0x18, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x9f3c, .value=0xad}, {.addr=0x9f3d, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x9f3e, .a=0x81, .x=0x08, .y=0x36, .sp=0x18, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x9f3c, .value=0xad}, {.addr=0x9f3d, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x9f3c, .value=0xad, .type=IO_READ},
        {.addr=0x9f3d, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x7c62, .a=0xd0, .x=0x42, .y=0xbb, .sp=0x3a, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x7c62, .value=0xad}, {.addr=0x7c63, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x7c64, .a=0xd0, .x=0x42, .y=0xbb, .sp=0x3a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7c62, .value=0xad}, {.addr=0x7c63, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x7c62, .value=0xad, .type=IO_READ},
        {.addr=0x7c63, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x55e4, .a=0x9f, .x=0x01, .y=0xe1, .sp=0xce, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x55e4, .value=0xad}, {.addr=0x55e5, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x55e6, .a=0x9f, .x=0x01, .y=0xe1, .sp=0xce, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x55e4, .value=0xad}, {.addr=0x55e5, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x55e4, .value=0xad, .type=IO_READ},
        {.addr=0x55e5, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x7b92, .a=0x83, .x=0xd8, .y=0xd6, .sp=0x1e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x7b92, .value=0xad}, {.addr=0x7b93, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x7b94, .a=0x83, .x=0xd8, .y=0xd6, .sp=0x1e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x7b92, .value=0xad}, {.addr=0x7b93, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x7b92, .value=0xad, .type=IO_READ},
        {.addr=0x7b93, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x508d, .a=0x9e, .x=0x3f, .y=0xcc, .sp=0xc8, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x508d, .value=0xad}, {.addr=0x508e, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x508f, .a=0x9e, .x=0x3f, .y=0xcc, .sp=0xc8, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x508d, .value=0xad}, {.addr=0x508e, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x508d, .value=0xad, .type=IO_READ},
        {.addr=0x508e, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xb5e9, .a=0x8e, .x=0x98, .y=0x64, .sp=0x3a, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xb5e9, .value=0xad}, {.addr=0xb5ea, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xb5eb, .a=0x8e, .x=0x98, .y=0x64, .sp=0x3a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xb5e9, .value=0xad}, {.addr=0xb5ea, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xb5e9, .value=0xad, .type=IO_READ},
        {.addr=0xb5ea, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x196a, .a=0x80, .x=0x4b, .y=0xbe, .sp=0x05, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x196a, .value=0xad}, {.addr=0x196b, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x196c, .a=0x80, .x=0x4b, .y=0xbe, .sp=0x05, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x196a, .value=0xad}, {.addr=0x196b, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x196a, .value=0xad, .type=IO_READ},
        {.addr=0x196b, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x1897, .a=0xf1, .x=0x10, .y=0x01, .sp=0x68, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x1897, .value=0xad}, {.addr=0x1898, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1899, .a=0xf1, .x=0x10, .y=0x01, .sp=0x68, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x1897, .value=0xad}, {.addr=0x1898, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1897, .value=0xad, .type=IO_READ},
        {.addr=0x1898, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x9032, .a=0xcb, .x=0x0e, .y=0x7f, .sp=0x9a, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x9032, .value=0xad}, {.addr=0x9033, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x9034, .a=0xcb, .x=0x0e, .y=0x7f, .sp=0x9a, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9032, .value=0xad}, {.addr=0x9033, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x9032, .value=0xad, .type=IO_READ},
        {.addr=0x9033, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x1fc0, .a=0xd0, .x=0xf9, .y=0xd0, .sp=0x95, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x1fc0, .value=0xad}, {.addr=0x1fc1, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x1fc2, .a=0xd0, .x=0xf9, .y=0xd0, .sp=0x95, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x1fc0, .value=0xad}, {.addr=0x1fc1, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x1fc0, .value=0xad, .type=IO_READ},
        {.addr=0x1fc1, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x75ff, .a=0x07, .x=0xb9, .y=0x8b, .sp=0x0c, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x75ff, .value=0xad}, {.addr=0x7600, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x7601, .a=0x07, .x=0xb9, .y=0x8b, .sp=0x0c, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x75ff, .value=0xad}, {.addr=0x7600, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x75ff, .value=0xad, .type=IO_READ},
        {.addr=0x7600, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x2679, .a=0x4e, .x=0x49, .y=0x0b, .sp=0x99, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x2679, .value=0xad}, {.addr=0x267a, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x267b, .a=0x4e, .x=0x49, .y=0x0b, .sp=0x99, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x2679, .value=0xad}, {.addr=0x267a, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x2679, .value=0xad, .type=IO_READ},
        {.addr=0x267a, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x10b2, .a=0xce, .x=0x0a, .y=0x1e, .sp=0x4a, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x10b2, .value=0xad}, {.addr=0x10b3, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x10b4, .a=0xce, .x=0x0a, .y=0x1e, .sp=0x4a, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x10b2, .value=0xad}, {.addr=0x10b3, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x10b2, .value=0xad, .type=IO_READ},
        {.addr=0x10b3, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x4e95, .a=0x1b, .x=0x93, .y=0x10, .sp=0x98, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x4e95, .value=0xad}, {.addr=0x4e96, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4e97, .a=0x1b, .x=0x93, .y=0x10, .sp=0x98, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x4e95, .value=0xad}, {.addr=0x4e96, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4e95, .value=0xad, .type=IO_READ},
        {.addr=0x4e96, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x9439, .a=0x06, .x=0x2b, .y=0x9e, .sp=0x1c, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x9439, .value=0xad}, {.addr=0x943a, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x943b, .a=0x06, .x=0x2b, .y=0x9e, .sp=0x1c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x9439, .value=0xad}, {.addr=0x943a, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x9439, .value=0xad, .type=IO_READ},
        {.addr=0x943a, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x3ebf, .a=0x61, .x=0x8c, .y=0x00, .sp=0x26, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x3ebf, .value=0xad}, {.addr=0x3ec0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3ec1, .a=0x61, .x=0x8c, .y=0x00, .sp=0x26, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x3ebf, .value=0xad}, {.addr=0x3ec0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3ebf, .value=0xad, .type=IO_READ},
        {.addr=0x3ec0, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x39e6, .a=0xb4, .x=0x77, .y=0x98, .sp=0x36, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x39e6, .value=0xad}, {.addr=0x39e7, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x39e8, .a=0xb4, .x=0x77, .y=0x98, .sp=0x36, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x39e6, .value=0xad}, {.addr=0x39e7, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x39e6, .value=0xad, .type=IO_READ},
        {.addr=0x39e7, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xd89d, .a=0x27, .x=0x82, .y=0x11, .sp=0xcd, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xd89d, .value=0xad}, {.addr=0xd89e, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xd89f, .a=0x27, .x=0x82, .y=0x11, .sp=0xcd, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xd89d, .value=0xad}, {.addr=0xd89e, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xd89d, .value=0xad, .type=IO_READ},
        {.addr=0xd89e, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x4f4d, .a=0x06, .x=0x67, .y=0x0e, .sp=0xb4, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x4f4d, .value=0xad}, {.addr=0x4f4e, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x4f4f, .a=0x06, .x=0x67, .y=0x0e, .sp=0xb4, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x4f4d, .value=0xad}, {.addr=0x4f4e, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x4f4d, .value=0xad, .type=IO_READ},
        {.addr=0x4f4e, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xd4ab, .a=0xbf, .x=0xf7, .y=0x3a, .sp=0x65, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xd4ab, .value=0xad}, {.addr=0xd4ac, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xd4ad, .a=0xbf, .x=0xf7, .y=0x3a, .sp=0x65, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xd4ab, .value=0xad}, {.addr=0xd4ac, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xd4ab, .value=0xad, .type=IO_READ},
        {.addr=0xd4ac, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xffd8, .a=0xec, .x=0x12, .y=0xfa, .sp=0xd1, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xffd8, .value=0xad}, {.addr=0xffd9, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xffda, .a=0xec, .x=0x12, .y=0xfa, .sp=0xd1, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xffd8, .value=0xad}, {.addr=0xffd9, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xffd8, .value=0xad, .type=IO_READ},
        {.addr=0xffd9, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x0b22, .a=0x89, .x=0xd6, .y=0x86, .sp=0x6d, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0b22, .value=0xad}, {.addr=0x0b23, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x0b24, .a=0x89, .x=0xd6, .y=0x86, .sp=0x6d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0b22, .value=0xad}, {.addr=0x0b23, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x0b22, .value=0xad, .type=IO_READ},
        {.addr=0x0b23, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xdd89, .a=0xc2, .x=0x8c, .y=0x2e, .sp=0x95, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xdd89, .value=0xad}, {.addr=0xdd8a, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xdd8b, .a=0xc2, .x=0x8c, .y=0x2e, .sp=0x95, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xdd89, .value=0xad}, {.addr=0xdd8a, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xdd89, .value=0xad, .type=IO_READ},
        {.addr=0xdd8a, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xc65d, .a=0xc5, .x=0x6c, .y=0x68, .sp=0x42, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xc65d, .value=0xad}, {.addr=0xc65e, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xc65f, .a=0xc5, .x=0x6c, .y=0x68, .sp=0x42, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xc65d, .value=0xad}, {.addr=0xc65e, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xc65d, .value=0xad, .type=IO_READ},
        {.addr=0xc65e, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xdafe, .a=0xe0, .x=0x9a, .y=0xf8, .sp=0xe5, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xdafe, .value=0xad}, {.addr=0xdaff, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xdb00, .a=0xe0, .x=0x9a, .y=0xf8, .sp=0xe5, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xdafe, .value=0xad}, {.addr=0xdaff, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xdafe, .value=0xad, .type=IO_READ},
        {.addr=0xdaff, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x9477, .a=0xe6, .x=0x5c, .y=0x00, .sp=0x6d, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x9477, .value=0xad}, {.addr=0x9478, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x9479, .a=0xe6, .x=0x5c, .y=0x00, .sp=0x6d, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x9477, .value=0xad}, {.addr=0x9478, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x9477, .value=0xad, .type=IO_READ},
        {.addr=0x9478, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x1381, .a=0xa5, .x=0xa7, .y=0x4d, .sp=0xdc, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x1381, .value=0xad}, {.addr=0x1382, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x1383, .a=0xa5, .x=0xa7, .y=0x4d, .sp=0xdc, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x1381, .value=0xad}, {.addr=0x1382, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x1381, .value=0xad, .type=IO_READ},
        {.addr=0x1382, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x0760, .a=0x2b, .x=0x66, .y=0x88, .sp=0xf3, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0760, .value=0xad}, {.addr=0x0761, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x0762, .a=0x2b, .x=0x66, .y=0x88, .sp=0xf3, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0760, .value=0xad}, {.addr=0x0761, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x0760, .value=0xad, .type=IO_READ},
        {.addr=0x0761, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xe881, .a=0x2e, .x=0x08, .y=0x1e, .sp=0x2d, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xe881, .value=0xad}, {.addr=0xe882, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xe883, .a=0x2e, .x=0x08, .y=0x1e, .sp=0x2d, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xe881, .value=0xad}, {.addr=0xe882, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xe881, .value=0xad, .type=IO_READ},
        {.addr=0xe882, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x2ee2, .a=0xfb, .x=0xda, .y=0x2e, .sp=0x7b, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x2ee2, .value=0xad}, {.addr=0x2ee3, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x2ee4, .a=0xfb, .x=0xda, .y=0x2e, .sp=0x7b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x2ee2, .value=0xad}, {.addr=0x2ee3, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x2ee2, .value=0xad, .type=IO_READ},
        {.addr=0x2ee3, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x70a3, .a=0x7f, .x=0xfb, .y=0xb4, .sp=0x6b, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x70a3, .value=0xad}, {.addr=0x70a4, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x70a5, .a=0x7f, .x=0xfb, .y=0xb4, .sp=0x6b, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x70a3, .value=0xad}, {.addr=0x70a4, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x70a3, .value=0xad, .type=IO_READ},
        {.addr=0x70a4, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x5a06, .a=0xc5, .x=0xc7, .y=0xeb, .sp=0xc6, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x5a06, .value=0xad}, {.addr=0x5a07, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x5a08, .a=0xc5, .x=0xc7, .y=0xeb, .sp=0xc6, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x5a06, .value=0xad}, {.addr=0x5a07, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x5a06, .value=0xad, .type=IO_READ},
        {.addr=0x5a07, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xb8c9, .a=0x7f, .x=0xa3, .y=0xba, .sp=0xd8, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xb8c9, .value=0xad}, {.addr=0xb8ca, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xb8cb, .a=0x7f, .x=0xa3, .y=0xba, .sp=0xd8, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xb8c9, .value=0xad}, {.addr=0xb8ca, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xb8c9, .value=0xad, .type=IO_READ},
        {.addr=0xb8ca, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x967a, .a=0x42, .x=0xd0, .y=0xb9, .sp=0x8a, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x967a, .value=0xad}, {.addr=0x967b, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x967c, .a=0x42, .x=0xd0, .y=0xb9, .sp=0x8a, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x967a, .value=0xad}, {.addr=0x967b, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x967a, .value=0xad, .type=IO_READ},
        {.addr=0x967b, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xf789, .a=0x1b, .x=0xcf, .y=0x87, .sp=0x22, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xf789, .value=0xad}, {.addr=0xf78a, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xf78b, .a=0x1b, .x=0xcf, .y=0x87, .sp=0x22, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xf789, .value=0xad}, {.addr=0xf78a, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xf789, .value=0xad, .type=IO_READ},
        {.addr=0xf78a, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xa546, .a=0xfc, .x=0xc3, .y=0x9c, .sp=0x4b, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xa546, .value=0xad}, {.addr=0xa547, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xa548, .a=0xfc, .x=0xc3, .y=0x9c, .sp=0x4b, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xa546, .value=0xad}, {.addr=0xa547, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xa546, .value=0xad, .type=IO_READ},
        {.addr=0xa547, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x3f85, .a=0xb8, .x=0x29, .y=0x3a, .sp=0x43, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x3f85, .value=0xad}, {.addr=0x3f86, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x3f87, .a=0xb8, .x=0x29, .y=0x3a, .sp=0x43, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x3f85, .value=0xad}, {.addr=0x3f86, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x3f85, .value=0xad, .type=IO_READ},
        {.addr=0x3f86, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x0c1b, .a=0x6c, .x=0xb1, .y=0x8f, .sp=0x12, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0c1b, .value=0xad}, {.addr=0x0c1c, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x0c1d, .a=0x6c, .x=0xb1, .y=0x8f, .sp=0x12, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0c1b, .value=0xad}, {.addr=0x0c1c, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x0c1b, .value=0xad, .type=IO_READ},
        {.addr=0x0c1c, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x3735, .a=0x87, .x=0xa8, .y=0xc7, .sp=0x65, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x3735, .value=0xad}, {.addr=0x3736, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x3737, .a=0x87, .x=0xa8, .y=0xc7, .sp=0x65, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x3735, .value=0xad}, {.addr=0x3736, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x3735, .value=0xad, .type=IO_READ},
        {.addr=0x3736, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xd48d, .a=0xb8, .x=0x00, .y=0x46, .sp=0xb3, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xd48d, .value=0xad}, {.addr=0xd48e, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xd48f, .a=0xb8, .x=0x00, .y=0x46, .sp=0xb3, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xd48d, .value=0xad}, {.addr=0xd48e, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xd48d, .value=0xad, .type=IO_READ},
        {.addr=0xd48e, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xe299, .a=0xce, .x=0x41, .y=0xff, .sp=0xa2, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xe299, .value=0xad}, {.addr=0xe29a, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xe29b, .a=0xce, .x=0x41, .y=0xff, .sp=0xa2, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xe299, .value=0xad}, {.addr=0xe29a, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xe299, .value=0xad, .type=IO_READ},
        {.addr=0xe29a, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xd7d9, .a=0xdc, .x=0x4a, .y=0xb7, .sp=0xe1, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xd7d9, .value=0xad}, {.addr=0xd7da, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd7db, .a=0xdc, .x=0x4a, .y=0xb7, .sp=0xe1, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xd7d9, .value=0xad}, {.addr=0xd7da, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd7d9, .value=0xad, .type=IO_READ},
        {.addr=0xd7da, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xa481, .a=0xb5, .x=0x65, .y=0x0a, .sp=0xf0, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xa481, .value=0xad}, {.addr=0xa482, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xa483, .a=0xb5, .x=0x65, .y=0x0a, .sp=0xf0, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xa481, .value=0xad}, {.addr=0xa482, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xa481, .value=0xad, .type=IO_READ},
        {.addr=0xa482, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xea42, .a=0x68, .x=0x75, .y=0xad, .sp=0x40, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xea42, .value=0xad}, {.addr=0xea43, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xea44, .a=0x68, .x=0x75, .y=0xad, .sp=0x40, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xea42, .value=0xad}, {.addr=0xea43, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xea42, .value=0xad, .type=IO_READ},
        {.addr=0xea43, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xa84f, .a=0x56, .x=0x8b, .y=0xe0, .sp=0x49, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xa84f, .value=0xad}, {.addr=0xa850, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xa851, .a=0x56, .x=0x8b, .y=0xe0, .sp=0x49, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa84f, .value=0xad}, {.addr=0xa850, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xa84f, .value=0xad, .type=IO_READ},
        {.addr=0xa850, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x6a67, .a=0xb5, .x=0x12, .y=0x91, .sp=0xb3, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x6a67, .value=0xad}, {.addr=0x6a68, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x6a69, .a=0xb5, .x=0x12, .y=0x91, .sp=0xb3, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x6a67, .value=0xad}, {.addr=0x6a68, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x6a67, .value=0xad, .type=IO_READ},
        {.addr=0x6a68, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x55dd, .a=0xad, .x=0x1f, .y=0x29, .sp=0xe2, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x55dd, .value=0xad}, {.addr=0x55de, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x55df, .a=0xad, .x=0x1f, .y=0x29, .sp=0xe2, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x55dd, .value=0xad}, {.addr=0x55de, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x55dd, .value=0xad, .type=IO_READ},
        {.addr=0x55de, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x2c4a, .a=0x6f, .x=0x03, .y=0x2c, .sp=0x3e, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x2c4a, .value=0xad}, {.addr=0x2c4b, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x2c4c, .a=0x6f, .x=0x03, .y=0x2c, .sp=0x3e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x2c4a, .value=0xad}, {.addr=0x2c4b, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x2c4a, .value=0xad, .type=IO_READ},
        {.addr=0x2c4b, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x831c, .a=0x88, .x=0xdd, .y=0x2d, .sp=0x1c, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x831c, .value=0xad}, {.addr=0x831d, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x831e, .a=0x88, .x=0xdd, .y=0x2d, .sp=0x1c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x831c, .value=0xad}, {.addr=0x831d, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x831c, .value=0xad, .type=IO_READ},
        {.addr=0x831d, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x2847, .a=0x31, .x=0xb2, .y=0xd8, .sp=0xb9, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x2847, .value=0xad}, {.addr=0x2848, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x2849, .a=0x31, .x=0xb2, .y=0xd8, .sp=0xb9, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x2847, .value=0xad}, {.addr=0x2848, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x2847, .value=0xad, .type=IO_READ},
        {.addr=0x2848, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x4395, .a=0xcf, .x=0xdf, .y=0x92, .sp=0xb8, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x4395, .value=0xad}, {.addr=0x4396, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x4397, .a=0xcf, .x=0xdf, .y=0x92, .sp=0xb8, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x4395, .value=0xad}, {.addr=0x4396, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x4395, .value=0xad, .type=IO_READ},
        {.addr=0x4396, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x699a, .a=0xc8, .x=0x6a, .y=0xb0, .sp=0xcd, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x699a, .value=0xad}, {.addr=0x699b, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x699c, .a=0xc8, .x=0x6a, .y=0xb0, .sp=0xcd, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x699a, .value=0xad}, {.addr=0x699b, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x699a, .value=0xad, .type=IO_READ},
        {.addr=0x699b, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x071c, .a=0x5e, .x=0xa6, .y=0x0a, .sp=0xc3, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x071c, .value=0xad}, {.addr=0x071d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x071e, .a=0x5e, .x=0xa6, .y=0x0a, .sp=0xc3, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x071c, .value=0xad}, {.addr=0x071d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x071c, .value=0xad, .type=IO_READ},
        {.addr=0x071d, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x1e60, .a=0x3d, .x=0xc2, .y=0xb5, .sp=0x82, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x1e60, .value=0xad}, {.addr=0x1e61, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x1e62, .a=0x3d, .x=0xc2, .y=0xb5, .sp=0x82, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x1e60, .value=0xad}, {.addr=0x1e61, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x1e60, .value=0xad, .type=IO_READ},
        {.addr=0x1e61, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x2c8e, .a=0xaf, .x=0x47, .y=0x8e, .sp=0xf4, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x2c8e, .value=0xad}, {.addr=0x2c8f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2c90, .a=0xaf, .x=0x47, .y=0x8e, .sp=0xf4, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x2c8e, .value=0xad}, {.addr=0x2c8f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2c8e, .value=0xad, .type=IO_READ},
        {.addr=0x2c8f, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x4390, .a=0xd1, .x=0x6d, .y=0x91, .sp=0x51, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x4390, .value=0xad}, {.addr=0x4391, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x4392, .a=0xd1, .x=0x6d, .y=0x91, .sp=0x51, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x4390, .value=0xad}, {.addr=0x4391, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x4390, .value=0xad, .type=IO_READ},
        {.addr=0x4391, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x8837, .a=0x71, .x=0x51, .y=0x87, .sp=0x39, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x8837, .value=0xad}, {.addr=0x8838, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x8839, .a=0x71, .x=0x51, .y=0x87, .sp=0x39, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x8837, .value=0xad}, {.addr=0x8838, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x8837, .value=0xad, .type=IO_READ},
        {.addr=0x8838, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x2c26, .a=0x6c, .x=0x74, .y=0xa4, .sp=0x2e, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x2c26, .value=0xad}, {.addr=0x2c27, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x2c28, .a=0x6c, .x=0x74, .y=0xa4, .sp=0x2e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x2c26, .value=0xad}, {.addr=0x2c27, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x2c26, .value=0xad, .type=IO_READ},
        {.addr=0x2c27, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x2502, .a=0xa7, .x=0x26, .y=0x75, .sp=0x5d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x2502, .value=0xad}, {.addr=0x2503, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x2504, .a=0xa7, .x=0x26, .y=0x75, .sp=0x5d, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x2502, .value=0xad}, {.addr=0x2503, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x2502, .value=0xad, .type=IO_READ},
        {.addr=0x2503, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x23b8, .a=0xf8, .x=0xee, .y=0x2c, .sp=0x86, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x23b8, .value=0xad}, {.addr=0x23b9, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x23ba, .a=0xf8, .x=0xee, .y=0x2c, .sp=0x86, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x23b8, .value=0xad}, {.addr=0x23b9, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x23b8, .value=0xad, .type=IO_READ},
        {.addr=0x23b9, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xa495, .a=0xda, .x=0x11, .y=0x6c, .sp=0xfb, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xa495, .value=0xad}, {.addr=0xa496, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xa497, .a=0xda, .x=0x11, .y=0x6c, .sp=0xfb, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xa495, .value=0xad}, {.addr=0xa496, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xa495, .value=0xad, .type=IO_READ},
        {.addr=0xa496, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x484b, .a=0xf7, .x=0xf3, .y=0xf1, .sp=0x29, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x484b, .value=0xad}, {.addr=0x484c, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x484d, .a=0xf7, .x=0xf3, .y=0xf1, .sp=0x29, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x484b, .value=0xad}, {.addr=0x484c, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x484b, .value=0xad, .type=IO_READ},
        {.addr=0x484c, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x7476, .a=0x1b, .x=0xae, .y=0x90, .sp=0x02, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x7476, .value=0xad}, {.addr=0x7477, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x7478, .a=0x1b, .x=0xae, .y=0x90, .sp=0x02, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7476, .value=0xad}, {.addr=0x7477, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x7476, .value=0xad, .type=IO_READ},
        {.addr=0x7477, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x1011, .a=0x46, .x=0x18, .y=0x5e, .sp=0xb1, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x1011, .value=0xad}, {.addr=0x1012, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1013, .a=0x46, .x=0x18, .y=0x5e, .sp=0xb1, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x1011, .value=0xad}, {.addr=0x1012, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1011, .value=0xad, .type=IO_READ},
        {.addr=0x1012, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xcb48, .a=0x15, .x=0x36, .y=0x4a, .sp=0xcf, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xcb48, .value=0xad}, {.addr=0xcb49, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xcb4a, .a=0x15, .x=0x36, .y=0x4a, .sp=0xcf, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xcb48, .value=0xad}, {.addr=0xcb49, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xcb48, .value=0xad, .type=IO_READ},
        {.addr=0xcb49, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x4c75, .a=0xba, .x=0xa7, .y=0x80, .sp=0x68, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x4c75, .value=0xad}, {.addr=0x4c76, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x4c77, .a=0xba, .x=0xa7, .y=0x80, .sp=0x68, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x4c75, .value=0xad}, {.addr=0x4c76, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x4c75, .value=0xad, .type=IO_READ},
        {.addr=0x4c76, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x8094, .a=0x84, .x=0x28, .y=0xfb, .sp=0xcc, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x8094, .value=0xad}, {.addr=0x8095, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8096, .a=0x84, .x=0x28, .y=0xfb, .sp=0xcc, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x8094, .value=0xad}, {.addr=0x8095, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8094, .value=0xad, .type=IO_READ},
        {.addr=0x8095, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x3b79, .a=0xc2, .x=0xe7, .y=0x3b, .sp=0x18, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x3b79, .value=0xad}, {.addr=0x3b7a, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x3b7b, .a=0xc2, .x=0xe7, .y=0x3b, .sp=0x18, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x3b79, .value=0xad}, {.addr=0x3b7a, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x3b79, .value=0xad, .type=IO_READ},
        {.addr=0x3b7a, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xa61d, .a=0x56, .x=0x59, .y=0xc1, .sp=0x29, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xa61d, .value=0xad}, {.addr=0xa61e, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xa61f, .a=0x56, .x=0x59, .y=0xc1, .sp=0x29, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xa61d, .value=0xad}, {.addr=0xa61e, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xa61d, .value=0xad, .type=IO_READ},
        {.addr=0xa61e, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xfdd2, .a=0xef, .x=0xad, .y=0xb4, .sp=0x37, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xfdd2, .value=0xad}, {.addr=0xfdd3, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfdd4, .a=0xef, .x=0xad, .y=0xb4, .sp=0x37, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xfdd2, .value=0xad}, {.addr=0xfdd3, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfdd2, .value=0xad, .type=IO_READ},
        {.addr=0xfdd3, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xa760, .a=0x0b, .x=0x2b, .y=0xea, .sp=0x5e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xa760, .value=0xad}, {.addr=0xa761, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xa762, .a=0x0b, .x=0x2b, .y=0xea, .sp=0x5e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xa760, .value=0xad}, {.addr=0xa761, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xa760, .value=0xad, .type=IO_READ},
        {.addr=0xa761, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x4c36, .a=0xed, .x=0xf6, .y=0xe0, .sp=0xcb, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x4c36, .value=0xad}, {.addr=0x4c37, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x4c38, .a=0xed, .x=0xf6, .y=0xe0, .sp=0xcb, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x4c36, .value=0xad}, {.addr=0x4c37, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x4c36, .value=0xad, .type=IO_READ},
        {.addr=0x4c37, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x07af, .a=0xd7, .x=0x7d, .y=0xe7, .sp=0x39, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x07af, .value=0xad}, {.addr=0x07b0, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x07b1, .a=0xd7, .x=0x7d, .y=0xe7, .sp=0x39, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x07af, .value=0xad}, {.addr=0x07b0, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x07af, .value=0xad, .type=IO_READ},
        {.addr=0x07b0, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x0053, .a=0x51, .x=0x85, .y=0xeb, .sp=0x1b, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0053, .value=0xad}, {.addr=0x0054, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x0055, .a=0x51, .x=0x85, .y=0xeb, .sp=0x1b, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0053, .value=0xad}, {.addr=0x0054, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x0053, .value=0xad, .type=IO_READ},
        {.addr=0x0054, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x352a, .a=0xd7, .x=0xad, .y=0xeb, .sp=0x94, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x352a, .value=0xad}, {.addr=0x352b, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x352c, .a=0xd7, .x=0xad, .y=0xeb, .sp=0x94, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x352a, .value=0xad}, {.addr=0x352b, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x352a, .value=0xad, .type=IO_READ},
        {.addr=0x352b, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x34c9, .a=0xf2, .x=0x56, .y=0x97, .sp=0x81, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x34c9, .value=0xad}, {.addr=0x34ca, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x34cb, .a=0xf2, .x=0x56, .y=0x97, .sp=0x81, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x34c9, .value=0xad}, {.addr=0x34ca, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x34c9, .value=0xad, .type=IO_READ},
        {.addr=0x34ca, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x63f5, .a=0x2c, .x=0x25, .y=0x16, .sp=0xef, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x63f5, .value=0xad}, {.addr=0x63f6, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x63f7, .a=0x2c, .x=0x25, .y=0x16, .sp=0xef, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x63f5, .value=0xad}, {.addr=0x63f6, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x63f5, .value=0xad, .type=IO_READ},
        {.addr=0x63f6, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xe298, .a=0x0d, .x=0xda, .y=0x53, .sp=0x36, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xe298, .value=0xad}, {.addr=0xe299, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe29a, .a=0x0d, .x=0xda, .y=0x53, .sp=0x36, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xe298, .value=0xad}, {.addr=0xe299, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe298, .value=0xad, .type=IO_READ},
        {.addr=0xe299, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x5e0a, .a=0x5b, .x=0xff, .y=0xf1, .sp=0xdd, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x5e0a, .value=0xad}, {.addr=0x5e0b, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x5e0c, .a=0x5b, .x=0xff, .y=0xf1, .sp=0xdd, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x5e0a, .value=0xad}, {.addr=0x5e0b, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x5e0a, .value=0xad, .type=IO_READ},
        {.addr=0x5e0b, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xf002, .a=0xf2, .x=0x15, .y=0x3a, .sp=0x4a, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xf002, .value=0xad}, {.addr=0xf003, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xf004, .a=0xf2, .x=0x15, .y=0x3a, .sp=0x4a, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xf002, .value=0xad}, {.addr=0xf003, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xf002, .value=0xad, .type=IO_READ},
        {.addr=0xf003, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xb0e9, .a=0x56, .x=0x56, .y=0x3a, .sp=0x7f, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xb0e9, .value=0xad}, {.addr=0xb0ea, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb0eb, .a=0x56, .x=0x56, .y=0x3a, .sp=0x7f, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xb0e9, .value=0xad}, {.addr=0xb0ea, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb0e9, .value=0xad, .type=IO_READ},
        {.addr=0xb0ea, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xf33e, .a=0x1c, .x=0xc6, .y=0x9c, .sp=0x12, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xf33e, .value=0xad}, {.addr=0xf33f, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xf340, .a=0x1c, .x=0xc6, .y=0x9c, .sp=0x12, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xf33e, .value=0xad}, {.addr=0xf33f, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xf33e, .value=0xad, .type=IO_READ},
        {.addr=0xf33f, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xf39d, .a=0x3a, .x=0xbf, .y=0x63, .sp=0x3f, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xf39d, .value=0xad}, {.addr=0xf39e, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xf39f, .a=0x3a, .x=0xbf, .y=0x63, .sp=0x3f, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xf39d, .value=0xad}, {.addr=0xf39e, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xf39d, .value=0xad, .type=IO_READ},
        {.addr=0xf39e, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xa267, .a=0xfc, .x=0x67, .y=0xef, .sp=0x66, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xa267, .value=0xad}, {.addr=0xa268, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xa269, .a=0xfc, .x=0x67, .y=0xef, .sp=0x66, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xa267, .value=0xad}, {.addr=0xa268, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xa267, .value=0xad, .type=IO_READ},
        {.addr=0xa268, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xcd5a, .a=0xef, .x=0x20, .y=0x85, .sp=0x1b, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xcd5a, .value=0xad}, {.addr=0xcd5b, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xcd5c, .a=0xef, .x=0x20, .y=0x85, .sp=0x1b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xcd5a, .value=0xad}, {.addr=0xcd5b, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xcd5a, .value=0xad, .type=IO_READ},
        {.addr=0xcd5b, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xd755, .a=0x4c, .x=0x02, .y=0xfb, .sp=0x4e, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xd755, .value=0xad}, {.addr=0xd756, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xd757, .a=0x4c, .x=0x02, .y=0xfb, .sp=0x4e, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xd755, .value=0xad}, {.addr=0xd756, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xd755, .value=0xad, .type=IO_READ},
        {.addr=0xd756, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xe2e3, .a=0x8c, .x=0xb4, .y=0xff, .sp=0x88, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xe2e3, .value=0xad}, {.addr=0xe2e4, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xe2e5, .a=0x8c, .x=0xb4, .y=0xff, .sp=0x88, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xe2e3, .value=0xad}, {.addr=0xe2e4, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xe2e3, .value=0xad, .type=IO_READ},
        {.addr=0xe2e4, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xe51f, .a=0xb3, .x=0xb8, .y=0x06, .sp=0xa4, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xe51f, .value=0xad}, {.addr=0xe520, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xe521, .a=0xb3, .x=0xb8, .y=0x06, .sp=0xa4, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xe51f, .value=0xad}, {.addr=0xe520, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xe51f, .value=0xad, .type=IO_READ},
        {.addr=0xe520, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xf467, .a=0xca, .x=0x60, .y=0x29, .sp=0x2f, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xf467, .value=0xad}, {.addr=0xf468, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xf469, .a=0xca, .x=0x60, .y=0x29, .sp=0x2f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf467, .value=0xad}, {.addr=0xf468, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xf467, .value=0xad, .type=IO_READ},
        {.addr=0xf468, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xd0a0, .a=0x96, .x=0xe0, .y=0x95, .sp=0x97, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xd0a0, .value=0xad}, {.addr=0xd0a1, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xd0a2, .a=0x96, .x=0xe0, .y=0x95, .sp=0x97, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xd0a0, .value=0xad}, {.addr=0xd0a1, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xd0a0, .value=0xad, .type=IO_READ},
        {.addr=0xd0a1, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x86ba, .a=0x18, .x=0x2d, .y=0xa5, .sp=0x1c, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x86ba, .value=0xad}, {.addr=0x86bb, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x86bc, .a=0x18, .x=0x2d, .y=0xa5, .sp=0x1c, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x86ba, .value=0xad}, {.addr=0x86bb, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x86ba, .value=0xad, .type=IO_READ},
        {.addr=0x86bb, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x139f, .a=0x21, .x=0xce, .y=0x0b, .sp=0xdf, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x139f, .value=0xad}, {.addr=0x13a0, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x13a1, .a=0x21, .x=0xce, .y=0x0b, .sp=0xdf, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x139f, .value=0xad}, {.addr=0x13a0, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x139f, .value=0xad, .type=IO_READ},
        {.addr=0x13a0, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x363e, .a=0x84, .x=0xac, .y=0x28, .sp=0x3d, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x363e, .value=0xad}, {.addr=0x363f, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x3640, .a=0x84, .x=0xac, .y=0x28, .sp=0x3d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x363e, .value=0xad}, {.addr=0x363f, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x363e, .value=0xad, .type=IO_READ},
        {.addr=0x363f, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x2cf7, .a=0xeb, .x=0x64, .y=0x52, .sp=0x7c, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x2cf7, .value=0xad}, {.addr=0x2cf8, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x2cf9, .a=0xeb, .x=0x64, .y=0x52, .sp=0x7c, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x2cf7, .value=0xad}, {.addr=0x2cf8, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x2cf7, .value=0xad, .type=IO_READ},
        {.addr=0x2cf8, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xf19e, .a=0xae, .x=0x53, .y=0x57, .sp=0xbf, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xf19e, .value=0xad}, {.addr=0xf19f, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xf1a0, .a=0xae, .x=0x53, .y=0x57, .sp=0xbf, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xf19e, .value=0xad}, {.addr=0xf19f, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xf19e, .value=0xad, .type=IO_READ},
        {.addr=0xf19f, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x2656, .a=0xb4, .x=0x91, .y=0xd0, .sp=0xfc, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x2656, .value=0xad}, {.addr=0x2657, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x2658, .a=0xb4, .x=0x91, .y=0xd0, .sp=0xfc, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x2656, .value=0xad}, {.addr=0x2657, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x2656, .value=0xad, .type=IO_READ},
        {.addr=0x2657, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0300) {
    const struct CPU_State initial_cpu = {.pc=0xec6c, .a=0x10, .x=0x0b, .y=0x3a, .sp=0x09, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xec6c, .value=0xad}, {.addr=0xec6d, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xec6e, .a=0x10, .x=0x0b, .y=0x3a, .sp=0x09, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xec6c, .value=0xad}, {.addr=0xec6d, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xec6c, .value=0xad, .type=IO_READ},
        {.addr=0xec6d, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0301) {
    const struct CPU_State initial_cpu = {.pc=0xab05, .a=0xd9, .x=0x6d, .y=0x71, .sp=0xf4, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xab05, .value=0xad}, {.addr=0xab06, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xab07, .a=0xd9, .x=0x6d, .y=0x71, .sp=0xf4, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xab05, .value=0xad}, {.addr=0xab06, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xab05, .value=0xad, .type=IO_READ},
        {.addr=0xab06, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0302) {
    const struct CPU_State initial_cpu = {.pc=0xe6f5, .a=0x68, .x=0x6d, .y=0xe7, .sp=0x1a, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xe6f5, .value=0xad}, {.addr=0xe6f6, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xe6f7, .a=0x68, .x=0x6d, .y=0xe7, .sp=0x1a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xe6f5, .value=0xad}, {.addr=0xe6f6, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xe6f5, .value=0xad, .type=IO_READ},
        {.addr=0xe6f6, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0303) {
    const struct CPU_State initial_cpu = {.pc=0x5d4c, .a=0x48, .x=0x77, .y=0x75, .sp=0xca, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x5d4c, .value=0xad}, {.addr=0x5d4d, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x5d4e, .a=0x48, .x=0x77, .y=0x75, .sp=0xca, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x5d4c, .value=0xad}, {.addr=0x5d4d, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x5d4c, .value=0xad, .type=IO_READ},
        {.addr=0x5d4d, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0304) {
    const struct CPU_State initial_cpu = {.pc=0x2e81, .a=0xd6, .x=0x83, .y=0xb7, .sp=0x82, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x2e81, .value=0xad}, {.addr=0x2e82, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x2e83, .a=0xd6, .x=0x83, .y=0xb7, .sp=0x82, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x2e81, .value=0xad}, {.addr=0x2e82, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x2e81, .value=0xad, .type=IO_READ},
        {.addr=0x2e82, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0305) {
    const struct CPU_State initial_cpu = {.pc=0x185d, .a=0x95, .x=0x92, .y=0xbb, .sp=0x10, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x185d, .value=0xad}, {.addr=0x185e, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x185f, .a=0x95, .x=0x92, .y=0xbb, .sp=0x10, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x185d, .value=0xad}, {.addr=0x185e, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x185d, .value=0xad, .type=IO_READ},
        {.addr=0x185e, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0306) {
    const struct CPU_State initial_cpu = {.pc=0xcc01, .a=0x22, .x=0x62, .y=0xd5, .sp=0x28, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xcc01, .value=0xad}, {.addr=0xcc02, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xcc03, .a=0x22, .x=0x62, .y=0xd5, .sp=0x28, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xcc01, .value=0xad}, {.addr=0xcc02, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xcc01, .value=0xad, .type=IO_READ},
        {.addr=0xcc02, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0307) {
    const struct CPU_State initial_cpu = {.pc=0x768e, .a=0x36, .x=0x0f, .y=0xf7, .sp=0x81, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x768e, .value=0xad}, {.addr=0x768f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7690, .a=0x36, .x=0x0f, .y=0xf7, .sp=0x81, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x768e, .value=0xad}, {.addr=0x768f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x768e, .value=0xad, .type=IO_READ},
        {.addr=0x768f, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0308) {
    const struct CPU_State initial_cpu = {.pc=0x6062, .a=0xda, .x=0x08, .y=0x79, .sp=0xd2, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x6062, .value=0xad}, {.addr=0x6063, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x6064, .a=0xda, .x=0x08, .y=0x79, .sp=0xd2, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x6062, .value=0xad}, {.addr=0x6063, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x6062, .value=0xad, .type=IO_READ},
        {.addr=0x6063, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0309) {
    const struct CPU_State initial_cpu = {.pc=0xd296, .a=0xa9, .x=0x70, .y=0xea, .sp=0x0e, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xd296, .value=0xad}, {.addr=0xd297, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xd298, .a=0xa9, .x=0x70, .y=0xea, .sp=0x0e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xd296, .value=0xad}, {.addr=0xd297, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xd296, .value=0xad, .type=IO_READ},
        {.addr=0xd297, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_030A) {
    const struct CPU_State initial_cpu = {.pc=0x09c5, .a=0xe6, .x=0xbe, .y=0x9b, .sp=0x67, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x09c5, .value=0xad}, {.addr=0x09c6, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x09c7, .a=0xe6, .x=0xbe, .y=0x9b, .sp=0x67, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x09c5, .value=0xad}, {.addr=0x09c6, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x09c5, .value=0xad, .type=IO_READ},
        {.addr=0x09c6, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_030B) {
    const struct CPU_State initial_cpu = {.pc=0x4b19, .a=0x5d, .x=0xae, .y=0x30, .sp=0x83, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x4b19, .value=0xad}, {.addr=0x4b1a, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x4b1b, .a=0x5d, .x=0xae, .y=0x30, .sp=0x83, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x4b19, .value=0xad}, {.addr=0x4b1a, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x4b19, .value=0xad, .type=IO_READ},
        {.addr=0x4b1a, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_030C) {
    const struct CPU_State initial_cpu = {.pc=0x1f44, .a=0x71, .x=0x8a, .y=0x9c, .sp=0x6a, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x1f44, .value=0xad}, {.addr=0x1f45, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x1f46, .a=0x71, .x=0x8a, .y=0x9c, .sp=0x6a, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x1f44, .value=0xad}, {.addr=0x1f45, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x1f44, .value=0xad, .type=IO_READ},
        {.addr=0x1f45, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_030D) {
    const struct CPU_State initial_cpu = {.pc=0xb882, .a=0x4a, .x=0x63, .y=0xb0, .sp=0x56, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xb882, .value=0xad}, {.addr=0xb883, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xb884, .a=0x4a, .x=0x63, .y=0xb0, .sp=0x56, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xb882, .value=0xad}, {.addr=0xb883, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xb882, .value=0xad, .type=IO_READ},
        {.addr=0xb883, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_030E) {
    const struct CPU_State initial_cpu = {.pc=0x8ae6, .a=0x94, .x=0x68, .y=0xf1, .sp=0x48, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x8ae6, .value=0xad}, {.addr=0x8ae7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8ae8, .a=0x94, .x=0x68, .y=0xf1, .sp=0x48, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x8ae6, .value=0xad}, {.addr=0x8ae7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8ae6, .value=0xad, .type=IO_READ},
        {.addr=0x8ae7, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_030F) {
    const struct CPU_State initial_cpu = {.pc=0x0a68, .a=0x90, .x=0x75, .y=0x2f, .sp=0xea, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0a68, .value=0xad}, {.addr=0x0a69, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x0a6a, .a=0x90, .x=0x75, .y=0x2f, .sp=0xea, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0a68, .value=0xad}, {.addr=0x0a69, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x0a68, .value=0xad, .type=IO_READ},
        {.addr=0x0a69, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0310) {
    const struct CPU_State initial_cpu = {.pc=0x9c54, .a=0x5f, .x=0x46, .y=0x76, .sp=0x87, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x9c54, .value=0xad}, {.addr=0x9c55, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x9c56, .a=0x5f, .x=0x46, .y=0x76, .sp=0x87, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x9c54, .value=0xad}, {.addr=0x9c55, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x9c54, .value=0xad, .type=IO_READ},
        {.addr=0x9c55, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0311) {
    const struct CPU_State initial_cpu = {.pc=0x6a28, .a=0x31, .x=0xa9, .y=0x69, .sp=0x45, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x6a28, .value=0xad}, {.addr=0x6a29, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x6a2a, .a=0x31, .x=0xa9, .y=0x69, .sp=0x45, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x6a28, .value=0xad}, {.addr=0x6a29, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x6a28, .value=0xad, .type=IO_READ},
        {.addr=0x6a29, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0312) {
    const struct CPU_State initial_cpu = {.pc=0xd1ee, .a=0x7a, .x=0x7e, .y=0x07, .sp=0x18, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xd1ee, .value=0xad}, {.addr=0xd1ef, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xd1f0, .a=0x7a, .x=0x7e, .y=0x07, .sp=0x18, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xd1ee, .value=0xad}, {.addr=0xd1ef, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xd1ee, .value=0xad, .type=IO_READ},
        {.addr=0xd1ef, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0313) {
    const struct CPU_State initial_cpu = {.pc=0x33f7, .a=0x4e, .x=0x12, .y=0xad, .sp=0x20, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x33f7, .value=0xad}, {.addr=0x33f8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x33f9, .a=0x4e, .x=0x12, .y=0xad, .sp=0x20, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x33f7, .value=0xad}, {.addr=0x33f8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x33f7, .value=0xad, .type=IO_READ},
        {.addr=0x33f8, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0314) {
    const struct CPU_State initial_cpu = {.pc=0xa559, .a=0xb0, .x=0xfd, .y=0xc6, .sp=0x3e, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xa559, .value=0xad}, {.addr=0xa55a, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xa55b, .a=0xb0, .x=0xfd, .y=0xc6, .sp=0x3e, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xa559, .value=0xad}, {.addr=0xa55a, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xa559, .value=0xad, .type=IO_READ},
        {.addr=0xa55a, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0315) {
    const struct CPU_State initial_cpu = {.pc=0x0b76, .a=0xb7, .x=0x0d, .y=0xa1, .sp=0x9d, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0b76, .value=0xad}, {.addr=0x0b77, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x0b78, .a=0xb7, .x=0x0d, .y=0xa1, .sp=0x9d, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0b76, .value=0xad}, {.addr=0x0b77, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x0b76, .value=0xad, .type=IO_READ},
        {.addr=0x0b77, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0316) {
    const struct CPU_State initial_cpu = {.pc=0xb1d8, .a=0xf6, .x=0x2a, .y=0xd0, .sp=0x33, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xb1d8, .value=0xad}, {.addr=0xb1d9, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xb1da, .a=0xf6, .x=0x2a, .y=0xd0, .sp=0x33, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xb1d8, .value=0xad}, {.addr=0xb1d9, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xb1d8, .value=0xad, .type=IO_READ},
        {.addr=0xb1d9, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0317) {
    const struct CPU_State initial_cpu = {.pc=0x9c32, .a=0x5f, .x=0x39, .y=0x59, .sp=0x96, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x9c32, .value=0xad}, {.addr=0x9c33, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x9c34, .a=0x5f, .x=0x39, .y=0x59, .sp=0x96, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x9c32, .value=0xad}, {.addr=0x9c33, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x9c32, .value=0xad, .type=IO_READ},
        {.addr=0x9c33, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0318) {
    const struct CPU_State initial_cpu = {.pc=0x2235, .a=0xe5, .x=0xb6, .y=0x49, .sp=0xa7, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x2235, .value=0xad}, {.addr=0x2236, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x2237, .a=0xe5, .x=0xb6, .y=0x49, .sp=0xa7, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x2235, .value=0xad}, {.addr=0x2236, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x2235, .value=0xad, .type=IO_READ},
        {.addr=0x2236, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0319) {
    const struct CPU_State initial_cpu = {.pc=0x95a3, .a=0x8f, .x=0xd5, .y=0x0e, .sp=0x2b, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x95a3, .value=0xad}, {.addr=0x95a4, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x95a5, .a=0x8f, .x=0xd5, .y=0x0e, .sp=0x2b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x95a3, .value=0xad}, {.addr=0x95a4, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x95a3, .value=0xad, .type=IO_READ},
        {.addr=0x95a4, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_031A) {
    const struct CPU_State initial_cpu = {.pc=0xece1, .a=0x37, .x=0x0f, .y=0x81, .sp=0xca, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xece1, .value=0xad}, {.addr=0xece2, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xece3, .a=0x37, .x=0x0f, .y=0x81, .sp=0xca, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xece1, .value=0xad}, {.addr=0xece2, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xece1, .value=0xad, .type=IO_READ},
        {.addr=0xece2, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_031B) {
    const struct CPU_State initial_cpu = {.pc=0x802f, .a=0x66, .x=0x29, .y=0xb7, .sp=0x25, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x802f, .value=0xad}, {.addr=0x8030, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x8031, .a=0x66, .x=0x29, .y=0xb7, .sp=0x25, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x802f, .value=0xad}, {.addr=0x8030, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x802f, .value=0xad, .type=IO_READ},
        {.addr=0x8030, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_031C) {
    const struct CPU_State initial_cpu = {.pc=0x3f01, .a=0x0b, .x=0xcb, .y=0x8a, .sp=0xbb, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x3f01, .value=0xad}, {.addr=0x3f02, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x3f03, .a=0x0b, .x=0xcb, .y=0x8a, .sp=0xbb, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x3f01, .value=0xad}, {.addr=0x3f02, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x3f01, .value=0xad, .type=IO_READ},
        {.addr=0x3f02, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_031D) {
    const struct CPU_State initial_cpu = {.pc=0xa24b, .a=0x9d, .x=0x07, .y=0xbc, .sp=0x7f, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xa24b, .value=0xad}, {.addr=0xa24c, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xa24d, .a=0x9d, .x=0x07, .y=0xbc, .sp=0x7f, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xa24b, .value=0xad}, {.addr=0xa24c, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xa24b, .value=0xad, .type=IO_READ},
        {.addr=0xa24c, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_031E) {
    const struct CPU_State initial_cpu = {.pc=0x65e9, .a=0x61, .x=0xc3, .y=0x6a, .sp=0xff, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x65e9, .value=0xad}, {.addr=0x65ea, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x65eb, .a=0x61, .x=0xc3, .y=0x6a, .sp=0xff, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x65e9, .value=0xad}, {.addr=0x65ea, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x65e9, .value=0xad, .type=IO_READ},
        {.addr=0x65ea, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_031F) {
    const struct CPU_State initial_cpu = {.pc=0x0c3b, .a=0xf5, .x=0x1c, .y=0x75, .sp=0x00, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0c3b, .value=0xad}, {.addr=0x0c3c, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x0c3d, .a=0xf5, .x=0x1c, .y=0x75, .sp=0x00, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0c3b, .value=0xad}, {.addr=0x0c3c, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x0c3b, .value=0xad, .type=IO_READ},
        {.addr=0x0c3c, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0320) {
    const struct CPU_State initial_cpu = {.pc=0x925b, .a=0x14, .x=0xa9, .y=0x39, .sp=0xda, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x925b, .value=0xad}, {.addr=0x925c, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x925d, .a=0x14, .x=0xa9, .y=0x39, .sp=0xda, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x925b, .value=0xad}, {.addr=0x925c, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x925b, .value=0xad, .type=IO_READ},
        {.addr=0x925c, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0321) {
    const struct CPU_State initial_cpu = {.pc=0xdc8b, .a=0x5c, .x=0x27, .y=0x6a, .sp=0xd1, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xdc8b, .value=0xad}, {.addr=0xdc8c, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xdc8d, .a=0x5c, .x=0x27, .y=0x6a, .sp=0xd1, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xdc8b, .value=0xad}, {.addr=0xdc8c, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xdc8b, .value=0xad, .type=IO_READ},
        {.addr=0xdc8c, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0322) {
    const struct CPU_State initial_cpu = {.pc=0xfde4, .a=0x4a, .x=0xfe, .y=0x47, .sp=0xf2, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xfde4, .value=0xad}, {.addr=0xfde5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xfde6, .a=0x4a, .x=0xfe, .y=0x47, .sp=0xf2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xfde4, .value=0xad}, {.addr=0xfde5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xfde4, .value=0xad, .type=IO_READ},
        {.addr=0xfde5, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0323) {
    const struct CPU_State initial_cpu = {.pc=0x9eda, .a=0xf0, .x=0x0c, .y=0x7a, .sp=0xb1, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x9eda, .value=0xad}, {.addr=0x9edb, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x9edc, .a=0xf0, .x=0x0c, .y=0x7a, .sp=0xb1, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x9eda, .value=0xad}, {.addr=0x9edb, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x9eda, .value=0xad, .type=IO_READ},
        {.addr=0x9edb, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0324) {
    const struct CPU_State initial_cpu = {.pc=0x3186, .a=0x3c, .x=0x4d, .y=0xd6, .sp=0xf1, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x3186, .value=0xad}, {.addr=0x3187, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x3188, .a=0x3c, .x=0x4d, .y=0xd6, .sp=0xf1, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x3186, .value=0xad}, {.addr=0x3187, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x3186, .value=0xad, .type=IO_READ},
        {.addr=0x3187, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0325) {
    const struct CPU_State initial_cpu = {.pc=0x76d5, .a=0x97, .x=0x58, .y=0xf5, .sp=0x7b, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x76d5, .value=0xad}, {.addr=0x76d6, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x76d7, .a=0x97, .x=0x58, .y=0xf5, .sp=0x7b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x76d5, .value=0xad}, {.addr=0x76d6, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x76d5, .value=0xad, .type=IO_READ},
        {.addr=0x76d6, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0326) {
    const struct CPU_State initial_cpu = {.pc=0xdf29, .a=0x06, .x=0xed, .y=0x8f, .sp=0xe7, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xdf29, .value=0xad}, {.addr=0xdf2a, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xdf2b, .a=0x06, .x=0xed, .y=0x8f, .sp=0xe7, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xdf29, .value=0xad}, {.addr=0xdf2a, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xdf29, .value=0xad, .type=IO_READ},
        {.addr=0xdf2a, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0327) {
    const struct CPU_State initial_cpu = {.pc=0xae44, .a=0x3a, .x=0x8b, .y=0x3f, .sp=0xe9, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xae44, .value=0xad}, {.addr=0xae45, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xae46, .a=0x3a, .x=0x8b, .y=0x3f, .sp=0xe9, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xae44, .value=0xad}, {.addr=0xae45, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xae44, .value=0xad, .type=IO_READ},
        {.addr=0xae45, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0328) {
    const struct CPU_State initial_cpu = {.pc=0xdf65, .a=0x63, .x=0x6e, .y=0x26, .sp=0x69, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xdf65, .value=0xad}, {.addr=0xdf66, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xdf67, .a=0x63, .x=0x6e, .y=0x26, .sp=0x69, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xdf65, .value=0xad}, {.addr=0xdf66, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xdf65, .value=0xad, .type=IO_READ},
        {.addr=0xdf66, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0329) {
    const struct CPU_State initial_cpu = {.pc=0xa95b, .a=0xcf, .x=0x04, .y=0xd1, .sp=0x26, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xa95b, .value=0xad}, {.addr=0xa95c, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xa95d, .a=0xcf, .x=0x04, .y=0xd1, .sp=0x26, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa95b, .value=0xad}, {.addr=0xa95c, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xa95b, .value=0xad, .type=IO_READ},
        {.addr=0xa95c, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_032A) {
    const struct CPU_State initial_cpu = {.pc=0x4e6e, .a=0x6b, .x=0x3c, .y=0x3e, .sp=0xda, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x4e6e, .value=0xad}, {.addr=0x4e6f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4e70, .a=0x6b, .x=0x3c, .y=0x3e, .sp=0xda, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x4e6e, .value=0xad}, {.addr=0x4e6f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4e6e, .value=0xad, .type=IO_READ},
        {.addr=0x4e6f, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_032B) {
    const struct CPU_State initial_cpu = {.pc=0x6fc7, .a=0x05, .x=0x6e, .y=0x5e, .sp=0x35, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x6fc7, .value=0xad}, {.addr=0x6fc8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6fc9, .a=0x05, .x=0x6e, .y=0x5e, .sp=0x35, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x6fc7, .value=0xad}, {.addr=0x6fc8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6fc7, .value=0xad, .type=IO_READ},
        {.addr=0x6fc8, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_032C) {
    const struct CPU_State initial_cpu = {.pc=0xeafd, .a=0x6f, .x=0x0c, .y=0x64, .sp=0xcc, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xeafd, .value=0xad}, {.addr=0xeafe, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xeaff, .a=0x6f, .x=0x0c, .y=0x64, .sp=0xcc, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xeafd, .value=0xad}, {.addr=0xeafe, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xeafd, .value=0xad, .type=IO_READ},
        {.addr=0xeafe, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_032D) {
    const struct CPU_State initial_cpu = {.pc=0x7ccb, .a=0xc0, .x=0xec, .y=0x29, .sp=0x41, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x7ccb, .value=0xad}, {.addr=0x7ccc, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7ccd, .a=0xc0, .x=0xec, .y=0x29, .sp=0x41, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x7ccb, .value=0xad}, {.addr=0x7ccc, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x7ccb, .value=0xad, .type=IO_READ},
        {.addr=0x7ccc, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_032E) {
    const struct CPU_State initial_cpu = {.pc=0x68a3, .a=0xf0, .x=0xfa, .y=0xbf, .sp=0x86, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x68a3, .value=0xad}, {.addr=0x68a4, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x68a5, .a=0xf0, .x=0xfa, .y=0xbf, .sp=0x86, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x68a3, .value=0xad}, {.addr=0x68a4, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x68a3, .value=0xad, .type=IO_READ},
        {.addr=0x68a4, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_032F) {
    const struct CPU_State initial_cpu = {.pc=0x3292, .a=0xe3, .x=0x77, .y=0x53, .sp=0x99, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x3292, .value=0xad}, {.addr=0x3293, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x3294, .a=0xe3, .x=0x77, .y=0x53, .sp=0x99, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x3292, .value=0xad}, {.addr=0x3293, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x3292, .value=0xad, .type=IO_READ},
        {.addr=0x3293, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0330) {
    const struct CPU_State initial_cpu = {.pc=0x8f78, .a=0x52, .x=0x04, .y=0x85, .sp=0xa8, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x8f78, .value=0xad}, {.addr=0x8f79, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x8f7a, .a=0x52, .x=0x04, .y=0x85, .sp=0xa8, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x8f78, .value=0xad}, {.addr=0x8f79, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x8f78, .value=0xad, .type=IO_READ},
        {.addr=0x8f79, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0331) {
    const struct CPU_State initial_cpu = {.pc=0x5c12, .a=0x0f, .x=0x86, .y=0x5c, .sp=0x10, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x5c12, .value=0xad}, {.addr=0x5c13, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x5c14, .a=0x0f, .x=0x86, .y=0x5c, .sp=0x10, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x5c12, .value=0xad}, {.addr=0x5c13, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x5c12, .value=0xad, .type=IO_READ},
        {.addr=0x5c13, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0332) {
    const struct CPU_State initial_cpu = {.pc=0x3209, .a=0xc2, .x=0xf1, .y=0x21, .sp=0xf7, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x3209, .value=0xad}, {.addr=0x320a, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x320b, .a=0xc2, .x=0xf1, .y=0x21, .sp=0xf7, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x3209, .value=0xad}, {.addr=0x320a, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x3209, .value=0xad, .type=IO_READ},
        {.addr=0x320a, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0333) {
    const struct CPU_State initial_cpu = {.pc=0xd424, .a=0x1d, .x=0x6f, .y=0x6c, .sp=0x4a, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xd424, .value=0xad}, {.addr=0xd425, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xd426, .a=0x1d, .x=0x6f, .y=0x6c, .sp=0x4a, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xd424, .value=0xad}, {.addr=0xd425, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xd424, .value=0xad, .type=IO_READ},
        {.addr=0xd425, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0334) {
    const struct CPU_State initial_cpu = {.pc=0xd263, .a=0xb9, .x=0xa6, .y=0xf7, .sp=0xde, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xd263, .value=0xad}, {.addr=0xd264, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xd265, .a=0xb9, .x=0xa6, .y=0xf7, .sp=0xde, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xd263, .value=0xad}, {.addr=0xd264, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xd263, .value=0xad, .type=IO_READ},
        {.addr=0xd264, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0335) {
    const struct CPU_State initial_cpu = {.pc=0xc75f, .a=0x7c, .x=0xaf, .y=0x51, .sp=0xf9, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xc75f, .value=0xad}, {.addr=0xc760, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0xc761, .a=0x7c, .x=0xaf, .y=0x51, .sp=0xf9, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xc75f, .value=0xad}, {.addr=0xc760, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0xc75f, .value=0xad, .type=IO_READ},
        {.addr=0xc760, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0336) {
    const struct CPU_State initial_cpu = {.pc=0xa0a7, .a=0x1d, .x=0x85, .y=0x44, .sp=0xd4, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xa0a7, .value=0xad}, {.addr=0xa0a8, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xa0a9, .a=0x1d, .x=0x85, .y=0x44, .sp=0xd4, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xa0a7, .value=0xad}, {.addr=0xa0a8, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xa0a7, .value=0xad, .type=IO_READ},
        {.addr=0xa0a8, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0337) {
    const struct CPU_State initial_cpu = {.pc=0xbc64, .a=0x23, .x=0x4d, .y=0xae, .sp=0xf0, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xbc64, .value=0xad}, {.addr=0xbc65, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xbc66, .a=0x23, .x=0x4d, .y=0xae, .sp=0xf0, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xbc64, .value=0xad}, {.addr=0xbc65, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xbc64, .value=0xad, .type=IO_READ},
        {.addr=0xbc65, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0338) {
    const struct CPU_State initial_cpu = {.pc=0xee51, .a=0x89, .x=0x06, .y=0xd3, .sp=0xc2, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xee51, .value=0xad}, {.addr=0xee52, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xee53, .a=0x89, .x=0x06, .y=0xd3, .sp=0xc2, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xee51, .value=0xad}, {.addr=0xee52, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xee51, .value=0xad, .type=IO_READ},
        {.addr=0xee52, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0339) {
    const struct CPU_State initial_cpu = {.pc=0xd978, .a=0x97, .x=0x56, .y=0x30, .sp=0x63, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xd978, .value=0xad}, {.addr=0xd979, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xd97a, .a=0x97, .x=0x56, .y=0x30, .sp=0x63, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xd978, .value=0xad}, {.addr=0xd979, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xd978, .value=0xad, .type=IO_READ},
        {.addr=0xd979, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_033A) {
    const struct CPU_State initial_cpu = {.pc=0x786b, .a=0x71, .x=0x8c, .y=0xeb, .sp=0x70, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x786b, .value=0xad}, {.addr=0x786c, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x786d, .a=0x71, .x=0x8c, .y=0xeb, .sp=0x70, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x786b, .value=0xad}, {.addr=0x786c, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x786b, .value=0xad, .type=IO_READ},
        {.addr=0x786c, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_033B) {
    const struct CPU_State initial_cpu = {.pc=0x996a, .a=0x3a, .x=0xfd, .y=0x8d, .sp=0x1c, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x996a, .value=0xad}, {.addr=0x996b, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x996c, .a=0x3a, .x=0xfd, .y=0x8d, .sp=0x1c, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x996a, .value=0xad}, {.addr=0x996b, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x996a, .value=0xad, .type=IO_READ},
        {.addr=0x996b, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_033C) {
    const struct CPU_State initial_cpu = {.pc=0xe92e, .a=0x91, .x=0xd5, .y=0xe8, .sp=0xcd, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xe92e, .value=0xad}, {.addr=0xe92f, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xe930, .a=0x91, .x=0xd5, .y=0xe8, .sp=0xcd, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xe92e, .value=0xad}, {.addr=0xe92f, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xe92e, .value=0xad, .type=IO_READ},
        {.addr=0xe92f, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_033D) {
    const struct CPU_State initial_cpu = {.pc=0x490a, .a=0xd3, .x=0x4d, .y=0x94, .sp=0x46, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x490a, .value=0xad}, {.addr=0x490b, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x490c, .a=0xd3, .x=0x4d, .y=0x94, .sp=0x46, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x490a, .value=0xad}, {.addr=0x490b, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x490a, .value=0xad, .type=IO_READ},
        {.addr=0x490b, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_033E) {
    const struct CPU_State initial_cpu = {.pc=0xa5ea, .a=0xb1, .x=0x5a, .y=0xd8, .sp=0xd2, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xa5ea, .value=0xad}, {.addr=0xa5eb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa5ec, .a=0xb1, .x=0x5a, .y=0xd8, .sp=0xd2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xa5ea, .value=0xad}, {.addr=0xa5eb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa5ea, .value=0xad, .type=IO_READ},
        {.addr=0xa5eb, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_033F) {
    const struct CPU_State initial_cpu = {.pc=0xc235, .a=0xd4, .x=0xb6, .y=0xcf, .sp=0xbf, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xc235, .value=0xad}, {.addr=0xc236, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xc237, .a=0xd4, .x=0xb6, .y=0xcf, .sp=0xbf, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xc235, .value=0xad}, {.addr=0xc236, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xc235, .value=0xad, .type=IO_READ},
        {.addr=0xc236, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0340) {
    const struct CPU_State initial_cpu = {.pc=0x1250, .a=0x11, .x=0xa8, .y=0xcb, .sp=0xec, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x1250, .value=0xad}, {.addr=0x1251, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1252, .a=0x11, .x=0xa8, .y=0xcb, .sp=0xec, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x1250, .value=0xad}, {.addr=0x1251, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1250, .value=0xad, .type=IO_READ},
        {.addr=0x1251, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0341) {
    const struct CPU_State initial_cpu = {.pc=0xfac9, .a=0xe1, .x=0x95, .y=0x6f, .sp=0xc0, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xfac9, .value=0xad}, {.addr=0xfaca, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xfacb, .a=0xe1, .x=0x95, .y=0x6f, .sp=0xc0, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xfac9, .value=0xad}, {.addr=0xfaca, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xfac9, .value=0xad, .type=IO_READ},
        {.addr=0xfaca, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0342) {
    const struct CPU_State initial_cpu = {.pc=0xf433, .a=0xc9, .x=0x8d, .y=0x8b, .sp=0x2a, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xf433, .value=0xad}, {.addr=0xf434, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf435, .a=0xc9, .x=0x8d, .y=0x8b, .sp=0x2a, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xf433, .value=0xad}, {.addr=0xf434, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf433, .value=0xad, .type=IO_READ},
        {.addr=0xf434, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0343) {
    const struct CPU_State initial_cpu = {.pc=0xc6af, .a=0x13, .x=0x13, .y=0xca, .sp=0x10, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xc6af, .value=0xad}, {.addr=0xc6b0, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xc6b1, .a=0x13, .x=0x13, .y=0xca, .sp=0x10, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xc6af, .value=0xad}, {.addr=0xc6b0, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xc6af, .value=0xad, .type=IO_READ},
        {.addr=0xc6b0, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0344) {
    const struct CPU_State initial_cpu = {.pc=0x4c75, .a=0x9f, .x=0x88, .y=0xd4, .sp=0x52, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x4c75, .value=0xad}, {.addr=0x4c76, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x4c77, .a=0x9f, .x=0x88, .y=0xd4, .sp=0x52, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x4c75, .value=0xad}, {.addr=0x4c76, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x4c75, .value=0xad, .type=IO_READ},
        {.addr=0x4c76, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0345) {
    const struct CPU_State initial_cpu = {.pc=0x1fa0, .a=0xd6, .x=0xb7, .y=0x39, .sp=0x64, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x1fa0, .value=0xad}, {.addr=0x1fa1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1fa2, .a=0xd6, .x=0xb7, .y=0x39, .sp=0x64, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x1fa0, .value=0xad}, {.addr=0x1fa1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1fa0, .value=0xad, .type=IO_READ},
        {.addr=0x1fa1, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0346) {
    const struct CPU_State initial_cpu = {.pc=0x0ac7, .a=0xe8, .x=0x40, .y=0x9a, .sp=0xfa, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0ac7, .value=0xad}, {.addr=0x0ac8, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x0ac9, .a=0xe8, .x=0x40, .y=0x9a, .sp=0xfa, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0ac7, .value=0xad}, {.addr=0x0ac8, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x0ac7, .value=0xad, .type=IO_READ},
        {.addr=0x0ac8, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0347) {
    const struct CPU_State initial_cpu = {.pc=0xdf87, .a=0x90, .x=0xb8, .y=0x19, .sp=0x93, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xdf87, .value=0xad}, {.addr=0xdf88, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xdf89, .a=0x90, .x=0xb8, .y=0x19, .sp=0x93, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xdf87, .value=0xad}, {.addr=0xdf88, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xdf87, .value=0xad, .type=IO_READ},
        {.addr=0xdf88, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0348) {
    const struct CPU_State initial_cpu = {.pc=0x22ce, .a=0x6b, .x=0x41, .y=0x4e, .sp=0x58, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x22ce, .value=0xad}, {.addr=0x22cf, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x22d0, .a=0x6b, .x=0x41, .y=0x4e, .sp=0x58, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x22ce, .value=0xad}, {.addr=0x22cf, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x22ce, .value=0xad, .type=IO_READ},
        {.addr=0x22cf, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0349) {
    const struct CPU_State initial_cpu = {.pc=0xeec8, .a=0xad, .x=0xc8, .y=0x51, .sp=0xf1, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xeec8, .value=0xad}, {.addr=0xeec9, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xeeca, .a=0xad, .x=0xc8, .y=0x51, .sp=0xf1, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xeec8, .value=0xad}, {.addr=0xeec9, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xeec8, .value=0xad, .type=IO_READ},
        {.addr=0xeec9, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_034A) {
    const struct CPU_State initial_cpu = {.pc=0x03c1, .a=0xef, .x=0x8b, .y=0x87, .sp=0x59, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x03c1, .value=0xad}, {.addr=0x03c2, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x03c3, .a=0xef, .x=0x8b, .y=0x87, .sp=0x59, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x03c1, .value=0xad}, {.addr=0x03c2, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x03c1, .value=0xad, .type=IO_READ},
        {.addr=0x03c2, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_034B) {
    const struct CPU_State initial_cpu = {.pc=0x4f2d, .a=0x2b, .x=0x9c, .y=0xa4, .sp=0xf4, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x4f2d, .value=0xad}, {.addr=0x4f2e, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4f2f, .a=0x2b, .x=0x9c, .y=0xa4, .sp=0xf4, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x4f2d, .value=0xad}, {.addr=0x4f2e, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x4f2d, .value=0xad, .type=IO_READ},
        {.addr=0x4f2e, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_034C) {
    const struct CPU_State initial_cpu = {.pc=0x7553, .a=0xf7, .x=0x56, .y=0xf4, .sp=0x9c, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x7553, .value=0xad}, {.addr=0x7554, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x7555, .a=0xf7, .x=0x56, .y=0xf4, .sp=0x9c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x7553, .value=0xad}, {.addr=0x7554, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x7553, .value=0xad, .type=IO_READ},
        {.addr=0x7554, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_034D) {
    const struct CPU_State initial_cpu = {.pc=0xfc96, .a=0xe0, .x=0x37, .y=0xac, .sp=0x6e, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xfc96, .value=0xad}, {.addr=0xfc97, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xfc98, .a=0xe0, .x=0x37, .y=0xac, .sp=0x6e, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xfc96, .value=0xad}, {.addr=0xfc97, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xfc96, .value=0xad, .type=IO_READ},
        {.addr=0xfc97, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_034E) {
    const struct CPU_State initial_cpu = {.pc=0x5aeb, .a=0xc6, .x=0x30, .y=0x22, .sp=0x57, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x5aeb, .value=0xad}, {.addr=0x5aec, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x5aed, .a=0xc6, .x=0x30, .y=0x22, .sp=0x57, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x5aeb, .value=0xad}, {.addr=0x5aec, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x5aeb, .value=0xad, .type=IO_READ},
        {.addr=0x5aec, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_034F) {
    const struct CPU_State initial_cpu = {.pc=0x2c0e, .a=0x4e, .x=0xc9, .y=0x14, .sp=0xa6, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x2c0e, .value=0xad}, {.addr=0x2c0f, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x2c10, .a=0x4e, .x=0xc9, .y=0x14, .sp=0xa6, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x2c0e, .value=0xad}, {.addr=0x2c0f, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x2c0e, .value=0xad, .type=IO_READ},
        {.addr=0x2c0f, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0350) {
    const struct CPU_State initial_cpu = {.pc=0x25f2, .a=0x1b, .x=0xd1, .y=0x3e, .sp=0x4d, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x25f2, .value=0xad}, {.addr=0x25f3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x25f4, .a=0x1b, .x=0xd1, .y=0x3e, .sp=0x4d, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x25f2, .value=0xad}, {.addr=0x25f3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x25f2, .value=0xad, .type=IO_READ},
        {.addr=0x25f3, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0351) {
    const struct CPU_State initial_cpu = {.pc=0x89f5, .a=0x99, .x=0x1f, .y=0x1f, .sp=0x93, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x89f5, .value=0xad}, {.addr=0x89f6, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x89f7, .a=0x99, .x=0x1f, .y=0x1f, .sp=0x93, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x89f5, .value=0xad}, {.addr=0x89f6, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x89f5, .value=0xad, .type=IO_READ},
        {.addr=0x89f6, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0352) {
    const struct CPU_State initial_cpu = {.pc=0x861d, .a=0x3e, .x=0xd6, .y=0x94, .sp=0x3d, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x861d, .value=0xad}, {.addr=0x861e, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x861f, .a=0x3e, .x=0xd6, .y=0x94, .sp=0x3d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x861d, .value=0xad}, {.addr=0x861e, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x861d, .value=0xad, .type=IO_READ},
        {.addr=0x861e, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0353) {
    const struct CPU_State initial_cpu = {.pc=0xe432, .a=0xd3, .x=0xe2, .y=0xc2, .sp=0x8e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xe432, .value=0xad}, {.addr=0xe433, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xe434, .a=0xd3, .x=0xe2, .y=0xc2, .sp=0x8e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xe432, .value=0xad}, {.addr=0xe433, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xe432, .value=0xad, .type=IO_READ},
        {.addr=0xe433, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0354) {
    const struct CPU_State initial_cpu = {.pc=0xfdf9, .a=0x69, .x=0xa0, .y=0xa2, .sp=0x08, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xfdf9, .value=0xad}, {.addr=0xfdfa, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xfdfb, .a=0x69, .x=0xa0, .y=0xa2, .sp=0x08, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xfdf9, .value=0xad}, {.addr=0xfdfa, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xfdf9, .value=0xad, .type=IO_READ},
        {.addr=0xfdfa, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0355) {
    const struct CPU_State initial_cpu = {.pc=0x90ec, .a=0x27, .x=0x30, .y=0x20, .sp=0x0c, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x90ec, .value=0xad}, {.addr=0x90ed, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x90ee, .a=0x27, .x=0x30, .y=0x20, .sp=0x0c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x90ec, .value=0xad}, {.addr=0x90ed, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x90ec, .value=0xad, .type=IO_READ},
        {.addr=0x90ed, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0356) {
    const struct CPU_State initial_cpu = {.pc=0x0015, .a=0x0a, .x=0x00, .y=0x56, .sp=0x97, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0015, .value=0xad}, {.addr=0x0016, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x0017, .a=0x0a, .x=0x00, .y=0x56, .sp=0x97, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0015, .value=0xad}, {.addr=0x0016, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x0015, .value=0xad, .type=IO_READ},
        {.addr=0x0016, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0357) {
    const struct CPU_State initial_cpu = {.pc=0x9203, .a=0x52, .x=0xd2, .y=0xee, .sp=0x35, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x9203, .value=0xad}, {.addr=0x9204, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9205, .a=0x52, .x=0xd2, .y=0xee, .sp=0x35, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x9203, .value=0xad}, {.addr=0x9204, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9203, .value=0xad, .type=IO_READ},
        {.addr=0x9204, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0358) {
    const struct CPU_State initial_cpu = {.pc=0xad26, .a=0xe0, .x=0x59, .y=0xf9, .sp=0xfc, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xad26, .value=0xad}, {.addr=0xad27, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xad28, .a=0xe0, .x=0x59, .y=0xf9, .sp=0xfc, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xad26, .value=0xad}, {.addr=0xad27, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xad26, .value=0xad, .type=IO_READ},
        {.addr=0xad27, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0359) {
    const struct CPU_State initial_cpu = {.pc=0xae71, .a=0x9e, .x=0xf7, .y=0xf9, .sp=0xdd, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xae71, .value=0xad}, {.addr=0xae72, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xae73, .a=0x9e, .x=0xf7, .y=0xf9, .sp=0xdd, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xae71, .value=0xad}, {.addr=0xae72, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xae71, .value=0xad, .type=IO_READ},
        {.addr=0xae72, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_035A) {
    const struct CPU_State initial_cpu = {.pc=0x8058, .a=0x5f, .x=0xea, .y=0xd4, .sp=0x1b, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x8058, .value=0xad}, {.addr=0x8059, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x805a, .a=0x5f, .x=0xea, .y=0xd4, .sp=0x1b, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8058, .value=0xad}, {.addr=0x8059, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x8058, .value=0xad, .type=IO_READ},
        {.addr=0x8059, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_035B) {
    const struct CPU_State initial_cpu = {.pc=0x4f25, .a=0xa6, .x=0x71, .y=0x71, .sp=0xe2, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x4f25, .value=0xad}, {.addr=0x4f26, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x4f27, .a=0xa6, .x=0x71, .y=0x71, .sp=0xe2, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x4f25, .value=0xad}, {.addr=0x4f26, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x4f25, .value=0xad, .type=IO_READ},
        {.addr=0x4f26, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_035C) {
    const struct CPU_State initial_cpu = {.pc=0x0466, .a=0xd8, .x=0x8f, .y=0x1d, .sp=0x1b, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0466, .value=0xad}, {.addr=0x0467, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x0468, .a=0xd8, .x=0x8f, .y=0x1d, .sp=0x1b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0466, .value=0xad}, {.addr=0x0467, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x0466, .value=0xad, .type=IO_READ},
        {.addr=0x0467, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_035D) {
    const struct CPU_State initial_cpu = {.pc=0x460c, .a=0x60, .x=0x12, .y=0x6f, .sp=0x3c, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x460c, .value=0xad}, {.addr=0x460d, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x460e, .a=0x60, .x=0x12, .y=0x6f, .sp=0x3c, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x460c, .value=0xad}, {.addr=0x460d, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x460c, .value=0xad, .type=IO_READ},
        {.addr=0x460d, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_035E) {
    const struct CPU_State initial_cpu = {.pc=0x6ce2, .a=0x8a, .x=0xf4, .y=0xee, .sp=0x5e, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x6ce2, .value=0xad}, {.addr=0x6ce3, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x6ce4, .a=0x8a, .x=0xf4, .y=0xee, .sp=0x5e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x6ce2, .value=0xad}, {.addr=0x6ce3, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x6ce2, .value=0xad, .type=IO_READ},
        {.addr=0x6ce3, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_035F) {
    const struct CPU_State initial_cpu = {.pc=0x1470, .a=0xaa, .x=0xdf, .y=0xdc, .sp=0x3e, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x1470, .value=0xad}, {.addr=0x1471, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x1472, .a=0xaa, .x=0xdf, .y=0xdc, .sp=0x3e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x1470, .value=0xad}, {.addr=0x1471, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x1470, .value=0xad, .type=IO_READ},
        {.addr=0x1471, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0360) {
    const struct CPU_State initial_cpu = {.pc=0xe3e0, .a=0xba, .x=0xb0, .y=0x80, .sp=0x8d, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e0, .value=0xad}, {.addr=0xe3e1, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xe3e2, .a=0xba, .x=0xb0, .y=0x80, .sp=0x8d, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xe3e0, .value=0xad}, {.addr=0xe3e1, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xe3e0, .value=0xad, .type=IO_READ},
        {.addr=0xe3e1, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0361) {
    const struct CPU_State initial_cpu = {.pc=0xe15f, .a=0xde, .x=0x50, .y=0x50, .sp=0x26, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xe15f, .value=0xad}, {.addr=0xe160, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xe161, .a=0xde, .x=0x50, .y=0x50, .sp=0x26, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe15f, .value=0xad}, {.addr=0xe160, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xe15f, .value=0xad, .type=IO_READ},
        {.addr=0xe160, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0362) {
    const struct CPU_State initial_cpu = {.pc=0xc1d3, .a=0x7a, .x=0x94, .y=0x66, .sp=0xb5, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xc1d3, .value=0xad}, {.addr=0xc1d4, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xc1d5, .a=0x7a, .x=0x94, .y=0x66, .sp=0xb5, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xc1d3, .value=0xad}, {.addr=0xc1d4, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xc1d3, .value=0xad, .type=IO_READ},
        {.addr=0xc1d4, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0363) {
    const struct CPU_State initial_cpu = {.pc=0x9136, .a=0x0d, .x=0x43, .y=0x77, .sp=0xe1, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x9136, .value=0xad}, {.addr=0x9137, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9138, .a=0x0d, .x=0x43, .y=0x77, .sp=0xe1, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x9136, .value=0xad}, {.addr=0x9137, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9136, .value=0xad, .type=IO_READ},
        {.addr=0x9137, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0364) {
    const struct CPU_State initial_cpu = {.pc=0x687f, .a=0x1a, .x=0x43, .y=0x80, .sp=0x99, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x687f, .value=0xad}, {.addr=0x6880, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x6881, .a=0x1a, .x=0x43, .y=0x80, .sp=0x99, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x687f, .value=0xad}, {.addr=0x6880, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x687f, .value=0xad, .type=IO_READ},
        {.addr=0x6880, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0365) {
    const struct CPU_State initial_cpu = {.pc=0x3a20, .a=0x93, .x=0xb6, .y=0xb1, .sp=0xc9, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x3a20, .value=0xad}, {.addr=0x3a21, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x3a22, .a=0x93, .x=0xb6, .y=0xb1, .sp=0xc9, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x3a20, .value=0xad}, {.addr=0x3a21, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x3a20, .value=0xad, .type=IO_READ},
        {.addr=0x3a21, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0366) {
    const struct CPU_State initial_cpu = {.pc=0x8479, .a=0x1f, .x=0x18, .y=0x66, .sp=0x8a, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x8479, .value=0xad}, {.addr=0x847a, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x847b, .a=0x1f, .x=0x18, .y=0x66, .sp=0x8a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x8479, .value=0xad}, {.addr=0x847a, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x8479, .value=0xad, .type=IO_READ},
        {.addr=0x847a, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0367) {
    const struct CPU_State initial_cpu = {.pc=0x843b, .a=0x33, .x=0xc4, .y=0x32, .sp=0xd8, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x843b, .value=0xad}, {.addr=0x843c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x843d, .a=0x33, .x=0xc4, .y=0x32, .sp=0xd8, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x843b, .value=0xad}, {.addr=0x843c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x843b, .value=0xad, .type=IO_READ},
        {.addr=0x843c, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0368) {
    const struct CPU_State initial_cpu = {.pc=0xe93a, .a=0xb1, .x=0x84, .y=0xad, .sp=0x5c, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xe93a, .value=0xad}, {.addr=0xe93b, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xe93c, .a=0xb1, .x=0x84, .y=0xad, .sp=0x5c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xe93a, .value=0xad}, {.addr=0xe93b, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xe93a, .value=0xad, .type=IO_READ},
        {.addr=0xe93b, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0369) {
    const struct CPU_State initial_cpu = {.pc=0xa11f, .a=0xff, .x=0xff, .y=0xb2, .sp=0xd3, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xa11f, .value=0xad}, {.addr=0xa120, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xa121, .a=0xff, .x=0xff, .y=0xb2, .sp=0xd3, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa11f, .value=0xad}, {.addr=0xa120, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xa11f, .value=0xad, .type=IO_READ},
        {.addr=0xa120, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_036A) {
    const struct CPU_State initial_cpu = {.pc=0xbec6, .a=0xaf, .x=0x14, .y=0x9e, .sp=0xa5, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xbec6, .value=0xad}, {.addr=0xbec7, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xbec8, .a=0xaf, .x=0x14, .y=0x9e, .sp=0xa5, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xbec6, .value=0xad}, {.addr=0xbec7, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xbec6, .value=0xad, .type=IO_READ},
        {.addr=0xbec7, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_036B) {
    const struct CPU_State initial_cpu = {.pc=0xaf5b, .a=0x18, .x=0x95, .y=0x01, .sp=0x86, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xaf5b, .value=0xad}, {.addr=0xaf5c, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xaf5d, .a=0x18, .x=0x95, .y=0x01, .sp=0x86, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xaf5b, .value=0xad}, {.addr=0xaf5c, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xaf5b, .value=0xad, .type=IO_READ},
        {.addr=0xaf5c, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_036C) {
    const struct CPU_State initial_cpu = {.pc=0x1342, .a=0x14, .x=0x27, .y=0x30, .sp=0xac, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x1342, .value=0xad}, {.addr=0x1343, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x1344, .a=0x14, .x=0x27, .y=0x30, .sp=0xac, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x1342, .value=0xad}, {.addr=0x1343, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x1342, .value=0xad, .type=IO_READ},
        {.addr=0x1343, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_036D) {
    const struct CPU_State initial_cpu = {.pc=0xb7fa, .a=0x74, .x=0x3c, .y=0x9c, .sp=0x46, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xb7fa, .value=0xad}, {.addr=0xb7fb, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xb7fc, .a=0x74, .x=0x3c, .y=0x9c, .sp=0x46, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xb7fa, .value=0xad}, {.addr=0xb7fb, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xb7fa, .value=0xad, .type=IO_READ},
        {.addr=0xb7fb, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_036E) {
    const struct CPU_State initial_cpu = {.pc=0x37ec, .a=0xd1, .x=0xb1, .y=0x01, .sp=0x57, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x37ec, .value=0xad}, {.addr=0x37ed, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x37ee, .a=0xd1, .x=0xb1, .y=0x01, .sp=0x57, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x37ec, .value=0xad}, {.addr=0x37ed, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x37ec, .value=0xad, .type=IO_READ},
        {.addr=0x37ed, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_036F) {
    const struct CPU_State initial_cpu = {.pc=0x53e5, .a=0x02, .x=0xcc, .y=0x80, .sp=0x13, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x53e5, .value=0xad}, {.addr=0x53e6, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x53e7, .a=0x02, .x=0xcc, .y=0x80, .sp=0x13, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x53e5, .value=0xad}, {.addr=0x53e6, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x53e5, .value=0xad, .type=IO_READ},
        {.addr=0x53e6, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0370) {
    const struct CPU_State initial_cpu = {.pc=0x6dea, .a=0x3d, .x=0x20, .y=0x2e, .sp=0xa1, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x6dea, .value=0xad}, {.addr=0x6deb, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x6dec, .a=0x3d, .x=0x20, .y=0x2e, .sp=0xa1, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x6dea, .value=0xad}, {.addr=0x6deb, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x6dea, .value=0xad, .type=IO_READ},
        {.addr=0x6deb, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0371) {
    const struct CPU_State initial_cpu = {.pc=0xf055, .a=0x68, .x=0x85, .y=0xad, .sp=0x92, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xf055, .value=0xad}, {.addr=0xf056, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xf057, .a=0x68, .x=0x85, .y=0xad, .sp=0x92, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xf055, .value=0xad}, {.addr=0xf056, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xf055, .value=0xad, .type=IO_READ},
        {.addr=0xf056, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0372) {
    const struct CPU_State initial_cpu = {.pc=0x1cdc, .a=0xbe, .x=0x25, .y=0x31, .sp=0x3c, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x1cdc, .value=0xad}, {.addr=0x1cdd, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x1cde, .a=0xbe, .x=0x25, .y=0x31, .sp=0x3c, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x1cdc, .value=0xad}, {.addr=0x1cdd, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x1cdc, .value=0xad, .type=IO_READ},
        {.addr=0x1cdd, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0373) {
    const struct CPU_State initial_cpu = {.pc=0x851e, .a=0xc5, .x=0x34, .y=0xd0, .sp=0x29, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x851e, .value=0xad}, {.addr=0x851f, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x8520, .a=0xc5, .x=0x34, .y=0xd0, .sp=0x29, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x851e, .value=0xad}, {.addr=0x851f, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x851e, .value=0xad, .type=IO_READ},
        {.addr=0x851f, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0374) {
    const struct CPU_State initial_cpu = {.pc=0x69ac, .a=0xb7, .x=0x26, .y=0x08, .sp=0x0e, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x69ac, .value=0xad}, {.addr=0x69ad, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x69ae, .a=0xb7, .x=0x26, .y=0x08, .sp=0x0e, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x69ac, .value=0xad}, {.addr=0x69ad, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x69ac, .value=0xad, .type=IO_READ},
        {.addr=0x69ad, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0375) {
    const struct CPU_State initial_cpu = {.pc=0x04ac, .a=0x00, .x=0x2b, .y=0x49, .sp=0x96, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x04ac, .value=0xad}, {.addr=0x04ad, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x04ae, .a=0x00, .x=0x2b, .y=0x49, .sp=0x96, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x04ac, .value=0xad}, {.addr=0x04ad, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x04ac, .value=0xad, .type=IO_READ},
        {.addr=0x04ad, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0376) {
    const struct CPU_State initial_cpu = {.pc=0x8584, .a=0x2d, .x=0x30, .y=0xff, .sp=0x30, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x8584, .value=0xad}, {.addr=0x8585, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x8586, .a=0x2d, .x=0x30, .y=0xff, .sp=0x30, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8584, .value=0xad}, {.addr=0x8585, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x8584, .value=0xad, .type=IO_READ},
        {.addr=0x8585, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0377) {
    const struct CPU_State initial_cpu = {.pc=0xdafb, .a=0xc2, .x=0x60, .y=0x58, .sp=0x68, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xdafb, .value=0xad}, {.addr=0xdafc, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xdafd, .a=0xc2, .x=0x60, .y=0x58, .sp=0x68, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xdafb, .value=0xad}, {.addr=0xdafc, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xdafb, .value=0xad, .type=IO_READ},
        {.addr=0xdafc, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0378) {
    const struct CPU_State initial_cpu = {.pc=0xdeae, .a=0x85, .x=0x96, .y=0xb6, .sp=0x88, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xdeae, .value=0xad}, {.addr=0xdeaf, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdeb0, .a=0x85, .x=0x96, .y=0xb6, .sp=0x88, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xdeae, .value=0xad}, {.addr=0xdeaf, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdeae, .value=0xad, .type=IO_READ},
        {.addr=0xdeaf, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0379) {
    const struct CPU_State initial_cpu = {.pc=0x4661, .a=0x69, .x=0xfb, .y=0x32, .sp=0xc4, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x4661, .value=0xad}, {.addr=0x4662, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x4663, .a=0x69, .x=0xfb, .y=0x32, .sp=0xc4, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x4661, .value=0xad}, {.addr=0x4662, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x4661, .value=0xad, .type=IO_READ},
        {.addr=0x4662, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_037A) {
    const struct CPU_State initial_cpu = {.pc=0x53bb, .a=0x62, .x=0x7c, .y=0x6d, .sp=0xf5, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x53bb, .value=0xad}, {.addr=0x53bc, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x53bd, .a=0x62, .x=0x7c, .y=0x6d, .sp=0xf5, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x53bb, .value=0xad}, {.addr=0x53bc, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x53bb, .value=0xad, .type=IO_READ},
        {.addr=0x53bc, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_037B) {
    const struct CPU_State initial_cpu = {.pc=0xe472, .a=0xec, .x=0x79, .y=0xef, .sp=0xa7, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xe472, .value=0xad}, {.addr=0xe473, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xe474, .a=0xec, .x=0x79, .y=0xef, .sp=0xa7, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xe472, .value=0xad}, {.addr=0xe473, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xe472, .value=0xad, .type=IO_READ},
        {.addr=0xe473, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_037C) {
    const struct CPU_State initial_cpu = {.pc=0xdf58, .a=0x3b, .x=0xc1, .y=0xfd, .sp=0xc2, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xdf58, .value=0xad}, {.addr=0xdf59, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xdf5a, .a=0x3b, .x=0xc1, .y=0xfd, .sp=0xc2, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xdf58, .value=0xad}, {.addr=0xdf59, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xdf58, .value=0xad, .type=IO_READ},
        {.addr=0xdf59, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_037D) {
    const struct CPU_State initial_cpu = {.pc=0x9bbc, .a=0x45, .x=0x8c, .y=0xd3, .sp=0x79, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x9bbc, .value=0xad}, {.addr=0x9bbd, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x9bbe, .a=0x45, .x=0x8c, .y=0xd3, .sp=0x79, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x9bbc, .value=0xad}, {.addr=0x9bbd, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x9bbc, .value=0xad, .type=IO_READ},
        {.addr=0x9bbd, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_037E) {
    const struct CPU_State initial_cpu = {.pc=0xa75b, .a=0x3b, .x=0x75, .y=0xea, .sp=0x73, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xa75b, .value=0xad}, {.addr=0xa75c, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xa75d, .a=0x3b, .x=0x75, .y=0xea, .sp=0x73, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xa75b, .value=0xad}, {.addr=0xa75c, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xa75b, .value=0xad, .type=IO_READ},
        {.addr=0xa75c, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_037F) {
    const struct CPU_State initial_cpu = {.pc=0xd744, .a=0xcc, .x=0x6a, .y=0xf8, .sp=0xee, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xd744, .value=0xad}, {.addr=0xd745, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xd746, .a=0xcc, .x=0x6a, .y=0xf8, .sp=0xee, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xd744, .value=0xad}, {.addr=0xd745, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xd744, .value=0xad, .type=IO_READ},
        {.addr=0xd745, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0380) {
    const struct CPU_State initial_cpu = {.pc=0x994b, .a=0xf2, .x=0x27, .y=0x7d, .sp=0x63, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x994b, .value=0xad}, {.addr=0x994c, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x994d, .a=0xf2, .x=0x27, .y=0x7d, .sp=0x63, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x994b, .value=0xad}, {.addr=0x994c, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x994b, .value=0xad, .type=IO_READ},
        {.addr=0x994c, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0381) {
    const struct CPU_State initial_cpu = {.pc=0x6650, .a=0x9b, .x=0x49, .y=0xc6, .sp=0x8e, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x6650, .value=0xad}, {.addr=0x6651, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x6652, .a=0x9b, .x=0x49, .y=0xc6, .sp=0x8e, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x6650, .value=0xad}, {.addr=0x6651, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x6650, .value=0xad, .type=IO_READ},
        {.addr=0x6651, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0382) {
    const struct CPU_State initial_cpu = {.pc=0x58ad, .a=0xf4, .x=0xf5, .y=0xf1, .sp=0x1a, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x58ad, .value=0xad}, {.addr=0x58ae, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x58af, .a=0xf4, .x=0xf5, .y=0xf1, .sp=0x1a, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x58ad, .value=0xad}, {.addr=0x58ae, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x58ad, .value=0xad, .type=IO_READ},
        {.addr=0x58ae, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0383) {
    const struct CPU_State initial_cpu = {.pc=0xfce4, .a=0xa0, .x=0xc1, .y=0x16, .sp=0x9f, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xfce4, .value=0xad}, {.addr=0xfce5, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xfce6, .a=0xa0, .x=0xc1, .y=0x16, .sp=0x9f, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xfce4, .value=0xad}, {.addr=0xfce5, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xfce4, .value=0xad, .type=IO_READ},
        {.addr=0xfce5, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0384) {
    const struct CPU_State initial_cpu = {.pc=0x8b0a, .a=0xd8, .x=0x01, .y=0xb4, .sp=0x29, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x8b0a, .value=0xad}, {.addr=0x8b0b, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x8b0c, .a=0xd8, .x=0x01, .y=0xb4, .sp=0x29, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8b0a, .value=0xad}, {.addr=0x8b0b, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x8b0a, .value=0xad, .type=IO_READ},
        {.addr=0x8b0b, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0385) {
    const struct CPU_State initial_cpu = {.pc=0x4c4f, .a=0xa8, .x=0x2c, .y=0x13, .sp=0x0b, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x4c4f, .value=0xad}, {.addr=0x4c50, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x4c51, .a=0xa8, .x=0x2c, .y=0x13, .sp=0x0b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x4c4f, .value=0xad}, {.addr=0x4c50, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x4c4f, .value=0xad, .type=IO_READ},
        {.addr=0x4c50, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0386) {
    const struct CPU_State initial_cpu = {.pc=0xd048, .a=0x1c, .x=0x4b, .y=0x68, .sp=0x18, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xd048, .value=0xad}, {.addr=0xd049, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xd04a, .a=0x1c, .x=0x4b, .y=0x68, .sp=0x18, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd048, .value=0xad}, {.addr=0xd049, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xd048, .value=0xad, .type=IO_READ},
        {.addr=0xd049, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0387) {
    const struct CPU_State initial_cpu = {.pc=0x14e0, .a=0x1b, .x=0x50, .y=0xce, .sp=0x18, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x14e0, .value=0xad}, {.addr=0x14e1, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x14e2, .a=0x1b, .x=0x50, .y=0xce, .sp=0x18, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x14e0, .value=0xad}, {.addr=0x14e1, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x14e0, .value=0xad, .type=IO_READ},
        {.addr=0x14e1, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0388) {
    const struct CPU_State initial_cpu = {.pc=0x8d44, .a=0x35, .x=0x71, .y=0xf5, .sp=0xb3, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x8d44, .value=0xad}, {.addr=0x8d45, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8d46, .a=0x35, .x=0x71, .y=0xf5, .sp=0xb3, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x8d44, .value=0xad}, {.addr=0x8d45, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8d44, .value=0xad, .type=IO_READ},
        {.addr=0x8d45, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0389) {
    const struct CPU_State initial_cpu = {.pc=0x6219, .a=0x6a, .x=0x00, .y=0xa6, .sp=0x24, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x6219, .value=0xad}, {.addr=0x621a, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x621b, .a=0x6a, .x=0x00, .y=0xa6, .sp=0x24, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x6219, .value=0xad}, {.addr=0x621a, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x6219, .value=0xad, .type=IO_READ},
        {.addr=0x621a, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_038A) {
    const struct CPU_State initial_cpu = {.pc=0x8d18, .a=0x8b, .x=0xd8, .y=0xc6, .sp=0x23, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x8d18, .value=0xad}, {.addr=0x8d19, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x8d1a, .a=0x8b, .x=0xd8, .y=0xc6, .sp=0x23, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x8d18, .value=0xad}, {.addr=0x8d19, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x8d18, .value=0xad, .type=IO_READ},
        {.addr=0x8d19, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_038B) {
    const struct CPU_State initial_cpu = {.pc=0x4136, .a=0x44, .x=0xc3, .y=0x70, .sp=0x3c, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x4136, .value=0xad}, {.addr=0x4137, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x4138, .a=0x44, .x=0xc3, .y=0x70, .sp=0x3c, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x4136, .value=0xad}, {.addr=0x4137, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x4136, .value=0xad, .type=IO_READ},
        {.addr=0x4137, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_038C) {
    const struct CPU_State initial_cpu = {.pc=0x05f2, .a=0x10, .x=0x42, .y=0x9c, .sp=0xb5, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x05f2, .value=0xad}, {.addr=0x05f3, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x05f4, .a=0x10, .x=0x42, .y=0x9c, .sp=0xb5, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x05f2, .value=0xad}, {.addr=0x05f3, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x05f2, .value=0xad, .type=IO_READ},
        {.addr=0x05f3, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_038D) {
    const struct CPU_State initial_cpu = {.pc=0x545e, .a=0x19, .x=0x03, .y=0xad, .sp=0xf0, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x545e, .value=0xad}, {.addr=0x545f, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x5460, .a=0x19, .x=0x03, .y=0xad, .sp=0xf0, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x545e, .value=0xad}, {.addr=0x545f, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x545e, .value=0xad, .type=IO_READ},
        {.addr=0x545f, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_038E) {
    const struct CPU_State initial_cpu = {.pc=0x4b2d, .a=0xd9, .x=0x35, .y=0x5d, .sp=0x69, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x4b2d, .value=0xad}, {.addr=0x4b2e, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x4b2f, .a=0xd9, .x=0x35, .y=0x5d, .sp=0x69, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x4b2d, .value=0xad}, {.addr=0x4b2e, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x4b2d, .value=0xad, .type=IO_READ},
        {.addr=0x4b2e, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_038F) {
    const struct CPU_State initial_cpu = {.pc=0x3ae0, .a=0x5e, .x=0x19, .y=0x66, .sp=0x0e, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x3ae0, .value=0xad}, {.addr=0x3ae1, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x3ae2, .a=0x5e, .x=0x19, .y=0x66, .sp=0x0e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3ae0, .value=0xad}, {.addr=0x3ae1, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x3ae0, .value=0xad, .type=IO_READ},
        {.addr=0x3ae1, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0390) {
    const struct CPU_State initial_cpu = {.pc=0x18e9, .a=0x31, .x=0x18, .y=0x7e, .sp=0x4d, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x18e9, .value=0xad}, {.addr=0x18ea, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x18eb, .a=0x31, .x=0x18, .y=0x7e, .sp=0x4d, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x18e9, .value=0xad}, {.addr=0x18ea, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x18e9, .value=0xad, .type=IO_READ},
        {.addr=0x18ea, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0391) {
    const struct CPU_State initial_cpu = {.pc=0xd309, .a=0x76, .x=0xce, .y=0x41, .sp=0xe9, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xd309, .value=0xad}, {.addr=0xd30a, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xd30b, .a=0x76, .x=0xce, .y=0x41, .sp=0xe9, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xd309, .value=0xad}, {.addr=0xd30a, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xd309, .value=0xad, .type=IO_READ},
        {.addr=0xd30a, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0392) {
    const struct CPU_State initial_cpu = {.pc=0x408e, .a=0xce, .x=0xef, .y=0x1a, .sp=0x1f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x408e, .value=0xad}, {.addr=0x408f, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x4090, .a=0xce, .x=0xef, .y=0x1a, .sp=0x1f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x408e, .value=0xad}, {.addr=0x408f, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x408e, .value=0xad, .type=IO_READ},
        {.addr=0x408f, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0393) {
    const struct CPU_State initial_cpu = {.pc=0xd4b5, .a=0x8e, .x=0xca, .y=0xab, .sp=0x10, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xd4b5, .value=0xad}, {.addr=0xd4b6, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xd4b7, .a=0x8e, .x=0xca, .y=0xab, .sp=0x10, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xd4b5, .value=0xad}, {.addr=0xd4b6, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xd4b5, .value=0xad, .type=IO_READ},
        {.addr=0xd4b6, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0394) {
    const struct CPU_State initial_cpu = {.pc=0xcf7a, .a=0x96, .x=0xaf, .y=0xd4, .sp=0x03, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xcf7a, .value=0xad}, {.addr=0xcf7b, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xcf7c, .a=0x96, .x=0xaf, .y=0xd4, .sp=0x03, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xcf7a, .value=0xad}, {.addr=0xcf7b, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xcf7a, .value=0xad, .type=IO_READ},
        {.addr=0xcf7b, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0395) {
    const struct CPU_State initial_cpu = {.pc=0xdefc, .a=0xee, .x=0x7d, .y=0x95, .sp=0x51, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xdefc, .value=0xad}, {.addr=0xdefd, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xdefe, .a=0xee, .x=0x7d, .y=0x95, .sp=0x51, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xdefc, .value=0xad}, {.addr=0xdefd, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xdefc, .value=0xad, .type=IO_READ},
        {.addr=0xdefd, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0396) {
    const struct CPU_State initial_cpu = {.pc=0x3a34, .a=0xb2, .x=0x69, .y=0xc8, .sp=0xbf, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x3a34, .value=0xad}, {.addr=0x3a35, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3a36, .a=0xb2, .x=0x69, .y=0xc8, .sp=0xbf, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x3a34, .value=0xad}, {.addr=0x3a35, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3a34, .value=0xad, .type=IO_READ},
        {.addr=0x3a35, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0397) {
    const struct CPU_State initial_cpu = {.pc=0x46fc, .a=0x41, .x=0x66, .y=0xec, .sp=0x5a, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x46fc, .value=0xad}, {.addr=0x46fd, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x46fe, .a=0x41, .x=0x66, .y=0xec, .sp=0x5a, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x46fc, .value=0xad}, {.addr=0x46fd, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x46fc, .value=0xad, .type=IO_READ},
        {.addr=0x46fd, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0398) {
    const struct CPU_State initial_cpu = {.pc=0x9415, .a=0x26, .x=0x92, .y=0x21, .sp=0x31, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x9415, .value=0xad}, {.addr=0x9416, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x9417, .a=0x26, .x=0x92, .y=0x21, .sp=0x31, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x9415, .value=0xad}, {.addr=0x9416, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x9415, .value=0xad, .type=IO_READ},
        {.addr=0x9416, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_0399) {
    const struct CPU_State initial_cpu = {.pc=0x5b83, .a=0xdb, .x=0x3f, .y=0xd8, .sp=0x63, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x5b83, .value=0xad}, {.addr=0x5b84, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x5b85, .a=0xdb, .x=0x3f, .y=0xd8, .sp=0x63, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x5b83, .value=0xad}, {.addr=0x5b84, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x5b83, .value=0xad, .type=IO_READ},
        {.addr=0x5b84, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_039A) {
    const struct CPU_State initial_cpu = {.pc=0xa522, .a=0xe0, .x=0x9b, .y=0x40, .sp=0xbb, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xa522, .value=0xad}, {.addr=0xa523, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xa524, .a=0xe0, .x=0x9b, .y=0x40, .sp=0xbb, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xa522, .value=0xad}, {.addr=0xa523, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xa522, .value=0xad, .type=IO_READ},
        {.addr=0xa523, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_039B) {
    const struct CPU_State initial_cpu = {.pc=0x01d4, .a=0xf7, .x=0x8c, .y=0x28, .sp=0x14, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xad}, {.addr=0x01d5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x01d6, .a=0xf7, .x=0x8c, .y=0x28, .sp=0x14, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xad}, {.addr=0x01d5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x01d4, .value=0xad, .type=IO_READ},
        {.addr=0x01d5, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_039C) {
    const struct CPU_State initial_cpu = {.pc=0x317e, .a=0x34, .x=0x00, .y=0x26, .sp=0x87, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x317e, .value=0xad}, {.addr=0x317f, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x3180, .a=0x34, .x=0x00, .y=0x26, .sp=0x87, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x317e, .value=0xad}, {.addr=0x317f, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x317e, .value=0xad, .type=IO_READ},
        {.addr=0x317f, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_039D) {
    const struct CPU_State initial_cpu = {.pc=0xc594, .a=0x94, .x=0x84, .y=0x07, .sp=0x27, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xc594, .value=0xad}, {.addr=0xc595, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xc596, .a=0x94, .x=0x84, .y=0x07, .sp=0x27, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xc594, .value=0xad}, {.addr=0xc595, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xc594, .value=0xad, .type=IO_READ},
        {.addr=0xc595, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_039E) {
    const struct CPU_State initial_cpu = {.pc=0xd5f4, .a=0xd7, .x=0x2b, .y=0x06, .sp=0xba, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xd5f4, .value=0xad}, {.addr=0xd5f5, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xd5f6, .a=0xd7, .x=0x2b, .y=0x06, .sp=0xba, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xd5f4, .value=0xad}, {.addr=0xd5f5, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xd5f4, .value=0xad, .type=IO_READ},
        {.addr=0xd5f5, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_039F) {
    const struct CPU_State initial_cpu = {.pc=0xd18e, .a=0x37, .x=0x64, .y=0xc8, .sp=0xbd, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xd18e, .value=0xad}, {.addr=0xd18f, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xd190, .a=0x37, .x=0x64, .y=0xc8, .sp=0xbd, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xd18e, .value=0xad}, {.addr=0xd18f, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xd18e, .value=0xad, .type=IO_READ},
        {.addr=0xd18f, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x9956, .a=0x31, .x=0xe7, .y=0x9b, .sp=0xb7, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x9956, .value=0xad}, {.addr=0x9957, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x9958, .a=0x31, .x=0xe7, .y=0x9b, .sp=0xb7, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9956, .value=0xad}, {.addr=0x9957, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x9956, .value=0xad, .type=IO_READ},
        {.addr=0x9957, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xaaaf, .a=0x0c, .x=0x5e, .y=0x31, .sp=0x10, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xaaaf, .value=0xad}, {.addr=0xaab0, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xaab1, .a=0x0c, .x=0x5e, .y=0x31, .sp=0x10, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xaaaf, .value=0xad}, {.addr=0xaab0, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xaaaf, .value=0xad, .type=IO_READ},
        {.addr=0xaab0, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xdb72, .a=0xd3, .x=0xc2, .y=0x6d, .sp=0x63, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xdb72, .value=0xad}, {.addr=0xdb73, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xdb74, .a=0xd3, .x=0xc2, .y=0x6d, .sp=0x63, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xdb72, .value=0xad}, {.addr=0xdb73, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xdb72, .value=0xad, .type=IO_READ},
        {.addr=0xdb73, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x158c, .a=0xbe, .x=0xdf, .y=0x8a, .sp=0x3c, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x158c, .value=0xad}, {.addr=0x158d, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x158e, .a=0xbe, .x=0xdf, .y=0x8a, .sp=0x3c, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x158c, .value=0xad}, {.addr=0x158d, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x158c, .value=0xad, .type=IO_READ},
        {.addr=0x158d, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x79cf, .a=0x0b, .x=0x8f, .y=0x2c, .sp=0x71, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x79cf, .value=0xad}, {.addr=0x79d0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x79d1, .a=0x0b, .x=0x8f, .y=0x2c, .sp=0x71, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x79cf, .value=0xad}, {.addr=0x79d0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x79cf, .value=0xad, .type=IO_READ},
        {.addr=0x79d0, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xaac8, .a=0xd0, .x=0xcd, .y=0x3a, .sp=0xd1, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xaac8, .value=0xad}, {.addr=0xaac9, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xaaca, .a=0xd0, .x=0xcd, .y=0x3a, .sp=0xd1, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xaac8, .value=0xad}, {.addr=0xaac9, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xaac8, .value=0xad, .type=IO_READ},
        {.addr=0xaac9, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x0dd6, .a=0xf0, .x=0xc5, .y=0x10, .sp=0x21, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0dd6, .value=0xad}, {.addr=0x0dd7, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x0dd8, .a=0xf0, .x=0xc5, .y=0x10, .sp=0x21, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0dd6, .value=0xad}, {.addr=0x0dd7, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x0dd6, .value=0xad, .type=IO_READ},
        {.addr=0x0dd7, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x7deb, .a=0x24, .x=0x09, .y=0x11, .sp=0x64, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x7deb, .value=0xad}, {.addr=0x7dec, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x7ded, .a=0x24, .x=0x09, .y=0x11, .sp=0x64, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x7deb, .value=0xad}, {.addr=0x7dec, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x7deb, .value=0xad, .type=IO_READ},
        {.addr=0x7dec, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x4cd7, .a=0x78, .x=0xda, .y=0xd8, .sp=0x14, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x4cd7, .value=0xad}, {.addr=0x4cd8, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x4cd9, .a=0x78, .x=0xda, .y=0xd8, .sp=0x14, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x4cd7, .value=0xad}, {.addr=0x4cd8, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x4cd7, .value=0xad, .type=IO_READ},
        {.addr=0x4cd8, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x59b3, .a=0x6e, .x=0x78, .y=0xeb, .sp=0xb4, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x59b3, .value=0xad}, {.addr=0x59b4, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x59b5, .a=0x6e, .x=0x78, .y=0xeb, .sp=0xb4, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x59b3, .value=0xad}, {.addr=0x59b4, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x59b3, .value=0xad, .type=IO_READ},
        {.addr=0x59b4, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xe7c4, .a=0x6e, .x=0xe8, .y=0x4f, .sp=0xc1, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xe7c4, .value=0xad}, {.addr=0xe7c5, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xe7c6, .a=0x6e, .x=0xe8, .y=0x4f, .sp=0xc1, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xe7c4, .value=0xad}, {.addr=0xe7c5, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xe7c4, .value=0xad, .type=IO_READ},
        {.addr=0xe7c5, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x98f9, .a=0x9b, .x=0x0b, .y=0xe9, .sp=0x74, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x98f9, .value=0xad}, {.addr=0x98fa, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x98fb, .a=0x9b, .x=0x0b, .y=0xe9, .sp=0x74, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x98f9, .value=0xad}, {.addr=0x98fa, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x98f9, .value=0xad, .type=IO_READ},
        {.addr=0x98fa, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xefa2, .a=0xb5, .x=0x22, .y=0x3a, .sp=0xd3, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xefa2, .value=0xad}, {.addr=0xefa3, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xefa4, .a=0xb5, .x=0x22, .y=0x3a, .sp=0xd3, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xefa2, .value=0xad}, {.addr=0xefa3, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xefa2, .value=0xad, .type=IO_READ},
        {.addr=0xefa3, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xe2a5, .a=0xdb, .x=0x60, .y=0x33, .sp=0x0c, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xe2a5, .value=0xad}, {.addr=0xe2a6, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xe2a7, .a=0xdb, .x=0x60, .y=0x33, .sp=0x0c, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xe2a5, .value=0xad}, {.addr=0xe2a6, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xe2a5, .value=0xad, .type=IO_READ},
        {.addr=0xe2a6, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x4689, .a=0x5b, .x=0xcc, .y=0x97, .sp=0x3e, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x4689, .value=0xad}, {.addr=0x468a, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x468b, .a=0x5b, .x=0xcc, .y=0x97, .sp=0x3e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4689, .value=0xad}, {.addr=0x468a, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x4689, .value=0xad, .type=IO_READ},
        {.addr=0x468a, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x8fa0, .a=0x85, .x=0x0a, .y=0xfa, .sp=0xa0, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x8fa0, .value=0xad}, {.addr=0x8fa1, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x8fa2, .a=0x85, .x=0x0a, .y=0xfa, .sp=0xa0, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x8fa0, .value=0xad}, {.addr=0x8fa1, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x8fa0, .value=0xad, .type=IO_READ},
        {.addr=0x8fa1, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x92b4, .a=0x93, .x=0x3f, .y=0x21, .sp=0x02, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x92b4, .value=0xad}, {.addr=0x92b5, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x92b6, .a=0x93, .x=0x3f, .y=0x21, .sp=0x02, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x92b4, .value=0xad}, {.addr=0x92b5, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x92b4, .value=0xad, .type=IO_READ},
        {.addr=0x92b5, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x7913, .a=0x31, .x=0xf4, .y=0xd5, .sp=0x37, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x7913, .value=0xad}, {.addr=0x7914, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x7915, .a=0x31, .x=0xf4, .y=0xd5, .sp=0x37, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7913, .value=0xad}, {.addr=0x7914, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x7913, .value=0xad, .type=IO_READ},
        {.addr=0x7914, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xa632, .a=0xbb, .x=0xdf, .y=0xdd, .sp=0x0b, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xa632, .value=0xad}, {.addr=0xa633, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xa634, .a=0xbb, .x=0xdf, .y=0xdd, .sp=0x0b, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xa632, .value=0xad}, {.addr=0xa633, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xa632, .value=0xad, .type=IO_READ},
        {.addr=0xa633, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x6a7a, .a=0xd8, .x=0x2a, .y=0x4f, .sp=0x9b, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x6a7a, .value=0xad}, {.addr=0x6a7b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6a7c, .a=0xd8, .x=0x2a, .y=0x4f, .sp=0x9b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x6a7a, .value=0xad}, {.addr=0x6a7b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6a7a, .value=0xad, .type=IO_READ},
        {.addr=0x6a7b, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x2b0d, .a=0xbb, .x=0x7e, .y=0xfd, .sp=0x7a, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x2b0d, .value=0xad}, {.addr=0x2b0e, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x2b0f, .a=0xbb, .x=0x7e, .y=0xfd, .sp=0x7a, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x2b0d, .value=0xad}, {.addr=0x2b0e, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x2b0d, .value=0xad, .type=IO_READ},
        {.addr=0x2b0e, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xf215, .a=0x8b, .x=0x14, .y=0x64, .sp=0x24, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xf215, .value=0xad}, {.addr=0xf216, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xf217, .a=0x8b, .x=0x14, .y=0x64, .sp=0x24, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xf215, .value=0xad}, {.addr=0xf216, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xf215, .value=0xad, .type=IO_READ},
        {.addr=0xf216, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x130c, .a=0x8b, .x=0x4d, .y=0xc0, .sp=0x3a, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x130c, .value=0xad}, {.addr=0x130d, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x130e, .a=0x8b, .x=0x4d, .y=0xc0, .sp=0x3a, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x130c, .value=0xad}, {.addr=0x130d, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x130c, .value=0xad, .type=IO_READ},
        {.addr=0x130d, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xc400, .a=0x3b, .x=0xd3, .y=0x94, .sp=0x4e, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xc400, .value=0xad}, {.addr=0xc401, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xc402, .a=0x3b, .x=0xd3, .y=0x94, .sp=0x4e, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xc400, .value=0xad}, {.addr=0xc401, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xc400, .value=0xad, .type=IO_READ},
        {.addr=0xc401, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x2b0f, .a=0x15, .x=0xd8, .y=0xe0, .sp=0x77, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x2b0f, .value=0xad}, {.addr=0x2b10, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x2b11, .a=0x15, .x=0xd8, .y=0xe0, .sp=0x77, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x2b0f, .value=0xad}, {.addr=0x2b10, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x2b0f, .value=0xad, .type=IO_READ},
        {.addr=0x2b10, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x87dd, .a=0x32, .x=0xba, .y=0xbd, .sp=0xac, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x87dd, .value=0xad}, {.addr=0x87de, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x87df, .a=0x32, .x=0xba, .y=0xbd, .sp=0xac, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x87dd, .value=0xad}, {.addr=0x87de, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x87dd, .value=0xad, .type=IO_READ},
        {.addr=0x87de, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xc9e7, .a=0x50, .x=0x50, .y=0xd9, .sp=0xb4, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xc9e7, .value=0xad}, {.addr=0xc9e8, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xc9e9, .a=0x50, .x=0x50, .y=0xd9, .sp=0xb4, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xc9e7, .value=0xad}, {.addr=0xc9e8, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xc9e7, .value=0xad, .type=IO_READ},
        {.addr=0xc9e8, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x51ce, .a=0xaf, .x=0xf7, .y=0x18, .sp=0xd6, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x51ce, .value=0xad}, {.addr=0x51cf, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x51d0, .a=0xaf, .x=0xf7, .y=0x18, .sp=0xd6, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x51ce, .value=0xad}, {.addr=0x51cf, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x51ce, .value=0xad, .type=IO_READ},
        {.addr=0x51cf, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x8aaf, .a=0xc9, .x=0x84, .y=0x5a, .sp=0x51, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x8aaf, .value=0xad}, {.addr=0x8ab0, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x8ab1, .a=0xc9, .x=0x84, .y=0x5a, .sp=0x51, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x8aaf, .value=0xad}, {.addr=0x8ab0, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x8aaf, .value=0xad, .type=IO_READ},
        {.addr=0x8ab0, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xf50a, .a=0x8d, .x=0xf7, .y=0xa4, .sp=0x53, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xf50a, .value=0xad}, {.addr=0xf50b, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xf50c, .a=0x8d, .x=0xf7, .y=0xa4, .sp=0x53, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xf50a, .value=0xad}, {.addr=0xf50b, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xf50a, .value=0xad, .type=IO_READ},
        {.addr=0xf50b, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xcf14, .a=0x03, .x=0xa1, .y=0xe0, .sp=0x47, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xcf14, .value=0xad}, {.addr=0xcf15, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xcf16, .a=0x03, .x=0xa1, .y=0xe0, .sp=0x47, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xcf14, .value=0xad}, {.addr=0xcf15, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xcf14, .value=0xad, .type=IO_READ},
        {.addr=0xcf15, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x377f, .a=0x2e, .x=0x9b, .y=0xc1, .sp=0x0a, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x377f, .value=0xad}, {.addr=0x3780, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x3781, .a=0x2e, .x=0x9b, .y=0xc1, .sp=0x0a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x377f, .value=0xad}, {.addr=0x3780, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x377f, .value=0xad, .type=IO_READ},
        {.addr=0x3780, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xee3a, .a=0xb5, .x=0xfc, .y=0xbc, .sp=0x30, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xee3a, .value=0xad}, {.addr=0xee3b, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xee3c, .a=0xb5, .x=0xfc, .y=0xbc, .sp=0x30, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xee3a, .value=0xad}, {.addr=0xee3b, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xee3a, .value=0xad, .type=IO_READ},
        {.addr=0xee3b, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xde3e, .a=0xf5, .x=0x27, .y=0x95, .sp=0x69, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xde3e, .value=0xad}, {.addr=0xde3f, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xde40, .a=0xf5, .x=0x27, .y=0x95, .sp=0x69, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xde3e, .value=0xad}, {.addr=0xde3f, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xde3e, .value=0xad, .type=IO_READ},
        {.addr=0xde3f, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xb69e, .a=0xc7, .x=0x75, .y=0x97, .sp=0x45, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xb69e, .value=0xad}, {.addr=0xb69f, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xb6a0, .a=0xc7, .x=0x75, .y=0x97, .sp=0x45, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xb69e, .value=0xad}, {.addr=0xb69f, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xb69e, .value=0xad, .type=IO_READ},
        {.addr=0xb69f, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x1ff4, .a=0x34, .x=0xb4, .y=0xcc, .sp=0x7d, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x1ff4, .value=0xad}, {.addr=0x1ff5, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x1ff6, .a=0x34, .x=0xb4, .y=0xcc, .sp=0x7d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x1ff4, .value=0xad}, {.addr=0x1ff5, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x1ff4, .value=0xad, .type=IO_READ},
        {.addr=0x1ff5, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x3de2, .a=0xdb, .x=0x23, .y=0x7e, .sp=0xd7, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x3de2, .value=0xad}, {.addr=0x3de3, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x3de4, .a=0xdb, .x=0x23, .y=0x7e, .sp=0xd7, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x3de2, .value=0xad}, {.addr=0x3de3, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x3de2, .value=0xad, .type=IO_READ},
        {.addr=0x3de3, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x6e7a, .a=0x28, .x=0x96, .y=0xdb, .sp=0x4d, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x6e7a, .value=0xad}, {.addr=0x6e7b, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x6e7c, .a=0x28, .x=0x96, .y=0xdb, .sp=0x4d, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x6e7a, .value=0xad}, {.addr=0x6e7b, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x6e7a, .value=0xad, .type=IO_READ},
        {.addr=0x6e7b, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x73c6, .a=0x3a, .x=0xd6, .y=0xf2, .sp=0x01, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x73c6, .value=0xad}, {.addr=0x73c7, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x73c8, .a=0x3a, .x=0xd6, .y=0xf2, .sp=0x01, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x73c6, .value=0xad}, {.addr=0x73c7, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x73c6, .value=0xad, .type=IO_READ},
        {.addr=0x73c7, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xf78d, .a=0x45, .x=0xac, .y=0x7c, .sp=0xd2, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xf78d, .value=0xad}, {.addr=0xf78e, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xf78f, .a=0x45, .x=0xac, .y=0x7c, .sp=0xd2, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xf78d, .value=0xad}, {.addr=0xf78e, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xf78d, .value=0xad, .type=IO_READ},
        {.addr=0xf78e, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x952b, .a=0xfd, .x=0xbc, .y=0x93, .sp=0x2c, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x952b, .value=0xad}, {.addr=0x952c, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x952d, .a=0xfd, .x=0xbc, .y=0x93, .sp=0x2c, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x952b, .value=0xad}, {.addr=0x952c, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x952b, .value=0xad, .type=IO_READ},
        {.addr=0x952c, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x9f44, .a=0x18, .x=0x9f, .y=0x93, .sp=0x7f, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x9f44, .value=0xad}, {.addr=0x9f45, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x9f46, .a=0x18, .x=0x9f, .y=0x93, .sp=0x7f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x9f44, .value=0xad}, {.addr=0x9f45, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x9f44, .value=0xad, .type=IO_READ},
        {.addr=0x9f45, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x0e37, .a=0xc0, .x=0xd7, .y=0x2f, .sp=0xf8, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0e37, .value=0xad}, {.addr=0x0e38, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x0e39, .a=0xc0, .x=0xd7, .y=0x2f, .sp=0xf8, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0e37, .value=0xad}, {.addr=0x0e38, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x0e37, .value=0xad, .type=IO_READ},
        {.addr=0x0e38, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x9a9a, .a=0x05, .x=0x26, .y=0x54, .sp=0x07, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x9a9a, .value=0xad}, {.addr=0x9a9b, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x9a9c, .a=0x05, .x=0x26, .y=0x54, .sp=0x07, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x9a9a, .value=0xad}, {.addr=0x9a9b, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x9a9a, .value=0xad, .type=IO_READ},
        {.addr=0x9a9b, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x4ce6, .a=0xff, .x=0x61, .y=0x93, .sp=0x59, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x4ce6, .value=0xad}, {.addr=0x4ce7, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x4ce8, .a=0xff, .x=0x61, .y=0x93, .sp=0x59, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x4ce6, .value=0xad}, {.addr=0x4ce7, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x4ce6, .value=0xad, .type=IO_READ},
        {.addr=0x4ce7, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xd0ad, .a=0xc8, .x=0x84, .y=0x2f, .sp=0x11, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xd0ad, .value=0xad}, {.addr=0xd0ae, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd0af, .a=0xc8, .x=0x84, .y=0x2f, .sp=0x11, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xd0ad, .value=0xad}, {.addr=0xd0ae, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd0ad, .value=0xad, .type=IO_READ},
        {.addr=0xd0ae, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xb79e, .a=0xec, .x=0x5a, .y=0x90, .sp=0xf2, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xb79e, .value=0xad}, {.addr=0xb79f, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xb7a0, .a=0xec, .x=0x5a, .y=0x90, .sp=0xf2, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xb79e, .value=0xad}, {.addr=0xb79f, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xb79e, .value=0xad, .type=IO_READ},
        {.addr=0xb79f, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xb2e5, .a=0x3e, .x=0xc8, .y=0x6f, .sp=0x93, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xb2e5, .value=0xad}, {.addr=0xb2e6, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xb2e7, .a=0x3e, .x=0xc8, .y=0x6f, .sp=0x93, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xb2e5, .value=0xad}, {.addr=0xb2e6, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xb2e5, .value=0xad, .type=IO_READ},
        {.addr=0xb2e6, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x98fa, .a=0x7a, .x=0x4e, .y=0xd2, .sp=0x9b, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x98fa, .value=0xad}, {.addr=0x98fb, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x98fc, .a=0x7a, .x=0x4e, .y=0xd2, .sp=0x9b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x98fa, .value=0xad}, {.addr=0x98fb, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x98fa, .value=0xad, .type=IO_READ},
        {.addr=0x98fb, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x8d69, .a=0x24, .x=0x48, .y=0xc3, .sp=0x3b, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x8d69, .value=0xad}, {.addr=0x8d6a, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x8d6b, .a=0x24, .x=0x48, .y=0xc3, .sp=0x3b, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x8d69, .value=0xad}, {.addr=0x8d6a, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x8d69, .value=0xad, .type=IO_READ},
        {.addr=0x8d6a, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xd50a, .a=0xd5, .x=0xc5, .y=0x57, .sp=0x72, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xd50a, .value=0xad}, {.addr=0xd50b, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xd50c, .a=0xd5, .x=0xc5, .y=0x57, .sp=0x72, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xd50a, .value=0xad}, {.addr=0xd50b, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xd50a, .value=0xad, .type=IO_READ},
        {.addr=0xd50b, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xdee0, .a=0x5a, .x=0x26, .y=0xe8, .sp=0x30, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xdee0, .value=0xad}, {.addr=0xdee1, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xdee2, .a=0x5a, .x=0x26, .y=0xe8, .sp=0x30, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xdee0, .value=0xad}, {.addr=0xdee1, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xdee0, .value=0xad, .type=IO_READ},
        {.addr=0xdee1, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x7435, .a=0xa1, .x=0xa3, .y=0x8b, .sp=0x64, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x7435, .value=0xad}, {.addr=0x7436, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x7437, .a=0xa1, .x=0xa3, .y=0x8b, .sp=0x64, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x7435, .value=0xad}, {.addr=0x7436, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x7435, .value=0xad, .type=IO_READ},
        {.addr=0x7436, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x7d42, .a=0xe3, .x=0x08, .y=0xd1, .sp=0x32, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x7d42, .value=0xad}, {.addr=0x7d43, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x7d44, .a=0xe3, .x=0x08, .y=0xd1, .sp=0x32, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x7d42, .value=0xad}, {.addr=0x7d43, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x7d42, .value=0xad, .type=IO_READ},
        {.addr=0x7d43, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xf54b, .a=0xb4, .x=0x40, .y=0x0c, .sp=0x7d, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xf54b, .value=0xad}, {.addr=0xf54c, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xf54d, .a=0xb4, .x=0x40, .y=0x0c, .sp=0x7d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xf54b, .value=0xad}, {.addr=0xf54c, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xf54b, .value=0xad, .type=IO_READ},
        {.addr=0xf54c, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xf6c7, .a=0x8e, .x=0x76, .y=0x86, .sp=0x3a, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xf6c7, .value=0xad}, {.addr=0xf6c8, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xf6c9, .a=0x8e, .x=0x76, .y=0x86, .sp=0x3a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xf6c7, .value=0xad}, {.addr=0xf6c8, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xf6c7, .value=0xad, .type=IO_READ},
        {.addr=0xf6c8, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xafc0, .a=0x5e, .x=0x0c, .y=0xb0, .sp=0xe9, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xafc0, .value=0xad}, {.addr=0xafc1, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xafc2, .a=0x5e, .x=0x0c, .y=0xb0, .sp=0xe9, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xafc0, .value=0xad}, {.addr=0xafc1, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xafc0, .value=0xad, .type=IO_READ},
        {.addr=0xafc1, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x8df0, .a=0x16, .x=0xa0, .y=0x6f, .sp=0xd5, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x8df0, .value=0xad}, {.addr=0x8df1, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x8df2, .a=0x16, .x=0xa0, .y=0x6f, .sp=0xd5, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x8df0, .value=0xad}, {.addr=0x8df1, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x8df0, .value=0xad, .type=IO_READ},
        {.addr=0x8df1, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x2b8c, .a=0xfe, .x=0xc6, .y=0x64, .sp=0x6a, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x2b8c, .value=0xad}, {.addr=0x2b8d, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x2b8e, .a=0xfe, .x=0xc6, .y=0x64, .sp=0x6a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x2b8c, .value=0xad}, {.addr=0x2b8d, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x2b8c, .value=0xad, .type=IO_READ},
        {.addr=0x2b8d, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xbe50, .a=0x76, .x=0x65, .y=0x17, .sp=0x91, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xbe50, .value=0xad}, {.addr=0xbe51, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xbe52, .a=0x76, .x=0x65, .y=0x17, .sp=0x91, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xbe50, .value=0xad}, {.addr=0xbe51, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xbe50, .value=0xad, .type=IO_READ},
        {.addr=0xbe51, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xb700, .a=0x22, .x=0x7d, .y=0xc8, .sp=0x45, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xb700, .value=0xad}, {.addr=0xb701, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb702, .a=0x22, .x=0x7d, .y=0xc8, .sp=0x45, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xb700, .value=0xad}, {.addr=0xb701, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb700, .value=0xad, .type=IO_READ},
        {.addr=0xb701, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x6529, .a=0x7b, .x=0x24, .y=0x2e, .sp=0x75, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x6529, .value=0xad}, {.addr=0x652a, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x652b, .a=0x7b, .x=0x24, .y=0x2e, .sp=0x75, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x6529, .value=0xad}, {.addr=0x652a, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x6529, .value=0xad, .type=IO_READ},
        {.addr=0x652a, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xdb04, .a=0x87, .x=0x5b, .y=0x5c, .sp=0x8a, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xdb04, .value=0xad}, {.addr=0xdb05, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xdb06, .a=0x87, .x=0x5b, .y=0x5c, .sp=0x8a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xdb04, .value=0xad}, {.addr=0xdb05, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xdb04, .value=0xad, .type=IO_READ},
        {.addr=0xdb05, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x2829, .a=0x3c, .x=0x19, .y=0x57, .sp=0x8a, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x2829, .value=0xad}, {.addr=0x282a, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x282b, .a=0x3c, .x=0x19, .y=0x57, .sp=0x8a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x2829, .value=0xad}, {.addr=0x282a, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x2829, .value=0xad, .type=IO_READ},
        {.addr=0x282a, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x3c25, .a=0xab, .x=0x18, .y=0x24, .sp=0xaa, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x3c25, .value=0xad}, {.addr=0x3c26, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x3c27, .a=0xab, .x=0x18, .y=0x24, .sp=0xaa, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x3c25, .value=0xad}, {.addr=0x3c26, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x3c25, .value=0xad, .type=IO_READ},
        {.addr=0x3c26, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x09b5, .a=0x1b, .x=0x31, .y=0x6b, .sp=0x60, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x09b5, .value=0xad}, {.addr=0x09b6, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x09b7, .a=0x1b, .x=0x31, .y=0x6b, .sp=0x60, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x09b5, .value=0xad}, {.addr=0x09b6, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x09b5, .value=0xad, .type=IO_READ},
        {.addr=0x09b6, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x1a7f, .a=0x81, .x=0xab, .y=0x39, .sp=0xe3, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x1a7f, .value=0xad}, {.addr=0x1a80, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x1a81, .a=0x81, .x=0xab, .y=0x39, .sp=0xe3, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x1a7f, .value=0xad}, {.addr=0x1a80, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x1a7f, .value=0xad, .type=IO_READ},
        {.addr=0x1a80, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x6a52, .a=0xf5, .x=0xbb, .y=0xb5, .sp=0x2a, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x6a52, .value=0xad}, {.addr=0x6a53, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x6a54, .a=0xf5, .x=0xbb, .y=0xb5, .sp=0x2a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x6a52, .value=0xad}, {.addr=0x6a53, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x6a52, .value=0xad, .type=IO_READ},
        {.addr=0x6a53, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xa8c5, .a=0x50, .x=0x96, .y=0x4f, .sp=0xc2, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xa8c5, .value=0xad}, {.addr=0xa8c6, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xa8c7, .a=0x50, .x=0x96, .y=0x4f, .sp=0xc2, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xa8c5, .value=0xad}, {.addr=0xa8c6, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xa8c5, .value=0xad, .type=IO_READ},
        {.addr=0xa8c6, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x4297, .a=0x5e, .x=0xb6, .y=0x57, .sp=0x57, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x4297, .value=0xad}, {.addr=0x4298, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4299, .a=0x5e, .x=0xb6, .y=0x57, .sp=0x57, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x4297, .value=0xad}, {.addr=0x4298, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4297, .value=0xad, .type=IO_READ},
        {.addr=0x4298, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x7509, .a=0xff, .x=0x25, .y=0x2f, .sp=0x03, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x7509, .value=0xad}, {.addr=0x750a, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x750b, .a=0xff, .x=0x25, .y=0x2f, .sp=0x03, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x7509, .value=0xad}, {.addr=0x750a, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x7509, .value=0xad, .type=IO_READ},
        {.addr=0x750a, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AD, _AD_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x2d9c, .a=0x81, .x=0xec, .y=0xfa, .sp=0x65, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x2d9c, .value=0xad}, {.addr=0x2d9d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2d9e, .a=0x81, .x=0xec, .y=0xfa, .sp=0x65, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x2d9c, .value=0xad}, {.addr=0x2d9d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2d9c, .value=0xad, .type=IO_READ},
        {.addr=0x2d9d, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AD 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
