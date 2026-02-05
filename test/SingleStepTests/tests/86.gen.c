#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_86, _86_0000) {
    const struct CPU_State initial_cpu = {.pc=0x5485, .a=0xbf, .x=0xc4, .y=0xdf, .sp=0xd7, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x77}, {.addr=0x5485, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5486, .a=0x37, .x=0xc4, .y=0xdf, .sp=0xd7, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x77}, {.addr=0x5485, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5485, .value=0x86, .type=IO_READ},
        {.addr=0x5486, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0001) {
    const struct CPU_State initial_cpu = {.pc=0x10a0, .a=0x78, .x=0x71, .y=0x5a, .sp=0x70, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x7a}, {.addr=0x10a0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x10a1, .a=0xf2, .x=0x71, .y=0x5a, .sp=0x70, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x7a}, {.addr=0x10a0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x10a0, .value=0x86, .type=IO_READ},
        {.addr=0x10a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0002) {
    const struct CPU_State initial_cpu = {.pc=0x4e70, .a=0x94, .x=0x25, .y=0xd8, .sp=0x5c, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0xf0}, {.addr=0x4e70, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4e71, .a=0x84, .x=0x25, .y=0xd8, .sp=0x5c, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0xf0}, {.addr=0x4e70, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4e70, .value=0x86, .type=IO_READ},
        {.addr=0x4e71, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0003) {
    const struct CPU_State initial_cpu = {.pc=0x301b, .a=0xea, .x=0x88, .y=0xde, .sp=0xcf, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0088, .value=0x87}, {.addr=0x301b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x301c, .a=0x71, .x=0x88, .y=0xde, .sp=0xcf, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0088, .value=0x87}, {.addr=0x301b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x301b, .value=0x86, .type=IO_READ},
        {.addr=0x301c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0088, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0004) {
    const struct CPU_State initial_cpu = {.pc=0x88ce, .a=0x7e, .x=0x74, .y=0xf3, .sp=0x8c, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x40}, {.addr=0x88ce, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x88cf, .a=0xbf, .x=0x74, .y=0xf3, .sp=0x8c, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x40}, {.addr=0x88ce, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x88ce, .value=0x86, .type=IO_READ},
        {.addr=0x88cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0005) {
    const struct CPU_State initial_cpu = {.pc=0x57e2, .a=0x0d, .x=0x31, .y=0x6d, .sp=0x69, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x50}, {.addr=0x57e2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x57e3, .a=0x5d, .x=0x31, .y=0x6d, .sp=0x69, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x50}, {.addr=0x57e2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x57e2, .value=0x86, .type=IO_READ},
        {.addr=0x57e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0006) {
    const struct CPU_State initial_cpu = {.pc=0x06ae, .a=0xa4, .x=0x04, .y=0x09, .sp=0x10, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0004, .value=0x08}, {.addr=0x06ae, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x06af, .a=0xac, .x=0x04, .y=0x09, .sp=0x10, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0004, .value=0x08}, {.addr=0x06ae, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x06ae, .value=0x86, .type=IO_READ},
        {.addr=0x06af, .value=DUMMY, .type=IO_READ},
        {.addr=0x0004, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0007) {
    const struct CPU_State initial_cpu = {.pc=0x870e, .a=0x06, .x=0x47, .y=0xab, .sp=0x6d, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x63}, {.addr=0x870e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x870f, .a=0x6a, .x=0x47, .y=0xab, .sp=0x6d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x63}, {.addr=0x870e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x870e, .value=0x86, .type=IO_READ},
        {.addr=0x870f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0008) {
    const struct CPU_State initial_cpu = {.pc=0x79ad, .a=0x7d, .x=0x7e, .y=0x77, .sp=0x2b, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x007e, .value=0x30}, {.addr=0x79ad, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x79ae, .a=0xae, .x=0x7e, .y=0x77, .sp=0x2b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x007e, .value=0x30}, {.addr=0x79ad, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x79ad, .value=0x86, .type=IO_READ},
        {.addr=0x79ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x007e, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0009) {
    const struct CPU_State initial_cpu = {.pc=0xb85b, .a=0xf4, .x=0xfa, .y=0xfa, .sp=0x66, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0xce}, {.addr=0xb85b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb85c, .a=0xc2, .x=0xfa, .y=0xfa, .sp=0x66, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xce}, {.addr=0xb85b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb85b, .value=0x86, .type=IO_READ},
        {.addr=0xb85c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_000A) {
    const struct CPU_State initial_cpu = {.pc=0x734f, .a=0x32, .x=0x57, .y=0x47, .sp=0x9b, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0xce}, {.addr=0x734f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7350, .a=0x00, .x=0x57, .y=0x47, .sp=0x9b, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0xce}, {.addr=0x734f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x734f, .value=0x86, .type=IO_READ},
        {.addr=0x7350, .value=DUMMY, .type=IO_READ},
        {.addr=0x0057, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_000B) {
    const struct CPU_State initial_cpu = {.pc=0xbd1b, .a=0x7b, .x=0x63, .y=0x14, .sp=0x28, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0xe4}, {.addr=0xbd1b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xbd1c, .a=0x60, .x=0x63, .y=0x14, .sp=0x28, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xe4}, {.addr=0xbd1b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xbd1b, .value=0x86, .type=IO_READ},
        {.addr=0xbd1c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_000C) {
    const struct CPU_State initial_cpu = {.pc=0x0d61, .a=0x54, .x=0x01, .y=0xe0, .sp=0xcd, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x38}, {.addr=0x0d61, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0d62, .a=0x8c, .x=0x01, .y=0xe0, .sp=0xcd, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x38}, {.addr=0x0d61, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0d61, .value=0x86, .type=IO_READ},
        {.addr=0x0d62, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_000D) {
    const struct CPU_State initial_cpu = {.pc=0xa657, .a=0xa9, .x=0xe8, .y=0x54, .sp=0x11, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0x32}, {.addr=0xa657, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa658, .a=0xdb, .x=0xe8, .y=0x54, .sp=0x11, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0x32}, {.addr=0xa657, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa657, .value=0x86, .type=IO_READ},
        {.addr=0xa658, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_000E) {
    const struct CPU_State initial_cpu = {.pc=0x4c9d, .a=0x4b, .x=0x45, .y=0x3e, .sp=0x32, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xa7}, {.addr=0x4c9d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4c9e, .a=0xf3, .x=0x45, .y=0x3e, .sp=0x32, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xa7}, {.addr=0x4c9d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4c9d, .value=0x86, .type=IO_READ},
        {.addr=0x4c9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_000F) {
    const struct CPU_State initial_cpu = {.pc=0x94cb, .a=0x31, .x=0x5f, .y=0x13, .sp=0x08, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x24}, {.addr=0x94cb, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x94cc, .a=0x55, .x=0x5f, .y=0x13, .sp=0x08, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x24}, {.addr=0x94cb, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x94cb, .value=0x86, .type=IO_READ},
        {.addr=0x94cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0010) {
    const struct CPU_State initial_cpu = {.pc=0xe19b, .a=0xc7, .x=0xf1, .y=0x3b, .sp=0x36, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x85}, {.addr=0xe19b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe19c, .a=0x4d, .x=0xf1, .y=0x3b, .sp=0x36, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x85}, {.addr=0xe19b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe19b, .value=0x86, .type=IO_READ},
        {.addr=0xe19c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0011) {
    const struct CPU_State initial_cpu = {.pc=0x8ca5, .a=0x58, .x=0x66, .y=0x8c, .sp=0x8f, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0x11}, {.addr=0x8ca5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8ca6, .a=0x6a, .x=0x66, .y=0x8c, .sp=0x8f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0x11}, {.addr=0x8ca5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8ca5, .value=0x86, .type=IO_READ},
        {.addr=0x8ca6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0013) {
    const struct CPU_State initial_cpu = {.pc=0x71d3, .a=0x33, .x=0x2b, .y=0xeb, .sp=0x80, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x13}, {.addr=0x71d3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x71d4, .a=0x47, .x=0x2b, .y=0xeb, .sp=0x80, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0x13}, {.addr=0x71d3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x71d3, .value=0x86, .type=IO_READ},
        {.addr=0x71d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0014) {
    const struct CPU_State initial_cpu = {.pc=0xa21e, .a=0x13, .x=0x5b, .y=0xb3, .sp=0xe7, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x33}, {.addr=0xa21e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa21f, .a=0x46, .x=0x5b, .y=0xb3, .sp=0xe7, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x33}, {.addr=0xa21e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa21e, .value=0x86, .type=IO_READ},
        {.addr=0xa21f, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0015) {
    const struct CPU_State initial_cpu = {.pc=0x9525, .a=0xd0, .x=0x2f, .y=0x93, .sp=0x81, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0x7c}, {.addr=0x9525, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9526, .a=0x4c, .x=0x2f, .y=0x93, .sp=0x81, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0x7c}, {.addr=0x9525, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9525, .value=0x86, .type=IO_READ},
        {.addr=0x9526, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0016) {
    const struct CPU_State initial_cpu = {.pc=0x7442, .a=0x39, .x=0xd4, .y=0x60, .sp=0xa8, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0x05}, {.addr=0x7442, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7443, .a=0x3e, .x=0xd4, .y=0x60, .sp=0xa8, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x05}, {.addr=0x7442, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7442, .value=0x86, .type=IO_READ},
        {.addr=0x7443, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0017) {
    const struct CPU_State initial_cpu = {.pc=0xc19f, .a=0x90, .x=0x81, .y=0xa3, .sp=0x4a, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x03}, {.addr=0xc19f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc1a0, .a=0x94, .x=0x81, .y=0xa3, .sp=0x4a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x03}, {.addr=0xc19f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc19f, .value=0x86, .type=IO_READ},
        {.addr=0xc1a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0018) {
    const struct CPU_State initial_cpu = {.pc=0x18bf, .a=0x30, .x=0x83, .y=0xfd, .sp=0x6d, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0xd0}, {.addr=0x18bf, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x18c0, .a=0x00, .x=0x83, .y=0xfd, .sp=0x6d, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xd0}, {.addr=0x18bf, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x18bf, .value=0x86, .type=IO_READ},
        {.addr=0x18c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0019) {
    const struct CPU_State initial_cpu = {.pc=0x5ef0, .a=0xf7, .x=0xb9, .y=0xc0, .sp=0xd2, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0xc6}, {.addr=0x5ef0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5ef1, .a=0xbd, .x=0xb9, .y=0xc0, .sp=0xd2, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xc6}, {.addr=0x5ef0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5ef0, .value=0x86, .type=IO_READ},
        {.addr=0x5ef1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_001A) {
    const struct CPU_State initial_cpu = {.pc=0x31a7, .a=0x12, .x=0x59, .y=0x3a, .sp=0xc0, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x78}, {.addr=0x31a7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x31a8, .a=0x8a, .x=0x59, .y=0x3a, .sp=0xc0, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x78}, {.addr=0x31a7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x31a7, .value=0x86, .type=IO_READ},
        {.addr=0x31a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_001B) {
    const struct CPU_State initial_cpu = {.pc=0xca11, .a=0xee, .x=0xdf, .y=0xc4, .sp=0xf8, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0xb2}, {.addr=0xca11, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xca12, .a=0xa0, .x=0xdf, .y=0xc4, .sp=0xf8, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0xb2}, {.addr=0xca11, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xca11, .value=0x86, .type=IO_READ},
        {.addr=0xca12, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_001C) {
    const struct CPU_State initial_cpu = {.pc=0x26dd, .a=0xe8, .x=0xb1, .y=0x05, .sp=0xed, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0x1b}, {.addr=0x26dd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x26de, .a=0x03, .x=0xb1, .y=0x05, .sp=0xed, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0x1b}, {.addr=0x26dd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x26dd, .value=0x86, .type=IO_READ},
        {.addr=0x26de, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_001D) {
    const struct CPU_State initial_cpu = {.pc=0xe479, .a=0x14, .x=0xd7, .y=0xfb, .sp=0x4d, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0xbd}, {.addr=0xe479, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe47a, .a=0xd2, .x=0xd7, .y=0xfb, .sp=0x4d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0xbd}, {.addr=0xe479, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe479, .value=0x86, .type=IO_READ},
        {.addr=0xe47a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d7, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_001E) {
    const struct CPU_State initial_cpu = {.pc=0x9e60, .a=0xf0, .x=0x5f, .y=0x38, .sp=0x83, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x3d}, {.addr=0x9e60, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9e61, .a=0x2e, .x=0x5f, .y=0x38, .sp=0x83, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x3d}, {.addr=0x9e60, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9e60, .value=0x86, .type=IO_READ},
        {.addr=0x9e61, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_001F) {
    const struct CPU_State initial_cpu = {.pc=0xb6b1, .a=0xc6, .x=0x77, .y=0x94, .sp=0x5c, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x0d}, {.addr=0xb6b1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb6b2, .a=0xd3, .x=0x77, .y=0x94, .sp=0x5c, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x0d}, {.addr=0xb6b1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb6b1, .value=0x86, .type=IO_READ},
        {.addr=0xb6b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0020) {
    const struct CPU_State initial_cpu = {.pc=0x6679, .a=0x13, .x=0x14, .y=0x4c, .sp=0x1a, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x25}, {.addr=0x6679, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x667a, .a=0x38, .x=0x14, .y=0x4c, .sp=0x1a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x25}, {.addr=0x6679, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6679, .value=0x86, .type=IO_READ},
        {.addr=0x667a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0021) {
    const struct CPU_State initial_cpu = {.pc=0x3c41, .a=0x81, .x=0x99, .y=0x58, .sp=0x3c, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x42}, {.addr=0x3c41, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3c42, .a=0xc3, .x=0x99, .y=0x58, .sp=0x3c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x42}, {.addr=0x3c41, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3c41, .value=0x86, .type=IO_READ},
        {.addr=0x3c42, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0022) {
    const struct CPU_State initial_cpu = {.pc=0x1691, .a=0xde, .x=0xeb, .y=0x42, .sp=0xd3, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x56}, {.addr=0x1691, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1692, .a=0x34, .x=0xeb, .y=0x42, .sp=0xd3, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x56}, {.addr=0x1691, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1691, .value=0x86, .type=IO_READ},
        {.addr=0x1692, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0023) {
    const struct CPU_State initial_cpu = {.pc=0xef82, .a=0xcd, .x=0xe9, .y=0xf5, .sp=0x2b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0xf3}, {.addr=0xef82, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xef83, .a=0xc0, .x=0xe9, .y=0xf5, .sp=0x2b, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xf3}, {.addr=0xef82, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xef82, .value=0x86, .type=IO_READ},
        {.addr=0xef83, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0024) {
    const struct CPU_State initial_cpu = {.pc=0x243e, .a=0x5b, .x=0x2f, .y=0x4e, .sp=0x12, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0xa7}, {.addr=0x243e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x243f, .a=0x02, .x=0x2f, .y=0x4e, .sp=0x12, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0xa7}, {.addr=0x243e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x243e, .value=0x86, .type=IO_READ},
        {.addr=0x243f, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0025) {
    const struct CPU_State initial_cpu = {.pc=0x6a8e, .a=0x1c, .x=0xe6, .y=0x2f, .sp=0xe2, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x3d}, {.addr=0x6a8e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6a8f, .a=0x59, .x=0xe6, .y=0x2f, .sp=0xe2, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x3d}, {.addr=0x6a8e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6a8e, .value=0x86, .type=IO_READ},
        {.addr=0x6a8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0026) {
    const struct CPU_State initial_cpu = {.pc=0x6ceb, .a=0x2e, .x=0x4b, .y=0x59, .sp=0x3d, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x27}, {.addr=0x6ceb, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6cec, .a=0x56, .x=0x4b, .y=0x59, .sp=0x3d, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x27}, {.addr=0x6ceb, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6ceb, .value=0x86, .type=IO_READ},
        {.addr=0x6cec, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0027) {
    const struct CPU_State initial_cpu = {.pc=0x4aaf, .a=0x29, .x=0xc3, .y=0x9b, .sp=0x51, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0x63}, {.addr=0x4aaf, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4ab0, .a=0x8c, .x=0xc3, .y=0x9b, .sp=0x51, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0x63}, {.addr=0x4aaf, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4aaf, .value=0x86, .type=IO_READ},
        {.addr=0x4ab0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0028) {
    const struct CPU_State initial_cpu = {.pc=0x31ac, .a=0xc5, .x=0x24, .y=0x70, .sp=0x13, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0024, .value=0xdb}, {.addr=0x31ac, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x31ad, .a=0xa0, .x=0x24, .y=0x70, .sp=0x13, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0024, .value=0xdb}, {.addr=0x31ac, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x31ac, .value=0x86, .type=IO_READ},
        {.addr=0x31ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0024, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0029) {
    const struct CPU_State initial_cpu = {.pc=0xd182, .a=0x57, .x=0x17, .y=0xe8, .sp=0x08, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x74}, {.addr=0xd182, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd183, .a=0xcb, .x=0x17, .y=0xe8, .sp=0x08, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x74}, {.addr=0xd182, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd182, .value=0x86, .type=IO_READ},
        {.addr=0xd183, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_002A) {
    const struct CPU_State initial_cpu = {.pc=0x2f03, .a=0x42, .x=0xee, .y=0x70, .sp=0x42, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0xfd}, {.addr=0x2f03, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2f04, .a=0x40, .x=0xee, .y=0x70, .sp=0x42, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xfd}, {.addr=0x2f03, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2f03, .value=0x86, .type=IO_READ},
        {.addr=0x2f04, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_002B) {
    const struct CPU_State initial_cpu = {.pc=0x472c, .a=0x8d, .x=0x00, .y=0xdc, .sp=0xa8, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x5c}, {.addr=0x472c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x472d, .a=0xe9, .x=0x00, .y=0xdc, .sp=0xa8, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x5c}, {.addr=0x472c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x472c, .value=0x86, .type=IO_READ},
        {.addr=0x472d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_002C) {
    const struct CPU_State initial_cpu = {.pc=0xa311, .a=0x6c, .x=0xbd, .y=0x58, .sp=0x52, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0x05}, {.addr=0xa311, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa312, .a=0x71, .x=0xbd, .y=0x58, .sp=0x52, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0x05}, {.addr=0xa311, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa311, .value=0x86, .type=IO_READ},
        {.addr=0xa312, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_002D) {
    const struct CPU_State initial_cpu = {.pc=0x82ed, .a=0xc2, .x=0x73, .y=0xd7, .sp=0x08, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xc6}, {.addr=0x82ed, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x82ee, .a=0x88, .x=0x73, .y=0xd7, .sp=0x08, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xc6}, {.addr=0x82ed, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x82ed, .value=0x86, .type=IO_READ},
        {.addr=0x82ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_002E) {
    const struct CPU_State initial_cpu = {.pc=0x2eb0, .a=0xa6, .x=0xf2, .y=0x25, .sp=0xc6, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x08}, {.addr=0x2eb0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2eb1, .a=0xae, .x=0xf2, .y=0x25, .sp=0xc6, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x08}, {.addr=0x2eb0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2eb0, .value=0x86, .type=IO_READ},
        {.addr=0x2eb1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_002F) {
    const struct CPU_State initial_cpu = {.pc=0x5e1c, .a=0xea, .x=0x86, .y=0xcc, .sp=0x7c, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0xb7}, {.addr=0x5e1c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5e1d, .a=0xa1, .x=0x86, .y=0xcc, .sp=0x7c, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xb7}, {.addr=0x5e1c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5e1c, .value=0x86, .type=IO_READ},
        {.addr=0x5e1d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0030) {
    const struct CPU_State initial_cpu = {.pc=0x8d47, .a=0x29, .x=0x21, .y=0xa9, .sp=0xc2, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x8a}, {.addr=0x8d47, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8d48, .a=0xb4, .x=0x21, .y=0xa9, .sp=0xc2, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0x8a}, {.addr=0x8d47, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8d47, .value=0x86, .type=IO_READ},
        {.addr=0x8d48, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0031) {
    const struct CPU_State initial_cpu = {.pc=0x487a, .a=0x91, .x=0x8d, .y=0x35, .sp=0xe7, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0xa4}, {.addr=0x487a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x487b, .a=0x35, .x=0x8d, .y=0x35, .sp=0xe7, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xa4}, {.addr=0x487a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x487a, .value=0x86, .type=IO_READ},
        {.addr=0x487b, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0032) {
    const struct CPU_State initial_cpu = {.pc=0xe859, .a=0x15, .x=0x17, .y=0x1d, .sp=0xe6, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0xdc}, {.addr=0xe859, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe85a, .a=0xf2, .x=0x17, .y=0x1d, .sp=0xe6, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0xdc}, {.addr=0xe859, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe859, .value=0x86, .type=IO_READ},
        {.addr=0xe85a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0033) {
    const struct CPU_State initial_cpu = {.pc=0xb105, .a=0xff, .x=0x3d, .y=0xf5, .sp=0x9e, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0xa3}, {.addr=0xb105, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb106, .a=0xa3, .x=0x3d, .y=0xf5, .sp=0x9e, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xa3}, {.addr=0xb105, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb105, .value=0x86, .type=IO_READ},
        {.addr=0xb106, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0034) {
    const struct CPU_State initial_cpu = {.pc=0x0394, .a=0x10, .x=0xe2, .y=0x23, .sp=0xf9, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x77}, {.addr=0x0394, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0395, .a=0x87, .x=0xe2, .y=0x23, .sp=0xf9, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x77}, {.addr=0x0394, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0394, .value=0x86, .type=IO_READ},
        {.addr=0x0395, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0035) {
    const struct CPU_State initial_cpu = {.pc=0x0331, .a=0xb2, .x=0x85, .y=0xa9, .sp=0x93, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0x81}, {.addr=0x0331, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0332, .a=0x33, .x=0x85, .y=0xa9, .sp=0x93, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0x81}, {.addr=0x0331, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0331, .value=0x86, .type=IO_READ},
        {.addr=0x0332, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0036) {
    const struct CPU_State initial_cpu = {.pc=0xfe11, .a=0x98, .x=0x7c, .y=0xef, .sp=0x8b, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xf1}, {.addr=0xfe11, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xfe12, .a=0x89, .x=0x7c, .y=0xef, .sp=0x8b, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xf1}, {.addr=0xfe11, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xfe11, .value=0x86, .type=IO_READ},
        {.addr=0xfe12, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0037) {
    const struct CPU_State initial_cpu = {.pc=0xc88b, .a=0xae, .x=0xc8, .y=0x43, .sp=0x5d, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0xa1}, {.addr=0xc88b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc88c, .a=0x4f, .x=0xc8, .y=0x43, .sp=0x5d, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0xa1}, {.addr=0xc88b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc88b, .value=0x86, .type=IO_READ},
        {.addr=0xc88c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c8, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0038) {
    const struct CPU_State initial_cpu = {.pc=0x54f7, .a=0xd9, .x=0xd3, .y=0x76, .sp=0xf5, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x8b}, {.addr=0x54f7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x54f8, .a=0x64, .x=0xd3, .y=0x76, .sp=0xf5, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x8b}, {.addr=0x54f7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x54f7, .value=0x86, .type=IO_READ},
        {.addr=0x54f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0039) {
    const struct CPU_State initial_cpu = {.pc=0x7aaf, .a=0xd7, .x=0x33, .y=0x61, .sp=0xfb, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x90}, {.addr=0x7aaf, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7ab0, .a=0x68, .x=0x33, .y=0x61, .sp=0xfb, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x90}, {.addr=0x7aaf, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7aaf, .value=0x86, .type=IO_READ},
        {.addr=0x7ab0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_003A) {
    const struct CPU_State initial_cpu = {.pc=0xa7bc, .a=0x31, .x=0xd6, .y=0xd7, .sp=0x03, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x3d}, {.addr=0xa7bc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa7bd, .a=0x6f, .x=0xd6, .y=0xd7, .sp=0x03, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x3d}, {.addr=0xa7bc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa7bc, .value=0x86, .type=IO_READ},
        {.addr=0xa7bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_003B) {
    const struct CPU_State initial_cpu = {.pc=0x727b, .a=0xf4, .x=0x30, .y=0x30, .sp=0x58, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0030, .value=0xb1}, {.addr=0x727b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x727c, .a=0xa6, .x=0x30, .y=0x30, .sp=0x58, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0030, .value=0xb1}, {.addr=0x727b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x727b, .value=0x86, .type=IO_READ},
        {.addr=0x727c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0030, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_003C) {
    const struct CPU_State initial_cpu = {.pc=0x78d5, .a=0x8e, .x=0x4f, .y=0xac, .sp=0x5d, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x004f, .value=0x74}, {.addr=0x78d5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x78d6, .a=0x02, .x=0x4f, .y=0xac, .sp=0x5d, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x004f, .value=0x74}, {.addr=0x78d5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x78d5, .value=0x86, .type=IO_READ},
        {.addr=0x78d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x004f, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_003D) {
    const struct CPU_State initial_cpu = {.pc=0xed39, .a=0xde, .x=0x84, .y=0x70, .sp=0xa6, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x32}, {.addr=0xed39, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xed3a, .a=0x10, .x=0x84, .y=0x70, .sp=0xa6, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x32}, {.addr=0xed39, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xed39, .value=0x86, .type=IO_READ},
        {.addr=0xed3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_003E) {
    const struct CPU_State initial_cpu = {.pc=0x215a, .a=0x65, .x=0x16, .y=0xe2, .sp=0xbe, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0xb1}, {.addr=0x215a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x215b, .a=0x16, .x=0x16, .y=0xe2, .sp=0xbe, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xb1}, {.addr=0x215a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x215a, .value=0x86, .type=IO_READ},
        {.addr=0x215b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_003F) {
    const struct CPU_State initial_cpu = {.pc=0xe2f4, .a=0x72, .x=0xe1, .y=0xf1, .sp=0x93, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0xf7}, {.addr=0xe2f4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe2f5, .a=0x6a, .x=0xe1, .y=0xf1, .sp=0x93, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0xf7}, {.addr=0xe2f4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe2f4, .value=0x86, .type=IO_READ},
        {.addr=0xe2f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0040) {
    const struct CPU_State initial_cpu = {.pc=0x925f, .a=0x95, .x=0xe8, .y=0xec, .sp=0xea, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x41}, {.addr=0x925f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9260, .a=0xd7, .x=0xe8, .y=0xec, .sp=0xea, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x41}, {.addr=0x925f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x925f, .value=0x86, .type=IO_READ},
        {.addr=0x9260, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0041) {
    const struct CPU_State initial_cpu = {.pc=0x6900, .a=0x9f, .x=0x3b, .y=0xeb, .sp=0xb5, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0xb5}, {.addr=0x6900, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6901, .a=0x55, .x=0x3b, .y=0xeb, .sp=0xb5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xb5}, {.addr=0x6900, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6900, .value=0x86, .type=IO_READ},
        {.addr=0x6901, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0042) {
    const struct CPU_State initial_cpu = {.pc=0x8d07, .a=0xb9, .x=0xd8, .y=0x78, .sp=0xee, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x33}, {.addr=0x8d07, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8d08, .a=0xec, .x=0xd8, .y=0x78, .sp=0xee, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x33}, {.addr=0x8d07, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8d07, .value=0x86, .type=IO_READ},
        {.addr=0x8d08, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0043) {
    const struct CPU_State initial_cpu = {.pc=0x962a, .a=0xb0, .x=0x21, .y=0x51, .sp=0xf6, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xf8}, {.addr=0x962a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x962b, .a=0xa8, .x=0x21, .y=0x51, .sp=0xf6, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xf8}, {.addr=0x962a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x962a, .value=0x86, .type=IO_READ},
        {.addr=0x962b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0044) {
    const struct CPU_State initial_cpu = {.pc=0x6d8b, .a=0x0f, .x=0x92, .y=0xda, .sp=0x2a, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x69}, {.addr=0x6d8b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6d8c, .a=0x79, .x=0x92, .y=0xda, .sp=0x2a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x69}, {.addr=0x6d8b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6d8b, .value=0x86, .type=IO_READ},
        {.addr=0x6d8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0045) {
    const struct CPU_State initial_cpu = {.pc=0x7a16, .a=0xce, .x=0x3a, .y=0x27, .sp=0x9b, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x23}, {.addr=0x7a16, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7a17, .a=0xf2, .x=0x3a, .y=0x27, .sp=0x9b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x23}, {.addr=0x7a16, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7a16, .value=0x86, .type=IO_READ},
        {.addr=0x7a17, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0046) {
    const struct CPU_State initial_cpu = {.pc=0x522e, .a=0x46, .x=0x8e, .y=0x3f, .sp=0x50, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0xe5}, {.addr=0x522e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x522f, .a=0x2b, .x=0x8e, .y=0x3f, .sp=0x50, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0xe5}, {.addr=0x522e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x522e, .value=0x86, .type=IO_READ},
        {.addr=0x522f, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0047) {
    const struct CPU_State initial_cpu = {.pc=0xd0e9, .a=0xba, .x=0xeb, .y=0xc1, .sp=0x96, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0xc5}, {.addr=0xd0e9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd0ea, .a=0x80, .x=0xeb, .y=0xc1, .sp=0x96, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0xc5}, {.addr=0xd0e9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd0e9, .value=0x86, .type=IO_READ},
        {.addr=0xd0ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0048) {
    const struct CPU_State initial_cpu = {.pc=0x2237, .a=0x6b, .x=0x7f, .y=0x46, .sp=0xec, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0xce}, {.addr=0x2237, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2238, .a=0x3a, .x=0x7f, .y=0x46, .sp=0xec, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0xce}, {.addr=0x2237, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2237, .value=0x86, .type=IO_READ},
        {.addr=0x2238, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0049) {
    const struct CPU_State initial_cpu = {.pc=0x8b53, .a=0xd1, .x=0xdf, .y=0x3e, .sp=0xd4, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0x2b}, {.addr=0x8b53, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8b54, .a=0xfc, .x=0xdf, .y=0x3e, .sp=0xd4, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0x2b}, {.addr=0x8b53, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8b53, .value=0x86, .type=IO_READ},
        {.addr=0x8b54, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_004A) {
    const struct CPU_State initial_cpu = {.pc=0x5943, .a=0x43, .x=0x1a, .y=0xab, .sp=0x83, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0xc7}, {.addr=0x5943, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5944, .a=0x0b, .x=0x1a, .y=0xab, .sp=0x83, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0xc7}, {.addr=0x5943, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5943, .value=0x86, .type=IO_READ},
        {.addr=0x5944, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_004B) {
    const struct CPU_State initial_cpu = {.pc=0xd61a, .a=0xba, .x=0xa9, .y=0x12, .sp=0xef, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0x36}, {.addr=0xd61a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd61b, .a=0xf0, .x=0xa9, .y=0x12, .sp=0xef, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0x36}, {.addr=0xd61a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd61a, .value=0x86, .type=IO_READ},
        {.addr=0xd61b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a9, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_004C) {
    const struct CPU_State initial_cpu = {.pc=0xc0a4, .a=0xd3, .x=0x2d, .y=0x86, .sp=0x42, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0xc8}, {.addr=0xc0a4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc0a5, .a=0x9b, .x=0x2d, .y=0x86, .sp=0x42, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0xc8}, {.addr=0xc0a4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc0a4, .value=0x86, .type=IO_READ},
        {.addr=0xc0a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_004D) {
    const struct CPU_State initial_cpu = {.pc=0x9404, .a=0x4f, .x=0xbe, .y=0xe3, .sp=0x6a, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x22}, {.addr=0x9404, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9405, .a=0x72, .x=0xbe, .y=0xe3, .sp=0x6a, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x22}, {.addr=0x9404, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9404, .value=0x86, .type=IO_READ},
        {.addr=0x9405, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_004E) {
    const struct CPU_State initial_cpu = {.pc=0x6305, .a=0x36, .x=0xda, .y=0x31, .sp=0x21, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x00da, .value=0x84}, {.addr=0x6305, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6306, .a=0xbb, .x=0xda, .y=0x31, .sp=0x21, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00da, .value=0x84}, {.addr=0x6305, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6305, .value=0x86, .type=IO_READ},
        {.addr=0x6306, .value=DUMMY, .type=IO_READ},
        {.addr=0x00da, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_004F) {
    const struct CPU_State initial_cpu = {.pc=0xb9be, .a=0x3a, .x=0x97, .y=0xfd, .sp=0x18, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0xe1}, {.addr=0xb9be, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb9bf, .a=0x1b, .x=0x97, .y=0xfd, .sp=0x18, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0xe1}, {.addr=0xb9be, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb9be, .value=0x86, .type=IO_READ},
        {.addr=0xb9bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0050) {
    const struct CPU_State initial_cpu = {.pc=0xddd3, .a=0x62, .x=0x94, .y=0xb9, .sp=0x1d, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x59}, {.addr=0xddd3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xddd4, .a=0xbb, .x=0x94, .y=0xb9, .sp=0x1d, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x59}, {.addr=0xddd3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xddd3, .value=0x86, .type=IO_READ},
        {.addr=0xddd4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0051) {
    const struct CPU_State initial_cpu = {.pc=0x8123, .a=0xe6, .x=0x91, .y=0x2a, .sp=0x54, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x52}, {.addr=0x8123, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8124, .a=0x39, .x=0x91, .y=0x2a, .sp=0x54, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x52}, {.addr=0x8123, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8123, .value=0x86, .type=IO_READ},
        {.addr=0x8124, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0052) {
    const struct CPU_State initial_cpu = {.pc=0xc3f2, .a=0x90, .x=0x44, .y=0x97, .sp=0x20, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0044, .value=0x8e}, {.addr=0xc3f2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc3f3, .a=0x1f, .x=0x44, .y=0x97, .sp=0x20, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0044, .value=0x8e}, {.addr=0xc3f2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc3f2, .value=0x86, .type=IO_READ},
        {.addr=0xc3f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0044, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0053) {
    const struct CPU_State initial_cpu = {.pc=0x28a6, .a=0x01, .x=0x75, .y=0x64, .sp=0xf3, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0xef}, {.addr=0x28a6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x28a7, .a=0xf0, .x=0x75, .y=0x64, .sp=0xf3, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0xef}, {.addr=0x28a6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x28a6, .value=0x86, .type=IO_READ},
        {.addr=0x28a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0054) {
    const struct CPU_State initial_cpu = {.pc=0x7726, .a=0x19, .x=0x83, .y=0x6b, .sp=0x23, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x71}, {.addr=0x7726, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7727, .a=0x8a, .x=0x83, .y=0x6b, .sp=0x23, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0x71}, {.addr=0x7726, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7726, .value=0x86, .type=IO_READ},
        {.addr=0x7727, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0055) {
    const struct CPU_State initial_cpu = {.pc=0x0a5e, .a=0x73, .x=0x7d, .y=0xf6, .sp=0xed, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x007d, .value=0x86}, {.addr=0x0a5e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0a5f, .a=0xfa, .x=0x7d, .y=0xf6, .sp=0xed, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x007d, .value=0x86}, {.addr=0x0a5e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0a5e, .value=0x86, .type=IO_READ},
        {.addr=0x0a5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x007d, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0056) {
    const struct CPU_State initial_cpu = {.pc=0x6797, .a=0x5c, .x=0x65, .y=0x75, .sp=0x75, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0x0c}, {.addr=0x6797, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6798, .a=0x68, .x=0x65, .y=0x75, .sp=0x75, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0x0c}, {.addr=0x6797, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6797, .value=0x86, .type=IO_READ},
        {.addr=0x6798, .value=DUMMY, .type=IO_READ},
        {.addr=0x0065, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0057) {
    const struct CPU_State initial_cpu = {.pc=0x2054, .a=0xc7, .x=0xd0, .y=0x81, .sp=0xab, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x47}, {.addr=0x2054, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2055, .a=0x0f, .x=0xd0, .y=0x81, .sp=0xab, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x47}, {.addr=0x2054, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2054, .value=0x86, .type=IO_READ},
        {.addr=0x2055, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0058) {
    const struct CPU_State initial_cpu = {.pc=0x3f58, .a=0xf8, .x=0x7e, .y=0x10, .sp=0x04, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x007e, .value=0xe6}, {.addr=0x3f58, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3f59, .a=0xde, .x=0x7e, .y=0x10, .sp=0x04, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x007e, .value=0xe6}, {.addr=0x3f58, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3f58, .value=0x86, .type=IO_READ},
        {.addr=0x3f59, .value=DUMMY, .type=IO_READ},
        {.addr=0x007e, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0059) {
    const struct CPU_State initial_cpu = {.pc=0xd255, .a=0xa6, .x=0x93, .y=0xe6, .sp=0x9c, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x86}, {.addr=0xd255, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd256, .a=0x2d, .x=0x93, .y=0xe6, .sp=0x9c, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x86}, {.addr=0xd255, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd255, .value=0x86, .type=IO_READ},
        {.addr=0xd256, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_005A) {
    const struct CPU_State initial_cpu = {.pc=0xbedd, .a=0x0f, .x=0xd5, .y=0xb7, .sp=0x89, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0xa5}, {.addr=0xbedd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xbede, .a=0xb5, .x=0xd5, .y=0xb7, .sp=0x89, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xa5}, {.addr=0xbedd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xbedd, .value=0x86, .type=IO_READ},
        {.addr=0xbede, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_005B) {
    const struct CPU_State initial_cpu = {.pc=0x0fdc, .a=0xed, .x=0xdf, .y=0x45, .sp=0xb7, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0xf4}, {.addr=0x0fdc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0fdd, .a=0xe1, .x=0xdf, .y=0x45, .sp=0xb7, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0xf4}, {.addr=0x0fdc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0fdc, .value=0x86, .type=IO_READ},
        {.addr=0x0fdd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_005C) {
    const struct CPU_State initial_cpu = {.pc=0x7317, .a=0x77, .x=0x94, .y=0xad, .sp=0xfe, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0xa6}, {.addr=0x7317, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7318, .a=0x1d, .x=0x94, .y=0xad, .sp=0xfe, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0xa6}, {.addr=0x7317, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7317, .value=0x86, .type=IO_READ},
        {.addr=0x7318, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_005D) {
    const struct CPU_State initial_cpu = {.pc=0x6535, .a=0x78, .x=0xc7, .y=0x07, .sp=0xe1, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0x41}, {.addr=0x6535, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6536, .a=0xba, .x=0xc7, .y=0x07, .sp=0xe1, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0x41}, {.addr=0x6535, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6535, .value=0x86, .type=IO_READ},
        {.addr=0x6536, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_005E) {
    const struct CPU_State initial_cpu = {.pc=0x7479, .a=0xd1, .x=0x38, .y=0xa3, .sp=0xb6, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0xb1}, {.addr=0x7479, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x747a, .a=0x83, .x=0x38, .y=0xa3, .sp=0xb6, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0xb1}, {.addr=0x7479, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7479, .value=0x86, .type=IO_READ},
        {.addr=0x747a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_005F) {
    const struct CPU_State initial_cpu = {.pc=0x3d04, .a=0x17, .x=0x57, .y=0x6a, .sp=0x6c, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x84}, {.addr=0x3d04, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3d05, .a=0x9c, .x=0x57, .y=0x6a, .sp=0x6c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x84}, {.addr=0x3d04, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3d04, .value=0x86, .type=IO_READ},
        {.addr=0x3d05, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0060) {
    const struct CPU_State initial_cpu = {.pc=0x16d7, .a=0xd4, .x=0x3d, .y=0xfc, .sp=0x65, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x82}, {.addr=0x16d7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x16d8, .a=0x57, .x=0x3d, .y=0xfc, .sp=0x65, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x82}, {.addr=0x16d7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x16d7, .value=0x86, .type=IO_READ},
        {.addr=0x16d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0061) {
    const struct CPU_State initial_cpu = {.pc=0x332e, .a=0x15, .x=0x35, .y=0xd1, .sp=0x34, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0xf6}, {.addr=0x332e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x332f, .a=0x0c, .x=0x35, .y=0xd1, .sp=0x34, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xf6}, {.addr=0x332e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x332e, .value=0x86, .type=IO_READ},
        {.addr=0x332f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0062) {
    const struct CPU_State initial_cpu = {.pc=0x48dd, .a=0xa8, .x=0x14, .y=0x74, .sp=0x76, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0x09}, {.addr=0x48dd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x48de, .a=0xb2, .x=0x14, .y=0x74, .sp=0x76, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0x09}, {.addr=0x48dd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x48dd, .value=0x86, .type=IO_READ},
        {.addr=0x48de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0063) {
    const struct CPU_State initial_cpu = {.pc=0x96b9, .a=0x90, .x=0xdc, .y=0xc4, .sp=0x9a, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0x53}, {.addr=0x96b9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x96ba, .a=0xe3, .x=0xdc, .y=0xc4, .sp=0x9a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0x53}, {.addr=0x96b9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x96b9, .value=0x86, .type=IO_READ},
        {.addr=0x96ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0064) {
    const struct CPU_State initial_cpu = {.pc=0x6a94, .a=0x0f, .x=0x72, .y=0xe4, .sp=0xe5, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x28}, {.addr=0x6a94, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6a95, .a=0x37, .x=0x72, .y=0xe4, .sp=0xe5, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x28}, {.addr=0x6a94, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6a94, .value=0x86, .type=IO_READ},
        {.addr=0x6a95, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0065) {
    const struct CPU_State initial_cpu = {.pc=0xf6c8, .a=0x72, .x=0xc4, .y=0x79, .sp=0x5a, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x00c4, .value=0x8d}, {.addr=0xf6c8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf6c9, .a=0x00, .x=0xc4, .y=0x79, .sp=0x5a, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x00c4, .value=0x8d}, {.addr=0xf6c8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf6c8, .value=0x86, .type=IO_READ},
        {.addr=0xf6c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c4, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0066) {
    const struct CPU_State initial_cpu = {.pc=0xec79, .a=0x9c, .x=0xb3, .y=0x48, .sp=0x97, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0xcf}, {.addr=0xec79, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xec7a, .a=0x6c, .x=0xb3, .y=0x48, .sp=0x97, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0xcf}, {.addr=0xec79, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xec79, .value=0x86, .type=IO_READ},
        {.addr=0xec7a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b3, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0067) {
    const struct CPU_State initial_cpu = {.pc=0x3da9, .a=0xcd, .x=0x30, .y=0x31, .sp=0xec, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0030, .value=0x45}, {.addr=0x3da9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3daa, .a=0x13, .x=0x30, .y=0x31, .sp=0xec, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0030, .value=0x45}, {.addr=0x3da9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3da9, .value=0x86, .type=IO_READ},
        {.addr=0x3daa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0030, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0068) {
    const struct CPU_State initial_cpu = {.pc=0xe9e4, .a=0xee, .x=0xad, .y=0xa2, .sp=0x2f, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0xec}, {.addr=0xe9e4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe9e5, .a=0xda, .x=0xad, .y=0xa2, .sp=0x2f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xec}, {.addr=0xe9e4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe9e4, .value=0x86, .type=IO_READ},
        {.addr=0xe9e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0069) {
    const struct CPU_State initial_cpu = {.pc=0xe952, .a=0x1d, .x=0x38, .y=0x13, .sp=0xf3, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x2c}, {.addr=0xe952, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe953, .a=0x49, .x=0x38, .y=0x13, .sp=0xf3, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x2c}, {.addr=0xe952, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe952, .value=0x86, .type=IO_READ},
        {.addr=0xe953, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_006A) {
    const struct CPU_State initial_cpu = {.pc=0x090b, .a=0x7b, .x=0x3d, .y=0xbc, .sp=0xd8, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0xa5}, {.addr=0x090b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x090c, .a=0x20, .x=0x3d, .y=0xbc, .sp=0xd8, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xa5}, {.addr=0x090b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x090b, .value=0x86, .type=IO_READ},
        {.addr=0x090c, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_006B) {
    const struct CPU_State initial_cpu = {.pc=0x8889, .a=0xa2, .x=0x01, .y=0x83, .sp=0xb7, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x54}, {.addr=0x8889, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x888a, .a=0xf6, .x=0x01, .y=0x83, .sp=0xb7, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x54}, {.addr=0x8889, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8889, .value=0x86, .type=IO_READ},
        {.addr=0x888a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_006C) {
    const struct CPU_State initial_cpu = {.pc=0xc639, .a=0xc4, .x=0x4d, .y=0x46, .sp=0xf0, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x75}, {.addr=0xc639, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc63a, .a=0x39, .x=0x4d, .y=0x46, .sp=0xf0, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x75}, {.addr=0xc639, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc639, .value=0x86, .type=IO_READ},
        {.addr=0xc63a, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_006D) {
    const struct CPU_State initial_cpu = {.pc=0x8d64, .a=0xee, .x=0xa4, .y=0x5c, .sp=0x73, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0xaf}, {.addr=0x8d64, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8d65, .a=0x9e, .x=0xa4, .y=0x5c, .sp=0x73, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xaf}, {.addr=0x8d64, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8d64, .value=0x86, .type=IO_READ},
        {.addr=0x8d65, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_006E) {
    const struct CPU_State initial_cpu = {.pc=0xf7a5, .a=0xcc, .x=0x29, .y=0x91, .sp=0x62, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0xe7}, {.addr=0xf7a5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf7a6, .a=0xb3, .x=0x29, .y=0x91, .sp=0x62, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xe7}, {.addr=0xf7a5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf7a5, .value=0x86, .type=IO_READ},
        {.addr=0xf7a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_006F) {
    const struct CPU_State initial_cpu = {.pc=0x916f, .a=0x0a, .x=0x9d, .y=0xd1, .sp=0x78, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x009d, .value=0x10}, {.addr=0x916f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9170, .a=0x1a, .x=0x9d, .y=0xd1, .sp=0x78, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x009d, .value=0x10}, {.addr=0x916f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x916f, .value=0x86, .type=IO_READ},
        {.addr=0x9170, .value=DUMMY, .type=IO_READ},
        {.addr=0x009d, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0070) {
    const struct CPU_State initial_cpu = {.pc=0x97ab, .a=0xb3, .x=0xcc, .y=0xe0, .sp=0x0b, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x63}, {.addr=0x97ab, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x97ac, .a=0x17, .x=0xcc, .y=0xe0, .sp=0x0b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x63}, {.addr=0x97ab, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x97ab, .value=0x86, .type=IO_READ},
        {.addr=0x97ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0071) {
    const struct CPU_State initial_cpu = {.pc=0x4f7c, .a=0x0e, .x=0x6d, .y=0x1b, .sp=0x67, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x74}, {.addr=0x4f7c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4f7d, .a=0x82, .x=0x6d, .y=0x1b, .sp=0x67, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x74}, {.addr=0x4f7c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4f7c, .value=0x86, .type=IO_READ},
        {.addr=0x4f7d, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0072) {
    const struct CPU_State initial_cpu = {.pc=0xc5a6, .a=0x0a, .x=0xdc, .y=0x8e, .sp=0x13, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0x6b}, {.addr=0xc5a6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc5a7, .a=0x76, .x=0xdc, .y=0x8e, .sp=0x13, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0x6b}, {.addr=0xc5a6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc5a6, .value=0x86, .type=IO_READ},
        {.addr=0xc5a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0073) {
    const struct CPU_State initial_cpu = {.pc=0x0de6, .a=0x62, .x=0x8f, .y=0x99, .sp=0xea, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x43}, {.addr=0x0de6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0de7, .a=0xa5, .x=0x8f, .y=0x99, .sp=0xea, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x43}, {.addr=0x0de6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0de6, .value=0x86, .type=IO_READ},
        {.addr=0x0de7, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0074) {
    const struct CPU_State initial_cpu = {.pc=0x4b92, .a=0xc2, .x=0x01, .y=0x30, .sp=0xee, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0xca}, {.addr=0x4b92, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4b93, .a=0x8d, .x=0x01, .y=0x30, .sp=0xee, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0xca}, {.addr=0x4b92, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4b92, .value=0x86, .type=IO_READ},
        {.addr=0x4b93, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0075) {
    const struct CPU_State initial_cpu = {.pc=0x4d63, .a=0x84, .x=0xa6, .y=0x19, .sp=0x76, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x2e}, {.addr=0x4d63, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4d64, .a=0xb2, .x=0xa6, .y=0x19, .sp=0x76, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x2e}, {.addr=0x4d63, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4d63, .value=0x86, .type=IO_READ},
        {.addr=0x4d64, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0076) {
    const struct CPU_State initial_cpu = {.pc=0x0115, .a=0x15, .x=0x81, .y=0xad, .sp=0x5d, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x37}, {.addr=0x0115, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0116, .a=0x4c, .x=0x81, .y=0xad, .sp=0x5d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x37}, {.addr=0x0115, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0115, .value=0x86, .type=IO_READ},
        {.addr=0x0116, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0077) {
    const struct CPU_State initial_cpu = {.pc=0xebeb, .a=0xa8, .x=0x38, .y=0x57, .sp=0x9b, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x69}, {.addr=0xebeb, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xebec, .a=0x12, .x=0x38, .y=0x57, .sp=0x9b, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x69}, {.addr=0xebeb, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xebeb, .value=0x86, .type=IO_READ},
        {.addr=0xebec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0078) {
    const struct CPU_State initial_cpu = {.pc=0xa516, .a=0xa1, .x=0x24, .y=0x0f, .sp=0x83, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0xf0}, {.addr=0xa516, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa517, .a=0x92, .x=0x24, .y=0x0f, .sp=0x83, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xf0}, {.addr=0xa516, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa516, .value=0x86, .type=IO_READ},
        {.addr=0xa517, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0079) {
    const struct CPU_State initial_cpu = {.pc=0x74e0, .a=0xb3, .x=0xc3, .y=0xa0, .sp=0x29, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0x57}, {.addr=0x74e0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x74e1, .a=0x0b, .x=0xc3, .y=0xa0, .sp=0x29, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0x57}, {.addr=0x74e0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x74e0, .value=0x86, .type=IO_READ},
        {.addr=0x74e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_007A) {
    const struct CPU_State initial_cpu = {.pc=0xfe60, .a=0xcd, .x=0xbf, .y=0x63, .sp=0x88, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0x5e}, {.addr=0xfe60, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xfe61, .a=0x2b, .x=0xbf, .y=0x63, .sp=0x88, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0x5e}, {.addr=0xfe60, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xfe60, .value=0x86, .type=IO_READ},
        {.addr=0xfe61, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_007B) {
    const struct CPU_State initial_cpu = {.pc=0x95a1, .a=0x01, .x=0x9e, .y=0xf0, .sp=0x51, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x009e, .value=0xe1}, {.addr=0x95a1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x95a2, .a=0xe2, .x=0x9e, .y=0xf0, .sp=0x51, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x009e, .value=0xe1}, {.addr=0x95a1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x95a1, .value=0x86, .type=IO_READ},
        {.addr=0x95a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x009e, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_007C) {
    const struct CPU_State initial_cpu = {.pc=0xd600, .a=0x97, .x=0xe4, .y=0x6c, .sp=0x3b, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0xb4}, {.addr=0xd600, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd601, .a=0x4c, .x=0xe4, .y=0x6c, .sp=0x3b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0xb4}, {.addr=0xd600, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd600, .value=0x86, .type=IO_READ},
        {.addr=0xd601, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e4, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_007D) {
    const struct CPU_State initial_cpu = {.pc=0xa6b9, .a=0x84, .x=0x8f, .y=0xbc, .sp=0x67, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x9d}, {.addr=0xa6b9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa6ba, .a=0x22, .x=0x8f, .y=0xbc, .sp=0x67, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x9d}, {.addr=0xa6b9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa6b9, .value=0x86, .type=IO_READ},
        {.addr=0xa6ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_007E) {
    const struct CPU_State initial_cpu = {.pc=0xcca5, .a=0xc0, .x=0x42, .y=0xe6, .sp=0xc6, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0x05}, {.addr=0xcca5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcca6, .a=0xc5, .x=0x42, .y=0xe6, .sp=0xc6, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0x05}, {.addr=0xcca5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcca5, .value=0x86, .type=IO_READ},
        {.addr=0xcca6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_007F) {
    const struct CPU_State initial_cpu = {.pc=0xd8ce, .a=0x7b, .x=0xc9, .y=0x10, .sp=0x51, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0x8c}, {.addr=0xd8ce, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd8cf, .a=0x07, .x=0xc9, .y=0x10, .sp=0x51, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0x8c}, {.addr=0xd8ce, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd8ce, .value=0x86, .type=IO_READ},
        {.addr=0xd8cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0080) {
    const struct CPU_State initial_cpu = {.pc=0x2afc, .a=0x07, .x=0x36, .y=0x2c, .sp=0x41, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0036, .value=0x66}, {.addr=0x2afc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2afd, .a=0x6e, .x=0x36, .y=0x2c, .sp=0x41, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0036, .value=0x66}, {.addr=0x2afc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2afc, .value=0x86, .type=IO_READ},
        {.addr=0x2afd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0036, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0081) {
    const struct CPU_State initial_cpu = {.pc=0xab6d, .a=0xda, .x=0x91, .y=0xf4, .sp=0x0a, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x17}, {.addr=0xab6d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xab6e, .a=0xf1, .x=0x91, .y=0xf4, .sp=0x0a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x17}, {.addr=0xab6d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xab6d, .value=0x86, .type=IO_READ},
        {.addr=0xab6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0082) {
    const struct CPU_State initial_cpu = {.pc=0xec8c, .a=0xc4, .x=0x2b, .y=0x51, .sp=0x56, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x7e}, {.addr=0xec8c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xec8d, .a=0x43, .x=0x2b, .y=0x51, .sp=0x56, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x7e}, {.addr=0xec8c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xec8c, .value=0x86, .type=IO_READ},
        {.addr=0xec8d, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0083) {
    const struct CPU_State initial_cpu = {.pc=0xde3a, .a=0x31, .x=0xc3, .y=0xfe, .sp=0x5c, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x48}, {.addr=0xde3a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xde3b, .a=0x79, .x=0xc3, .y=0xfe, .sp=0x5c, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x48}, {.addr=0xde3a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xde3a, .value=0x86, .type=IO_READ},
        {.addr=0xde3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0084) {
    const struct CPU_State initial_cpu = {.pc=0xb62a, .a=0x44, .x=0xbb, .y=0xd1, .sp=0x33, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x2d}, {.addr=0xb62a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb62b, .a=0x71, .x=0xbb, .y=0xd1, .sp=0x33, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x2d}, {.addr=0xb62a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb62a, .value=0x86, .type=IO_READ},
        {.addr=0xb62b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0085) {
    const struct CPU_State initial_cpu = {.pc=0x33c1, .a=0x2f, .x=0x33, .y=0x79, .sp=0x6e, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0xf5}, {.addr=0x33c1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x33c2, .a=0x24, .x=0x33, .y=0x79, .sp=0x6e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0xf5}, {.addr=0x33c1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x33c1, .value=0x86, .type=IO_READ},
        {.addr=0x33c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0086) {
    const struct CPU_State initial_cpu = {.pc=0xf9e2, .a=0x4a, .x=0x0d, .y=0xe9, .sp=0xec, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x88}, {.addr=0xf9e2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf9e3, .a=0xd2, .x=0x0d, .y=0xe9, .sp=0xec, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x88}, {.addr=0xf9e2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf9e2, .value=0x86, .type=IO_READ},
        {.addr=0xf9e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0087) {
    const struct CPU_State initial_cpu = {.pc=0x0fe3, .a=0x2e, .x=0xe2, .y=0xce, .sp=0xd8, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x80}, {.addr=0x0fe3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0fe4, .a=0xae, .x=0xe2, .y=0xce, .sp=0xd8, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x80}, {.addr=0x0fe3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0fe3, .value=0x86, .type=IO_READ},
        {.addr=0x0fe4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0088) {
    const struct CPU_State initial_cpu = {.pc=0x4ff8, .a=0x1b, .x=0x61, .y=0x59, .sp=0xe8, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0xa5}, {.addr=0x4ff8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4ff9, .a=0xc1, .x=0x61, .y=0x59, .sp=0xe8, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xa5}, {.addr=0x4ff8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4ff8, .value=0x86, .type=IO_READ},
        {.addr=0x4ff9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0089) {
    const struct CPU_State initial_cpu = {.pc=0x9214, .a=0x34, .x=0x06, .y=0xf5, .sp=0x56, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0x6a}, {.addr=0x9214, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9215, .a=0x9f, .x=0x06, .y=0xf5, .sp=0x56, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0x6a}, {.addr=0x9214, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9214, .value=0x86, .type=IO_READ},
        {.addr=0x9215, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_008A) {
    const struct CPU_State initial_cpu = {.pc=0x3f39, .a=0xbd, .x=0x96, .y=0x59, .sp=0x6e, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0xf5}, {.addr=0x3f39, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3f3a, .a=0xb2, .x=0x96, .y=0x59, .sp=0x6e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0xf5}, {.addr=0x3f39, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3f39, .value=0x86, .type=IO_READ},
        {.addr=0x3f3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_008B) {
    const struct CPU_State initial_cpu = {.pc=0x51cc, .a=0x51, .x=0x74, .y=0x99, .sp=0x1a, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x6d}, {.addr=0x51cc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x51cd, .a=0xbe, .x=0x74, .y=0x99, .sp=0x1a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x6d}, {.addr=0x51cc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x51cc, .value=0x86, .type=IO_READ},
        {.addr=0x51cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_008C) {
    const struct CPU_State initial_cpu = {.pc=0x5c71, .a=0x31, .x=0x20, .y=0x5a, .sp=0xa7, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0xfa}, {.addr=0x5c71, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5c72, .a=0x2b, .x=0x20, .y=0x5a, .sp=0xa7, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0xfa}, {.addr=0x5c71, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5c71, .value=0x86, .type=IO_READ},
        {.addr=0x5c72, .value=DUMMY, .type=IO_READ},
        {.addr=0x0020, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_008D) {
    const struct CPU_State initial_cpu = {.pc=0x8985, .a=0xae, .x=0xa2, .y=0x48, .sp=0x40, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x6b}, {.addr=0x8985, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8986, .a=0x1a, .x=0xa2, .y=0x48, .sp=0x40, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0x6b}, {.addr=0x8985, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8985, .value=0x86, .type=IO_READ},
        {.addr=0x8986, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_008E) {
    const struct CPU_State initial_cpu = {.pc=0x1e60, .a=0x25, .x=0xc0, .y=0xc2, .sp=0x57, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x81}, {.addr=0x1e60, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1e61, .a=0xa6, .x=0xc0, .y=0xc2, .sp=0x57, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x81}, {.addr=0x1e60, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1e60, .value=0x86, .type=IO_READ},
        {.addr=0x1e61, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_008F) {
    const struct CPU_State initial_cpu = {.pc=0x8c20, .a=0xf3, .x=0x21, .y=0x01, .sp=0xba, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xdb}, {.addr=0x8c20, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8c21, .a=0xce, .x=0x21, .y=0x01, .sp=0xba, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xdb}, {.addr=0x8c20, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8c20, .value=0x86, .type=IO_READ},
        {.addr=0x8c21, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0090) {
    const struct CPU_State initial_cpu = {.pc=0x9c29, .a=0x46, .x=0x4e, .y=0x84, .sp=0xe3, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x58}, {.addr=0x9c29, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9c2a, .a=0x9f, .x=0x4e, .y=0x84, .sp=0xe3, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x58}, {.addr=0x9c29, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9c29, .value=0x86, .type=IO_READ},
        {.addr=0x9c2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0091) {
    const struct CPU_State initial_cpu = {.pc=0x8fab, .a=0xcf, .x=0x6d, .y=0x7b, .sp=0xf6, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0xde}, {.addr=0x8fab, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8fac, .a=0xae, .x=0x6d, .y=0x7b, .sp=0xf6, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0xde}, {.addr=0x8fab, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8fab, .value=0x86, .type=IO_READ},
        {.addr=0x8fac, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0092) {
    const struct CPU_State initial_cpu = {.pc=0xe1ca, .a=0x05, .x=0x40, .y=0xcd, .sp=0xae, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0040, .value=0x47}, {.addr=0xe1ca, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe1cb, .a=0x4c, .x=0x40, .y=0xcd, .sp=0xae, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0040, .value=0x47}, {.addr=0xe1ca, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe1ca, .value=0x86, .type=IO_READ},
        {.addr=0xe1cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0040, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0093) {
    const struct CPU_State initial_cpu = {.pc=0xb1c2, .a=0x40, .x=0x3b, .y=0xad, .sp=0xbc, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x03}, {.addr=0xb1c2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb1c3, .a=0x44, .x=0x3b, .y=0xad, .sp=0xbc, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x03}, {.addr=0xb1c2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb1c2, .value=0x86, .type=IO_READ},
        {.addr=0xb1c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0094) {
    const struct CPU_State initial_cpu = {.pc=0xed70, .a=0x0f, .x=0x4c, .y=0x19, .sp=0x25, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0xf4}, {.addr=0xed70, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xed71, .a=0x04, .x=0x4c, .y=0x19, .sp=0x25, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0xf4}, {.addr=0xed70, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xed70, .value=0x86, .type=IO_READ},
        {.addr=0xed71, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0095) {
    const struct CPU_State initial_cpu = {.pc=0xdaef, .a=0x7b, .x=0xda, .y=0xfb, .sp=0xfb, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xd4}, {.addr=0xdaef, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xdaf0, .a=0x4f, .x=0xda, .y=0xfb, .sp=0xfb, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xd4}, {.addr=0xdaef, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xdaef, .value=0x86, .type=IO_READ},
        {.addr=0xdaf0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0096) {
    const struct CPU_State initial_cpu = {.pc=0xa5af, .a=0x8d, .x=0x62, .y=0x15, .sp=0x5e, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0xe8}, {.addr=0xa5af, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa5b0, .a=0x76, .x=0x62, .y=0x15, .sp=0x5e, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0xe8}, {.addr=0xa5af, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa5af, .value=0x86, .type=IO_READ},
        {.addr=0xa5b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0062, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0097) {
    const struct CPU_State initial_cpu = {.pc=0x814e, .a=0x63, .x=0xac, .y=0xad, .sp=0x33, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x45}, {.addr=0x814e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x814f, .a=0xa8, .x=0xac, .y=0xad, .sp=0x33, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x45}, {.addr=0x814e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x814e, .value=0x86, .type=IO_READ},
        {.addr=0x814f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0098) {
    const struct CPU_State initial_cpu = {.pc=0x4b40, .a=0x7f, .x=0x1e, .y=0x45, .sp=0xd7, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0xbc}, {.addr=0x4b40, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4b41, .a=0x3c, .x=0x1e, .y=0x45, .sp=0xd7, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0xbc}, {.addr=0x4b40, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4b40, .value=0x86, .type=IO_READ},
        {.addr=0x4b41, .value=DUMMY, .type=IO_READ},
        {.addr=0x001e, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0099) {
    const struct CPU_State initial_cpu = {.pc=0x5313, .a=0xdb, .x=0x19, .y=0x4c, .sp=0xba, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x5f}, {.addr=0x5313, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5314, .a=0x3a, .x=0x19, .y=0x4c, .sp=0xba, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x5f}, {.addr=0x5313, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5313, .value=0x86, .type=IO_READ},
        {.addr=0x5314, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_009A) {
    const struct CPU_State initial_cpu = {.pc=0xb197, .a=0x10, .x=0x14, .y=0x57, .sp=0x98, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0xeb}, {.addr=0xb197, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb198, .a=0xfb, .x=0x14, .y=0x57, .sp=0x98, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0xeb}, {.addr=0xb197, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb197, .value=0x86, .type=IO_READ},
        {.addr=0xb198, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_009B) {
    const struct CPU_State initial_cpu = {.pc=0x5ca9, .a=0x88, .x=0x65, .y=0xfb, .sp=0x94, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x8c}, {.addr=0x5ca9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5caa, .a=0x15, .x=0x65, .y=0xfb, .sp=0x94, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x8c}, {.addr=0x5ca9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5ca9, .value=0x86, .type=IO_READ},
        {.addr=0x5caa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_009C) {
    const struct CPU_State initial_cpu = {.pc=0x0daf, .a=0x28, .x=0x48, .y=0x83, .sp=0x02, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0x70}, {.addr=0x0daf, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0db0, .a=0x99, .x=0x48, .y=0x83, .sp=0x02, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0x70}, {.addr=0x0daf, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0daf, .value=0x86, .type=IO_READ},
        {.addr=0x0db0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_009D) {
    const struct CPU_State initial_cpu = {.pc=0xc700, .a=0xc2, .x=0x22, .y=0xe9, .sp=0x52, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0022, .value=0xc3}, {.addr=0xc700, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc701, .a=0x86, .x=0x22, .y=0xe9, .sp=0x52, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0022, .value=0xc3}, {.addr=0xc700, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc700, .value=0x86, .type=IO_READ},
        {.addr=0xc701, .value=DUMMY, .type=IO_READ},
        {.addr=0x0022, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_009E) {
    const struct CPU_State initial_cpu = {.pc=0xa3e3, .a=0x59, .x=0x0d, .y=0x53, .sp=0x48, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x18}, {.addr=0xa3e3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa3e4, .a=0x71, .x=0x0d, .y=0x53, .sp=0x48, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x18}, {.addr=0xa3e3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa3e3, .value=0x86, .type=IO_READ},
        {.addr=0xa3e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_009F) {
    const struct CPU_State initial_cpu = {.pc=0x30ef, .a=0x95, .x=0xa2, .y=0x67, .sp=0xc1, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x90}, {.addr=0x30ef, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x30f0, .a=0x25, .x=0xa2, .y=0x67, .sp=0xc1, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x90}, {.addr=0x30ef, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x30ef, .value=0x86, .type=IO_READ},
        {.addr=0x30f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xc74b, .a=0xd2, .x=0x65, .y=0x1e, .sp=0x1c, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x72}, {.addr=0xc74b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc74c, .a=0x45, .x=0x65, .y=0x1e, .sp=0x1c, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x72}, {.addr=0xc74b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc74b, .value=0x86, .type=IO_READ},
        {.addr=0xc74c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x4163, .a=0xff, .x=0x1c, .y=0xa9, .sp=0x0a, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0x69}, {.addr=0x4163, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4164, .a=0x68, .x=0x1c, .y=0xa9, .sp=0x0a, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0x69}, {.addr=0x4163, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4163, .value=0x86, .type=IO_READ},
        {.addr=0x4164, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xa8a4, .a=0x94, .x=0x70, .y=0x8a, .sp=0xae, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x3c}, {.addr=0xa8a4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa8a5, .a=0xd1, .x=0x70, .y=0x8a, .sp=0xae, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x3c}, {.addr=0xa8a4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa8a4, .value=0x86, .type=IO_READ},
        {.addr=0xa8a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xb376, .a=0x15, .x=0x01, .y=0x0a, .sp=0xfc, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0xf4}, {.addr=0xb376, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb377, .a=0x09, .x=0x01, .y=0x0a, .sp=0xfc, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0xf4}, {.addr=0xb376, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb376, .value=0x86, .type=IO_READ},
        {.addr=0xb377, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xabad, .a=0xb3, .x=0x29, .y=0x13, .sp=0x19, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x42}, {.addr=0xabad, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xabae, .a=0xf6, .x=0x29, .y=0x13, .sp=0x19, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x42}, {.addr=0xabad, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xabad, .value=0x86, .type=IO_READ},
        {.addr=0xabae, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x4f5a, .a=0x02, .x=0x7b, .y=0x34, .sp=0x86, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xfe}, {.addr=0x4f5a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4f5b, .a=0x01, .x=0x7b, .y=0x34, .sp=0x86, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xfe}, {.addr=0x4f5a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4f5a, .value=0x86, .type=IO_READ},
        {.addr=0x4f5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xb0e2, .a=0xad, .x=0x5b, .y=0x3e, .sp=0x2d, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x6f}, {.addr=0xb0e2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb0e3, .a=0x1d, .x=0x5b, .y=0x3e, .sp=0x2d, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x6f}, {.addr=0xb0e2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb0e2, .value=0x86, .type=IO_READ},
        {.addr=0xb0e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xa023, .a=0x6a, .x=0x72, .y=0xc0, .sp=0x57, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0xfa}, {.addr=0xa023, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa024, .a=0x64, .x=0x72, .y=0xc0, .sp=0x57, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0xfa}, {.addr=0xa023, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa023, .value=0x86, .type=IO_READ},
        {.addr=0xa024, .value=DUMMY, .type=IO_READ},
        {.addr=0x0072, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x6760, .a=0xda, .x=0xc1, .y=0x53, .sp=0x5f, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0x75}, {.addr=0x6760, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6761, .a=0x50, .x=0xc1, .y=0x53, .sp=0x5f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0x75}, {.addr=0x6760, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6760, .value=0x86, .type=IO_READ},
        {.addr=0x6761, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c1, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x73cb, .a=0xb7, .x=0xd2, .y=0x7f, .sp=0x15, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x24}, {.addr=0x73cb, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x73cc, .a=0xdb, .x=0xd2, .y=0x7f, .sp=0x15, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x24}, {.addr=0x73cb, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x73cb, .value=0x86, .type=IO_READ},
        {.addr=0x73cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x1902, .a=0xb1, .x=0xb5, .y=0x4f, .sp=0x14, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x0e}, {.addr=0x1902, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1903, .a=0xc0, .x=0xb5, .y=0x4f, .sp=0x14, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x0e}, {.addr=0x1902, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1902, .value=0x86, .type=IO_READ},
        {.addr=0x1903, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xa0a2, .a=0x85, .x=0x98, .y=0x87, .sp=0x33, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0x3f}, {.addr=0xa0a2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa0a3, .a=0xc5, .x=0x98, .y=0x87, .sp=0x33, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0x3f}, {.addr=0xa0a2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa0a2, .value=0x86, .type=IO_READ},
        {.addr=0xa0a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x866b, .a=0x0c, .x=0xc8, .y=0xb5, .sp=0x8c, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0xe9}, {.addr=0x866b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x866c, .a=0xf6, .x=0xc8, .y=0xb5, .sp=0x8c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xe9}, {.addr=0x866b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x866b, .value=0x86, .type=IO_READ},
        {.addr=0x866c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xec3f, .a=0x00, .x=0x5d, .y=0x53, .sp=0x1a, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0x8e}, {.addr=0xec3f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xec40, .a=0x8e, .x=0x5d, .y=0x53, .sp=0x1a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0x8e}, {.addr=0xec3f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xec3f, .value=0x86, .type=IO_READ},
        {.addr=0xec40, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xd529, .a=0x9d, .x=0xef, .y=0x0e, .sp=0xa2, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0xba}, {.addr=0xd529, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd52a, .a=0x57, .x=0xef, .y=0x0e, .sp=0xa2, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xba}, {.addr=0xd529, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd529, .value=0x86, .type=IO_READ},
        {.addr=0xd52a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x57ae, .a=0xde, .x=0xd3, .y=0xa4, .sp=0x7e, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0xa7}, {.addr=0x57ae, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x57af, .a=0x85, .x=0xd3, .y=0xa4, .sp=0x7e, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xa7}, {.addr=0x57ae, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x57ae, .value=0x86, .type=IO_READ},
        {.addr=0x57af, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x0586, .a=0x7e, .x=0x83, .y=0x56, .sp=0x48, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x30}, {.addr=0x0586, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0587, .a=0xae, .x=0x83, .y=0x56, .sp=0x48, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x30}, {.addr=0x0586, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0586, .value=0x86, .type=IO_READ},
        {.addr=0x0587, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x46b1, .a=0x38, .x=0x09, .y=0xab, .sp=0x3a, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x31}, {.addr=0x46b1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x46b2, .a=0x69, .x=0x09, .y=0xab, .sp=0x3a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x31}, {.addr=0x46b1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x46b1, .value=0x86, .type=IO_READ},
        {.addr=0x46b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xa4b6, .a=0xdf, .x=0x9b, .y=0xe8, .sp=0x38, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x6a}, {.addr=0xa4b6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa4b7, .a=0x49, .x=0x9b, .y=0xe8, .sp=0x38, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x6a}, {.addr=0xa4b6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa4b6, .value=0x86, .type=IO_READ},
        {.addr=0xa4b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x14c3, .a=0x94, .x=0x39, .y=0xea, .sp=0x93, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0xf8}, {.addr=0x14c3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x14c4, .a=0x8d, .x=0x39, .y=0xea, .sp=0x93, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xf8}, {.addr=0x14c3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x14c3, .value=0x86, .type=IO_READ},
        {.addr=0x14c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xcaa4, .a=0x4d, .x=0xc7, .y=0xc5, .sp=0x2e, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0xf8}, {.addr=0xcaa4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcaa5, .a=0x46, .x=0xc7, .y=0xc5, .sp=0x2e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xf8}, {.addr=0xcaa4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcaa4, .value=0x86, .type=IO_READ},
        {.addr=0xcaa5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xc24a, .a=0x80, .x=0x2f, .y=0x1e, .sp=0xa9, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0xd8}, {.addr=0xc24a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc24b, .a=0x58, .x=0x2f, .y=0x1e, .sp=0xa9, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0xd8}, {.addr=0xc24a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc24a, .value=0x86, .type=IO_READ},
        {.addr=0xc24b, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x9256, .a=0xd3, .x=0x13, .y=0x9b, .sp=0xfa, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x6d}, {.addr=0x9256, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9257, .a=0x41, .x=0x13, .y=0x9b, .sp=0xfa, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x6d}, {.addr=0x9256, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9256, .value=0x86, .type=IO_READ},
        {.addr=0x9257, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xdb0f, .a=0xb2, .x=0x3e, .y=0xde, .sp=0x06, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x95}, {.addr=0xdb0f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xdb10, .a=0x47, .x=0x3e, .y=0xde, .sp=0x06, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x95}, {.addr=0xdb0f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xdb0f, .value=0x86, .type=IO_READ},
        {.addr=0xdb10, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x9179, .a=0xfd, .x=0xb4, .y=0x1a, .sp=0x8a, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0x20}, {.addr=0x9179, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x917a, .a=0x1e, .x=0xb4, .y=0x1a, .sp=0x8a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0x20}, {.addr=0x9179, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9179, .value=0x86, .type=IO_READ},
        {.addr=0x917a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b4, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xd34b, .a=0x3a, .x=0xbe, .y=0xf8, .sp=0x9b, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x00be, .value=0x29}, {.addr=0xd34b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd34c, .a=0x64, .x=0xbe, .y=0xf8, .sp=0x9b, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00be, .value=0x29}, {.addr=0xd34b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd34b, .value=0x86, .type=IO_READ},
        {.addr=0xd34c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00be, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xe663, .a=0x3d, .x=0x5c, .y=0x7c, .sp=0x25, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0xc1}, {.addr=0xe663, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe664, .a=0xfe, .x=0x5c, .y=0x7c, .sp=0x25, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0xc1}, {.addr=0xe663, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe663, .value=0x86, .type=IO_READ},
        {.addr=0xe664, .value=DUMMY, .type=IO_READ},
        {.addr=0x005c, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xfd69, .a=0xae, .x=0x5c, .y=0x07, .sp=0xc7, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0xd9}, {.addr=0xfd69, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xfd6a, .a=0x88, .x=0x5c, .y=0x07, .sp=0xc7, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0xd9}, {.addr=0xfd69, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xfd69, .value=0x86, .type=IO_READ},
        {.addr=0xfd6a, .value=DUMMY, .type=IO_READ},
        {.addr=0x005c, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x4879, .a=0x8b, .x=0x82, .y=0xf6, .sp=0x98, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0xa6}, {.addr=0x4879, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x487a, .a=0x32, .x=0x82, .y=0xf6, .sp=0x98, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0xa6}, {.addr=0x4879, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4879, .value=0x86, .type=IO_READ},
        {.addr=0x487a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xe8d4, .a=0x89, .x=0x93, .y=0xca, .sp=0x65, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x57}, {.addr=0xe8d4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe8d5, .a=0xe0, .x=0x93, .y=0xca, .sp=0x65, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x57}, {.addr=0xe8d4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe8d4, .value=0x86, .type=IO_READ},
        {.addr=0xe8d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x720c, .a=0x68, .x=0xf6, .y=0xd1, .sp=0x0a, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0xbf}, {.addr=0x720c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x720d, .a=0x27, .x=0xf6, .y=0xd1, .sp=0x0a, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xbf}, {.addr=0x720c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x720c, .value=0x86, .type=IO_READ},
        {.addr=0x720d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x5809, .a=0xf2, .x=0xeb, .y=0xe5, .sp=0x5a, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0xcc}, {.addr=0x5809, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x580a, .a=0xbf, .x=0xeb, .y=0xe5, .sp=0x5a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xcc}, {.addr=0x5809, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5809, .value=0x86, .type=IO_READ},
        {.addr=0x580a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xaab6, .a=0x50, .x=0x5f, .y=0xfa, .sp=0x21, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x04}, {.addr=0xaab6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xaab7, .a=0x55, .x=0x5f, .y=0xfa, .sp=0x21, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x04}, {.addr=0xaab6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xaab6, .value=0x86, .type=IO_READ},
        {.addr=0xaab7, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x300f, .a=0xbb, .x=0x7f, .y=0x10, .sp=0x99, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x39}, {.addr=0x300f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3010, .a=0xf4, .x=0x7f, .y=0x10, .sp=0x99, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x39}, {.addr=0x300f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x300f, .value=0x86, .type=IO_READ},
        {.addr=0x3010, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xcb4b, .a=0x0b, .x=0x49, .y=0x40, .sp=0x25, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x91}, {.addr=0xcb4b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcb4c, .a=0x9d, .x=0x49, .y=0x40, .sp=0x25, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x91}, {.addr=0xcb4b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcb4b, .value=0x86, .type=IO_READ},
        {.addr=0xcb4c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xf6ae, .a=0x81, .x=0x60, .y=0x32, .sp=0xda, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0060, .value=0x18}, {.addr=0xf6ae, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf6af, .a=0x9a, .x=0x60, .y=0x32, .sp=0xda, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0060, .value=0x18}, {.addr=0xf6ae, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf6ae, .value=0x86, .type=IO_READ},
        {.addr=0xf6af, .value=DUMMY, .type=IO_READ},
        {.addr=0x0060, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x7b9a, .a=0x19, .x=0x7d, .y=0xd4, .sp=0x89, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x19}, {.addr=0x7b9a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7b9b, .a=0x33, .x=0x7d, .y=0xd4, .sp=0x89, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x19}, {.addr=0x7b9a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7b9a, .value=0x86, .type=IO_READ},
        {.addr=0x7b9b, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x745d, .a=0x40, .x=0xa7, .y=0x28, .sp=0xc8, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0x89}, {.addr=0x745d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x745e, .a=0xca, .x=0xa7, .y=0x28, .sp=0xc8, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0x89}, {.addr=0x745d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x745d, .value=0x86, .type=IO_READ},
        {.addr=0x745e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a7, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xe269, .a=0x8e, .x=0x3f, .y=0x1e, .sp=0x1b, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x09}, {.addr=0xe269, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe26a, .a=0x97, .x=0x3f, .y=0x1e, .sp=0x1b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x09}, {.addr=0xe269, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe269, .value=0x86, .type=IO_READ},
        {.addr=0xe26a, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x45bd, .a=0xa8, .x=0x77, .y=0x92, .sp=0xaa, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x2d}, {.addr=0x45bd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x45be, .a=0xd6, .x=0x77, .y=0x92, .sp=0xaa, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x2d}, {.addr=0x45bd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x45bd, .value=0x86, .type=IO_READ},
        {.addr=0x45be, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x98cd, .a=0x4a, .x=0x61, .y=0x0e, .sp=0xc1, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x3e}, {.addr=0x98cd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x98ce, .a=0x89, .x=0x61, .y=0x0e, .sp=0xc1, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x3e}, {.addr=0x98cd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x98cd, .value=0x86, .type=IO_READ},
        {.addr=0x98ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xdc02, .a=0x7d, .x=0x98, .y=0x89, .sp=0xca, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x56}, {.addr=0xdc02, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xdc03, .a=0xd4, .x=0x98, .y=0x89, .sp=0xca, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x56}, {.addr=0xdc02, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xdc02, .value=0x86, .type=IO_READ},
        {.addr=0xdc03, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x7e7b, .a=0x57, .x=0x70, .y=0x9c, .sp=0x93, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0xca}, {.addr=0x7e7b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7e7c, .a=0x21, .x=0x70, .y=0x9c, .sp=0x93, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0xca}, {.addr=0x7e7b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7e7b, .value=0x86, .type=IO_READ},
        {.addr=0x7e7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xcef1, .a=0x76, .x=0x25, .y=0x44, .sp=0x40, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x4c}, {.addr=0xcef1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcef2, .a=0xc2, .x=0x25, .y=0x44, .sp=0x40, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x4c}, {.addr=0xcef1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcef1, .value=0x86, .type=IO_READ},
        {.addr=0xcef2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x8afd, .a=0x04, .x=0x4d, .y=0x6f, .sp=0xf2, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0xa7}, {.addr=0x8afd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8afe, .a=0xac, .x=0x4d, .y=0x6f, .sp=0xf2, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xa7}, {.addr=0x8afd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8afd, .value=0x86, .type=IO_READ},
        {.addr=0x8afe, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x348d, .a=0x80, .x=0xa4, .y=0x81, .sp=0x37, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0xa5}, {.addr=0x348d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x348e, .a=0x26, .x=0xa4, .y=0x81, .sp=0x37, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xa5}, {.addr=0x348d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x348d, .value=0x86, .type=IO_READ},
        {.addr=0x348e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x8146, .a=0x13, .x=0xe4, .y=0x13, .sp=0x71, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0xfc}, {.addr=0x8146, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8147, .a=0x0f, .x=0xe4, .y=0x13, .sp=0x71, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0xfc}, {.addr=0x8146, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8146, .value=0x86, .type=IO_READ},
        {.addr=0x8147, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e4, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x2e41, .a=0x8d, .x=0x84, .y=0x28, .sp=0xd9, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0x6a}, {.addr=0x2e41, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2e42, .a=0xf8, .x=0x84, .y=0x28, .sp=0xd9, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0x6a}, {.addr=0x2e41, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2e41, .value=0x86, .type=IO_READ},
        {.addr=0x2e42, .value=DUMMY, .type=IO_READ},
        {.addr=0x0084, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x4d53, .a=0x62, .x=0x43, .y=0x76, .sp=0x71, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0xb1}, {.addr=0x4d53, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4d54, .a=0x13, .x=0x43, .y=0x76, .sp=0x71, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0xb1}, {.addr=0x4d53, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4d53, .value=0x86, .type=IO_READ},
        {.addr=0x4d54, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xaebd, .a=0x45, .x=0xd0, .y=0x99, .sp=0xf8, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0xd8}, {.addr=0xaebd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xaebe, .a=0x1e, .x=0xd0, .y=0x99, .sp=0xf8, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0xd8}, {.addr=0xaebd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xaebd, .value=0x86, .type=IO_READ},
        {.addr=0xaebe, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x55b4, .a=0xbb, .x=0x28, .y=0x08, .sp=0xce, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0xa2}, {.addr=0x55b4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x55b5, .a=0x5e, .x=0x28, .y=0x08, .sp=0xce, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xa2}, {.addr=0x55b4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x55b4, .value=0x86, .type=IO_READ},
        {.addr=0x55b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x77ea, .a=0x8d, .x=0x0f, .y=0x4c, .sp=0x57, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x63}, {.addr=0x77ea, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x77eb, .a=0xf0, .x=0x0f, .y=0x4c, .sp=0x57, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x63}, {.addr=0x77ea, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x77ea, .value=0x86, .type=IO_READ},
        {.addr=0x77eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x59ae, .a=0x34, .x=0xa6, .y=0x3a, .sp=0x79, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0xde}, {.addr=0x59ae, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x59af, .a=0x13, .x=0xa6, .y=0x3a, .sp=0x79, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0xde}, {.addr=0x59ae, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x59ae, .value=0x86, .type=IO_READ},
        {.addr=0x59af, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a6, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x1ac8, .a=0x48, .x=0x8f, .y=0x7e, .sp=0x4e, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0xf7}, {.addr=0x1ac8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1ac9, .a=0x40, .x=0x8f, .y=0x7e, .sp=0x4e, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0xf7}, {.addr=0x1ac8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1ac8, .value=0x86, .type=IO_READ},
        {.addr=0x1ac9, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x772f, .a=0xcf, .x=0x21, .y=0xda, .sp=0x7a, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xea}, {.addr=0x772f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7730, .a=0xb9, .x=0x21, .y=0xda, .sp=0x7a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xea}, {.addr=0x772f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x772f, .value=0x86, .type=IO_READ},
        {.addr=0x7730, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x26c8, .a=0x77, .x=0xa0, .y=0xa4, .sp=0x4f, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0x7b}, {.addr=0x26c8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x26c9, .a=0xf3, .x=0xa0, .y=0xa4, .sp=0x4f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0x7b}, {.addr=0x26c8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x26c8, .value=0x86, .type=IO_READ},
        {.addr=0x26c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a0, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x33aa, .a=0xec, .x=0x7b, .y=0xe6, .sp=0x12, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0x2e}, {.addr=0x33aa, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x33ab, .a=0x1b, .x=0x7b, .y=0xe6, .sp=0x12, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0x2e}, {.addr=0x33aa, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x33aa, .value=0x86, .type=IO_READ},
        {.addr=0x33ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x007b, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xb1bc, .a=0x58, .x=0x40, .y=0x81, .sp=0x3a, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x23}, {.addr=0xb1bc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb1bd, .a=0x7c, .x=0x40, .y=0x81, .sp=0x3a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x23}, {.addr=0xb1bc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb1bc, .value=0x86, .type=IO_READ},
        {.addr=0xb1bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xf820, .a=0x9a, .x=0x41, .y=0xa0, .sp=0x76, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x77}, {.addr=0xf820, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf821, .a=0x11, .x=0x41, .y=0xa0, .sp=0x76, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x77}, {.addr=0xf820, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf820, .value=0x86, .type=IO_READ},
        {.addr=0xf821, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xecb8, .a=0xb3, .x=0xee, .y=0x42, .sp=0x8b, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x17}, {.addr=0xecb8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xecb9, .a=0xcb, .x=0xee, .y=0x42, .sp=0x8b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x17}, {.addr=0xecb8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xecb8, .value=0x86, .type=IO_READ},
        {.addr=0xecb9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xd3e6, .a=0x77, .x=0x1a, .y=0xe0, .sp=0x0d, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0xf0}, {.addr=0xd3e6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd3e7, .a=0x67, .x=0x1a, .y=0xe0, .sp=0x0d, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0xf0}, {.addr=0xd3e6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd3e6, .value=0x86, .type=IO_READ},
        {.addr=0xd3e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x8953, .a=0x84, .x=0xaf, .y=0xa2, .sp=0x36, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0xd7}, {.addr=0x8953, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8954, .a=0x5b, .x=0xaf, .y=0xa2, .sp=0x36, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0xd7}, {.addr=0x8953, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8953, .value=0x86, .type=IO_READ},
        {.addr=0x8954, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x5e42, .a=0xbc, .x=0x1b, .y=0xc2, .sp=0xd6, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x001b, .value=0x33}, {.addr=0x5e42, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5e43, .a=0xef, .x=0x1b, .y=0xc2, .sp=0xd6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x001b, .value=0x33}, {.addr=0x5e42, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5e42, .value=0x86, .type=IO_READ},
        {.addr=0x5e43, .value=DUMMY, .type=IO_READ},
        {.addr=0x001b, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x8075, .a=0xc8, .x=0xff, .y=0x97, .sp=0x9f, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x92}, {.addr=0x8075, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8076, .a=0x5b, .x=0xff, .y=0x97, .sp=0x9f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x92}, {.addr=0x8075, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8075, .value=0x86, .type=IO_READ},
        {.addr=0x8076, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x9894, .a=0x33, .x=0x3c, .y=0xf4, .sp=0x67, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x2f}, {.addr=0x9894, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9895, .a=0x63, .x=0x3c, .y=0xf4, .sp=0x67, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x2f}, {.addr=0x9894, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9894, .value=0x86, .type=IO_READ},
        {.addr=0x9895, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xc9ad, .a=0x2d, .x=0xb2, .y=0xd5, .sp=0x0b, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x00b2, .value=0xa7}, {.addr=0xc9ad, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc9ae, .a=0xd4, .x=0xb2, .y=0xd5, .sp=0x0b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00b2, .value=0xa7}, {.addr=0xc9ad, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc9ad, .value=0x86, .type=IO_READ},
        {.addr=0xc9ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b2, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xa6b2, .a=0x4c, .x=0x99, .y=0x83, .sp=0x13, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x03}, {.addr=0xa6b2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa6b3, .a=0x4f, .x=0x99, .y=0x83, .sp=0x13, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x03}, {.addr=0xa6b2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa6b2, .value=0x86, .type=IO_READ},
        {.addr=0xa6b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x172b, .a=0x0d, .x=0x59, .y=0x5e, .sp=0x96, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0xc1}, {.addr=0x172b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x172c, .a=0xce, .x=0x59, .y=0x5e, .sp=0x96, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0xc1}, {.addr=0x172b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x172b, .value=0x86, .type=IO_READ},
        {.addr=0x172c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0059, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x842d, .a=0x2a, .x=0x46, .y=0xb3, .sp=0xcb, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0xdf}, {.addr=0x842d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x842e, .a=0x0a, .x=0x46, .y=0xb3, .sp=0xcb, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0xdf}, {.addr=0x842d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x842d, .value=0x86, .type=IO_READ},
        {.addr=0x842e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0046, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x91b9, .a=0x39, .x=0x89, .y=0xe4, .sp=0x8c, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0xef}, {.addr=0x91b9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x91ba, .a=0x28, .x=0x89, .y=0xe4, .sp=0x8c, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xef}, {.addr=0x91b9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x91b9, .value=0x86, .type=IO_READ},
        {.addr=0x91ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x9377, .a=0x7a, .x=0x34, .y=0x17, .sp=0xe5, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0034, .value=0xd3}, {.addr=0x9377, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9378, .a=0x4e, .x=0x34, .y=0x17, .sp=0xe5, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0034, .value=0xd3}, {.addr=0x9377, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9377, .value=0x86, .type=IO_READ},
        {.addr=0x9378, .value=DUMMY, .type=IO_READ},
        {.addr=0x0034, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x6b44, .a=0x11, .x=0x2f, .y=0x0f, .sp=0xc6, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x07}, {.addr=0x6b44, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6b45, .a=0x18, .x=0x2f, .y=0x0f, .sp=0xc6, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x07}, {.addr=0x6b44, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6b44, .value=0x86, .type=IO_READ},
        {.addr=0x6b45, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x3c7b, .a=0x76, .x=0x93, .y=0x1e, .sp=0xb1, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x43}, {.addr=0x3c7b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3c7c, .a=0xb9, .x=0x93, .y=0x1e, .sp=0xb1, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x43}, {.addr=0x3c7b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3c7b, .value=0x86, .type=IO_READ},
        {.addr=0x3c7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x1aed, .a=0x80, .x=0xb8, .y=0x36, .sp=0xdf, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x3b}, {.addr=0x1aed, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1aee, .a=0xbb, .x=0xb8, .y=0x36, .sp=0xdf, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x3b}, {.addr=0x1aed, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1aed, .value=0x86, .type=IO_READ},
        {.addr=0x1aee, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xce46, .a=0x87, .x=0xdf, .y=0x81, .sp=0x2a, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0x62}, {.addr=0xce46, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xce47, .a=0xea, .x=0xdf, .y=0x81, .sp=0x2a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0x62}, {.addr=0xce46, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xce46, .value=0x86, .type=IO_READ},
        {.addr=0xce47, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x522d, .a=0xa9, .x=0x7f, .y=0x2f, .sp=0x08, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0xc9}, {.addr=0x522d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x522e, .a=0x72, .x=0x7f, .y=0x2f, .sp=0x08, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0xc9}, {.addr=0x522d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x522d, .value=0x86, .type=IO_READ},
        {.addr=0x522e, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x3352, .a=0xbf, .x=0x08, .y=0xc8, .sp=0x2b, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0008, .value=0x13}, {.addr=0x3352, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3353, .a=0xd3, .x=0x08, .y=0xc8, .sp=0x2b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0008, .value=0x13}, {.addr=0x3352, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3352, .value=0x86, .type=IO_READ},
        {.addr=0x3353, .value=DUMMY, .type=IO_READ},
        {.addr=0x0008, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x3543, .a=0x46, .x=0x9f, .y=0x6d, .sp=0x6b, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0x46}, {.addr=0x3543, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3544, .a=0x8c, .x=0x9f, .y=0x6d, .sp=0x6b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0x46}, {.addr=0x3543, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3543, .value=0x86, .type=IO_READ},
        {.addr=0x3544, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xd306, .a=0x63, .x=0x3a, .y=0x90, .sp=0x28, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0xaa}, {.addr=0xd306, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd307, .a=0x0e, .x=0x3a, .y=0x90, .sp=0x28, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0xaa}, {.addr=0xd306, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd306, .value=0x86, .type=IO_READ},
        {.addr=0xd307, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x7b3e, .a=0xe1, .x=0xaa, .y=0xe3, .sp=0xc8, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x00aa, .value=0x4a}, {.addr=0x7b3e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7b3f, .a=0x2b, .x=0xaa, .y=0xe3, .sp=0xc8, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00aa, .value=0x4a}, {.addr=0x7b3e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7b3e, .value=0x86, .type=IO_READ},
        {.addr=0x7b3f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00aa, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xafa2, .a=0xc9, .x=0x59, .y=0xad, .sp=0xec, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0xc0}, {.addr=0xafa2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xafa3, .a=0x89, .x=0x59, .y=0xad, .sp=0xec, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0xc0}, {.addr=0xafa2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xafa2, .value=0x86, .type=IO_READ},
        {.addr=0xafa3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x8c8c, .a=0x22, .x=0x9c, .y=0xf7, .sp=0x0a, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0x78}, {.addr=0x8c8c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8c8d, .a=0x9a, .x=0x9c, .y=0xf7, .sp=0x0a, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0x78}, {.addr=0x8c8c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8c8c, .value=0x86, .type=IO_READ},
        {.addr=0x8c8d, .value=DUMMY, .type=IO_READ},
        {.addr=0x009c, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xb8e9, .a=0xd6, .x=0x08, .y=0xae, .sp=0x1f, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0008, .value=0xe1}, {.addr=0xb8e9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb8ea, .a=0xb8, .x=0x08, .y=0xae, .sp=0x1f, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0008, .value=0xe1}, {.addr=0xb8e9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb8e9, .value=0x86, .type=IO_READ},
        {.addr=0xb8ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x0008, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x0bfd, .a=0x9c, .x=0x8f, .y=0xcf, .sp=0x6b, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x31}, {.addr=0x0bfd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0bfe, .a=0xcd, .x=0x8f, .y=0xcf, .sp=0x6b, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x31}, {.addr=0x0bfd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0bfd, .value=0x86, .type=IO_READ},
        {.addr=0x0bfe, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x095e, .a=0xc5, .x=0xdd, .y=0x2c, .sp=0x16, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x46}, {.addr=0x095e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x095f, .a=0x0b, .x=0xdd, .y=0x2c, .sp=0x16, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x46}, {.addr=0x095e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x095e, .value=0x86, .type=IO_READ},
        {.addr=0x095f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x4e34, .a=0xc8, .x=0xe0, .y=0xd4, .sp=0xbe, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x00e0, .value=0x55}, {.addr=0x4e34, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4e35, .a=0x1d, .x=0xe0, .y=0xd4, .sp=0xbe, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00e0, .value=0x55}, {.addr=0x4e34, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4e34, .value=0x86, .type=IO_READ},
        {.addr=0x4e35, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e0, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x31ec, .a=0xb6, .x=0x9c, .y=0xc9, .sp=0x70, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x90}, {.addr=0x31ec, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x31ed, .a=0x46, .x=0x9c, .y=0xc9, .sp=0x70, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x90}, {.addr=0x31ec, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x31ec, .value=0x86, .type=IO_READ},
        {.addr=0x31ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xeea4, .a=0x7f, .x=0x5c, .y=0x78, .sp=0x35, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0x32}, {.addr=0xeea4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xeea5, .a=0xb2, .x=0x5c, .y=0x78, .sp=0x35, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0x32}, {.addr=0xeea4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xeea4, .value=0x86, .type=IO_READ},
        {.addr=0xeea5, .value=DUMMY, .type=IO_READ},
        {.addr=0x005c, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x73ed, .a=0x05, .x=0x87, .y=0xd4, .sp=0x59, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x30}, {.addr=0x73ed, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x73ee, .a=0x36, .x=0x87, .y=0xd4, .sp=0x59, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x30}, {.addr=0x73ed, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x73ed, .value=0x86, .type=IO_READ},
        {.addr=0x73ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xa97c, .a=0xfe, .x=0xb4, .y=0xbd, .sp=0xc2, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0xbb}, {.addr=0xa97c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa97d, .a=0xba, .x=0xb4, .y=0xbd, .sp=0xc2, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xbb}, {.addr=0xa97c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa97c, .value=0x86, .type=IO_READ},
        {.addr=0xa97d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x049d, .a=0x98, .x=0x87, .y=0x49, .sp=0xaa, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0x5c}, {.addr=0x049d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x049e, .a=0xf4, .x=0x87, .y=0x49, .sp=0xaa, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0x5c}, {.addr=0x049d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x049d, .value=0x86, .type=IO_READ},
        {.addr=0x049e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x014f, .a=0x08, .x=0xd2, .y=0xaa, .sp=0x23, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x86}, {.addr=0x01d2, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x0150, .a=0xfd, .x=0xd2, .y=0xaa, .sp=0x23, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x86}, {.addr=0x01d2, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x014f, .value=0x86, .type=IO_READ},
        {.addr=0x0150, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x96af, .a=0x3a, .x=0x23, .y=0x80, .sp=0x28, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x35}, {.addr=0x96af, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x96b0, .a=0x70, .x=0x23, .y=0x80, .sp=0x28, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x35}, {.addr=0x96af, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x96af, .value=0x86, .type=IO_READ},
        {.addr=0x96b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0100) {
    const struct CPU_State initial_cpu = {.pc=0xff92, .a=0xdf, .x=0xab, .y=0x9e, .sp=0x0a, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0x3b}, {.addr=0xff92, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xff93, .a=0x1a, .x=0xab, .y=0x9e, .sp=0x0a, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0x3b}, {.addr=0xff92, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xff92, .value=0x86, .type=IO_READ},
        {.addr=0xff93, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0101) {
    const struct CPU_State initial_cpu = {.pc=0x0fe4, .a=0x87, .x=0xb3, .y=0x70, .sp=0x51, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x63}, {.addr=0x0fe4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0fe5, .a=0xea, .x=0xb3, .y=0x70, .sp=0x51, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x63}, {.addr=0x0fe4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0fe4, .value=0x86, .type=IO_READ},
        {.addr=0x0fe5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0102) {
    const struct CPU_State initial_cpu = {.pc=0x4a43, .a=0xbb, .x=0xe3, .y=0x91, .sp=0xdd, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xe0}, {.addr=0x4a43, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4a44, .a=0x9b, .x=0xe3, .y=0x91, .sp=0xdd, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xe0}, {.addr=0x4a43, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4a43, .value=0x86, .type=IO_READ},
        {.addr=0x4a44, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0103) {
    const struct CPU_State initial_cpu = {.pc=0xf492, .a=0x14, .x=0x93, .y=0x98, .sp=0xb0, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0xd8}, {.addr=0xf492, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf493, .a=0xec, .x=0x93, .y=0x98, .sp=0xb0, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xd8}, {.addr=0xf492, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf492, .value=0x86, .type=IO_READ},
        {.addr=0xf493, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0104) {
    const struct CPU_State initial_cpu = {.pc=0x35bc, .a=0xd2, .x=0xf2, .y=0x37, .sp=0x7b, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x4b}, {.addr=0x35bc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x35bd, .a=0x1d, .x=0xf2, .y=0x37, .sp=0x7b, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x4b}, {.addr=0x35bc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x35bc, .value=0x86, .type=IO_READ},
        {.addr=0x35bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0105) {
    const struct CPU_State initial_cpu = {.pc=0x2e59, .a=0xd3, .x=0x84, .y=0x7b, .sp=0xf0, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0xa7}, {.addr=0x2e59, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2e5a, .a=0x7a, .x=0x84, .y=0x7b, .sp=0xf0, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xa7}, {.addr=0x2e59, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2e59, .value=0x86, .type=IO_READ},
        {.addr=0x2e5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0106) {
    const struct CPU_State initial_cpu = {.pc=0xb3cc, .a=0xb6, .x=0x74, .y=0x2a, .sp=0x4f, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0xbd}, {.addr=0xb3cc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb3cd, .a=0x74, .x=0x74, .y=0x2a, .sp=0x4f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xbd}, {.addr=0xb3cc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb3cc, .value=0x86, .type=IO_READ},
        {.addr=0xb3cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0107) {
    const struct CPU_State initial_cpu = {.pc=0x7fee, .a=0x7f, .x=0xcb, .y=0xde, .sp=0x2d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0xa3}, {.addr=0x7fee, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7fef, .a=0x23, .x=0xcb, .y=0xde, .sp=0x2d, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0xa3}, {.addr=0x7fee, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7fee, .value=0x86, .type=IO_READ},
        {.addr=0x7fef, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0108) {
    const struct CPU_State initial_cpu = {.pc=0x271d, .a=0xa8, .x=0x27, .y=0x5f, .sp=0x73, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0x43}, {.addr=0x271d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x271e, .a=0xeb, .x=0x27, .y=0x5f, .sp=0x73, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0x43}, {.addr=0x271d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x271d, .value=0x86, .type=IO_READ},
        {.addr=0x271e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0027, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0109) {
    const struct CPU_State initial_cpu = {.pc=0x2c88, .a=0x78, .x=0xe0, .y=0x78, .sp=0x3d, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x00e0, .value=0xb0}, {.addr=0x2c88, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2c89, .a=0x28, .x=0xe0, .y=0x78, .sp=0x3d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00e0, .value=0xb0}, {.addr=0x2c88, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2c88, .value=0x86, .type=IO_READ},
        {.addr=0x2c89, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e0, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_010A) {
    const struct CPU_State initial_cpu = {.pc=0x7956, .a=0xea, .x=0xc8, .y=0x28, .sp=0xe1, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x92}, {.addr=0x7956, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7957, .a=0x7c, .x=0xc8, .y=0x28, .sp=0xe1, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x92}, {.addr=0x7956, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7956, .value=0x86, .type=IO_READ},
        {.addr=0x7957, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_010B) {
    const struct CPU_State initial_cpu = {.pc=0x1a01, .a=0x94, .x=0x6a, .y=0x58, .sp=0x0b, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0x3e}, {.addr=0x1a01, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1a02, .a=0xd2, .x=0x6a, .y=0x58, .sp=0x0b, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0x3e}, {.addr=0x1a01, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1a01, .value=0x86, .type=IO_READ},
        {.addr=0x1a02, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_010D) {
    const struct CPU_State initial_cpu = {.pc=0xea16, .a=0x73, .x=0xdd, .y=0x14, .sp=0x72, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x55}, {.addr=0xea16, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xea17, .a=0xc8, .x=0xdd, .y=0x14, .sp=0x72, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x55}, {.addr=0xea16, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xea16, .value=0x86, .type=IO_READ},
        {.addr=0xea17, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_010E) {
    const struct CPU_State initial_cpu = {.pc=0xb179, .a=0x74, .x=0x1f, .y=0x73, .sp=0x42, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x001f, .value=0x8d}, {.addr=0xb179, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb17a, .a=0x01, .x=0x1f, .y=0x73, .sp=0x42, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x001f, .value=0x8d}, {.addr=0xb179, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb179, .value=0x86, .type=IO_READ},
        {.addr=0xb17a, .value=DUMMY, .type=IO_READ},
        {.addr=0x001f, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_010F) {
    const struct CPU_State initial_cpu = {.pc=0x8740, .a=0x5d, .x=0x76, .y=0x04, .sp=0x5a, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x62}, {.addr=0x8740, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8741, .a=0xc0, .x=0x76, .y=0x04, .sp=0x5a, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x62}, {.addr=0x8740, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8740, .value=0x86, .type=IO_READ},
        {.addr=0x8741, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0110) {
    const struct CPU_State initial_cpu = {.pc=0xbbad, .a=0xfc, .x=0x65, .y=0x6a, .sp=0x02, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x94}, {.addr=0xbbad, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xbbae, .a=0x91, .x=0x65, .y=0x6a, .sp=0x02, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x94}, {.addr=0xbbad, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xbbad, .value=0x86, .type=IO_READ},
        {.addr=0xbbae, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0111) {
    const struct CPU_State initial_cpu = {.pc=0xdc05, .a=0xb9, .x=0x44, .y=0xfe, .sp=0x35, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0044, .value=0xca}, {.addr=0xdc05, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xdc06, .a=0x83, .x=0x44, .y=0xfe, .sp=0x35, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0044, .value=0xca}, {.addr=0xdc05, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xdc05, .value=0x86, .type=IO_READ},
        {.addr=0xdc06, .value=DUMMY, .type=IO_READ},
        {.addr=0x0044, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0112) {
    const struct CPU_State initial_cpu = {.pc=0x3db8, .a=0x84, .x=0x1c, .y=0x0d, .sp=0x37, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x06}, {.addr=0x3db8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3db9, .a=0x8b, .x=0x1c, .y=0x0d, .sp=0x37, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x06}, {.addr=0x3db8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3db8, .value=0x86, .type=IO_READ},
        {.addr=0x3db9, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0113) {
    const struct CPU_State initial_cpu = {.pc=0x26aa, .a=0x4c, .x=0xe8, .y=0xaa, .sp=0x03, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0xbd}, {.addr=0x26aa, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x26ab, .a=0x0a, .x=0xe8, .y=0xaa, .sp=0x03, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0xbd}, {.addr=0x26aa, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x26aa, .value=0x86, .type=IO_READ},
        {.addr=0x26ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0114) {
    const struct CPU_State initial_cpu = {.pc=0x5f01, .a=0x34, .x=0x1f, .y=0xa5, .sp=0x15, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xb2}, {.addr=0x5f01, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5f02, .a=0xe6, .x=0x1f, .y=0xa5, .sp=0x15, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xb2}, {.addr=0x5f01, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5f01, .value=0x86, .type=IO_READ},
        {.addr=0x5f02, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0115) {
    const struct CPU_State initial_cpu = {.pc=0x84ac, .a=0xac, .x=0x8a, .y=0xe0, .sp=0xd0, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0xc2}, {.addr=0x84ac, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x84ad, .a=0x6e, .x=0x8a, .y=0xe0, .sp=0xd0, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0xc2}, {.addr=0x84ac, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x84ac, .value=0x86, .type=IO_READ},
        {.addr=0x84ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0116) {
    const struct CPU_State initial_cpu = {.pc=0xa136, .a=0xe2, .x=0x18, .y=0x54, .sp=0xc0, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x68}, {.addr=0xa136, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa137, .a=0x4a, .x=0x18, .y=0x54, .sp=0xc0, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x68}, {.addr=0xa136, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa136, .value=0x86, .type=IO_READ},
        {.addr=0xa137, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0118) {
    const struct CPU_State initial_cpu = {.pc=0x1b23, .a=0x79, .x=0xcf, .y=0x5d, .sp=0xdd, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0xe2}, {.addr=0x1b23, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1b24, .a=0x5b, .x=0xcf, .y=0x5d, .sp=0xdd, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0xe2}, {.addr=0x1b23, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1b23, .value=0x86, .type=IO_READ},
        {.addr=0x1b24, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0119) {
    const struct CPU_State initial_cpu = {.pc=0x9d64, .a=0x7f, .x=0x1d, .y=0xdb, .sp=0xf2, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0xaf}, {.addr=0x9d64, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9d65, .a=0x2f, .x=0x1d, .y=0xdb, .sp=0xf2, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0xaf}, {.addr=0x9d64, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9d64, .value=0x86, .type=IO_READ},
        {.addr=0x9d65, .value=DUMMY, .type=IO_READ},
        {.addr=0x001d, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_011A) {
    const struct CPU_State initial_cpu = {.pc=0x55f3, .a=0x56, .x=0x8d, .y=0x53, .sp=0x56, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x008d, .value=0x07}, {.addr=0x55f3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x55f4, .a=0x5d, .x=0x8d, .y=0x53, .sp=0x56, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x008d, .value=0x07}, {.addr=0x55f3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x55f3, .value=0x86, .type=IO_READ},
        {.addr=0x55f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x008d, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_011B) {
    const struct CPU_State initial_cpu = {.pc=0x1579, .a=0x84, .x=0x60, .y=0x4f, .sp=0xe7, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0060, .value=0xc6}, {.addr=0x1579, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x157a, .a=0x4a, .x=0x60, .y=0x4f, .sp=0xe7, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0060, .value=0xc6}, {.addr=0x1579, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1579, .value=0x86, .type=IO_READ},
        {.addr=0x157a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0060, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_011C) {
    const struct CPU_State initial_cpu = {.pc=0x345d, .a=0x77, .x=0x94, .y=0x04, .sp=0x07, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0xff}, {.addr=0x345d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x345e, .a=0x76, .x=0x94, .y=0x04, .sp=0x07, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0xff}, {.addr=0x345d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x345d, .value=0x86, .type=IO_READ},
        {.addr=0x345e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_011D) {
    const struct CPU_State initial_cpu = {.pc=0xa112, .a=0xe4, .x=0xb9, .y=0x83, .sp=0xd6, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x29}, {.addr=0xa112, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa113, .a=0x0d, .x=0xb9, .y=0x83, .sp=0xd6, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x29}, {.addr=0xa112, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa112, .value=0x86, .type=IO_READ},
        {.addr=0xa113, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_011E) {
    const struct CPU_State initial_cpu = {.pc=0x51db, .a=0x63, .x=0x50, .y=0xc2, .sp=0xe4, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0x20}, {.addr=0x51db, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x51dc, .a=0x84, .x=0x50, .y=0xc2, .sp=0xe4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0x20}, {.addr=0x51db, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x51db, .value=0x86, .type=IO_READ},
        {.addr=0x51dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_011F) {
    const struct CPU_State initial_cpu = {.pc=0x8de5, .a=0xbc, .x=0x2a, .y=0x35, .sp=0x6b, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x18}, {.addr=0x8de5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8de6, .a=0xd5, .x=0x2a, .y=0x35, .sp=0x6b, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x18}, {.addr=0x8de5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8de5, .value=0x86, .type=IO_READ},
        {.addr=0x8de6, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0120) {
    const struct CPU_State initial_cpu = {.pc=0xf415, .a=0x8c, .x=0x62, .y=0xdc, .sp=0xf1, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0xcc}, {.addr=0xf415, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf416, .a=0x59, .x=0x62, .y=0xdc, .sp=0xf1, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0xcc}, {.addr=0xf415, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf415, .value=0x86, .type=IO_READ},
        {.addr=0xf416, .value=DUMMY, .type=IO_READ},
        {.addr=0x0062, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0121) {
    const struct CPU_State initial_cpu = {.pc=0x90bf, .a=0xb4, .x=0x60, .y=0xba, .sp=0x55, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0xb6}, {.addr=0x90bf, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x90c0, .a=0x6b, .x=0x60, .y=0xba, .sp=0x55, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0xb6}, {.addr=0x90bf, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x90bf, .value=0x86, .type=IO_READ},
        {.addr=0x90c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0122) {
    const struct CPU_State initial_cpu = {.pc=0xee7f, .a=0xd2, .x=0xd1, .y=0xd8, .sp=0xbd, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0xa1}, {.addr=0xee7f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xee80, .a=0x73, .x=0xd1, .y=0xd8, .sp=0xbd, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xa1}, {.addr=0xee7f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xee7f, .value=0x86, .type=IO_READ},
        {.addr=0xee80, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0123) {
    const struct CPU_State initial_cpu = {.pc=0xfe3c, .a=0x55, .x=0x3e, .y=0xef, .sp=0xc0, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x003e, .value=0x7d}, {.addr=0xfe3c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xfe3d, .a=0xd3, .x=0x3e, .y=0xef, .sp=0xc0, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x003e, .value=0x7d}, {.addr=0xfe3c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xfe3c, .value=0x86, .type=IO_READ},
        {.addr=0xfe3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x003e, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0124) {
    const struct CPU_State initial_cpu = {.pc=0x3418, .a=0x76, .x=0x84, .y=0x1e, .sp=0x9b, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0xaa}, {.addr=0x3418, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3419, .a=0x21, .x=0x84, .y=0x1e, .sp=0x9b, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0xaa}, {.addr=0x3418, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3418, .value=0x86, .type=IO_READ},
        {.addr=0x3419, .value=DUMMY, .type=IO_READ},
        {.addr=0x0084, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0125) {
    const struct CPU_State initial_cpu = {.pc=0x1021, .a=0x95, .x=0x18, .y=0x3c, .sp=0xf1, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x0f}, {.addr=0x1021, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1022, .a=0xa5, .x=0x18, .y=0x3c, .sp=0xf1, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x0f}, {.addr=0x1021, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1021, .value=0x86, .type=IO_READ},
        {.addr=0x1022, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0126) {
    const struct CPU_State initial_cpu = {.pc=0xd905, .a=0xba, .x=0x8f, .y=0x09, .sp=0x38, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x29}, {.addr=0xd905, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd906, .a=0xe3, .x=0x8f, .y=0x09, .sp=0x38, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x29}, {.addr=0xd905, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd905, .value=0x86, .type=IO_READ},
        {.addr=0xd906, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0127) {
    const struct CPU_State initial_cpu = {.pc=0x880c, .a=0x43, .x=0x81, .y=0x8a, .sp=0x4d, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x8b}, {.addr=0x880c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x880d, .a=0xcf, .x=0x81, .y=0x8a, .sp=0x4d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x8b}, {.addr=0x880c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x880c, .value=0x86, .type=IO_READ},
        {.addr=0x880d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0128) {
    const struct CPU_State initial_cpu = {.pc=0x9428, .a=0x8b, .x=0xe6, .y=0x99, .sp=0xc4, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0x92}, {.addr=0x9428, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9429, .a=0x1d, .x=0xe6, .y=0x99, .sp=0xc4, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0x92}, {.addr=0x9428, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9428, .value=0x86, .type=IO_READ},
        {.addr=0x9429, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e6, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0129) {
    const struct CPU_State initial_cpu = {.pc=0x1301, .a=0x11, .x=0x24, .y=0x3f, .sp=0xd2, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x5a}, {.addr=0x1301, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1302, .a=0x6c, .x=0x24, .y=0x3f, .sp=0xd2, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x5a}, {.addr=0x1301, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1301, .value=0x86, .type=IO_READ},
        {.addr=0x1302, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_012A) {
    const struct CPU_State initial_cpu = {.pc=0x0dd2, .a=0xb4, .x=0xe1, .y=0xc6, .sp=0xde, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x79}, {.addr=0x0dd2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0dd3, .a=0x2d, .x=0xe1, .y=0xc6, .sp=0xde, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x79}, {.addr=0x0dd2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0dd2, .value=0x86, .type=IO_READ},
        {.addr=0x0dd3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_012B) {
    const struct CPU_State initial_cpu = {.pc=0xbb64, .a=0x13, .x=0xbf, .y=0x3a, .sp=0xf5, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0xaf}, {.addr=0xbb64, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xbb65, .a=0xc2, .x=0xbf, .y=0x3a, .sp=0xf5, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xaf}, {.addr=0xbb64, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xbb64, .value=0x86, .type=IO_READ},
        {.addr=0xbb65, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_012C) {
    const struct CPU_State initial_cpu = {.pc=0x84a9, .a=0xd0, .x=0xb7, .y=0xf9, .sp=0x97, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0x04}, {.addr=0x84a9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x84aa, .a=0xd4, .x=0xb7, .y=0xf9, .sp=0x97, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0x04}, {.addr=0x84a9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x84a9, .value=0x86, .type=IO_READ},
        {.addr=0x84aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_012D) {
    const struct CPU_State initial_cpu = {.pc=0x2bfc, .a=0x3b, .x=0x6e, .y=0x87, .sp=0x14, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x006e, .value=0xfa}, {.addr=0x2bfc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2bfd, .a=0x35, .x=0x6e, .y=0x87, .sp=0x14, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x006e, .value=0xfa}, {.addr=0x2bfc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2bfc, .value=0x86, .type=IO_READ},
        {.addr=0x2bfd, .value=DUMMY, .type=IO_READ},
        {.addr=0x006e, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_012E) {
    const struct CPU_State initial_cpu = {.pc=0xaebb, .a=0xa8, .x=0x73, .y=0xeb, .sp=0x08, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0x9a}, {.addr=0xaebb, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xaebc, .a=0x43, .x=0x73, .y=0xeb, .sp=0x08, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0x9a}, {.addr=0xaebb, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xaebb, .value=0x86, .type=IO_READ},
        {.addr=0xaebc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_012F) {
    const struct CPU_State initial_cpu = {.pc=0x6b70, .a=0x4d, .x=0x30, .y=0x4a, .sp=0x63, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0030, .value=0xad}, {.addr=0x6b70, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6b71, .a=0xfa, .x=0x30, .y=0x4a, .sp=0x63, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0030, .value=0xad}, {.addr=0x6b70, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6b70, .value=0x86, .type=IO_READ},
        {.addr=0x6b71, .value=DUMMY, .type=IO_READ},
        {.addr=0x0030, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0130) {
    const struct CPU_State initial_cpu = {.pc=0x329b, .a=0x70, .x=0x87, .y=0x16, .sp=0x43, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0xa9}, {.addr=0x329b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x329c, .a=0x1a, .x=0x87, .y=0x16, .sp=0x43, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0xa9}, {.addr=0x329b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x329b, .value=0x86, .type=IO_READ},
        {.addr=0x329c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0131) {
    const struct CPU_State initial_cpu = {.pc=0xb6e2, .a=0x98, .x=0xe8, .y=0x84, .sp=0x40, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0x86}, {.addr=0xb6e2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb6e3, .a=0x1f, .x=0xe8, .y=0x84, .sp=0x40, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0x86}, {.addr=0xb6e2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb6e2, .value=0x86, .type=IO_READ},
        {.addr=0xb6e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0132) {
    const struct CPU_State initial_cpu = {.pc=0x8988, .a=0x78, .x=0x9a, .y=0xe2, .sp=0xb7, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x91}, {.addr=0x8988, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8989, .a=0x0a, .x=0x9a, .y=0xe2, .sp=0xb7, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x91}, {.addr=0x8988, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8988, .value=0x86, .type=IO_READ},
        {.addr=0x8989, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0133) {
    const struct CPU_State initial_cpu = {.pc=0xe0bd, .a=0xff, .x=0x52, .y=0xe5, .sp=0xaf, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0xa3}, {.addr=0xe0bd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe0be, .a=0xa3, .x=0x52, .y=0xe5, .sp=0xaf, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0xa3}, {.addr=0xe0bd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe0bd, .value=0x86, .type=IO_READ},
        {.addr=0xe0be, .value=DUMMY, .type=IO_READ},
        {.addr=0x0052, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0134) {
    const struct CPU_State initial_cpu = {.pc=0x3be7, .a=0xad, .x=0xd8, .y=0x52, .sp=0x7c, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x7c}, {.addr=0x3be7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3be8, .a=0x2a, .x=0xd8, .y=0x52, .sp=0x7c, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x7c}, {.addr=0x3be7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3be7, .value=0x86, .type=IO_READ},
        {.addr=0x3be8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0135) {
    const struct CPU_State initial_cpu = {.pc=0x22db, .a=0xd9, .x=0xf0, .y=0x8e, .sp=0x05, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0xf7}, {.addr=0x22db, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x22dc, .a=0xd1, .x=0xf0, .y=0x8e, .sp=0x05, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xf7}, {.addr=0x22db, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x22db, .value=0x86, .type=IO_READ},
        {.addr=0x22dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0136) {
    const struct CPU_State initial_cpu = {.pc=0xda90, .a=0x85, .x=0x58, .y=0xd7, .sp=0x43, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0x62}, {.addr=0xda90, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xda91, .a=0xe7, .x=0x58, .y=0xd7, .sp=0x43, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0x62}, {.addr=0xda90, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xda90, .value=0x86, .type=IO_READ},
        {.addr=0xda91, .value=DUMMY, .type=IO_READ},
        {.addr=0x0058, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0137) {
    const struct CPU_State initial_cpu = {.pc=0x7c39, .a=0x12, .x=0x2a, .y=0x65, .sp=0xd8, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0x62}, {.addr=0x7c39, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7c3a, .a=0x75, .x=0x2a, .y=0x65, .sp=0xd8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0x62}, {.addr=0x7c39, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7c39, .value=0x86, .type=IO_READ},
        {.addr=0x7c3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0138) {
    const struct CPU_State initial_cpu = {.pc=0x8890, .a=0xb9, .x=0xb3, .y=0x3a, .sp=0xa6, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0x40}, {.addr=0x8890, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8891, .a=0xfa, .x=0xb3, .y=0x3a, .sp=0xa6, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0x40}, {.addr=0x8890, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8890, .value=0x86, .type=IO_READ},
        {.addr=0x8891, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b3, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0139) {
    const struct CPU_State initial_cpu = {.pc=0xc6f6, .a=0xb4, .x=0x2b, .y=0x1a, .sp=0x80, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0xdf}, {.addr=0xc6f6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc6f7, .a=0x93, .x=0x2b, .y=0x1a, .sp=0x80, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0xdf}, {.addr=0xc6f6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc6f6, .value=0x86, .type=IO_READ},
        {.addr=0xc6f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_013A) {
    const struct CPU_State initial_cpu = {.pc=0xcea0, .a=0x18, .x=0x08, .y=0x4b, .sp=0x35, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x92}, {.addr=0xcea0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcea1, .a=0xab, .x=0x08, .y=0x4b, .sp=0x35, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x92}, {.addr=0xcea0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcea0, .value=0x86, .type=IO_READ},
        {.addr=0xcea1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_013B) {
    const struct CPU_State initial_cpu = {.pc=0x2149, .a=0x2c, .x=0x45, .y=0x8e, .sp=0xa1, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x8c}, {.addr=0x2149, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x214a, .a=0xb9, .x=0x45, .y=0x8e, .sp=0xa1, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x8c}, {.addr=0x2149, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2149, .value=0x86, .type=IO_READ},
        {.addr=0x214a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_013C) {
    const struct CPU_State initial_cpu = {.pc=0xb9bf, .a=0xb9, .x=0x7b, .y=0xde, .sp=0xf0, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x68}, {.addr=0xb9bf, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb9c0, .a=0x22, .x=0x7b, .y=0xde, .sp=0xf0, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x68}, {.addr=0xb9bf, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb9bf, .value=0x86, .type=IO_READ},
        {.addr=0xb9c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_013D) {
    const struct CPU_State initial_cpu = {.pc=0xd4c8, .a=0x2c, .x=0xf5, .y=0xd9, .sp=0x0f, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x2a}, {.addr=0xd4c8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd4c9, .a=0x56, .x=0xf5, .y=0xd9, .sp=0x0f, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x2a}, {.addr=0xd4c8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd4c8, .value=0x86, .type=IO_READ},
        {.addr=0xd4c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_013E) {
    const struct CPU_State initial_cpu = {.pc=0x442a, .a=0xe3, .x=0x71, .y=0x26, .sp=0xca, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x3c}, {.addr=0x442a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x442b, .a=0x1f, .x=0x71, .y=0x26, .sp=0xca, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x3c}, {.addr=0x442a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x442a, .value=0x86, .type=IO_READ},
        {.addr=0x442b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_013F) {
    const struct CPU_State initial_cpu = {.pc=0xe8a7, .a=0x0b, .x=0xa8, .y=0x50, .sp=0x1e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x00a8, .value=0xdc}, {.addr=0xe8a7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe8a8, .a=0xe7, .x=0xa8, .y=0x50, .sp=0x1e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00a8, .value=0xdc}, {.addr=0xe8a7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe8a7, .value=0x86, .type=IO_READ},
        {.addr=0xe8a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a8, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0140) {
    const struct CPU_State initial_cpu = {.pc=0xee74, .a=0xbb, .x=0x94, .y=0x90, .sp=0x01, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x4e}, {.addr=0xee74, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xee75, .a=0x09, .x=0x94, .y=0x90, .sp=0x01, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x4e}, {.addr=0xee74, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xee74, .value=0x86, .type=IO_READ},
        {.addr=0xee75, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0141) {
    const struct CPU_State initial_cpu = {.pc=0x44b2, .a=0x92, .x=0x19, .y=0xa0, .sp=0x01, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0019, .value=0xef}, {.addr=0x44b2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x44b3, .a=0x82, .x=0x19, .y=0xa0, .sp=0x01, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0019, .value=0xef}, {.addr=0x44b2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x44b2, .value=0x86, .type=IO_READ},
        {.addr=0x44b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0019, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0142) {
    const struct CPU_State initial_cpu = {.pc=0x9a24, .a=0x46, .x=0x53, .y=0x88, .sp=0x34, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0xc2}, {.addr=0x9a24, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9a25, .a=0x09, .x=0x53, .y=0x88, .sp=0x34, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xc2}, {.addr=0x9a24, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9a24, .value=0x86, .type=IO_READ},
        {.addr=0x9a25, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0143) {
    const struct CPU_State initial_cpu = {.pc=0xe55d, .a=0xb2, .x=0x01, .y=0x84, .sp=0xf1, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0x11}, {.addr=0xe55d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe55e, .a=0xc4, .x=0x01, .y=0x84, .sp=0xf1, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0x11}, {.addr=0xe55d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe55d, .value=0x86, .type=IO_READ},
        {.addr=0xe55e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0144) {
    const struct CPU_State initial_cpu = {.pc=0xd980, .a=0x80, .x=0xec, .y=0x6d, .sp=0xcc, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x87}, {.addr=0xd980, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd981, .a=0x08, .x=0xec, .y=0x6d, .sp=0xcc, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x87}, {.addr=0xd980, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd980, .value=0x86, .type=IO_READ},
        {.addr=0xd981, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0145) {
    const struct CPU_State initial_cpu = {.pc=0x57f5, .a=0x36, .x=0xea, .y=0x02, .sp=0x1c, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x03}, {.addr=0x57f5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x57f6, .a=0x39, .x=0xea, .y=0x02, .sp=0x1c, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x03}, {.addr=0x57f5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x57f5, .value=0x86, .type=IO_READ},
        {.addr=0x57f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0146) {
    const struct CPU_State initial_cpu = {.pc=0x7c23, .a=0xa2, .x=0x2b, .y=0xdf, .sp=0xbc, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x30}, {.addr=0x7c23, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7c24, .a=0xd3, .x=0x2b, .y=0xdf, .sp=0xbc, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x30}, {.addr=0x7c23, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7c23, .value=0x86, .type=IO_READ},
        {.addr=0x7c24, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0147) {
    const struct CPU_State initial_cpu = {.pc=0xcadf, .a=0x5e, .x=0x63, .y=0xcf, .sp=0x7b, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x2f}, {.addr=0xcadf, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcae0, .a=0x8e, .x=0x63, .y=0xcf, .sp=0x7b, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x2f}, {.addr=0xcadf, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcadf, .value=0x86, .type=IO_READ},
        {.addr=0xcae0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0148) {
    const struct CPU_State initial_cpu = {.pc=0x6ec5, .a=0x1b, .x=0x90, .y=0x53, .sp=0xdb, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0xca}, {.addr=0x6ec5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6ec6, .a=0xe5, .x=0x90, .y=0x53, .sp=0xdb, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xca}, {.addr=0x6ec5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6ec5, .value=0x86, .type=IO_READ},
        {.addr=0x6ec6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0149) {
    const struct CPU_State initial_cpu = {.pc=0xb6c5, .a=0x40, .x=0xbb, .y=0xc3, .sp=0x8b, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0x93}, {.addr=0xb6c5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb6c6, .a=0xd3, .x=0xbb, .y=0xc3, .sp=0x8b, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0x93}, {.addr=0xb6c5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb6c5, .value=0x86, .type=IO_READ},
        {.addr=0xb6c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bb, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_014B) {
    const struct CPU_State initial_cpu = {.pc=0x8383, .a=0x00, .x=0x05, .y=0x96, .sp=0x93, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0xc6}, {.addr=0x8383, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8384, .a=0xc6, .x=0x05, .y=0x96, .sp=0x93, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0xc6}, {.addr=0x8383, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8383, .value=0x86, .type=IO_READ},
        {.addr=0x8384, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_014C) {
    const struct CPU_State initial_cpu = {.pc=0x5dc0, .a=0x2a, .x=0x18, .y=0xca, .sp=0x21, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x01}, {.addr=0x5dc0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5dc1, .a=0x2b, .x=0x18, .y=0xca, .sp=0x21, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x01}, {.addr=0x5dc0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5dc0, .value=0x86, .type=IO_READ},
        {.addr=0x5dc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_014D) {
    const struct CPU_State initial_cpu = {.pc=0xe3cf, .a=0xbc, .x=0xc3, .y=0x78, .sp=0x5f, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0xe5}, {.addr=0xe3cf, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe3d0, .a=0xa2, .x=0xc3, .y=0x78, .sp=0x5f, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0xe5}, {.addr=0xe3cf, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe3cf, .value=0x86, .type=IO_READ},
        {.addr=0xe3d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_014E) {
    const struct CPU_State initial_cpu = {.pc=0xd414, .a=0xe0, .x=0x2b, .y=0x36, .sp=0xc9, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x24}, {.addr=0xd414, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd415, .a=0x04, .x=0x2b, .y=0x36, .sp=0xc9, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x24}, {.addr=0xd414, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd414, .value=0x86, .type=IO_READ},
        {.addr=0xd415, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_014F) {
    const struct CPU_State initial_cpu = {.pc=0x3fb6, .a=0x81, .x=0xe4, .y=0xa4, .sp=0xfa, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0x08}, {.addr=0x3fb6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3fb7, .a=0x89, .x=0xe4, .y=0xa4, .sp=0xfa, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0x08}, {.addr=0x3fb6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3fb6, .value=0x86, .type=IO_READ},
        {.addr=0x3fb7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e4, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0150) {
    const struct CPU_State initial_cpu = {.pc=0xd733, .a=0x85, .x=0x24, .y=0xcc, .sp=0x8d, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0024, .value=0x95}, {.addr=0xd733, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd734, .a=0x1b, .x=0x24, .y=0xcc, .sp=0x8d, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0024, .value=0x95}, {.addr=0xd733, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd733, .value=0x86, .type=IO_READ},
        {.addr=0xd734, .value=DUMMY, .type=IO_READ},
        {.addr=0x0024, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0151) {
    const struct CPU_State initial_cpu = {.pc=0xd56f, .a=0xd0, .x=0x6c, .y=0x4a, .sp=0x5f, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0xd4}, {.addr=0xd56f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd570, .a=0xa5, .x=0x6c, .y=0x4a, .sp=0x5f, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0xd4}, {.addr=0xd56f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd56f, .value=0x86, .type=IO_READ},
        {.addr=0xd570, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0153) {
    const struct CPU_State initial_cpu = {.pc=0x9ba1, .a=0x0d, .x=0xfc, .y=0x15, .sp=0x03, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0xad}, {.addr=0x9ba1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9ba2, .a=0xba, .x=0xfc, .y=0x15, .sp=0x03, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xad}, {.addr=0x9ba1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9ba1, .value=0x86, .type=IO_READ},
        {.addr=0x9ba2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0154) {
    const struct CPU_State initial_cpu = {.pc=0x171b, .a=0x05, .x=0x10, .y=0xc3, .sp=0x80, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x16}, {.addr=0x171b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x171c, .a=0x1b, .x=0x10, .y=0xc3, .sp=0x80, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x16}, {.addr=0x171b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x171b, .value=0x86, .type=IO_READ},
        {.addr=0x171c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0155) {
    const struct CPU_State initial_cpu = {.pc=0x1558, .a=0x0b, .x=0x04, .y=0x38, .sp=0x21, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0004, .value=0xb7}, {.addr=0x1558, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1559, .a=0xc3, .x=0x04, .y=0x38, .sp=0x21, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0004, .value=0xb7}, {.addr=0x1558, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1558, .value=0x86, .type=IO_READ},
        {.addr=0x1559, .value=DUMMY, .type=IO_READ},
        {.addr=0x0004, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0156) {
    const struct CPU_State initial_cpu = {.pc=0x5f5c, .a=0xdb, .x=0xb5, .y=0x52, .sp=0x02, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0xc7}, {.addr=0x5f5c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5f5d, .a=0xa3, .x=0xb5, .y=0x52, .sp=0x02, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xc7}, {.addr=0x5f5c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5f5c, .value=0x86, .type=IO_READ},
        {.addr=0x5f5d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0157) {
    const struct CPU_State initial_cpu = {.pc=0x65e2, .a=0x13, .x=0x6a, .y=0xfd, .sp=0x3d, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x7c}, {.addr=0x65e2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x65e3, .a=0x90, .x=0x6a, .y=0xfd, .sp=0x3d, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x7c}, {.addr=0x65e2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x65e2, .value=0x86, .type=IO_READ},
        {.addr=0x65e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0158) {
    const struct CPU_State initial_cpu = {.pc=0x4b04, .a=0xda, .x=0x24, .y=0x0e, .sp=0x1e, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x7a}, {.addr=0x4b04, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4b05, .a=0x55, .x=0x24, .y=0x0e, .sp=0x1e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x7a}, {.addr=0x4b04, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4b04, .value=0x86, .type=IO_READ},
        {.addr=0x4b05, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0159) {
    const struct CPU_State initial_cpu = {.pc=0x00a9, .a=0x81, .x=0x7b, .y=0x0f, .sp=0x42, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0x86}, {.addr=0x017b, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x00aa, .a=0x86, .x=0x7b, .y=0x0f, .sp=0x42, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0x86}, {.addr=0x017b, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x00a9, .value=0x86, .type=IO_READ},
        {.addr=0x00aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_015A) {
    const struct CPU_State initial_cpu = {.pc=0xc2dc, .a=0x7f, .x=0xdd, .y=0x59, .sp=0xf5, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0xc6}, {.addr=0xc2dc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc2dd, .a=0x46, .x=0xdd, .y=0x59, .sp=0xf5, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0xc6}, {.addr=0xc2dc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc2dc, .value=0x86, .type=IO_READ},
        {.addr=0xc2dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_015B) {
    const struct CPU_State initial_cpu = {.pc=0x872a, .a=0x2e, .x=0xaa, .y=0x0b, .sp=0xec, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x3d}, {.addr=0x872a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x872b, .a=0x6c, .x=0xaa, .y=0x0b, .sp=0xec, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x3d}, {.addr=0x872a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x872a, .value=0x86, .type=IO_READ},
        {.addr=0x872b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_015C) {
    const struct CPU_State initial_cpu = {.pc=0xf198, .a=0x96, .x=0x64, .y=0xb3, .sp=0x35, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0xe4}, {.addr=0xf198, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf199, .a=0x7a, .x=0x64, .y=0xb3, .sp=0x35, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0xe4}, {.addr=0xf198, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf198, .value=0x86, .type=IO_READ},
        {.addr=0xf199, .value=DUMMY, .type=IO_READ},
        {.addr=0x0064, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_015D) {
    const struct CPU_State initial_cpu = {.pc=0xcc2b, .a=0x20, .x=0x2f, .y=0x58, .sp=0x43, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0x68}, {.addr=0xcc2b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcc2c, .a=0x89, .x=0x2f, .y=0x58, .sp=0x43, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0x68}, {.addr=0xcc2b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcc2b, .value=0x86, .type=IO_READ},
        {.addr=0xcc2c, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_015E) {
    const struct CPU_State initial_cpu = {.pc=0x7008, .a=0x9a, .x=0xbe, .y=0x3f, .sp=0x4b, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x1e}, {.addr=0x7008, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7009, .a=0xb8, .x=0xbe, .y=0x3f, .sp=0x4b, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x1e}, {.addr=0x7008, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7008, .value=0x86, .type=IO_READ},
        {.addr=0x7009, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_015F) {
    const struct CPU_State initial_cpu = {.pc=0x0e1d, .a=0xbc, .x=0x42, .y=0x65, .sp=0xc0, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0xab}, {.addr=0x0e1d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0e1e, .a=0x67, .x=0x42, .y=0x65, .sp=0xc0, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xab}, {.addr=0x0e1d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0e1d, .value=0x86, .type=IO_READ},
        {.addr=0x0e1e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0160) {
    const struct CPU_State initial_cpu = {.pc=0x98e1, .a=0x18, .x=0x97, .y=0x66, .sp=0xee, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x51}, {.addr=0x98e1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x98e2, .a=0x6a, .x=0x97, .y=0x66, .sp=0xee, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x51}, {.addr=0x98e1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x98e1, .value=0x86, .type=IO_READ},
        {.addr=0x98e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0161) {
    const struct CPU_State initial_cpu = {.pc=0xbc8e, .a=0x2f, .x=0xdb, .y=0xf6, .sp=0x70, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x7f}, {.addr=0xbc8e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xbc8f, .a=0xae, .x=0xdb, .y=0xf6, .sp=0x70, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x7f}, {.addr=0xbc8e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xbc8e, .value=0x86, .type=IO_READ},
        {.addr=0xbc8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0162) {
    const struct CPU_State initial_cpu = {.pc=0x1637, .a=0x52, .x=0xcf, .y=0xa2, .sp=0x47, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x4a}, {.addr=0x1637, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1638, .a=0x9d, .x=0xcf, .y=0xa2, .sp=0x47, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x4a}, {.addr=0x1637, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1637, .value=0x86, .type=IO_READ},
        {.addr=0x1638, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0163) {
    const struct CPU_State initial_cpu = {.pc=0x0e91, .a=0x7c, .x=0x26, .y=0x2b, .sp=0x07, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0026, .value=0x2a}, {.addr=0x0e91, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0e92, .a=0xa6, .x=0x26, .y=0x2b, .sp=0x07, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0026, .value=0x2a}, {.addr=0x0e91, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0e91, .value=0x86, .type=IO_READ},
        {.addr=0x0e92, .value=DUMMY, .type=IO_READ},
        {.addr=0x0026, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0164) {
    const struct CPU_State initial_cpu = {.pc=0x9c75, .a=0x8b, .x=0xbc, .y=0xa7, .sp=0xd5, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0x16}, {.addr=0x9c75, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9c76, .a=0xa2, .x=0xbc, .y=0xa7, .sp=0xd5, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0x16}, {.addr=0x9c75, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9c75, .value=0x86, .type=IO_READ},
        {.addr=0x9c76, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0165) {
    const struct CPU_State initial_cpu = {.pc=0xf518, .a=0xd0, .x=0x44, .y=0xa8, .sp=0x9f, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0044, .value=0xfe}, {.addr=0xf518, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf519, .a=0xce, .x=0x44, .y=0xa8, .sp=0x9f, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0044, .value=0xfe}, {.addr=0xf518, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf518, .value=0x86, .type=IO_READ},
        {.addr=0xf519, .value=DUMMY, .type=IO_READ},
        {.addr=0x0044, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0166) {
    const struct CPU_State initial_cpu = {.pc=0x4d46, .a=0xb1, .x=0x84, .y=0xac, .sp=0x65, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0xff}, {.addr=0x4d46, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4d47, .a=0xb0, .x=0x84, .y=0xac, .sp=0x65, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xff}, {.addr=0x4d46, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4d46, .value=0x86, .type=IO_READ},
        {.addr=0x4d47, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0167) {
    const struct CPU_State initial_cpu = {.pc=0x5688, .a=0x43, .x=0x8c, .y=0x83, .sp=0x8b, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x82}, {.addr=0x5688, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5689, .a=0xc6, .x=0x8c, .y=0x83, .sp=0x8b, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x82}, {.addr=0x5688, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5688, .value=0x86, .type=IO_READ},
        {.addr=0x5689, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0168) {
    const struct CPU_State initial_cpu = {.pc=0x0916, .a=0xe8, .x=0x45, .y=0xcf, .sp=0x6d, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0x92}, {.addr=0x0916, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0917, .a=0x7b, .x=0x45, .y=0xcf, .sp=0x6d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0x92}, {.addr=0x0916, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0916, .value=0x86, .type=IO_READ},
        {.addr=0x0917, .value=DUMMY, .type=IO_READ},
        {.addr=0x0045, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0169) {
    const struct CPU_State initial_cpu = {.pc=0x38ca, .a=0x6d, .x=0x50, .y=0x64, .sp=0xbf, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0xcf}, {.addr=0x38ca, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x38cb, .a=0x3d, .x=0x50, .y=0x64, .sp=0xbf, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0xcf}, {.addr=0x38ca, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x38ca, .value=0x86, .type=IO_READ},
        {.addr=0x38cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_016A) {
    const struct CPU_State initial_cpu = {.pc=0x44d8, .a=0xa2, .x=0xc6, .y=0x1f, .sp=0xa1, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x00c6, .value=0x3e}, {.addr=0x44d8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x44d9, .a=0xe0, .x=0xc6, .y=0x1f, .sp=0xa1, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00c6, .value=0x3e}, {.addr=0x44d8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x44d8, .value=0x86, .type=IO_READ},
        {.addr=0x44d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c6, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_016B) {
    const struct CPU_State initial_cpu = {.pc=0xcc4f, .a=0x0f, .x=0xda, .y=0xfb, .sp=0x0a, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x88}, {.addr=0xcc4f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcc50, .a=0x97, .x=0xda, .y=0xfb, .sp=0x0a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x88}, {.addr=0xcc4f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcc4f, .value=0x86, .type=IO_READ},
        {.addr=0xcc50, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_016C) {
    const struct CPU_State initial_cpu = {.pc=0x61cd, .a=0x6f, .x=0x25, .y=0x9e, .sp=0xdc, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x6a}, {.addr=0x61cd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x61ce, .a=0xd9, .x=0x25, .y=0x9e, .sp=0xdc, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x6a}, {.addr=0x61cd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x61cd, .value=0x86, .type=IO_READ},
        {.addr=0x61ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_016D) {
    const struct CPU_State initial_cpu = {.pc=0xfa2c, .a=0x21, .x=0x00, .y=0x2f, .sp=0x80, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0x60}, {.addr=0xfa2c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xfa2d, .a=0x81, .x=0x00, .y=0x2f, .sp=0x80, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0x60}, {.addr=0xfa2c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xfa2c, .value=0x86, .type=IO_READ},
        {.addr=0xfa2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0000, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_016E) {
    const struct CPU_State initial_cpu = {.pc=0x215a, .a=0x17, .x=0xd7, .y=0x17, .sp=0x71, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0xcf}, {.addr=0x215a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x215b, .a=0xe7, .x=0xd7, .y=0x17, .sp=0x71, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0xcf}, {.addr=0x215a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x215a, .value=0x86, .type=IO_READ},
        {.addr=0x215b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d7, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_016F) {
    const struct CPU_State initial_cpu = {.pc=0x56b5, .a=0xf0, .x=0xc5, .y=0x01, .sp=0x69, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0xc6}, {.addr=0x56b5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x56b6, .a=0xb7, .x=0xc5, .y=0x01, .sp=0x69, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0xc6}, {.addr=0x56b5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x56b5, .value=0x86, .type=IO_READ},
        {.addr=0x56b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0170) {
    const struct CPU_State initial_cpu = {.pc=0x5ff1, .a=0x1f, .x=0x7f, .y=0xe3, .sp=0x67, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x4e}, {.addr=0x5ff1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5ff2, .a=0x6d, .x=0x7f, .y=0xe3, .sp=0x67, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x4e}, {.addr=0x5ff1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5ff1, .value=0x86, .type=IO_READ},
        {.addr=0x5ff2, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0172) {
    const struct CPU_State initial_cpu = {.pc=0xec60, .a=0xa5, .x=0xf2, .y=0x3b, .sp=0xbe, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0xbf}, {.addr=0xec60, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xec61, .a=0x64, .x=0xf2, .y=0x3b, .sp=0xbe, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0xbf}, {.addr=0xec60, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xec60, .value=0x86, .type=IO_READ},
        {.addr=0xec61, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0173) {
    const struct CPU_State initial_cpu = {.pc=0x3290, .a=0x40, .x=0x51, .y=0x20, .sp=0xa5, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x7b}, {.addr=0x3290, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3291, .a=0xbb, .x=0x51, .y=0x20, .sp=0xa5, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x7b}, {.addr=0x3290, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3290, .value=0x86, .type=IO_READ},
        {.addr=0x3291, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0174) {
    const struct CPU_State initial_cpu = {.pc=0xd56f, .a=0x8c, .x=0x12, .y=0x38, .sp=0xa2, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0012, .value=0x06}, {.addr=0xd56f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd570, .a=0x93, .x=0x12, .y=0x38, .sp=0xa2, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0012, .value=0x06}, {.addr=0xd56f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd56f, .value=0x86, .type=IO_READ},
        {.addr=0xd570, .value=DUMMY, .type=IO_READ},
        {.addr=0x0012, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0175) {
    const struct CPU_State initial_cpu = {.pc=0x18da, .a=0xb0, .x=0x6f, .y=0x2c, .sp=0xa2, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0x87}, {.addr=0x18da, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x18db, .a=0x38, .x=0x6f, .y=0x2c, .sp=0xa2, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0x87}, {.addr=0x18da, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x18da, .value=0x86, .type=IO_READ},
        {.addr=0x18db, .value=DUMMY, .type=IO_READ},
        {.addr=0x006f, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0176) {
    const struct CPU_State initial_cpu = {.pc=0x141e, .a=0x36, .x=0x33, .y=0x7c, .sp=0x93, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0xce}, {.addr=0x141e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x141f, .a=0x04, .x=0x33, .y=0x7c, .sp=0x93, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xce}, {.addr=0x141e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x141e, .value=0x86, .type=IO_READ},
        {.addr=0x141f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0177) {
    const struct CPU_State initial_cpu = {.pc=0xfab5, .a=0xcb, .x=0xaa, .y=0xd7, .sp=0x8c, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0xa7}, {.addr=0xfab5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xfab6, .a=0x72, .x=0xaa, .y=0xd7, .sp=0x8c, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xa7}, {.addr=0xfab5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xfab5, .value=0x86, .type=IO_READ},
        {.addr=0xfab6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0178) {
    const struct CPU_State initial_cpu = {.pc=0xc738, .a=0x8c, .x=0x73, .y=0xd8, .sp=0x5a, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x8d}, {.addr=0xc738, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc739, .a=0x1a, .x=0x73, .y=0xd8, .sp=0x5a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x8d}, {.addr=0xc738, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc738, .value=0x86, .type=IO_READ},
        {.addr=0xc739, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0179) {
    const struct CPU_State initial_cpu = {.pc=0xe6b6, .a=0x30, .x=0x1f, .y=0x9a, .sp=0x01, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x5c}, {.addr=0xe6b6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe6b7, .a=0x8d, .x=0x1f, .y=0x9a, .sp=0x01, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x5c}, {.addr=0xe6b6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe6b6, .value=0x86, .type=IO_READ},
        {.addr=0xe6b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_017A) {
    const struct CPU_State initial_cpu = {.pc=0xb0f5, .a=0x22, .x=0x9d, .y=0x23, .sp=0x0f, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0xc8}, {.addr=0xb0f5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb0f6, .a=0xeb, .x=0x9d, .y=0x23, .sp=0x0f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0xc8}, {.addr=0xb0f5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb0f5, .value=0x86, .type=IO_READ},
        {.addr=0xb0f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_017B) {
    const struct CPU_State initial_cpu = {.pc=0x8959, .a=0x80, .x=0xb1, .y=0xb2, .sp=0xae, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x2a}, {.addr=0x8959, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x895a, .a=0xab, .x=0xb1, .y=0xb2, .sp=0xae, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x2a}, {.addr=0x8959, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8959, .value=0x86, .type=IO_READ},
        {.addr=0x895a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_017C) {
    const struct CPU_State initial_cpu = {.pc=0x9c3f, .a=0xbd, .x=0x47, .y=0x7a, .sp=0x23, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0xeb}, {.addr=0x9c3f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9c40, .a=0xa9, .x=0x47, .y=0x7a, .sp=0x23, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0xeb}, {.addr=0x9c3f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9c3f, .value=0x86, .type=IO_READ},
        {.addr=0x9c40, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_017D) {
    const struct CPU_State initial_cpu = {.pc=0x1071, .a=0xb8, .x=0xd5, .y=0x13, .sp=0x58, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x59}, {.addr=0x1071, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1072, .a=0x12, .x=0xd5, .y=0x13, .sp=0x58, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x59}, {.addr=0x1071, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1071, .value=0x86, .type=IO_READ},
        {.addr=0x1072, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_017E) {
    const struct CPU_State initial_cpu = {.pc=0x73f8, .a=0x7a, .x=0xa3, .y=0x75, .sp=0x67, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0xf6}, {.addr=0x73f8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x73f9, .a=0x70, .x=0xa3, .y=0x75, .sp=0x67, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0xf6}, {.addr=0x73f8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x73f8, .value=0x86, .type=IO_READ},
        {.addr=0x73f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_017F) {
    const struct CPU_State initial_cpu = {.pc=0xe6e9, .a=0xcc, .x=0x5d, .y=0x9e, .sp=0xf0, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0x1d}, {.addr=0xe6e9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe6ea, .a=0xe9, .x=0x5d, .y=0x9e, .sp=0xf0, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0x1d}, {.addr=0xe6e9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe6e9, .value=0x86, .type=IO_READ},
        {.addr=0xe6ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0180) {
    const struct CPU_State initial_cpu = {.pc=0x06f0, .a=0x66, .x=0xfe, .y=0x68, .sp=0x45, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x5f}, {.addr=0x06f0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x06f1, .a=0xc5, .x=0xfe, .y=0x68, .sp=0x45, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x5f}, {.addr=0x06f0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x06f0, .value=0x86, .type=IO_READ},
        {.addr=0x06f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0181) {
    const struct CPU_State initial_cpu = {.pc=0x7c6f, .a=0x50, .x=0x81, .y=0x38, .sp=0x3b, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xc9}, {.addr=0x7c6f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7c70, .a=0x1a, .x=0x81, .y=0x38, .sp=0x3b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xc9}, {.addr=0x7c6f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7c6f, .value=0x86, .type=IO_READ},
        {.addr=0x7c70, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0182) {
    const struct CPU_State initial_cpu = {.pc=0x88ff, .a=0xa4, .x=0x39, .y=0x2a, .sp=0xca, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0x50}, {.addr=0x88ff, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8900, .a=0xf4, .x=0x39, .y=0x2a, .sp=0xca, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0x50}, {.addr=0x88ff, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x88ff, .value=0x86, .type=IO_READ},
        {.addr=0x8900, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0183) {
    const struct CPU_State initial_cpu = {.pc=0x7fee, .a=0x9d, .x=0x75, .y=0x27, .sp=0x8d, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0xd6}, {.addr=0x7fee, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7fef, .a=0x73, .x=0x75, .y=0x27, .sp=0x8d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0xd6}, {.addr=0x7fee, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7fee, .value=0x86, .type=IO_READ},
        {.addr=0x7fef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0075, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0184) {
    const struct CPU_State initial_cpu = {.pc=0xa6df, .a=0x12, .x=0x28, .y=0x50, .sp=0xd4, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0x0b}, {.addr=0xa6df, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa6e0, .a=0x1d, .x=0x28, .y=0x50, .sp=0xd4, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0x0b}, {.addr=0xa6df, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa6df, .value=0x86, .type=IO_READ},
        {.addr=0xa6e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0028, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0185) {
    const struct CPU_State initial_cpu = {.pc=0x9593, .a=0xbf, .x=0x28, .y=0x07, .sp=0x8a, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0xbd}, {.addr=0x9593, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9594, .a=0x7d, .x=0x28, .y=0x07, .sp=0x8a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xbd}, {.addr=0x9593, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9593, .value=0x86, .type=IO_READ},
        {.addr=0x9594, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0186) {
    const struct CPU_State initial_cpu = {.pc=0xd7c4, .a=0xeb, .x=0xaf, .y=0x6a, .sp=0x61, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0x31}, {.addr=0xd7c4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd7c5, .a=0x1c, .x=0xaf, .y=0x6a, .sp=0x61, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0x31}, {.addr=0xd7c4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd7c4, .value=0x86, .type=IO_READ},
        {.addr=0xd7c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0187) {
    const struct CPU_State initial_cpu = {.pc=0x2330, .a=0xc2, .x=0xcb, .y=0xf2, .sp=0x52, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x49}, {.addr=0x2330, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2331, .a=0x0c, .x=0xcb, .y=0xf2, .sp=0x52, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x49}, {.addr=0x2330, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2330, .value=0x86, .type=IO_READ},
        {.addr=0x2331, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0188) {
    const struct CPU_State initial_cpu = {.pc=0x6af0, .a=0x9b, .x=0x37, .y=0xbb, .sp=0xe0, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0037, .value=0x1f}, {.addr=0x6af0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6af1, .a=0xba, .x=0x37, .y=0xbb, .sp=0xe0, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0037, .value=0x1f}, {.addr=0x6af0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6af0, .value=0x86, .type=IO_READ},
        {.addr=0x6af1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0037, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0189) {
    const struct CPU_State initial_cpu = {.pc=0xd045, .a=0x53, .x=0x70, .y=0x2f, .sp=0x80, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x87}, {.addr=0xd045, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd046, .a=0xda, .x=0x70, .y=0x2f, .sp=0x80, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x87}, {.addr=0xd045, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd045, .value=0x86, .type=IO_READ},
        {.addr=0xd046, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_018A) {
    const struct CPU_State initial_cpu = {.pc=0x6beb, .a=0xa6, .x=0xda, .y=0xca, .sp=0xba, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x70}, {.addr=0x6beb, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6bec, .a=0x17, .x=0xda, .y=0xca, .sp=0xba, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x70}, {.addr=0x6beb, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6beb, .value=0x86, .type=IO_READ},
        {.addr=0x6bec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_018B) {
    const struct CPU_State initial_cpu = {.pc=0x927e, .a=0x48, .x=0x23, .y=0xbc, .sp=0x14, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x10}, {.addr=0x927e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x927f, .a=0x58, .x=0x23, .y=0xbc, .sp=0x14, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x10}, {.addr=0x927e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x927e, .value=0x86, .type=IO_READ},
        {.addr=0x927f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_018C) {
    const struct CPU_State initial_cpu = {.pc=0x71ea, .a=0x4d, .x=0x43, .y=0x6e, .sp=0x15, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0xd5}, {.addr=0x71ea, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x71eb, .a=0x23, .x=0x43, .y=0x6e, .sp=0x15, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xd5}, {.addr=0x71ea, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x71ea, .value=0x86, .type=IO_READ},
        {.addr=0x71eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_018D) {
    const struct CPU_State initial_cpu = {.pc=0xe2f8, .a=0xc9, .x=0x52, .y=0xf4, .sp=0x5a, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0x99}, {.addr=0xe2f8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe2f9, .a=0x62, .x=0x52, .y=0xf4, .sp=0x5a, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0x99}, {.addr=0xe2f8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe2f8, .value=0x86, .type=IO_READ},
        {.addr=0xe2f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0052, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_018E) {
    const struct CPU_State initial_cpu = {.pc=0x05af, .a=0xbe, .x=0x0f, .y=0xad, .sp=0x4b, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0xfd}, {.addr=0x05af, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x05b0, .a=0xbb, .x=0x0f, .y=0xad, .sp=0x4b, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0xfd}, {.addr=0x05af, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x05af, .value=0x86, .type=IO_READ},
        {.addr=0x05b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x000f, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_018F) {
    const struct CPU_State initial_cpu = {.pc=0x05d4, .a=0x25, .x=0xd3, .y=0xc4, .sp=0x9a, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0xc5}, {.addr=0x05d4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x05d5, .a=0xea, .x=0xd3, .y=0xc4, .sp=0x9a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0xc5}, {.addr=0x05d4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x05d4, .value=0x86, .type=IO_READ},
        {.addr=0x05d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0190) {
    const struct CPU_State initial_cpu = {.pc=0x8199, .a=0x5c, .x=0x41, .y=0x96, .sp=0x61, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0x89}, {.addr=0x8199, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x819a, .a=0xe5, .x=0x41, .y=0x96, .sp=0x61, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0x89}, {.addr=0x8199, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8199, .value=0x86, .type=IO_READ},
        {.addr=0x819a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0041, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0191) {
    const struct CPU_State initial_cpu = {.pc=0x27d7, .a=0xe3, .x=0x71, .y=0x73, .sp=0x01, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x4a}, {.addr=0x27d7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x27d8, .a=0x2e, .x=0x71, .y=0x73, .sp=0x01, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x4a}, {.addr=0x27d7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x27d7, .value=0x86, .type=IO_READ},
        {.addr=0x27d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0192) {
    const struct CPU_State initial_cpu = {.pc=0xf4ef, .a=0xdf, .x=0x1f, .y=0x09, .sp=0x78, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x5d}, {.addr=0xf4ef, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf4f0, .a=0x3d, .x=0x1f, .y=0x09, .sp=0x78, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x5d}, {.addr=0xf4ef, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf4ef, .value=0x86, .type=IO_READ},
        {.addr=0xf4f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0193) {
    const struct CPU_State initial_cpu = {.pc=0x5937, .a=0xab, .x=0xac, .y=0x28, .sp=0xd0, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x78}, {.addr=0x5937, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5938, .a=0x24, .x=0xac, .y=0x28, .sp=0xd0, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x78}, {.addr=0x5937, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5937, .value=0x86, .type=IO_READ},
        {.addr=0x5938, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0194) {
    const struct CPU_State initial_cpu = {.pc=0x2bc2, .a=0x68, .x=0x77, .y=0x42, .sp=0xbc, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0xde}, {.addr=0x2bc2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2bc3, .a=0x46, .x=0x77, .y=0x42, .sp=0xbc, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0xde}, {.addr=0x2bc2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2bc2, .value=0x86, .type=IO_READ},
        {.addr=0x2bc3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0195) {
    const struct CPU_State initial_cpu = {.pc=0x875f, .a=0xc4, .x=0xd5, .y=0xf6, .sp=0xdd, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0x71}, {.addr=0x875f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8760, .a=0x36, .x=0xd5, .y=0xf6, .sp=0xdd, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0x71}, {.addr=0x875f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x875f, .value=0x86, .type=IO_READ},
        {.addr=0x8760, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0196) {
    const struct CPU_State initial_cpu = {.pc=0xe7ac, .a=0xa1, .x=0x61, .y=0xd0, .sp=0x63, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x4e}, {.addr=0xe7ac, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe7ad, .a=0xf0, .x=0x61, .y=0xd0, .sp=0x63, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x4e}, {.addr=0xe7ac, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe7ac, .value=0x86, .type=IO_READ},
        {.addr=0xe7ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0197) {
    const struct CPU_State initial_cpu = {.pc=0xd6cd, .a=0xe0, .x=0x35, .y=0x27, .sp=0x9f, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0xe0}, {.addr=0xd6cd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd6ce, .a=0xc0, .x=0x35, .y=0x27, .sp=0x9f, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0xe0}, {.addr=0xd6cd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd6cd, .value=0x86, .type=IO_READ},
        {.addr=0xd6ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x0035, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0198) {
    const struct CPU_State initial_cpu = {.pc=0x2881, .a=0x54, .x=0xfe, .y=0x98, .sp=0x31, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x84}, {.addr=0x2881, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2882, .a=0xd9, .x=0xfe, .y=0x98, .sp=0x31, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x84}, {.addr=0x2881, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2881, .value=0x86, .type=IO_READ},
        {.addr=0x2882, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0199) {
    const struct CPU_State initial_cpu = {.pc=0xa3dd, .a=0x28, .x=0xee, .y=0xf9, .sp=0x4a, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0xab}, {.addr=0xa3dd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa3de, .a=0xd3, .x=0xee, .y=0xf9, .sp=0x4a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xab}, {.addr=0xa3dd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa3dd, .value=0x86, .type=IO_READ},
        {.addr=0xa3de, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_019A) {
    const struct CPU_State initial_cpu = {.pc=0x8b01, .a=0xc2, .x=0x6a, .y=0xbd, .sp=0x18, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x7d}, {.addr=0x8b01, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8b02, .a=0x40, .x=0x6a, .y=0xbd, .sp=0x18, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x7d}, {.addr=0x8b01, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8b01, .value=0x86, .type=IO_READ},
        {.addr=0x8b02, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_019B) {
    const struct CPU_State initial_cpu = {.pc=0x0a0d, .a=0x70, .x=0xe1, .y=0xbb, .sp=0xe0, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x2c}, {.addr=0x0a0d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0a0e, .a=0x9d, .x=0xe1, .y=0xbb, .sp=0xe0, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x2c}, {.addr=0x0a0d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0a0d, .value=0x86, .type=IO_READ},
        {.addr=0x0a0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_019D) {
    const struct CPU_State initial_cpu = {.pc=0x62f8, .a=0xab, .x=0xeb, .y=0x1d, .sp=0x67, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0xb4}, {.addr=0x62f8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x62f9, .a=0x5f, .x=0xeb, .y=0x1d, .sp=0x67, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xb4}, {.addr=0x62f8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x62f8, .value=0x86, .type=IO_READ},
        {.addr=0x62f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_019E) {
    const struct CPU_State initial_cpu = {.pc=0x2cc0, .a=0xf6, .x=0x75, .y=0x99, .sp=0xf7, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0xc1}, {.addr=0x2cc0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2cc1, .a=0xb8, .x=0x75, .y=0x99, .sp=0xf7, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0xc1}, {.addr=0x2cc0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2cc0, .value=0x86, .type=IO_READ},
        {.addr=0x2cc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_019F) {
    const struct CPU_State initial_cpu = {.pc=0xd30d, .a=0x70, .x=0x3d, .y=0xbc, .sp=0x10, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0xe2}, {.addr=0xd30d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd30e, .a=0x53, .x=0x3d, .y=0xbc, .sp=0x10, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xe2}, {.addr=0xd30d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd30d, .value=0x86, .type=IO_READ},
        {.addr=0xd30e, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xc6fb, .a=0x38, .x=0xae, .y=0xfc, .sp=0xf8, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x8f}, {.addr=0xc6fb, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc6fc, .a=0xc7, .x=0xae, .y=0xfc, .sp=0xf8, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x8f}, {.addr=0xc6fb, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc6fb, .value=0x86, .type=IO_READ},
        {.addr=0xc6fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x0263, .a=0x0d, .x=0x87, .y=0x0b, .sp=0xe7, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x2e}, {.addr=0x0263, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0264, .a=0x3c, .x=0x87, .y=0x0b, .sp=0xe7, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x2e}, {.addr=0x0263, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0263, .value=0x86, .type=IO_READ},
        {.addr=0x0264, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xfc2a, .a=0xff, .x=0xd4, .y=0x76, .sp=0x31, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0x86}, {.addr=0xfc2a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xfc2b, .a=0x85, .x=0xd4, .y=0x76, .sp=0x31, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x86}, {.addr=0xfc2a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xfc2a, .value=0x86, .type=IO_READ},
        {.addr=0xfc2b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xf21e, .a=0xf4, .x=0x32, .y=0xe6, .sp=0x2b, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x57}, {.addr=0xf21e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf21f, .a=0x4c, .x=0x32, .y=0xe6, .sp=0x2b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x57}, {.addr=0xf21e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf21e, .value=0x86, .type=IO_READ},
        {.addr=0xf21f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xc211, .a=0xe7, .x=0xc8, .y=0x63, .sp=0xa5, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0xcf}, {.addr=0xc211, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc212, .a=0xb7, .x=0xc8, .y=0x63, .sp=0xa5, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xcf}, {.addr=0xc211, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc211, .value=0x86, .type=IO_READ},
        {.addr=0xc212, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x8b75, .a=0xf5, .x=0x56, .y=0xd3, .sp=0x24, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x8a}, {.addr=0x8b75, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8b76, .a=0x80, .x=0x56, .y=0xd3, .sp=0x24, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x8a}, {.addr=0x8b75, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8b75, .value=0x86, .type=IO_READ},
        {.addr=0x8b76, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xa67b, .a=0x3a, .x=0xfd, .y=0xa3, .sp=0x45, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0xc7}, {.addr=0xa67b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa67c, .a=0x02, .x=0xfd, .y=0xa3, .sp=0x45, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xc7}, {.addr=0xa67b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa67b, .value=0x86, .type=IO_READ},
        {.addr=0xa67c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x51ad, .a=0xcd, .x=0x88, .y=0xbd, .sp=0xbc, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0088, .value=0x8f}, {.addr=0x51ad, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x51ae, .a=0x5d, .x=0x88, .y=0xbd, .sp=0xbc, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0088, .value=0x8f}, {.addr=0x51ad, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x51ad, .value=0x86, .type=IO_READ},
        {.addr=0x51ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x0088, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x425f, .a=0x0f, .x=0x64, .y=0x30, .sp=0x71, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0xf6}, {.addr=0x425f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4260, .a=0x05, .x=0x64, .y=0x30, .sp=0x71, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xf6}, {.addr=0x425f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x425f, .value=0x86, .type=IO_READ},
        {.addr=0x4260, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x4428, .a=0xe5, .x=0x67, .y=0xc1, .sp=0xf9, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0xda}, {.addr=0x4428, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4429, .a=0xbf, .x=0x67, .y=0xc1, .sp=0xf9, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0xda}, {.addr=0x4428, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4428, .value=0x86, .type=IO_READ},
        {.addr=0x4429, .value=DUMMY, .type=IO_READ},
        {.addr=0x0067, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x5ac9, .a=0x6f, .x=0x56, .y=0x3a, .sp=0x83, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x1e}, {.addr=0x5ac9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5aca, .a=0x8e, .x=0x56, .y=0x3a, .sp=0x83, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x1e}, {.addr=0x5ac9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5ac9, .value=0x86, .type=IO_READ},
        {.addr=0x5aca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x011d, .a=0xfc, .x=0xb7, .y=0x73, .sp=0x71, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x86}, {.addr=0x01b7, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x011e, .a=0xe6, .x=0xb7, .y=0x73, .sp=0x71, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x86}, {.addr=0x01b7, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x011d, .value=0x86, .type=IO_READ},
        {.addr=0x011e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xf3ed, .a=0xb5, .x=0xd6, .y=0x20, .sp=0x1d, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x6a}, {.addr=0xf3ed, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf3ee, .a=0x1f, .x=0xd6, .y=0x20, .sp=0x1d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x6a}, {.addr=0xf3ed, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf3ed, .value=0x86, .type=IO_READ},
        {.addr=0xf3ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x61e7, .a=0xf2, .x=0xd0, .y=0xde, .sp=0x34, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0x1d}, {.addr=0x61e7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x61e8, .a=0x0f, .x=0xd0, .y=0xde, .sp=0x34, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0x1d}, {.addr=0x61e7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x61e7, .value=0x86, .type=IO_READ},
        {.addr=0x61e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x4a2b, .a=0xb4, .x=0x97, .y=0x4b, .sp=0x65, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x69}, {.addr=0x4a2b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4a2c, .a=0x1d, .x=0x97, .y=0x4b, .sp=0x65, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x69}, {.addr=0x4a2b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4a2b, .value=0x86, .type=IO_READ},
        {.addr=0x4a2c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x49ca, .a=0x9d, .x=0xc1, .y=0xab, .sp=0x97, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0xcd}, {.addr=0x49ca, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x49cb, .a=0x6b, .x=0xc1, .y=0xab, .sp=0x97, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xcd}, {.addr=0x49ca, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x49ca, .value=0x86, .type=IO_READ},
        {.addr=0x49cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x0fe1, .a=0x0a, .x=0x62, .y=0x91, .sp=0x5c, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0x0c}, {.addr=0x0fe1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0fe2, .a=0x17, .x=0x62, .y=0x91, .sp=0x5c, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0x0c}, {.addr=0x0fe1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0fe1, .value=0x86, .type=IO_READ},
        {.addr=0x0fe2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0062, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x0a74, .a=0x7f, .x=0x87, .y=0x8d, .sp=0x17, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0xd2}, {.addr=0x0a74, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0a75, .a=0x52, .x=0x87, .y=0x8d, .sp=0x17, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xd2}, {.addr=0x0a74, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0a74, .value=0x86, .type=IO_READ},
        {.addr=0x0a75, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xc070, .a=0x1a, .x=0x99, .y=0xb7, .sp=0xd2, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0xf8}, {.addr=0xc070, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc071, .a=0x12, .x=0x99, .y=0xb7, .sp=0xd2, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0xf8}, {.addr=0xc070, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc070, .value=0x86, .type=IO_READ},
        {.addr=0xc071, .value=DUMMY, .type=IO_READ},
        {.addr=0x0099, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xd5e9, .a=0x63, .x=0x56, .y=0xa5, .sp=0x0c, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x66}, {.addr=0xd5e9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd5ea, .a=0xc9, .x=0x56, .y=0xa5, .sp=0x0c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x66}, {.addr=0xd5e9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd5e9, .value=0x86, .type=IO_READ},
        {.addr=0xd5ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x517d, .a=0xf5, .x=0xd4, .y=0xce, .sp=0x76, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0x08}, {.addr=0x517d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x517e, .a=0xfe, .x=0xd4, .y=0xce, .sp=0x76, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x08}, {.addr=0x517d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x517d, .value=0x86, .type=IO_READ},
        {.addr=0x517e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x8712, .a=0x39, .x=0xe5, .y=0xa5, .sp=0x4b, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0xa4}, {.addr=0x8712, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8713, .a=0xde, .x=0xe5, .y=0xa5, .sp=0x4b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0xa4}, {.addr=0x8712, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8712, .value=0x86, .type=IO_READ},
        {.addr=0x8713, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xd445, .a=0xa3, .x=0x33, .y=0x17, .sp=0x0c, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x3d}, {.addr=0xd445, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd446, .a=0xe0, .x=0x33, .y=0x17, .sp=0x0c, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x3d}, {.addr=0xd445, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd445, .value=0x86, .type=IO_READ},
        {.addr=0xd446, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x9d74, .a=0xab, .x=0x4c, .y=0xe5, .sp=0xc1, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0xfc}, {.addr=0x9d74, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9d75, .a=0xa8, .x=0x4c, .y=0xe5, .sp=0xc1, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0xfc}, {.addr=0x9d74, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9d74, .value=0x86, .type=IO_READ},
        {.addr=0x9d75, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x0554, .a=0x95, .x=0x01, .y=0x04, .sp=0xa5, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x28}, {.addr=0x0554, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0555, .a=0xbe, .x=0x01, .y=0x04, .sp=0xa5, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x28}, {.addr=0x0554, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0554, .value=0x86, .type=IO_READ},
        {.addr=0x0555, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x2d55, .a=0x43, .x=0x41, .y=0x82, .sp=0xd8, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x31}, {.addr=0x2d55, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2d56, .a=0x75, .x=0x41, .y=0x82, .sp=0xd8, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x31}, {.addr=0x2d55, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2d55, .value=0x86, .type=IO_READ},
        {.addr=0x2d56, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xb17e, .a=0x7b, .x=0x96, .y=0x13, .sp=0x5f, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0xc2}, {.addr=0xb17e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb17f, .a=0x3e, .x=0x96, .y=0x13, .sp=0x5f, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0xc2}, {.addr=0xb17e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb17e, .value=0x86, .type=IO_READ},
        {.addr=0xb17f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x91d1, .a=0xd5, .x=0xaf, .y=0xab, .sp=0x9d, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x27}, {.addr=0x91d1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x91d2, .a=0xfc, .x=0xaf, .y=0xab, .sp=0x9d, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x27}, {.addr=0x91d1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x91d1, .value=0x86, .type=IO_READ},
        {.addr=0x91d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x3b85, .a=0xd3, .x=0xef, .y=0x1d, .sp=0x74, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x52}, {.addr=0x3b85, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3b86, .a=0x26, .x=0xef, .y=0x1d, .sp=0x74, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x52}, {.addr=0x3b85, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3b85, .value=0x86, .type=IO_READ},
        {.addr=0x3b86, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x07e1, .a=0x43, .x=0x45, .y=0x0d, .sp=0xfd, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xd0}, {.addr=0x07e1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x07e2, .a=0x14, .x=0x45, .y=0x0d, .sp=0xfd, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xd0}, {.addr=0x07e1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x07e1, .value=0x86, .type=IO_READ},
        {.addr=0x07e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x01d8, .a=0xc6, .x=0xae, .y=0x52, .sp=0xf7, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0xbd}, {.addr=0x01d8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x01d9, .a=0x84, .x=0xae, .y=0x52, .sp=0xf7, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0xbd}, {.addr=0x01d8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x01d8, .value=0x86, .type=IO_READ},
        {.addr=0x01d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x16d6, .a=0x9a, .x=0x87, .y=0xda, .sp=0x98, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0xad}, {.addr=0x16d6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x16d7, .a=0x47, .x=0x87, .y=0xda, .sp=0x98, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xad}, {.addr=0x16d6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x16d6, .value=0x86, .type=IO_READ},
        {.addr=0x16d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x3e2e, .a=0x68, .x=0x70, .y=0xb5, .sp=0x7c, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0x2a}, {.addr=0x3e2e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3e2f, .a=0x93, .x=0x70, .y=0xb5, .sp=0x7c, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0x2a}, {.addr=0x3e2e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3e2e, .value=0x86, .type=IO_READ},
        {.addr=0x3e2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xb5a0, .a=0x82, .x=0x60, .y=0xac, .sp=0x6f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x04}, {.addr=0xb5a0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb5a1, .a=0x87, .x=0x60, .y=0xac, .sp=0x6f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x04}, {.addr=0xb5a0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb5a0, .value=0x86, .type=IO_READ},
        {.addr=0xb5a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x030b, .a=0x1a, .x=0x6f, .y=0xde, .sp=0x8d, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x23}, {.addr=0x030b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x030c, .a=0x3e, .x=0x6f, .y=0xde, .sp=0x8d, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x23}, {.addr=0x030b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x030b, .value=0x86, .type=IO_READ},
        {.addr=0x030c, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x2b9b, .a=0x88, .x=0xd3, .y=0x85, .sp=0x1e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x93}, {.addr=0x2b9b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2b9c, .a=0x1b, .x=0xd3, .y=0x85, .sp=0x1e, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x93}, {.addr=0x2b9b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2b9b, .value=0x86, .type=IO_READ},
        {.addr=0x2b9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x4ce8, .a=0x84, .x=0xce, .y=0xeb, .sp=0xf8, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0xcc}, {.addr=0x4ce8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4ce9, .a=0x51, .x=0xce, .y=0xeb, .sp=0xf8, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0xcc}, {.addr=0x4ce8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4ce8, .value=0x86, .type=IO_READ},
        {.addr=0x4ce9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xff98, .a=0x0f, .x=0xc6, .y=0x32, .sp=0xea, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x68}, {.addr=0xff98, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xff99, .a=0x77, .x=0xc6, .y=0x32, .sp=0xea, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x68}, {.addr=0xff98, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xff98, .value=0x86, .type=IO_READ},
        {.addr=0xff99, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x8559, .a=0xd9, .x=0x8b, .y=0x30, .sp=0x2d, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0xc0}, {.addr=0x8559, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x855a, .a=0x99, .x=0x8b, .y=0x30, .sp=0x2d, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0xc0}, {.addr=0x8559, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8559, .value=0x86, .type=IO_READ},
        {.addr=0x855a, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x3f94, .a=0xc9, .x=0x12, .y=0x10, .sp=0xc0, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x73}, {.addr=0x3f94, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3f95, .a=0x3c, .x=0x12, .y=0x10, .sp=0xc0, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x73}, {.addr=0x3f94, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3f94, .value=0x86, .type=IO_READ},
        {.addr=0x3f95, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x0bf6, .a=0x6f, .x=0x83, .y=0xea, .sp=0xd7, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x1a}, {.addr=0x0bf6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0bf7, .a=0x89, .x=0x83, .y=0xea, .sp=0xd7, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x1a}, {.addr=0x0bf6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0bf6, .value=0x86, .type=IO_READ},
        {.addr=0x0bf7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x0ec3, .a=0xfe, .x=0x4b, .y=0x3e, .sp=0x07, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x06}, {.addr=0x0ec3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0ec4, .a=0x04, .x=0x4b, .y=0x3e, .sp=0x07, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x06}, {.addr=0x0ec3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0ec3, .value=0x86, .type=IO_READ},
        {.addr=0x0ec4, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xa0a7, .a=0xe0, .x=0xd1, .y=0x74, .sp=0x12, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0xab}, {.addr=0xa0a7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa0a8, .a=0x8c, .x=0xd1, .y=0x74, .sp=0x12, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xab}, {.addr=0xa0a7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa0a7, .value=0x86, .type=IO_READ},
        {.addr=0xa0a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xb027, .a=0xc9, .x=0x9a, .y=0xce, .sp=0x48, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0x59}, {.addr=0xb027, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb028, .a=0x22, .x=0x9a, .y=0xce, .sp=0x48, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0x59}, {.addr=0xb027, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb027, .value=0x86, .type=IO_READ},
        {.addr=0xb028, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xdcb7, .a=0x6d, .x=0xcd, .y=0x3f, .sp=0x91, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x4d}, {.addr=0xdcb7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xdcb8, .a=0xba, .x=0xcd, .y=0x3f, .sp=0x91, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x4d}, {.addr=0xdcb7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xdcb7, .value=0x86, .type=IO_READ},
        {.addr=0xdcb8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x20ab, .a=0xf1, .x=0x1e, .y=0x73, .sp=0x5b, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0xfd}, {.addr=0x20ab, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x20ac, .a=0xee, .x=0x1e, .y=0x73, .sp=0x5b, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0xfd}, {.addr=0x20ab, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x20ab, .value=0x86, .type=IO_READ},
        {.addr=0x20ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x3b89, .a=0xec, .x=0xc3, .y=0x3d, .sp=0x6a, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xed}, {.addr=0x3b89, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3b8a, .a=0xda, .x=0xc3, .y=0x3d, .sp=0x6a, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xed}, {.addr=0x3b89, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3b89, .value=0x86, .type=IO_READ},
        {.addr=0x3b8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xbfaa, .a=0x36, .x=0x86, .y=0xe0, .sp=0x51, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0xd7}, {.addr=0xbfaa, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xbfab, .a=0x0e, .x=0x86, .y=0xe0, .sp=0x51, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0xd7}, {.addr=0xbfaa, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xbfaa, .value=0x86, .type=IO_READ},
        {.addr=0xbfab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xbf30, .a=0xd4, .x=0x8e, .y=0x49, .sp=0x19, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0x6f}, {.addr=0xbf30, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xbf31, .a=0x43, .x=0x8e, .y=0x49, .sp=0x19, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0x6f}, {.addr=0xbf30, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xbf30, .value=0x86, .type=IO_READ},
        {.addr=0xbf31, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xadfa, .a=0xb9, .x=0x3f, .y=0x28, .sp=0x86, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0xbd}, {.addr=0xadfa, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xadfb, .a=0x76, .x=0x3f, .y=0x28, .sp=0x86, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0xbd}, {.addr=0xadfa, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xadfa, .value=0x86, .type=IO_READ},
        {.addr=0xadfb, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x5b63, .a=0x53, .x=0x4e, .y=0xce, .sp=0x72, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x77}, {.addr=0x5b63, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5b64, .a=0xca, .x=0x4e, .y=0xce, .sp=0x72, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x77}, {.addr=0x5b63, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5b63, .value=0x86, .type=IO_READ},
        {.addr=0x5b64, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x6a4a, .a=0xeb, .x=0xe8, .y=0x7f, .sp=0xa4, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0xb1}, {.addr=0x6a4a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6a4b, .a=0x9c, .x=0xe8, .y=0x7f, .sp=0xa4, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0xb1}, {.addr=0x6a4a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6a4a, .value=0x86, .type=IO_READ},
        {.addr=0x6a4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x7caa, .a=0x7c, .x=0xd7, .y=0xc3, .sp=0xa4, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x14}, {.addr=0x7caa, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7cab, .a=0x90, .x=0xd7, .y=0xc3, .sp=0xa4, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x14}, {.addr=0x7caa, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7caa, .value=0x86, .type=IO_READ},
        {.addr=0x7cab, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x3274, .a=0x8c, .x=0x0c, .y=0xf2, .sp=0xab, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0xc8}, {.addr=0x3274, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3275, .a=0x54, .x=0x0c, .y=0xf2, .sp=0xab, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xc8}, {.addr=0x3274, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3274, .value=0x86, .type=IO_READ},
        {.addr=0x3275, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x9b61, .a=0xc9, .x=0x5c, .y=0x44, .sp=0x74, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x9d}, {.addr=0x9b61, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9b62, .a=0x67, .x=0x5c, .y=0x44, .sp=0x74, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x9d}, {.addr=0x9b61, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9b61, .value=0x86, .type=IO_READ},
        {.addr=0x9b62, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xf2a1, .a=0xa6, .x=0x00, .y=0x92, .sp=0xd3, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x74}, {.addr=0xf2a1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf2a2, .a=0x1b, .x=0x00, .y=0x92, .sp=0xd3, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x74}, {.addr=0xf2a1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf2a1, .value=0x86, .type=IO_READ},
        {.addr=0xf2a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xc434, .a=0xfd, .x=0x8c, .y=0xf7, .sp=0x1e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x4c}, {.addr=0xc434, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc435, .a=0x49, .x=0x8c, .y=0xf7, .sp=0x1e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x4c}, {.addr=0xc434, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc434, .value=0x86, .type=IO_READ},
        {.addr=0xc435, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x9121, .a=0x45, .x=0x56, .y=0xba, .sp=0xb0, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x53}, {.addr=0x9121, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9122, .a=0x98, .x=0x56, .y=0xba, .sp=0xb0, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x53}, {.addr=0x9121, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9121, .value=0x86, .type=IO_READ},
        {.addr=0x9122, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x2d60, .a=0xe1, .x=0xac, .y=0x41, .sp=0x8e, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x60}, {.addr=0x2d60, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2d61, .a=0x41, .x=0xac, .y=0x41, .sp=0x8e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x60}, {.addr=0x2d60, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2d60, .value=0x86, .type=IO_READ},
        {.addr=0x2d61, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x8358, .a=0x82, .x=0xbc, .y=0xd7, .sp=0x22, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0xd6}, {.addr=0x8358, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8359, .a=0x58, .x=0xbc, .y=0xd7, .sp=0x22, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0xd6}, {.addr=0x8358, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8358, .value=0x86, .type=IO_READ},
        {.addr=0x8359, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x3a6a, .a=0xc8, .x=0x42, .y=0x26, .sp=0xfc, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0x17}, {.addr=0x3a6a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3a6b, .a=0xdf, .x=0x42, .y=0x26, .sp=0xfc, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0x17}, {.addr=0x3a6a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3a6a, .value=0x86, .type=IO_READ},
        {.addr=0x3a6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xa2af, .a=0xd1, .x=0x36, .y=0xb6, .sp=0x75, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0xf1}, {.addr=0xa2af, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa2b0, .a=0xc3, .x=0x36, .y=0xb6, .sp=0x75, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xf1}, {.addr=0xa2af, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa2af, .value=0x86, .type=IO_READ},
        {.addr=0xa2b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x0eb5, .a=0xeb, .x=0x5f, .y=0xe6, .sp=0x24, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0xe2}, {.addr=0x0eb5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0eb6, .a=0xcd, .x=0x5f, .y=0xe6, .sp=0x24, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0xe2}, {.addr=0x0eb5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0eb5, .value=0x86, .type=IO_READ},
        {.addr=0x0eb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x7498, .a=0xe1, .x=0x46, .y=0x13, .sp=0xe4, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x86}, {.addr=0x7498, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7499, .a=0x67, .x=0x46, .y=0x13, .sp=0xe4, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x86}, {.addr=0x7498, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7498, .value=0x86, .type=IO_READ},
        {.addr=0x7499, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x0c4d, .a=0x10, .x=0x9e, .y=0xdb, .sp=0x9a, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x69}, {.addr=0x0c4d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0c4e, .a=0x7a, .x=0x9e, .y=0xdb, .sp=0x9a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x69}, {.addr=0x0c4d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0c4d, .value=0x86, .type=IO_READ},
        {.addr=0x0c4e, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xc636, .a=0xab, .x=0xf4, .y=0x82, .sp=0x2d, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0xdd}, {.addr=0xc636, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc637, .a=0x89, .x=0xf4, .y=0x82, .sp=0x2d, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xdd}, {.addr=0xc636, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc636, .value=0x86, .type=IO_READ},
        {.addr=0xc637, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x7a54, .a=0x48, .x=0x4c, .y=0x5a, .sp=0x8b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0xd3}, {.addr=0x7a54, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7a55, .a=0x1c, .x=0x4c, .y=0x5a, .sp=0x8b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0xd3}, {.addr=0x7a54, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7a54, .value=0x86, .type=IO_READ},
        {.addr=0x7a55, .value=DUMMY, .type=IO_READ},
        {.addr=0x004c, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xe51d, .a=0xce, .x=0xec, .y=0xd6, .sp=0xd3, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x39}, {.addr=0xe51d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe51e, .a=0x07, .x=0xec, .y=0xd6, .sp=0xd3, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x39}, {.addr=0xe51d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe51d, .value=0x86, .type=IO_READ},
        {.addr=0xe51e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x2bb0, .a=0x09, .x=0x7a, .y=0x1a, .sp=0xdf, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x4b}, {.addr=0x2bb0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2bb1, .a=0x54, .x=0x7a, .y=0x1a, .sp=0xdf, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x4b}, {.addr=0x2bb0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2bb0, .value=0x86, .type=IO_READ},
        {.addr=0x2bb1, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x15a2, .a=0x82, .x=0x03, .y=0x4c, .sp=0xaf, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x79}, {.addr=0x15a2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x15a3, .a=0xfc, .x=0x03, .y=0x4c, .sp=0xaf, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x79}, {.addr=0x15a2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x15a2, .value=0x86, .type=IO_READ},
        {.addr=0x15a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x7ae8, .a=0x96, .x=0x58, .y=0x6e, .sp=0xa7, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x5c}, {.addr=0x7ae8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7ae9, .a=0xf2, .x=0x58, .y=0x6e, .sp=0xa7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x5c}, {.addr=0x7ae8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7ae8, .value=0x86, .type=IO_READ},
        {.addr=0x7ae9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x374e, .a=0xe5, .x=0xe1, .y=0x05, .sp=0xae, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0x97}, {.addr=0x374e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x374f, .a=0x7d, .x=0xe1, .y=0x05, .sp=0xae, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0x97}, {.addr=0x374e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x374e, .value=0x86, .type=IO_READ},
        {.addr=0x374f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x92de, .a=0x00, .x=0x26, .y=0x5a, .sp=0xb9, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0026, .value=0x65}, {.addr=0x92de, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x92df, .a=0x65, .x=0x26, .y=0x5a, .sp=0xb9, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0026, .value=0x65}, {.addr=0x92de, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x92de, .value=0x86, .type=IO_READ},
        {.addr=0x92df, .value=DUMMY, .type=IO_READ},
        {.addr=0x0026, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xa60b, .a=0x68, .x=0x82, .y=0xa3, .sp=0x3f, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x7d}, {.addr=0xa60b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa60c, .a=0xe6, .x=0x82, .y=0xa3, .sp=0x3f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x7d}, {.addr=0xa60b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa60b, .value=0x86, .type=IO_READ},
        {.addr=0xa60c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x99f3, .a=0x4d, .x=0xa0, .y=0x9a, .sp=0x20, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0xdc}, {.addr=0x99f3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x99f4, .a=0x2a, .x=0xa0, .y=0x9a, .sp=0x20, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0xdc}, {.addr=0x99f3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x99f3, .value=0x86, .type=IO_READ},
        {.addr=0x99f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a0, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x6e74, .a=0x36, .x=0x1f, .y=0x2b, .sp=0xd3, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xf4}, {.addr=0x6e74, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6e75, .a=0x2a, .x=0x1f, .y=0x2b, .sp=0xd3, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xf4}, {.addr=0x6e74, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6e74, .value=0x86, .type=IO_READ},
        {.addr=0x6e75, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x4ac8, .a=0x67, .x=0xf7, .y=0x6e, .sp=0xe0, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x72}, {.addr=0x4ac8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4ac9, .a=0xd9, .x=0xf7, .y=0x6e, .sp=0xe0, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x72}, {.addr=0x4ac8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4ac8, .value=0x86, .type=IO_READ},
        {.addr=0x4ac9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x94b9, .a=0xf2, .x=0x00, .y=0x25, .sp=0xca, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0xa8}, {.addr=0x94b9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x94ba, .a=0x9b, .x=0x00, .y=0x25, .sp=0xca, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0xa8}, {.addr=0x94b9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x94b9, .value=0x86, .type=IO_READ},
        {.addr=0x94ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0000, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x4b1b, .a=0xa8, .x=0xe8, .y=0x0d, .sp=0x17, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0x4e}, {.addr=0x4b1b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4b1c, .a=0xf7, .x=0xe8, .y=0x0d, .sp=0x17, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0x4e}, {.addr=0x4b1b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4b1b, .value=0x86, .type=IO_READ},
        {.addr=0x4b1c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x0a9e, .a=0xfe, .x=0x2e, .y=0x17, .sp=0xac, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x42}, {.addr=0x0a9e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0a9f, .a=0x41, .x=0x2e, .y=0x17, .sp=0xac, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x42}, {.addr=0x0a9e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0a9e, .value=0x86, .type=IO_READ},
        {.addr=0x0a9f, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xc3f2, .a=0xf2, .x=0x70, .y=0x00, .sp=0xad, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0x98}, {.addr=0xc3f2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc3f3, .a=0x8a, .x=0x70, .y=0x00, .sp=0xad, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0x98}, {.addr=0xc3f2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc3f2, .value=0x86, .type=IO_READ},
        {.addr=0xc3f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xcd3e, .a=0x06, .x=0xbd, .y=0x36, .sp=0x5b, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x52}, {.addr=0xcd3e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcd3f, .a=0x58, .x=0xbd, .y=0x36, .sp=0x5b, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x52}, {.addr=0xcd3e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcd3e, .value=0x86, .type=IO_READ},
        {.addr=0xcd3f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xb53f, .a=0x85, .x=0xba, .y=0x07, .sp=0x2b, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0x4e}, {.addr=0xb53f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb540, .a=0xd4, .x=0xba, .y=0x07, .sp=0x2b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0x4e}, {.addr=0xb53f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb53f, .value=0x86, .type=IO_READ},
        {.addr=0xb540, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x153d, .a=0x82, .x=0xd7, .y=0x53, .sp=0xef, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0xdc}, {.addr=0x153d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x153e, .a=0x5f, .x=0xd7, .y=0x53, .sp=0xef, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xdc}, {.addr=0x153d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x153d, .value=0x86, .type=IO_READ},
        {.addr=0x153e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x8171, .a=0xc8, .x=0x7d, .y=0x03, .sp=0x02, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x007d, .value=0x40}, {.addr=0x8171, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8172, .a=0x09, .x=0x7d, .y=0x03, .sp=0x02, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x007d, .value=0x40}, {.addr=0x8171, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8171, .value=0x86, .type=IO_READ},
        {.addr=0x8172, .value=DUMMY, .type=IO_READ},
        {.addr=0x007d, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x3b24, .a=0x3e, .x=0x6a, .y=0x0b, .sp=0x04, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0x62}, {.addr=0x3b24, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3b25, .a=0xa0, .x=0x6a, .y=0x0b, .sp=0x04, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0x62}, {.addr=0x3b24, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3b24, .value=0x86, .type=IO_READ},
        {.addr=0x3b25, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x6fe4, .a=0x45, .x=0x94, .y=0x8f, .sp=0x63, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x0b}, {.addr=0x6fe4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6fe5, .a=0x50, .x=0x94, .y=0x8f, .sp=0x63, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x0b}, {.addr=0x6fe4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6fe4, .value=0x86, .type=IO_READ},
        {.addr=0x6fe5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x3e24, .a=0x40, .x=0x49, .y=0xb3, .sp=0x38, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x19}, {.addr=0x3e24, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3e25, .a=0x59, .x=0x49, .y=0xb3, .sp=0x38, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x19}, {.addr=0x3e24, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3e24, .value=0x86, .type=IO_READ},
        {.addr=0x3e25, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xa2a4, .a=0x28, .x=0xe9, .y=0xd6, .sp=0x25, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0x72}, {.addr=0xa2a4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa2a5, .a=0x9b, .x=0xe9, .y=0xd6, .sp=0x25, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0x72}, {.addr=0xa2a4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa2a4, .value=0x86, .type=IO_READ},
        {.addr=0xa2a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e9, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x2257, .a=0xec, .x=0x37, .y=0xad, .sp=0x26, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0037, .value=0x9d}, {.addr=0x2257, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2258, .a=0x8a, .x=0x37, .y=0xad, .sp=0x26, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0037, .value=0x9d}, {.addr=0x2257, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2257, .value=0x86, .type=IO_READ},
        {.addr=0x2258, .value=DUMMY, .type=IO_READ},
        {.addr=0x0037, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x1a86, .a=0x2b, .x=0x7d, .y=0x3d, .sp=0x51, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x40}, {.addr=0x1a86, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1a87, .a=0x6b, .x=0x7d, .y=0x3d, .sp=0x51, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x40}, {.addr=0x1a86, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1a86, .value=0x86, .type=IO_READ},
        {.addr=0x1a87, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x15ff, .a=0xd3, .x=0x6f, .y=0xba, .sp=0x48, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0xa8}, {.addr=0x15ff, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1600, .a=0x7b, .x=0x6f, .y=0xba, .sp=0x48, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0xa8}, {.addr=0x15ff, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x15ff, .value=0x86, .type=IO_READ},
        {.addr=0x1600, .value=DUMMY, .type=IO_READ},
        {.addr=0x006f, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xa1b7, .a=0x78, .x=0xbd, .y=0xbd, .sp=0x8f, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0xac}, {.addr=0xa1b7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa1b8, .a=0x25, .x=0xbd, .y=0xbd, .sp=0x8f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0xac}, {.addr=0xa1b7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa1b7, .value=0x86, .type=IO_READ},
        {.addr=0xa1b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0200) {
    const struct CPU_State initial_cpu = {.pc=0x3596, .a=0x4b, .x=0xc4, .y=0xc3, .sp=0x46, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00c4, .value=0x9b}, {.addr=0x3596, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3597, .a=0xe6, .x=0xc4, .y=0xc3, .sp=0x46, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00c4, .value=0x9b}, {.addr=0x3596, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3596, .value=0x86, .type=IO_READ},
        {.addr=0x3597, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c4, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0201) {
    const struct CPU_State initial_cpu = {.pc=0x89a8, .a=0x39, .x=0xd5, .y=0x27, .sp=0x19, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x50}, {.addr=0x89a8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x89a9, .a=0x8a, .x=0xd5, .y=0x27, .sp=0x19, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x50}, {.addr=0x89a8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x89a8, .value=0x86, .type=IO_READ},
        {.addr=0x89a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0202) {
    const struct CPU_State initial_cpu = {.pc=0xd9bc, .a=0x71, .x=0x6e, .y=0xab, .sp=0x69, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x5d}, {.addr=0xd9bc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd9bd, .a=0xce, .x=0x6e, .y=0xab, .sp=0x69, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x5d}, {.addr=0xd9bc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd9bc, .value=0x86, .type=IO_READ},
        {.addr=0xd9bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0203) {
    const struct CPU_State initial_cpu = {.pc=0xb8b9, .a=0x8e, .x=0x51, .y=0x6c, .sp=0x77, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0x69}, {.addr=0xb8b9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb8ba, .a=0xf7, .x=0x51, .y=0x6c, .sp=0x77, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0x69}, {.addr=0xb8b9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb8b9, .value=0x86, .type=IO_READ},
        {.addr=0xb8ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0051, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0204) {
    const struct CPU_State initial_cpu = {.pc=0xcde3, .a=0x07, .x=0xd4, .y=0x33, .sp=0x58, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0xc3}, {.addr=0xcde3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcde4, .a=0xca, .x=0xd4, .y=0x33, .sp=0x58, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0xc3}, {.addr=0xcde3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcde3, .value=0x86, .type=IO_READ},
        {.addr=0xcde4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0205) {
    const struct CPU_State initial_cpu = {.pc=0xad75, .a=0x5f, .x=0x06, .y=0x29, .sp=0xd3, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0xad75, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xad76, .a=0x5f, .x=0x06, .y=0x29, .sp=0xd3, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0xad75, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xad75, .value=0x86, .type=IO_READ},
        {.addr=0xad76, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0206) {
    const struct CPU_State initial_cpu = {.pc=0xf51e, .a=0xf3, .x=0x3c, .y=0x24, .sp=0xc4, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x88}, {.addr=0xf51e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf51f, .a=0x7b, .x=0x3c, .y=0x24, .sp=0xc4, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x88}, {.addr=0xf51e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf51e, .value=0x86, .type=IO_READ},
        {.addr=0xf51f, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0207) {
    const struct CPU_State initial_cpu = {.pc=0x66f4, .a=0x23, .x=0x62, .y=0x96, .sp=0xbe, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0xf8}, {.addr=0x66f4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x66f5, .a=0x1c, .x=0x62, .y=0x96, .sp=0xbe, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xf8}, {.addr=0x66f4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x66f4, .value=0x86, .type=IO_READ},
        {.addr=0x66f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0208) {
    const struct CPU_State initial_cpu = {.pc=0x1197, .a=0x89, .x=0x6d, .y=0xe9, .sp=0x1b, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x006d, .value=0x6b}, {.addr=0x1197, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1198, .a=0xf5, .x=0x6d, .y=0xe9, .sp=0x1b, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x006d, .value=0x6b}, {.addr=0x1197, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1197, .value=0x86, .type=IO_READ},
        {.addr=0x1198, .value=DUMMY, .type=IO_READ},
        {.addr=0x006d, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0209) {
    const struct CPU_State initial_cpu = {.pc=0xc68b, .a=0xd6, .x=0x53, .y=0x61, .sp=0xb4, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0053, .value=0x92}, {.addr=0xc68b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc68c, .a=0x69, .x=0x53, .y=0x61, .sp=0xb4, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0053, .value=0x92}, {.addr=0xc68b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc68b, .value=0x86, .type=IO_READ},
        {.addr=0xc68c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0053, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_020A) {
    const struct CPU_State initial_cpu = {.pc=0x289c, .a=0xfa, .x=0x5f, .y=0xa2, .sp=0xbf, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x40}, {.addr=0x289c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x289d, .a=0x3a, .x=0x5f, .y=0xa2, .sp=0xbf, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x40}, {.addr=0x289c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x289c, .value=0x86, .type=IO_READ},
        {.addr=0x289d, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_020B) {
    const struct CPU_State initial_cpu = {.pc=0xb400, .a=0xd3, .x=0xa8, .y=0x58, .sp=0x23, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00a8, .value=0xea}, {.addr=0xb400, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb401, .a=0xbd, .x=0xa8, .y=0x58, .sp=0x23, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00a8, .value=0xea}, {.addr=0xb400, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb400, .value=0x86, .type=IO_READ},
        {.addr=0xb401, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a8, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_020D) {
    const struct CPU_State initial_cpu = {.pc=0x55b7, .a=0xcb, .x=0x54, .y=0xcb, .sp=0x03, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x87}, {.addr=0x55b7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x55b8, .a=0x53, .x=0x54, .y=0xcb, .sp=0x03, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0x87}, {.addr=0x55b7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x55b7, .value=0x86, .type=IO_READ},
        {.addr=0x55b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0054, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_020E) {
    const struct CPU_State initial_cpu = {.pc=0x87d6, .a=0xfb, .x=0xa6, .y=0x2c, .sp=0xdf, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x36}, {.addr=0x87d6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x87d7, .a=0x31, .x=0xa6, .y=0x2c, .sp=0xdf, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x36}, {.addr=0x87d6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x87d6, .value=0x86, .type=IO_READ},
        {.addr=0x87d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_020F) {
    const struct CPU_State initial_cpu = {.pc=0x1993, .a=0x60, .x=0x38, .y=0x07, .sp=0xf6, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0xa0}, {.addr=0x1993, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1994, .a=0x01, .x=0x38, .y=0x07, .sp=0xf6, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0xa0}, {.addr=0x1993, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1993, .value=0x86, .type=IO_READ},
        {.addr=0x1994, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0210) {
    const struct CPU_State initial_cpu = {.pc=0xee94, .a=0x96, .x=0x1e, .y=0xe7, .sp=0x8d, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0xed}, {.addr=0xee94, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xee95, .a=0x84, .x=0x1e, .y=0xe7, .sp=0x8d, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0xed}, {.addr=0xee94, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xee94, .value=0x86, .type=IO_READ},
        {.addr=0xee95, .value=DUMMY, .type=IO_READ},
        {.addr=0x001e, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0211) {
    const struct CPU_State initial_cpu = {.pc=0xe31f, .a=0x36, .x=0x07, .y=0x76, .sp=0x1e, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0x6b}, {.addr=0xe31f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe320, .a=0xa1, .x=0x07, .y=0x76, .sp=0x1e, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0x6b}, {.addr=0xe31f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe31f, .value=0x86, .type=IO_READ},
        {.addr=0xe320, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0213) {
    const struct CPU_State initial_cpu = {.pc=0xd4b4, .a=0x29, .x=0xd4, .y=0x8b, .sp=0xdc, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0xbb}, {.addr=0xd4b4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd4b5, .a=0xe5, .x=0xd4, .y=0x8b, .sp=0xdc, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0xbb}, {.addr=0xd4b4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd4b4, .value=0x86, .type=IO_READ},
        {.addr=0xd4b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0214) {
    const struct CPU_State initial_cpu = {.pc=0xc245, .a=0xe8, .x=0x2b, .y=0xea, .sp=0xc0, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x32}, {.addr=0xc245, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc246, .a=0x1b, .x=0x2b, .y=0xea, .sp=0xc0, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0x32}, {.addr=0xc245, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc245, .value=0x86, .type=IO_READ},
        {.addr=0xc246, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0215) {
    const struct CPU_State initial_cpu = {.pc=0x3c50, .a=0xfe, .x=0x45, .y=0xe4, .sp=0x1c, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x80}, {.addr=0x3c50, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3c51, .a=0x7f, .x=0x45, .y=0xe4, .sp=0x1c, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x80}, {.addr=0x3c50, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3c50, .value=0x86, .type=IO_READ},
        {.addr=0x3c51, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0216) {
    const struct CPU_State initial_cpu = {.pc=0x25e6, .a=0x03, .x=0xd9, .y=0x96, .sp=0x34, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0xc8}, {.addr=0x25e6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x25e7, .a=0xcc, .x=0xd9, .y=0x96, .sp=0x34, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xc8}, {.addr=0x25e6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x25e6, .value=0x86, .type=IO_READ},
        {.addr=0x25e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0217) {
    const struct CPU_State initial_cpu = {.pc=0xe97c, .a=0xe3, .x=0x74, .y=0x48, .sp=0xb9, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0xbc}, {.addr=0xe97c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe97d, .a=0xa0, .x=0x74, .y=0x48, .sp=0xb9, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0xbc}, {.addr=0xe97c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe97c, .value=0x86, .type=IO_READ},
        {.addr=0xe97d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0218) {
    const struct CPU_State initial_cpu = {.pc=0x8ffc, .a=0x7c, .x=0x18, .y=0x48, .sp=0x54, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x82}, {.addr=0x8ffc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8ffd, .a=0xfe, .x=0x18, .y=0x48, .sp=0x54, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x82}, {.addr=0x8ffc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8ffc, .value=0x86, .type=IO_READ},
        {.addr=0x8ffd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0219) {
    const struct CPU_State initial_cpu = {.pc=0x21b8, .a=0x6a, .x=0xf8, .y=0x12, .sp=0xd1, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x4f}, {.addr=0x21b8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x21b9, .a=0xba, .x=0xf8, .y=0x12, .sp=0xd1, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x4f}, {.addr=0x21b8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x21b8, .value=0x86, .type=IO_READ},
        {.addr=0x21b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_021A) {
    const struct CPU_State initial_cpu = {.pc=0x43f8, .a=0x46, .x=0x6b, .y=0xd5, .sp=0xde, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0x3d}, {.addr=0x43f8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x43f9, .a=0x84, .x=0x6b, .y=0xd5, .sp=0xde, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0x3d}, {.addr=0x43f8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x43f8, .value=0x86, .type=IO_READ},
        {.addr=0x43f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x006b, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_021B) {
    const struct CPU_State initial_cpu = {.pc=0xae1b, .a=0x5b, .x=0xc3, .y=0x88, .sp=0x46, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xac}, {.addr=0xae1b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xae1c, .a=0x08, .x=0xc3, .y=0x88, .sp=0x46, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xac}, {.addr=0xae1b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xae1b, .value=0x86, .type=IO_READ},
        {.addr=0xae1c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_021C) {
    const struct CPU_State initial_cpu = {.pc=0xfb85, .a=0x96, .x=0xcc, .y=0xcd, .sp=0xa6, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x00cc, .value=0x63}, {.addr=0xfb85, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xfb86, .a=0xfa, .x=0xcc, .y=0xcd, .sp=0xa6, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00cc, .value=0x63}, {.addr=0xfb85, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xfb85, .value=0x86, .type=IO_READ},
        {.addr=0xfb86, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cc, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_021D) {
    const struct CPU_State initial_cpu = {.pc=0xf763, .a=0x04, .x=0x87, .y=0x60, .sp=0xa5, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0xc6}, {.addr=0xf763, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf764, .a=0xca, .x=0x87, .y=0x60, .sp=0xa5, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0xc6}, {.addr=0xf763, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf763, .value=0x86, .type=IO_READ},
        {.addr=0xf764, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_021E) {
    const struct CPU_State initial_cpu = {.pc=0xf09f, .a=0x23, .x=0x85, .y=0x25, .sp=0xc4, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0x17}, {.addr=0xf09f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf0a0, .a=0x3b, .x=0x85, .y=0x25, .sp=0xc4, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0x17}, {.addr=0xf09f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf09f, .value=0x86, .type=IO_READ},
        {.addr=0xf0a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_021F) {
    const struct CPU_State initial_cpu = {.pc=0x5038, .a=0x8d, .x=0xc3, .y=0xc1, .sp=0x51, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x99}, {.addr=0x5038, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5039, .a=0x26, .x=0xc3, .y=0xc1, .sp=0x51, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x99}, {.addr=0x5038, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5038, .value=0x86, .type=IO_READ},
        {.addr=0x5039, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0220) {
    const struct CPU_State initial_cpu = {.pc=0x3ece, .a=0x4c, .x=0xd6, .y=0x48, .sp=0x19, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0x66}, {.addr=0x3ece, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3ecf, .a=0xb3, .x=0xd6, .y=0x48, .sp=0x19, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0x66}, {.addr=0x3ece, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3ece, .value=0x86, .type=IO_READ},
        {.addr=0x3ecf, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0221) {
    const struct CPU_State initial_cpu = {.pc=0x1690, .a=0x02, .x=0x61, .y=0x7b, .sp=0x4d, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0061, .value=0x1e}, {.addr=0x1690, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1691, .a=0x20, .x=0x61, .y=0x7b, .sp=0x4d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0061, .value=0x1e}, {.addr=0x1690, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1690, .value=0x86, .type=IO_READ},
        {.addr=0x1691, .value=DUMMY, .type=IO_READ},
        {.addr=0x0061, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0222) {
    const struct CPU_State initial_cpu = {.pc=0x9143, .a=0x7d, .x=0xc9, .y=0xcf, .sp=0xbe, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x38}, {.addr=0x9143, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9144, .a=0xb5, .x=0xc9, .y=0xcf, .sp=0xbe, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x38}, {.addr=0x9143, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9143, .value=0x86, .type=IO_READ},
        {.addr=0x9144, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0223) {
    const struct CPU_State initial_cpu = {.pc=0x6022, .a=0xa9, .x=0xb9, .y=0x2f, .sp=0x67, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x55}, {.addr=0x6022, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6023, .a=0xfe, .x=0xb9, .y=0x2f, .sp=0x67, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x55}, {.addr=0x6022, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6022, .value=0x86, .type=IO_READ},
        {.addr=0x6023, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0224) {
    const struct CPU_State initial_cpu = {.pc=0x7695, .a=0x00, .x=0xca, .y=0x53, .sp=0x41, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x00ca, .value=0xec}, {.addr=0x7695, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7696, .a=0xec, .x=0xca, .y=0x53, .sp=0x41, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00ca, .value=0xec}, {.addr=0x7695, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7695, .value=0x86, .type=IO_READ},
        {.addr=0x7696, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ca, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0225) {
    const struct CPU_State initial_cpu = {.pc=0xcae2, .a=0xbe, .x=0xef, .y=0x8a, .sp=0xac, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x19}, {.addr=0xcae2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcae3, .a=0xd8, .x=0xef, .y=0x8a, .sp=0xac, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x19}, {.addr=0xcae2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcae2, .value=0x86, .type=IO_READ},
        {.addr=0xcae3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0226) {
    const struct CPU_State initial_cpu = {.pc=0xc4c9, .a=0x85, .x=0x22, .y=0x4e, .sp=0xc3, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0xda}, {.addr=0xc4c9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc4ca, .a=0x60, .x=0x22, .y=0x4e, .sp=0xc3, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xda}, {.addr=0xc4c9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc4c9, .value=0x86, .type=IO_READ},
        {.addr=0xc4ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0227) {
    const struct CPU_State initial_cpu = {.pc=0xdb5a, .a=0x94, .x=0xc0, .y=0x0d, .sp=0xce, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x15}, {.addr=0xdb5a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xdb5b, .a=0xa9, .x=0xc0, .y=0x0d, .sp=0xce, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x15}, {.addr=0xdb5a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xdb5a, .value=0x86, .type=IO_READ},
        {.addr=0xdb5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0228) {
    const struct CPU_State initial_cpu = {.pc=0x2756, .a=0xc5, .x=0x79, .y=0xab, .sp=0x9a, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0x76}, {.addr=0x2756, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2757, .a=0x3c, .x=0x79, .y=0xab, .sp=0x9a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0x76}, {.addr=0x2756, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2756, .value=0x86, .type=IO_READ},
        {.addr=0x2757, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0229) {
    const struct CPU_State initial_cpu = {.pc=0x1ffa, .a=0xe9, .x=0xaf, .y=0x89, .sp=0x22, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0x0a}, {.addr=0x1ffa, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1ffb, .a=0xf4, .x=0xaf, .y=0x89, .sp=0x22, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0x0a}, {.addr=0x1ffa, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1ffa, .value=0x86, .type=IO_READ},
        {.addr=0x1ffb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_022A) {
    const struct CPU_State initial_cpu = {.pc=0x2bcf, .a=0x95, .x=0xc8, .y=0xf4, .sp=0xee, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0x2b}, {.addr=0x2bcf, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2bd0, .a=0xc1, .x=0xc8, .y=0xf4, .sp=0xee, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0x2b}, {.addr=0x2bcf, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2bcf, .value=0x86, .type=IO_READ},
        {.addr=0x2bd0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c8, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_022B) {
    const struct CPU_State initial_cpu = {.pc=0x5fb3, .a=0xc8, .x=0xa7, .y=0x1b, .sp=0xe6, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0xe6}, {.addr=0x5fb3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5fb4, .a=0xae, .x=0xa7, .y=0x1b, .sp=0xe6, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0xe6}, {.addr=0x5fb3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5fb3, .value=0x86, .type=IO_READ},
        {.addr=0x5fb4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_022C) {
    const struct CPU_State initial_cpu = {.pc=0xf8a4, .a=0x9c, .x=0x4a, .y=0x1b, .sp=0x3d, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x3e}, {.addr=0xf8a4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf8a5, .a=0xda, .x=0x4a, .y=0x1b, .sp=0x3d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x3e}, {.addr=0xf8a4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf8a4, .value=0x86, .type=IO_READ},
        {.addr=0xf8a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_022D) {
    const struct CPU_State initial_cpu = {.pc=0xee41, .a=0xe6, .x=0x71, .y=0x4f, .sp=0xa2, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x13}, {.addr=0xee41, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xee42, .a=0xf9, .x=0x71, .y=0x4f, .sp=0xa2, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x13}, {.addr=0xee41, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xee41, .value=0x86, .type=IO_READ},
        {.addr=0xee42, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_022E) {
    const struct CPU_State initial_cpu = {.pc=0xd00a, .a=0x62, .x=0x86, .y=0x8e, .sp=0xaf, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0xb3}, {.addr=0xd00a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd00b, .a=0x16, .x=0x86, .y=0x8e, .sp=0xaf, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0xb3}, {.addr=0xd00a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd00a, .value=0x86, .type=IO_READ},
        {.addr=0xd00b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_022F) {
    const struct CPU_State initial_cpu = {.pc=0xdb85, .a=0x1a, .x=0xeb, .y=0x46, .sp=0xec, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x12}, {.addr=0xdb85, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xdb86, .a=0x2c, .x=0xeb, .y=0x46, .sp=0xec, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x12}, {.addr=0xdb85, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xdb85, .value=0x86, .type=IO_READ},
        {.addr=0xdb86, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0230) {
    const struct CPU_State initial_cpu = {.pc=0x26a7, .a=0x93, .x=0x0d, .y=0x41, .sp=0x22, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x3a}, {.addr=0x26a7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x26a8, .a=0xcd, .x=0x0d, .y=0x41, .sp=0x22, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x3a}, {.addr=0x26a7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x26a7, .value=0x86, .type=IO_READ},
        {.addr=0x26a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0231) {
    const struct CPU_State initial_cpu = {.pc=0x8289, .a=0xc6, .x=0x7c, .y=0x9a, .sp=0xb4, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x007c, .value=0x9a}, {.addr=0x8289, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x828a, .a=0x61, .x=0x7c, .y=0x9a, .sp=0xb4, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x007c, .value=0x9a}, {.addr=0x8289, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8289, .value=0x86, .type=IO_READ},
        {.addr=0x828a, .value=DUMMY, .type=IO_READ},
        {.addr=0x007c, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0232) {
    const struct CPU_State initial_cpu = {.pc=0xf505, .a=0x54, .x=0x54, .y=0x07, .sp=0xfc, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x7f}, {.addr=0xf505, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf506, .a=0xd4, .x=0x54, .y=0x07, .sp=0xfc, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0x7f}, {.addr=0xf505, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf505, .value=0x86, .type=IO_READ},
        {.addr=0xf506, .value=DUMMY, .type=IO_READ},
        {.addr=0x0054, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0233) {
    const struct CPU_State initial_cpu = {.pc=0xf2b3, .a=0x28, .x=0xc0, .y=0x77, .sp=0xb2, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x7b}, {.addr=0xf2b3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf2b4, .a=0xa4, .x=0xc0, .y=0x77, .sp=0xb2, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x7b}, {.addr=0xf2b3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf2b3, .value=0x86, .type=IO_READ},
        {.addr=0xf2b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0234) {
    const struct CPU_State initial_cpu = {.pc=0x58ce, .a=0xf8, .x=0xd8, .y=0x5c, .sp=0x4c, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0x5f}, {.addr=0x58ce, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x58cf, .a=0x58, .x=0xd8, .y=0x5c, .sp=0x4c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0x5f}, {.addr=0x58ce, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x58ce, .value=0x86, .type=IO_READ},
        {.addr=0x58cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0235) {
    const struct CPU_State initial_cpu = {.pc=0xdb24, .a=0xeb, .x=0x67, .y=0x53, .sp=0xed, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x14}, {.addr=0xdb24, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xdb25, .a=0xff, .x=0x67, .y=0x53, .sp=0xed, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x14}, {.addr=0xdb24, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xdb24, .value=0x86, .type=IO_READ},
        {.addr=0xdb25, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0236) {
    const struct CPU_State initial_cpu = {.pc=0x23c2, .a=0xf5, .x=0xd4, .y=0x63, .sp=0x18, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xe5}, {.addr=0x23c2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x23c3, .a=0xda, .x=0xd4, .y=0x63, .sp=0x18, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xe5}, {.addr=0x23c2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x23c2, .value=0x86, .type=IO_READ},
        {.addr=0x23c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0237) {
    const struct CPU_State initial_cpu = {.pc=0x33b1, .a=0x14, .x=0xd5, .y=0x0c, .sp=0x4d, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0x2e}, {.addr=0x33b1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x33b2, .a=0x42, .x=0xd5, .y=0x0c, .sp=0x4d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0x2e}, {.addr=0x33b1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x33b1, .value=0x86, .type=IO_READ},
        {.addr=0x33b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0238) {
    const struct CPU_State initial_cpu = {.pc=0x6126, .a=0x3b, .x=0x19, .y=0xa9, .sp=0xe5, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0019, .value=0xd5}, {.addr=0x6126, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6127, .a=0x11, .x=0x19, .y=0xa9, .sp=0xe5, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0019, .value=0xd5}, {.addr=0x6126, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6126, .value=0x86, .type=IO_READ},
        {.addr=0x6127, .value=DUMMY, .type=IO_READ},
        {.addr=0x0019, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0239) {
    const struct CPU_State initial_cpu = {.pc=0x0ffa, .a=0x56, .x=0x1b, .y=0xc4, .sp=0x4a, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0xb5}, {.addr=0x0ffa, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0ffb, .a=0x0b, .x=0x1b, .y=0xc4, .sp=0x4a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xb5}, {.addr=0x0ffa, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0ffa, .value=0x86, .type=IO_READ},
        {.addr=0x0ffb, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_023A) {
    const struct CPU_State initial_cpu = {.pc=0xd58d, .a=0x3c, .x=0x3d, .y=0x72, .sp=0x43, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0x26}, {.addr=0xd58d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd58e, .a=0x62, .x=0x3d, .y=0x72, .sp=0x43, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0x26}, {.addr=0xd58d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd58d, .value=0x86, .type=IO_READ},
        {.addr=0xd58e, .value=DUMMY, .type=IO_READ},
        {.addr=0x003d, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_023B) {
    const struct CPU_State initial_cpu = {.pc=0x615d, .a=0xaa, .x=0xb2, .y=0xcd, .sp=0x66, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0xf9}, {.addr=0x615d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x615e, .a=0xa4, .x=0xb2, .y=0xcd, .sp=0x66, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xf9}, {.addr=0x615d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x615d, .value=0x86, .type=IO_READ},
        {.addr=0x615e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_023C) {
    const struct CPU_State initial_cpu = {.pc=0xd9f8, .a=0x29, .x=0xb9, .y=0x3e, .sp=0xe5, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x46}, {.addr=0xd9f8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd9f9, .a=0x6f, .x=0xb9, .y=0x3e, .sp=0xe5, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x46}, {.addr=0xd9f8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd9f8, .value=0x86, .type=IO_READ},
        {.addr=0xd9f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_023D) {
    const struct CPU_State initial_cpu = {.pc=0xcca5, .a=0x3d, .x=0xdc, .y=0x2e, .sp=0x60, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xac}, {.addr=0xcca5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcca6, .a=0xea, .x=0xdc, .y=0x2e, .sp=0x60, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xac}, {.addr=0xcca5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcca5, .value=0x86, .type=IO_READ},
        {.addr=0xcca6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_023E) {
    const struct CPU_State initial_cpu = {.pc=0xb622, .a=0x27, .x=0xaf, .y=0x13, .sp=0xea, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0x14}, {.addr=0xb622, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb623, .a=0x3b, .x=0xaf, .y=0x13, .sp=0xea, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0x14}, {.addr=0xb622, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb622, .value=0x86, .type=IO_READ},
        {.addr=0xb623, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_023F) {
    const struct CPU_State initial_cpu = {.pc=0x5a1e, .a=0x49, .x=0x74, .y=0x15, .sp=0xc6, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0xab}, {.addr=0x5a1e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5a1f, .a=0xf5, .x=0x74, .y=0x15, .sp=0xc6, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xab}, {.addr=0x5a1e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5a1e, .value=0x86, .type=IO_READ},
        {.addr=0x5a1f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0240) {
    const struct CPU_State initial_cpu = {.pc=0x656c, .a=0x98, .x=0x34, .y=0xc7, .sp=0x8c, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xa8}, {.addr=0x656c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x656d, .a=0x41, .x=0x34, .y=0xc7, .sp=0x8c, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xa8}, {.addr=0x656c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x656c, .value=0x86, .type=IO_READ},
        {.addr=0x656d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0241) {
    const struct CPU_State initial_cpu = {.pc=0x3d26, .a=0xf0, .x=0xf9, .y=0xbe, .sp=0x3f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0xbf}, {.addr=0x3d26, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3d27, .a=0xaf, .x=0xf9, .y=0xbe, .sp=0x3f, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0xbf}, {.addr=0x3d26, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3d26, .value=0x86, .type=IO_READ},
        {.addr=0x3d27, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0242) {
    const struct CPU_State initial_cpu = {.pc=0xb93b, .a=0x30, .x=0x8e, .y=0x7f, .sp=0xce, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0x88}, {.addr=0xb93b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb93c, .a=0xb8, .x=0x8e, .y=0x7f, .sp=0xce, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0x88}, {.addr=0xb93b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb93b, .value=0x86, .type=IO_READ},
        {.addr=0xb93c, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0243) {
    const struct CPU_State initial_cpu = {.pc=0x87f8, .a=0x49, .x=0xbb, .y=0xea, .sp=0xe0, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0x6f}, {.addr=0x87f8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x87f9, .a=0xb8, .x=0xbb, .y=0xea, .sp=0xe0, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0x6f}, {.addr=0x87f8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x87f8, .value=0x86, .type=IO_READ},
        {.addr=0x87f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bb, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0244) {
    const struct CPU_State initial_cpu = {.pc=0x9667, .a=0xc3, .x=0xdc, .y=0xdf, .sp=0xdf, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0xf9}, {.addr=0x9667, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9668, .a=0xbc, .x=0xdc, .y=0xdf, .sp=0xdf, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0xf9}, {.addr=0x9667, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9667, .value=0x86, .type=IO_READ},
        {.addr=0x9668, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0245) {
    const struct CPU_State initial_cpu = {.pc=0x1f54, .a=0x5e, .x=0x7b, .y=0x7a, .sp=0x4b, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0x3c}, {.addr=0x1f54, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1f55, .a=0x9b, .x=0x7b, .y=0x7a, .sp=0x4b, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0x3c}, {.addr=0x1f54, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1f54, .value=0x86, .type=IO_READ},
        {.addr=0x1f55, .value=DUMMY, .type=IO_READ},
        {.addr=0x007b, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0246) {
    const struct CPU_State initial_cpu = {.pc=0x7d22, .a=0xc7, .x=0xae, .y=0xc5, .sp=0x82, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x27}, {.addr=0x7d22, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7d23, .a=0xee, .x=0xae, .y=0xc5, .sp=0x82, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x27}, {.addr=0x7d22, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7d22, .value=0x86, .type=IO_READ},
        {.addr=0x7d23, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0247) {
    const struct CPU_State initial_cpu = {.pc=0xb7e8, .a=0x15, .x=0xc3, .y=0x43, .sp=0xbe, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0xa9}, {.addr=0xb7e8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb7e9, .a=0xbe, .x=0xc3, .y=0x43, .sp=0xbe, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0xa9}, {.addr=0xb7e8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb7e8, .value=0x86, .type=IO_READ},
        {.addr=0xb7e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0248) {
    const struct CPU_State initial_cpu = {.pc=0x8c38, .a=0x09, .x=0xdc, .y=0xb0, .sp=0x8d, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x13}, {.addr=0x8c38, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8c39, .a=0x1c, .x=0xdc, .y=0xb0, .sp=0x8d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x13}, {.addr=0x8c38, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8c38, .value=0x86, .type=IO_READ},
        {.addr=0x8c39, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0249) {
    const struct CPU_State initial_cpu = {.pc=0xf1e6, .a=0x22, .x=0x78, .y=0x7a, .sp=0x67, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0078, .value=0xbc}, {.addr=0xf1e6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf1e7, .a=0xdf, .x=0x78, .y=0x7a, .sp=0x67, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0078, .value=0xbc}, {.addr=0xf1e6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf1e6, .value=0x86, .type=IO_READ},
        {.addr=0xf1e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0078, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_024A) {
    const struct CPU_State initial_cpu = {.pc=0xcfc8, .a=0x22, .x=0x8d, .y=0xcf, .sp=0xaf, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x08}, {.addr=0xcfc8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcfc9, .a=0x2b, .x=0x8d, .y=0xcf, .sp=0xaf, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x08}, {.addr=0xcfc8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcfc8, .value=0x86, .type=IO_READ},
        {.addr=0xcfc9, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_024B) {
    const struct CPU_State initial_cpu = {.pc=0xf874, .a=0x25, .x=0x44, .y=0x6d, .sp=0x95, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x3a}, {.addr=0xf874, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf875, .a=0x60, .x=0x44, .y=0x6d, .sp=0x95, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x3a}, {.addr=0xf874, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf874, .value=0x86, .type=IO_READ},
        {.addr=0xf875, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_024C) {
    const struct CPU_State initial_cpu = {.pc=0x5cd6, .a=0xd3, .x=0x1c, .y=0x6c, .sp=0x24, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0x43}, {.addr=0x5cd6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5cd7, .a=0x17, .x=0x1c, .y=0x6c, .sp=0x24, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0x43}, {.addr=0x5cd6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5cd6, .value=0x86, .type=IO_READ},
        {.addr=0x5cd7, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_024D) {
    const struct CPU_State initial_cpu = {.pc=0x79d7, .a=0xe8, .x=0x7d, .y=0xe4, .sp=0xe5, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x007d, .value=0x0f}, {.addr=0x79d7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x79d8, .a=0xf8, .x=0x7d, .y=0xe4, .sp=0xe5, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x007d, .value=0x0f}, {.addr=0x79d7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x79d7, .value=0x86, .type=IO_READ},
        {.addr=0x79d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x007d, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_024E) {
    const struct CPU_State initial_cpu = {.pc=0x3c13, .a=0xc5, .x=0x39, .y=0xb5, .sp=0x9f, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0xfb}, {.addr=0x3c13, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3c14, .a=0xc0, .x=0x39, .y=0xb5, .sp=0x9f, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0xfb}, {.addr=0x3c13, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3c13, .value=0x86, .type=IO_READ},
        {.addr=0x3c14, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_024F) {
    const struct CPU_State initial_cpu = {.pc=0x40b7, .a=0xdb, .x=0x40, .y=0xde, .sp=0x01, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0040, .value=0xd0}, {.addr=0x40b7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x40b8, .a=0xac, .x=0x40, .y=0xde, .sp=0x01, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0040, .value=0xd0}, {.addr=0x40b7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x40b7, .value=0x86, .type=IO_READ},
        {.addr=0x40b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0040, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0250) {
    const struct CPU_State initial_cpu = {.pc=0x49f5, .a=0x01, .x=0x98, .y=0x5a, .sp=0x9f, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x98}, {.addr=0x49f5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x49f6, .a=0x9a, .x=0x98, .y=0x5a, .sp=0x9f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x98}, {.addr=0x49f5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x49f5, .value=0x86, .type=IO_READ},
        {.addr=0x49f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0251) {
    const struct CPU_State initial_cpu = {.pc=0xf4e1, .a=0xc7, .x=0xbc, .y=0x95, .sp=0x72, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0xb0}, {.addr=0xf4e1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf4e2, .a=0x77, .x=0xbc, .y=0x95, .sp=0x72, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0xb0}, {.addr=0xf4e1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf4e1, .value=0x86, .type=IO_READ},
        {.addr=0xf4e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0252) {
    const struct CPU_State initial_cpu = {.pc=0xe5ff, .a=0x84, .x=0x66, .y=0x58, .sp=0xf5, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x00}, {.addr=0xe5ff, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe600, .a=0x85, .x=0x66, .y=0x58, .sp=0xf5, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x00}, {.addr=0xe5ff, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe5ff, .value=0x86, .type=IO_READ},
        {.addr=0xe600, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0254) {
    const struct CPU_State initial_cpu = {.pc=0xb4b5, .a=0xb0, .x=0x1c, .y=0x64, .sp=0x2c, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0x00}, {.addr=0xb4b5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb4b6, .a=0xb1, .x=0x1c, .y=0x64, .sp=0x2c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0x00}, {.addr=0xb4b5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb4b5, .value=0x86, .type=IO_READ},
        {.addr=0xb4b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0255) {
    const struct CPU_State initial_cpu = {.pc=0x2f18, .a=0x30, .x=0x33, .y=0xf2, .sp=0x0f, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0xb9}, {.addr=0x2f18, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2f19, .a=0xe9, .x=0x33, .y=0xf2, .sp=0x0f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xb9}, {.addr=0x2f18, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2f18, .value=0x86, .type=IO_READ},
        {.addr=0x2f19, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0256) {
    const struct CPU_State initial_cpu = {.pc=0xb9f8, .a=0xab, .x=0xca, .y=0xce, .sp=0xa4, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0xcb}, {.addr=0xb9f8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb9f9, .a=0x76, .x=0xca, .y=0xce, .sp=0xa4, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0xcb}, {.addr=0xb9f8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb9f8, .value=0x86, .type=IO_READ},
        {.addr=0xb9f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0257) {
    const struct CPU_State initial_cpu = {.pc=0x25a7, .a=0x61, .x=0xc2, .y=0xb1, .sp=0x0c, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0xe7}, {.addr=0x25a7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x25a8, .a=0x48, .x=0xc2, .y=0xb1, .sp=0x0c, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0xe7}, {.addr=0x25a7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x25a7, .value=0x86, .type=IO_READ},
        {.addr=0x25a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0258) {
    const struct CPU_State initial_cpu = {.pc=0xb89a, .a=0x69, .x=0xe0, .y=0x62, .sp=0xc9, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x09}, {.addr=0xb89a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb89b, .a=0x73, .x=0xe0, .y=0x62, .sp=0xc9, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x09}, {.addr=0xb89a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb89a, .value=0x86, .type=IO_READ},
        {.addr=0xb89b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0259) {
    const struct CPU_State initial_cpu = {.pc=0x6451, .a=0xd9, .x=0x25, .y=0x98, .sp=0x73, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0xfa}, {.addr=0x6451, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6452, .a=0xd3, .x=0x25, .y=0x98, .sp=0x73, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0xfa}, {.addr=0x6451, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6451, .value=0x86, .type=IO_READ},
        {.addr=0x6452, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_025A) {
    const struct CPU_State initial_cpu = {.pc=0x6ff3, .a=0x39, .x=0x73, .y=0x8e, .sp=0xb3, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0xfd}, {.addr=0x6ff3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6ff4, .a=0x36, .x=0x73, .y=0x8e, .sp=0xb3, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0xfd}, {.addr=0x6ff3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6ff3, .value=0x86, .type=IO_READ},
        {.addr=0x6ff4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_025B) {
    const struct CPU_State initial_cpu = {.pc=0xa4b5, .a=0xad, .x=0x87, .y=0x60, .sp=0x91, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x91}, {.addr=0xa4b5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa4b6, .a=0x3e, .x=0x87, .y=0x60, .sp=0x91, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x91}, {.addr=0xa4b5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa4b5, .value=0x86, .type=IO_READ},
        {.addr=0xa4b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_025C) {
    const struct CPU_State initial_cpu = {.pc=0x4793, .a=0x7d, .x=0x9b, .y=0xb9, .sp=0x9b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0x80}, {.addr=0x4793, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4794, .a=0xfe, .x=0x9b, .y=0xb9, .sp=0x9b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0x80}, {.addr=0x4793, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4793, .value=0x86, .type=IO_READ},
        {.addr=0x4794, .value=DUMMY, .type=IO_READ},
        {.addr=0x009b, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_025D) {
    const struct CPU_State initial_cpu = {.pc=0xaec9, .a=0x51, .x=0x78, .y=0x96, .sp=0x62, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x4d}, {.addr=0xaec9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xaeca, .a=0x9f, .x=0x78, .y=0x96, .sp=0x62, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x4d}, {.addr=0xaec9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xaec9, .value=0x86, .type=IO_READ},
        {.addr=0xaeca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_025E) {
    const struct CPU_State initial_cpu = {.pc=0x98ee, .a=0x01, .x=0xfc, .y=0x5e, .sp=0x55, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x30}, {.addr=0x98ee, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x98ef, .a=0x31, .x=0xfc, .y=0x5e, .sp=0x55, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x30}, {.addr=0x98ee, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x98ee, .value=0x86, .type=IO_READ},
        {.addr=0x98ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_025F) {
    const struct CPU_State initial_cpu = {.pc=0xed6a, .a=0x15, .x=0x1c, .y=0xe7, .sp=0xd2, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0x2a}, {.addr=0xed6a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xed6b, .a=0x40, .x=0x1c, .y=0xe7, .sp=0xd2, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0x2a}, {.addr=0xed6a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xed6a, .value=0x86, .type=IO_READ},
        {.addr=0xed6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0260) {
    const struct CPU_State initial_cpu = {.pc=0x00a5, .a=0x29, .x=0xae, .y=0xd3, .sp=0xc4, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x00a5, .value=0x86}, {.addr=0x00ae, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x00a6, .a=0xc5, .x=0xae, .y=0xd3, .sp=0xc4, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00a5, .value=0x86}, {.addr=0x00ae, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x00a5, .value=0x86, .type=IO_READ},
        {.addr=0x00a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0261) {
    const struct CPU_State initial_cpu = {.pc=0x81fb, .a=0x5b, .x=0x6b, .y=0x8f, .sp=0x03, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0x42}, {.addr=0x81fb, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x81fc, .a=0x9d, .x=0x6b, .y=0x8f, .sp=0x03, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0x42}, {.addr=0x81fb, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x81fb, .value=0x86, .type=IO_READ},
        {.addr=0x81fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x006b, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0262) {
    const struct CPU_State initial_cpu = {.pc=0x0a16, .a=0x23, .x=0x0d, .y=0x1d, .sp=0x35, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x24}, {.addr=0x0a16, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0a17, .a=0x47, .x=0x0d, .y=0x1d, .sp=0x35, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x24}, {.addr=0x0a16, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0a16, .value=0x86, .type=IO_READ},
        {.addr=0x0a17, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0263) {
    const struct CPU_State initial_cpu = {.pc=0xf900, .a=0x1f, .x=0x8e, .y=0x8b, .sp=0xd3, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x69}, {.addr=0xf900, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf901, .a=0x89, .x=0x8e, .y=0x8b, .sp=0xd3, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x69}, {.addr=0xf900, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf900, .value=0x86, .type=IO_READ},
        {.addr=0xf901, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0264) {
    const struct CPU_State initial_cpu = {.pc=0xccb0, .a=0x9e, .x=0x73, .y=0x24, .sp=0x55, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0x6c}, {.addr=0xccb0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xccb1, .a=0x0a, .x=0x73, .y=0x24, .sp=0x55, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0x6c}, {.addr=0xccb0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xccb0, .value=0x86, .type=IO_READ},
        {.addr=0xccb1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0265) {
    const struct CPU_State initial_cpu = {.pc=0x0bdc, .a=0x7c, .x=0x4c, .y=0x00, .sp=0x31, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x7a}, {.addr=0x0bdc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0bdd, .a=0xf6, .x=0x4c, .y=0x00, .sp=0x31, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x7a}, {.addr=0x0bdc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0bdc, .value=0x86, .type=IO_READ},
        {.addr=0x0bdd, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0266) {
    const struct CPU_State initial_cpu = {.pc=0xfddb, .a=0xb4, .x=0x05, .y=0x4e, .sp=0x99, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0xe9}, {.addr=0xfddb, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xfddc, .a=0x9d, .x=0x05, .y=0x4e, .sp=0x99, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0xe9}, {.addr=0xfddb, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xfddb, .value=0x86, .type=IO_READ},
        {.addr=0xfddc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0005, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0267) {
    const struct CPU_State initial_cpu = {.pc=0x60e8, .a=0xae, .x=0xa5, .y=0x55, .sp=0x2e, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xb7}, {.addr=0x60e8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x60e9, .a=0x65, .x=0xa5, .y=0x55, .sp=0x2e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xb7}, {.addr=0x60e8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x60e8, .value=0x86, .type=IO_READ},
        {.addr=0x60e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0268) {
    const struct CPU_State initial_cpu = {.pc=0xc8ab, .a=0x24, .x=0xe2, .y=0x7a, .sp=0x56, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x49}, {.addr=0xc8ab, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc8ac, .a=0x6e, .x=0xe2, .y=0x7a, .sp=0x56, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x49}, {.addr=0xc8ab, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc8ab, .value=0x86, .type=IO_READ},
        {.addr=0xc8ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0269) {
    const struct CPU_State initial_cpu = {.pc=0x3ad3, .a=0x29, .x=0x2c, .y=0x3e, .sp=0xca, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x002c, .value=0xf9}, {.addr=0x3ad3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3ad4, .a=0x23, .x=0x2c, .y=0x3e, .sp=0xca, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x002c, .value=0xf9}, {.addr=0x3ad3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3ad3, .value=0x86, .type=IO_READ},
        {.addr=0x3ad4, .value=DUMMY, .type=IO_READ},
        {.addr=0x002c, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_026A) {
    const struct CPU_State initial_cpu = {.pc=0x9402, .a=0x36, .x=0x79, .y=0x8e, .sp=0xe8, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0x0b}, {.addr=0x9402, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9403, .a=0x42, .x=0x79, .y=0x8e, .sp=0xe8, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0x0b}, {.addr=0x9402, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9402, .value=0x86, .type=IO_READ},
        {.addr=0x9403, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_026B) {
    const struct CPU_State initial_cpu = {.pc=0xb8e0, .a=0x98, .x=0xc4, .y=0x4d, .sp=0x92, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x2a}, {.addr=0xb8e0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb8e1, .a=0xc2, .x=0xc4, .y=0x4d, .sp=0x92, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x2a}, {.addr=0xb8e0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb8e0, .value=0x86, .type=IO_READ},
        {.addr=0xb8e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_026C) {
    const struct CPU_State initial_cpu = {.pc=0x11b8, .a=0xcc, .x=0x63, .y=0x0e, .sp=0xa5, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x55}, {.addr=0x11b8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x11b9, .a=0x22, .x=0x63, .y=0x0e, .sp=0xa5, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x55}, {.addr=0x11b8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x11b8, .value=0x86, .type=IO_READ},
        {.addr=0x11b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_026D) {
    const struct CPU_State initial_cpu = {.pc=0x3179, .a=0x08, .x=0x6c, .y=0xfc, .sp=0xec, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x4b}, {.addr=0x3179, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x317a, .a=0x54, .x=0x6c, .y=0xfc, .sp=0xec, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x4b}, {.addr=0x3179, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3179, .value=0x86, .type=IO_READ},
        {.addr=0x317a, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_026E) {
    const struct CPU_State initial_cpu = {.pc=0x26e0, .a=0x47, .x=0xee, .y=0x41, .sp=0x9d, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0xa6}, {.addr=0x26e0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x26e1, .a=0xee, .x=0xee, .y=0x41, .sp=0x9d, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0xa6}, {.addr=0x26e0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x26e0, .value=0x86, .type=IO_READ},
        {.addr=0x26e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_026F) {
    const struct CPU_State initial_cpu = {.pc=0x412b, .a=0x35, .x=0x45, .y=0x0a, .sp=0xf1, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0x60}, {.addr=0x412b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x412c, .a=0x96, .x=0x45, .y=0x0a, .sp=0xf1, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0x60}, {.addr=0x412b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x412b, .value=0x86, .type=IO_READ},
        {.addr=0x412c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0045, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0271) {
    const struct CPU_State initial_cpu = {.pc=0x01f6, .a=0x81, .x=0xcd, .y=0x52, .sp=0xc0, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0xdb}, {.addr=0x01f6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x01f7, .a=0x5d, .x=0xcd, .y=0x52, .sp=0xc0, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xdb}, {.addr=0x01f6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x01f6, .value=0x86, .type=IO_READ},
        {.addr=0x01f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0272) {
    const struct CPU_State initial_cpu = {.pc=0xd5f1, .a=0xa5, .x=0xb3, .y=0xef, .sp=0xfb, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x6c}, {.addr=0xd5f1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd5f2, .a=0x11, .x=0xb3, .y=0xef, .sp=0xfb, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x6c}, {.addr=0xd5f1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd5f1, .value=0x86, .type=IO_READ},
        {.addr=0xd5f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0273) {
    const struct CPU_State initial_cpu = {.pc=0x0b44, .a=0xad, .x=0x3b, .y=0x8e, .sp=0xdd, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0x2e}, {.addr=0x0b44, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0b45, .a=0xdb, .x=0x3b, .y=0x8e, .sp=0xdd, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0x2e}, {.addr=0x0b44, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0b44, .value=0x86, .type=IO_READ},
        {.addr=0x0b45, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0274) {
    const struct CPU_State initial_cpu = {.pc=0x8e6d, .a=0x45, .x=0x16, .y=0x45, .sp=0x1a, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0016, .value=0xab}, {.addr=0x8e6d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8e6e, .a=0xf1, .x=0x16, .y=0x45, .sp=0x1a, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0016, .value=0xab}, {.addr=0x8e6d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8e6d, .value=0x86, .type=IO_READ},
        {.addr=0x8e6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0016, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0275) {
    const struct CPU_State initial_cpu = {.pc=0x395b, .a=0x8f, .x=0x55, .y=0xdf, .sp=0x17, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x8f}, {.addr=0x395b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x395c, .a=0x1f, .x=0x55, .y=0xdf, .sp=0x17, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x8f}, {.addr=0x395b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x395b, .value=0x86, .type=IO_READ},
        {.addr=0x395c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0276) {
    const struct CPU_State initial_cpu = {.pc=0x9681, .a=0x60, .x=0xd5, .y=0xd8, .sp=0x52, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0xee}, {.addr=0x9681, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9682, .a=0x4e, .x=0xd5, .y=0xd8, .sp=0x52, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xee}, {.addr=0x9681, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9681, .value=0x86, .type=IO_READ},
        {.addr=0x9682, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0277) {
    const struct CPU_State initial_cpu = {.pc=0x7ec0, .a=0x8c, .x=0x64, .y=0xf2, .sp=0x99, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x16}, {.addr=0x7ec0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7ec1, .a=0xa3, .x=0x64, .y=0xf2, .sp=0x99, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x16}, {.addr=0x7ec0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7ec0, .value=0x86, .type=IO_READ},
        {.addr=0x7ec1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0278) {
    const struct CPU_State initial_cpu = {.pc=0xab05, .a=0x90, .x=0x46, .y=0xfe, .sp=0x6a, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x74}, {.addr=0xab05, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xab06, .a=0x05, .x=0x46, .y=0xfe, .sp=0x6a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x74}, {.addr=0xab05, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xab05, .value=0x86, .type=IO_READ},
        {.addr=0xab06, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0279) {
    const struct CPU_State initial_cpu = {.pc=0xee4d, .a=0x50, .x=0x14, .y=0x8d, .sp=0xef, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x6f}, {.addr=0xee4d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xee4e, .a=0xbf, .x=0x14, .y=0x8d, .sp=0xef, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x6f}, {.addr=0xee4d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xee4d, .value=0x86, .type=IO_READ},
        {.addr=0xee4e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_027A) {
    const struct CPU_State initial_cpu = {.pc=0x73b7, .a=0x8a, .x=0xe3, .y=0x71, .sp=0xd5, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xc7}, {.addr=0x73b7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x73b8, .a=0x52, .x=0xe3, .y=0x71, .sp=0xd5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xc7}, {.addr=0x73b7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x73b7, .value=0x86, .type=IO_READ},
        {.addr=0x73b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_027B) {
    const struct CPU_State initial_cpu = {.pc=0x63ff, .a=0xbf, .x=0x19, .y=0x10, .sp=0x39, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0019, .value=0xb4}, {.addr=0x63ff, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6400, .a=0x73, .x=0x19, .y=0x10, .sp=0x39, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0019, .value=0xb4}, {.addr=0x63ff, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x63ff, .value=0x86, .type=IO_READ},
        {.addr=0x6400, .value=DUMMY, .type=IO_READ},
        {.addr=0x0019, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_027C) {
    const struct CPU_State initial_cpu = {.pc=0x5a3f, .a=0x03, .x=0x72, .y=0x8a, .sp=0xa1, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0x24}, {.addr=0x5a3f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5a40, .a=0x27, .x=0x72, .y=0x8a, .sp=0xa1, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0x24}, {.addr=0x5a3f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5a3f, .value=0x86, .type=IO_READ},
        {.addr=0x5a40, .value=DUMMY, .type=IO_READ},
        {.addr=0x0072, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_027D) {
    const struct CPU_State initial_cpu = {.pc=0x3ebe, .a=0x74, .x=0xe8, .y=0x5c, .sp=0x0f, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0x09}, {.addr=0x3ebe, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3ebf, .a=0x7d, .x=0xe8, .y=0x5c, .sp=0x0f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0x09}, {.addr=0x3ebe, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3ebe, .value=0x86, .type=IO_READ},
        {.addr=0x3ebf, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_027E) {
    const struct CPU_State initial_cpu = {.pc=0x1dff, .a=0xa9, .x=0x88, .y=0x27, .sp=0x3a, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0xc0}, {.addr=0x1dff, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1e00, .a=0x6a, .x=0x88, .y=0x27, .sp=0x3a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0xc0}, {.addr=0x1dff, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1dff, .value=0x86, .type=IO_READ},
        {.addr=0x1e00, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_027F) {
    const struct CPU_State initial_cpu = {.pc=0x0fbe, .a=0x7c, .x=0x3c, .y=0x50, .sp=0x4b, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0xf0}, {.addr=0x0fbe, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0fbf, .a=0x6c, .x=0x3c, .y=0x50, .sp=0x4b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0xf0}, {.addr=0x0fbe, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0fbe, .value=0x86, .type=IO_READ},
        {.addr=0x0fbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0280) {
    const struct CPU_State initial_cpu = {.pc=0xb86c, .a=0x55, .x=0xe5, .y=0xde, .sp=0x81, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x85}, {.addr=0xb86c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb86d, .a=0xdb, .x=0xe5, .y=0xde, .sp=0x81, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x85}, {.addr=0xb86c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb86c, .value=0x86, .type=IO_READ},
        {.addr=0xb86d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0281) {
    const struct CPU_State initial_cpu = {.pc=0xb2a4, .a=0x77, .x=0x93, .y=0x9a, .sp=0xfa, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x02}, {.addr=0xb2a4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb2a5, .a=0x7a, .x=0x93, .y=0x9a, .sp=0xfa, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0x02}, {.addr=0xb2a4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb2a4, .value=0x86, .type=IO_READ},
        {.addr=0xb2a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0282) {
    const struct CPU_State initial_cpu = {.pc=0x08f5, .a=0x6d, .x=0xc9, .y=0xc9, .sp=0x84, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0x33}, {.addr=0x08f5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x08f6, .a=0xa0, .x=0xc9, .y=0xc9, .sp=0x84, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0x33}, {.addr=0x08f5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x08f5, .value=0x86, .type=IO_READ},
        {.addr=0x08f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0283) {
    const struct CPU_State initial_cpu = {.pc=0xe8b3, .a=0xa1, .x=0x8a, .y=0x39, .sp=0xc8, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x4b}, {.addr=0xe8b3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe8b4, .a=0xec, .x=0x8a, .y=0x39, .sp=0xc8, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x4b}, {.addr=0xe8b3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe8b3, .value=0x86, .type=IO_READ},
        {.addr=0xe8b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0284) {
    const struct CPU_State initial_cpu = {.pc=0x49ad, .a=0x32, .x=0x1d, .y=0x4e, .sp=0x12, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x79}, {.addr=0x49ad, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x49ae, .a=0xac, .x=0x1d, .y=0x4e, .sp=0x12, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x79}, {.addr=0x49ad, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x49ad, .value=0x86, .type=IO_READ},
        {.addr=0x49ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0285) {
    const struct CPU_State initial_cpu = {.pc=0x2593, .a=0x43, .x=0x87, .y=0x11, .sp=0x0e, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0xdd}, {.addr=0x2593, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2594, .a=0x20, .x=0x87, .y=0x11, .sp=0x0e, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0xdd}, {.addr=0x2593, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2593, .value=0x86, .type=IO_READ},
        {.addr=0x2594, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0286) {
    const struct CPU_State initial_cpu = {.pc=0x4e96, .a=0xea, .x=0x33, .y=0x75, .sp=0xfc, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x86}, {.addr=0x4e96, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4e97, .a=0x70, .x=0x33, .y=0x75, .sp=0xfc, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x86}, {.addr=0x4e96, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4e96, .value=0x86, .type=IO_READ},
        {.addr=0x4e97, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0287) {
    const struct CPU_State initial_cpu = {.pc=0x0d55, .a=0x5d, .x=0x3b, .y=0x4b, .sp=0x7e, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0x29}, {.addr=0x0d55, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0d56, .a=0x87, .x=0x3b, .y=0x4b, .sp=0x7e, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0x29}, {.addr=0x0d55, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0d55, .value=0x86, .type=IO_READ},
        {.addr=0x0d56, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0288) {
    const struct CPU_State initial_cpu = {.pc=0xe5d1, .a=0x79, .x=0x08, .y=0x51, .sp=0x0b, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x01}, {.addr=0xe5d1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe5d2, .a=0x7a, .x=0x08, .y=0x51, .sp=0x0b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x01}, {.addr=0xe5d1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe5d1, .value=0x86, .type=IO_READ},
        {.addr=0xe5d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0289) {
    const struct CPU_State initial_cpu = {.pc=0x4ec8, .a=0x7f, .x=0x5b, .y=0xf2, .sp=0x69, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0xfc}, {.addr=0x4ec8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4ec9, .a=0x7b, .x=0x5b, .y=0xf2, .sp=0x69, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0xfc}, {.addr=0x4ec8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4ec8, .value=0x86, .type=IO_READ},
        {.addr=0x4ec9, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_028A) {
    const struct CPU_State initial_cpu = {.pc=0x27ab, .a=0x1a, .x=0xba, .y=0xd5, .sp=0x6e, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0x34}, {.addr=0x27ab, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x27ac, .a=0x4e, .x=0xba, .y=0xd5, .sp=0x6e, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0x34}, {.addr=0x27ab, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x27ab, .value=0x86, .type=IO_READ},
        {.addr=0x27ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_028B) {
    const struct CPU_State initial_cpu = {.pc=0x3453, .a=0xe8, .x=0xca, .y=0xf6, .sp=0xdc, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x00ca, .value=0xfb}, {.addr=0x3453, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3454, .a=0xe4, .x=0xca, .y=0xf6, .sp=0xdc, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00ca, .value=0xfb}, {.addr=0x3453, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3453, .value=0x86, .type=IO_READ},
        {.addr=0x3454, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ca, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_028C) {
    const struct CPU_State initial_cpu = {.pc=0xb24e, .a=0x70, .x=0x9e, .y=0x7a, .sp=0x87, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x8b}, {.addr=0xb24e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb24f, .a=0xfb, .x=0x9e, .y=0x7a, .sp=0x87, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x8b}, {.addr=0xb24e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb24e, .value=0x86, .type=IO_READ},
        {.addr=0xb24f, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_028D) {
    const struct CPU_State initial_cpu = {.pc=0x36c9, .a=0xef, .x=0x8f, .y=0xca, .sp=0xa9, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x6c}, {.addr=0x36c9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x36ca, .a=0x5c, .x=0x8f, .y=0xca, .sp=0xa9, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x6c}, {.addr=0x36c9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x36c9, .value=0x86, .type=IO_READ},
        {.addr=0x36ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_028E) {
    const struct CPU_State initial_cpu = {.pc=0x93a7, .a=0x05, .x=0x9e, .y=0x91, .sp=0x12, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xa1}, {.addr=0x93a7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x93a8, .a=0xa7, .x=0x9e, .y=0x91, .sp=0x12, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xa1}, {.addr=0x93a7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x93a7, .value=0x86, .type=IO_READ},
        {.addr=0x93a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0290) {
    const struct CPU_State initial_cpu = {.pc=0x69bb, .a=0x64, .x=0xbc, .y=0xf9, .sp=0x56, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0xf6}, {.addr=0x69bb, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x69bc, .a=0x5a, .x=0xbc, .y=0xf9, .sp=0x56, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xf6}, {.addr=0x69bb, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x69bb, .value=0x86, .type=IO_READ},
        {.addr=0x69bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0291) {
    const struct CPU_State initial_cpu = {.pc=0x9bf0, .a=0xc2, .x=0x6e, .y=0x14, .sp=0x12, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x93}, {.addr=0x9bf0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9bf1, .a=0x55, .x=0x6e, .y=0x14, .sp=0x12, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x93}, {.addr=0x9bf0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9bf0, .value=0x86, .type=IO_READ},
        {.addr=0x9bf1, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0292) {
    const struct CPU_State initial_cpu = {.pc=0x7e6c, .a=0x13, .x=0x6d, .y=0xb7, .sp=0xdd, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x4b}, {.addr=0x7e6c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7e6d, .a=0x5f, .x=0x6d, .y=0xb7, .sp=0xdd, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x4b}, {.addr=0x7e6c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7e6c, .value=0x86, .type=IO_READ},
        {.addr=0x7e6d, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0293) {
    const struct CPU_State initial_cpu = {.pc=0x4525, .a=0x0c, .x=0x71, .y=0x76, .sp=0xcd, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x50}, {.addr=0x4525, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4526, .a=0x5c, .x=0x71, .y=0x76, .sp=0xcd, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x50}, {.addr=0x4525, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4525, .value=0x86, .type=IO_READ},
        {.addr=0x4526, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0294) {
    const struct CPU_State initial_cpu = {.pc=0x9331, .a=0x4e, .x=0x76, .y=0xf3, .sp=0xf4, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x55}, {.addr=0x9331, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9332, .a=0xa3, .x=0x76, .y=0xf3, .sp=0xf4, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x55}, {.addr=0x9331, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9331, .value=0x86, .type=IO_READ},
        {.addr=0x9332, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0295) {
    const struct CPU_State initial_cpu = {.pc=0xb594, .a=0x06, .x=0xe8, .y=0xc6, .sp=0x8c, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xfd}, {.addr=0xb594, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb595, .a=0x04, .x=0xe8, .y=0xc6, .sp=0x8c, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xfd}, {.addr=0xb594, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb594, .value=0x86, .type=IO_READ},
        {.addr=0xb595, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0296) {
    const struct CPU_State initial_cpu = {.pc=0x6184, .a=0xbb, .x=0x2e, .y=0x12, .sp=0x7f, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0xb9}, {.addr=0x6184, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6185, .a=0x75, .x=0x2e, .y=0x12, .sp=0x7f, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xb9}, {.addr=0x6184, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6184, .value=0x86, .type=IO_READ},
        {.addr=0x6185, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0297) {
    const struct CPU_State initial_cpu = {.pc=0x378e, .a=0xa7, .x=0x17, .y=0x26, .sp=0x5c, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x3c}, {.addr=0x378e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x378f, .a=0xe3, .x=0x17, .y=0x26, .sp=0x5c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x3c}, {.addr=0x378e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x378e, .value=0x86, .type=IO_READ},
        {.addr=0x378f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0298) {
    const struct CPU_State initial_cpu = {.pc=0x7799, .a=0x86, .x=0x63, .y=0xa1, .sp=0x3c, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0x3b}, {.addr=0x7799, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x779a, .a=0xc2, .x=0x63, .y=0xa1, .sp=0x3c, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0x3b}, {.addr=0x7799, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7799, .value=0x86, .type=IO_READ},
        {.addr=0x779a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0063, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0299) {
    const struct CPU_State initial_cpu = {.pc=0xc5c7, .a=0x4c, .x=0xdc, .y=0xd1, .sp=0x8b, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xe6}, {.addr=0xc5c7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc5c8, .a=0x33, .x=0xdc, .y=0xd1, .sp=0x8b, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xe6}, {.addr=0xc5c7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc5c7, .value=0x86, .type=IO_READ},
        {.addr=0xc5c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_029A) {
    const struct CPU_State initial_cpu = {.pc=0x8097, .a=0xf1, .x=0x27, .y=0xf6, .sp=0x09, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x90}, {.addr=0x8097, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8098, .a=0x82, .x=0x27, .y=0xf6, .sp=0x09, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x90}, {.addr=0x8097, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8097, .value=0x86, .type=IO_READ},
        {.addr=0x8098, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_029B) {
    const struct CPU_State initial_cpu = {.pc=0xe3a0, .a=0xfd, .x=0xd8, .y=0x08, .sp=0xf4, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0xad}, {.addr=0xe3a0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe3a1, .a=0xab, .x=0xd8, .y=0x08, .sp=0xf4, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0xad}, {.addr=0xe3a0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe3a0, .value=0x86, .type=IO_READ},
        {.addr=0xe3a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_029C) {
    const struct CPU_State initial_cpu = {.pc=0x1d74, .a=0xd4, .x=0xd2, .y=0xab, .sp=0x3b, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0xc0}, {.addr=0x1d74, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1d75, .a=0x94, .x=0xd2, .y=0xab, .sp=0x3b, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0xc0}, {.addr=0x1d74, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1d74, .value=0x86, .type=IO_READ},
        {.addr=0x1d75, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_029D) {
    const struct CPU_State initial_cpu = {.pc=0xe056, .a=0x36, .x=0x68, .y=0x7e, .sp=0x19, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0068, .value=0xe3}, {.addr=0xe056, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe057, .a=0x1a, .x=0x68, .y=0x7e, .sp=0x19, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0068, .value=0xe3}, {.addr=0xe056, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe056, .value=0x86, .type=IO_READ},
        {.addr=0xe057, .value=DUMMY, .type=IO_READ},
        {.addr=0x0068, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_029E) {
    const struct CPU_State initial_cpu = {.pc=0xc00d, .a=0x6c, .x=0x40, .y=0xa9, .sp=0x5c, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0xac}, {.addr=0xc00d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc00e, .a=0x19, .x=0x40, .y=0xa9, .sp=0x5c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xac}, {.addr=0xc00d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc00d, .value=0x86, .type=IO_READ},
        {.addr=0xc00e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_029F) {
    const struct CPU_State initial_cpu = {.pc=0x817c, .a=0x23, .x=0xb1, .y=0x2a, .sp=0x31, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x84}, {.addr=0x817c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x817d, .a=0xa7, .x=0xb1, .y=0x2a, .sp=0x31, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x84}, {.addr=0x817c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x817c, .value=0x86, .type=IO_READ},
        {.addr=0x817d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x5125, .a=0xb3, .x=0x45, .y=0xe2, .sp=0x8e, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x15}, {.addr=0x5125, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5126, .a=0xc9, .x=0x45, .y=0xe2, .sp=0x8e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x15}, {.addr=0x5125, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5125, .value=0x86, .type=IO_READ},
        {.addr=0x5126, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xbb31, .a=0xe2, .x=0x6a, .y=0x23, .sp=0xa4, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0x22}, {.addr=0xbb31, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xbb32, .a=0x05, .x=0x6a, .y=0x23, .sp=0xa4, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0x22}, {.addr=0xbb31, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xbb31, .value=0x86, .type=IO_READ},
        {.addr=0xbb32, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x13ed, .a=0x5d, .x=0x60, .y=0xea, .sp=0xee, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0060, .value=0x07}, {.addr=0x13ed, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x13ee, .a=0x65, .x=0x60, .y=0xea, .sp=0xee, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0060, .value=0x07}, {.addr=0x13ed, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x13ed, .value=0x86, .type=IO_READ},
        {.addr=0x13ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0060, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x5f33, .a=0xb0, .x=0x66, .y=0x9d, .sp=0x4f, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x6f}, {.addr=0x5f33, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5f34, .a=0x20, .x=0x66, .y=0x9d, .sp=0x4f, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x6f}, {.addr=0x5f33, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5f33, .value=0x86, .type=IO_READ},
        {.addr=0x5f34, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x6297, .a=0xf6, .x=0xba, .y=0x7c, .sp=0x65, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x38}, {.addr=0x6297, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6298, .a=0x2f, .x=0xba, .y=0x7c, .sp=0x65, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x38}, {.addr=0x6297, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6297, .value=0x86, .type=IO_READ},
        {.addr=0x6298, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x60a4, .a=0x7e, .x=0xd8, .y=0xc9, .sp=0xe4, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0x60}, {.addr=0x60a4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x60a5, .a=0xde, .x=0xd8, .y=0xc9, .sp=0xe4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0x60}, {.addr=0x60a4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x60a4, .value=0x86, .type=IO_READ},
        {.addr=0x60a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xf9fd, .a=0x36, .x=0x4e, .y=0x3b, .sp=0x4e, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xb6}, {.addr=0xf9fd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf9fe, .a=0xed, .x=0x4e, .y=0x3b, .sp=0x4e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xb6}, {.addr=0xf9fd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf9fd, .value=0x86, .type=IO_READ},
        {.addr=0xf9fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x87d8, .a=0x43, .x=0x53, .y=0xef, .sp=0x05, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0xab}, {.addr=0x87d8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x87d9, .a=0xee, .x=0x53, .y=0xef, .sp=0x05, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xab}, {.addr=0x87d8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x87d8, .value=0x86, .type=IO_READ},
        {.addr=0x87d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x7929, .a=0xdb, .x=0xb8, .y=0xfd, .sp=0x5f, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x39}, {.addr=0x7929, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x792a, .a=0x15, .x=0xb8, .y=0xfd, .sp=0x5f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x39}, {.addr=0x7929, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7929, .value=0x86, .type=IO_READ},
        {.addr=0x792a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x151f, .a=0x80, .x=0x02, .y=0xdd, .sp=0xe1, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x7d}, {.addr=0x151f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1520, .a=0xfe, .x=0x02, .y=0xdd, .sp=0xe1, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x7d}, {.addr=0x151f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x151f, .value=0x86, .type=IO_READ},
        {.addr=0x1520, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xf2fb, .a=0x70, .x=0x89, .y=0x14, .sp=0x40, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x65}, {.addr=0xf2fb, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf2fc, .a=0xd5, .x=0x89, .y=0x14, .sp=0x40, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x65}, {.addr=0xf2fb, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf2fb, .value=0x86, .type=IO_READ},
        {.addr=0xf2fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xf976, .a=0xd1, .x=0x35, .y=0xbd, .sp=0xa4, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0x62}, {.addr=0xf976, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf977, .a=0x34, .x=0x35, .y=0xbd, .sp=0xa4, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0x62}, {.addr=0xf976, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf976, .value=0x86, .type=IO_READ},
        {.addr=0xf977, .value=DUMMY, .type=IO_READ},
        {.addr=0x0035, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xf602, .a=0x07, .x=0x8d, .y=0xbc, .sp=0x63, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x008d, .value=0xba}, {.addr=0xf602, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf603, .a=0xc2, .x=0x8d, .y=0xbc, .sp=0x63, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x008d, .value=0xba}, {.addr=0xf602, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf602, .value=0x86, .type=IO_READ},
        {.addr=0xf603, .value=DUMMY, .type=IO_READ},
        {.addr=0x008d, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xb99f, .a=0x75, .x=0x40, .y=0xb3, .sp=0x86, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x92}, {.addr=0xb99f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb9a0, .a=0x08, .x=0x40, .y=0xb3, .sp=0x86, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x92}, {.addr=0xb99f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb99f, .value=0x86, .type=IO_READ},
        {.addr=0xb9a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xa079, .a=0xb6, .x=0x93, .y=0xaa, .sp=0xfb, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0xc7}, {.addr=0xa079, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa07a, .a=0x7e, .x=0x93, .y=0xaa, .sp=0xfb, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xc7}, {.addr=0xa079, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa079, .value=0x86, .type=IO_READ},
        {.addr=0xa07a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x7bdc, .a=0x58, .x=0x19, .y=0x37, .sp=0x74, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0xaf}, {.addr=0x7bdc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7bdd, .a=0x07, .x=0x19, .y=0x37, .sp=0x74, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0xaf}, {.addr=0x7bdc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7bdc, .value=0x86, .type=IO_READ},
        {.addr=0x7bdd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xc784, .a=0x56, .x=0x78, .y=0x43, .sp=0xc9, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x4d}, {.addr=0xc784, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc785, .a=0xa4, .x=0x78, .y=0x43, .sp=0xc9, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x4d}, {.addr=0xc784, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc784, .value=0x86, .type=IO_READ},
        {.addr=0xc785, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xe760, .a=0x47, .x=0x4c, .y=0x5b, .sp=0xf0, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0x07}, {.addr=0xe760, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe761, .a=0x4e, .x=0x4c, .y=0x5b, .sp=0xf0, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0x07}, {.addr=0xe760, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe760, .value=0x86, .type=IO_READ},
        {.addr=0xe761, .value=DUMMY, .type=IO_READ},
        {.addr=0x004c, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x77ee, .a=0xac, .x=0x3e, .y=0x51, .sp=0xa1, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x003e, .value=0x39}, {.addr=0x77ee, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x77ef, .a=0xe5, .x=0x3e, .y=0x51, .sp=0xa1, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x003e, .value=0x39}, {.addr=0x77ee, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x77ee, .value=0x86, .type=IO_READ},
        {.addr=0x77ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x003e, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x9ad7, .a=0x82, .x=0xa8, .y=0xd6, .sp=0xce, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x00a8, .value=0xe7}, {.addr=0x9ad7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9ad8, .a=0x6a, .x=0xa8, .y=0xd6, .sp=0xce, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00a8, .value=0xe7}, {.addr=0x9ad7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9ad7, .value=0x86, .type=IO_READ},
        {.addr=0x9ad8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a8, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xb809, .a=0x30, .x=0x11, .y=0x74, .sp=0xb9, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x21}, {.addr=0xb809, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb80a, .a=0x51, .x=0x11, .y=0x74, .sp=0xb9, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x21}, {.addr=0xb809, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb809, .value=0x86, .type=IO_READ},
        {.addr=0xb80a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xcbc5, .a=0xb1, .x=0xcd, .y=0x6d, .sp=0x2e, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0xd0}, {.addr=0xcbc5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcbc6, .a=0x82, .x=0xcd, .y=0x6d, .sp=0x2e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xd0}, {.addr=0xcbc5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcbc5, .value=0x86, .type=IO_READ},
        {.addr=0xcbc6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x35c9, .a=0x8f, .x=0xe6, .y=0x3f, .sp=0x3d, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0x6f}, {.addr=0x35c9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x35ca, .a=0xff, .x=0xe6, .y=0x3f, .sp=0x3d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0x6f}, {.addr=0x35c9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x35c9, .value=0x86, .type=IO_READ},
        {.addr=0x35ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e6, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x9a6d, .a=0x0c, .x=0x3b, .y=0xa0, .sp=0xef, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0xd5}, {.addr=0x9a6d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9a6e, .a=0xe2, .x=0x3b, .y=0xa0, .sp=0xef, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xd5}, {.addr=0x9a6d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9a6d, .value=0x86, .type=IO_READ},
        {.addr=0x9a6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xa973, .a=0xb2, .x=0x9a, .y=0xa5, .sp=0xfd, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x54}, {.addr=0xa973, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa974, .a=0x07, .x=0x9a, .y=0xa5, .sp=0xfd, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x54}, {.addr=0xa973, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa973, .value=0x86, .type=IO_READ},
        {.addr=0xa974, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x8a25, .a=0x6a, .x=0x56, .y=0xab, .sp=0x7b, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0xa2}, {.addr=0x8a25, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8a26, .a=0x0d, .x=0x56, .y=0xab, .sp=0x7b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xa2}, {.addr=0x8a25, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8a25, .value=0x86, .type=IO_READ},
        {.addr=0x8a26, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xd147, .a=0x27, .x=0xda, .y=0x63, .sp=0x7f, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xa7}, {.addr=0xd147, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd148, .a=0xce, .x=0xda, .y=0x63, .sp=0x7f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xa7}, {.addr=0xd147, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd147, .value=0x86, .type=IO_READ},
        {.addr=0xd148, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x0944, .a=0x84, .x=0x06, .y=0x9c, .sp=0x63, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0xf0}, {.addr=0x0944, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0945, .a=0x75, .x=0x06, .y=0x9c, .sp=0x63, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0xf0}, {.addr=0x0944, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0944, .value=0x86, .type=IO_READ},
        {.addr=0x0945, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x1db9, .a=0xf0, .x=0x84, .y=0xcd, .sp=0x03, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0x0a}, {.addr=0x1db9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1dba, .a=0xfb, .x=0x84, .y=0xcd, .sp=0x03, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0x0a}, {.addr=0x1db9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1db9, .value=0x86, .type=IO_READ},
        {.addr=0x1dba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0084, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x3fa3, .a=0x39, .x=0x77, .y=0x76, .sp=0xc2, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x85}, {.addr=0x3fa3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3fa4, .a=0xbf, .x=0x77, .y=0x76, .sp=0xc2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x85}, {.addr=0x3fa3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3fa3, .value=0x86, .type=IO_READ},
        {.addr=0x3fa4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x54bb, .a=0x96, .x=0x23, .y=0x59, .sp=0xcb, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x93}, {.addr=0x54bb, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x54bc, .a=0x29, .x=0x23, .y=0x59, .sp=0xcb, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x93}, {.addr=0x54bb, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x54bb, .value=0x86, .type=IO_READ},
        {.addr=0x54bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x8104, .a=0xa9, .x=0x2e, .y=0xf3, .sp=0xc5, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0xc7}, {.addr=0x8104, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8105, .a=0x71, .x=0x2e, .y=0xf3, .sp=0xc5, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xc7}, {.addr=0x8104, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8104, .value=0x86, .type=IO_READ},
        {.addr=0x8105, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x6176, .a=0xbc, .x=0x81, .y=0x05, .sp=0x48, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x98}, {.addr=0x6176, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6177, .a=0x54, .x=0x81, .y=0x05, .sp=0x48, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x98}, {.addr=0x6176, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6176, .value=0x86, .type=IO_READ},
        {.addr=0x6177, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x03d6, .a=0xe4, .x=0xf4, .y=0x46, .sp=0x7a, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x7e}, {.addr=0x03d6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x03d7, .a=0x63, .x=0xf4, .y=0x46, .sp=0x7a, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x7e}, {.addr=0x03d6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x03d6, .value=0x86, .type=IO_READ},
        {.addr=0x03d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xb0cd, .a=0x8e, .x=0xe8, .y=0x1b, .sp=0x36, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xf0}, {.addr=0xb0cd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb0ce, .a=0x7f, .x=0xe8, .y=0x1b, .sp=0x36, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xf0}, {.addr=0xb0cd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb0cd, .value=0x86, .type=IO_READ},
        {.addr=0xb0ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x1423, .a=0x31, .x=0x16, .y=0xb6, .sp=0xa2, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0016, .value=0x98}, {.addr=0x1423, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1424, .a=0xc9, .x=0x16, .y=0xb6, .sp=0xa2, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0016, .value=0x98}, {.addr=0x1423, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1423, .value=0x86, .type=IO_READ},
        {.addr=0x1424, .value=DUMMY, .type=IO_READ},
        {.addr=0x0016, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x9de1, .a=0xf6, .x=0x45, .y=0xa9, .sp=0xf9, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0xb2}, {.addr=0x9de1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9de2, .a=0xa9, .x=0x45, .y=0xa9, .sp=0xf9, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0xb2}, {.addr=0x9de1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9de1, .value=0x86, .type=IO_READ},
        {.addr=0x9de2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0045, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x14cd, .a=0xf6, .x=0x2d, .y=0xa1, .sp=0x49, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0x55}, {.addr=0x14cd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x14ce, .a=0x4c, .x=0x2d, .y=0xa1, .sp=0x49, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0x55}, {.addr=0x14cd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x14cd, .value=0x86, .type=IO_READ},
        {.addr=0x14ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x7a1f, .a=0x70, .x=0x59, .y=0xc6, .sp=0x96, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x1d}, {.addr=0x7a1f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7a20, .a=0x8d, .x=0x59, .y=0xc6, .sp=0x96, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x1d}, {.addr=0x7a1f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7a1f, .value=0x86, .type=IO_READ},
        {.addr=0x7a20, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xa5df, .a=0x2b, .x=0x44, .y=0x0b, .sp=0x24, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x77}, {.addr=0xa5df, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa5e0, .a=0xa3, .x=0x44, .y=0x0b, .sp=0x24, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x77}, {.addr=0xa5df, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa5df, .value=0x86, .type=IO_READ},
        {.addr=0xa5e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xfad8, .a=0xf1, .x=0x50, .y=0x1c, .sp=0xcc, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x49}, {.addr=0xfad8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xfad9, .a=0x3b, .x=0x50, .y=0x1c, .sp=0xcc, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x49}, {.addr=0xfad8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xfad8, .value=0x86, .type=IO_READ},
        {.addr=0xfad9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x8d20, .a=0xfe, .x=0x61, .y=0x22, .sp=0xd6, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x5f}, {.addr=0x8d20, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8d21, .a=0x5e, .x=0x61, .y=0x22, .sp=0xd6, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x5f}, {.addr=0x8d20, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8d20, .value=0x86, .type=IO_READ},
        {.addr=0x8d21, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xc3ac, .a=0x6c, .x=0x1f, .y=0x05, .sp=0xac, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x35}, {.addr=0xc3ac, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc3ad, .a=0xa2, .x=0x1f, .y=0x05, .sp=0xac, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x35}, {.addr=0xc3ac, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc3ac, .value=0x86, .type=IO_READ},
        {.addr=0xc3ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xe631, .a=0x4d, .x=0xe7, .y=0x29, .sp=0x75, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x28}, {.addr=0xe631, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe632, .a=0x75, .x=0xe7, .y=0x29, .sp=0x75, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x28}, {.addr=0xe631, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe631, .value=0x86, .type=IO_READ},
        {.addr=0xe632, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x3348, .a=0xdb, .x=0x70, .y=0x14, .sp=0xdd, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0x87}, {.addr=0x3348, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3349, .a=0x63, .x=0x70, .y=0x14, .sp=0xdd, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0x87}, {.addr=0x3348, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3348, .value=0x86, .type=IO_READ},
        {.addr=0x3349, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xf985, .a=0x2a, .x=0x27, .y=0xc1, .sp=0xc8, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0xb9}, {.addr=0xf985, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf986, .a=0xe3, .x=0x27, .y=0xc1, .sp=0xc8, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xb9}, {.addr=0xf985, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf985, .value=0x86, .type=IO_READ},
        {.addr=0xf986, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xed50, .a=0xf6, .x=0x76, .y=0x17, .sp=0xb0, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x5f}, {.addr=0xed50, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xed51, .a=0x56, .x=0x76, .y=0x17, .sp=0xb0, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x5f}, {.addr=0xed50, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xed50, .value=0x86, .type=IO_READ},
        {.addr=0xed51, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x41bd, .a=0x7c, .x=0xa3, .y=0x62, .sp=0x81, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0x4f}, {.addr=0x41bd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x41be, .a=0xcc, .x=0xa3, .y=0x62, .sp=0x81, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0x4f}, {.addr=0x41bd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x41bd, .value=0x86, .type=IO_READ},
        {.addr=0x41be, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x9723, .a=0x4a, .x=0xac, .y=0xb7, .sp=0x67, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x56}, {.addr=0x9723, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9724, .a=0xa0, .x=0xac, .y=0xb7, .sp=0x67, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x56}, {.addr=0x9723, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9723, .value=0x86, .type=IO_READ},
        {.addr=0x9724, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xe9a8, .a=0xdc, .x=0x1e, .y=0xc7, .sp=0x63, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x63}, {.addr=0xe9a8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe9a9, .a=0x40, .x=0x1e, .y=0xc7, .sp=0x63, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x63}, {.addr=0xe9a8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe9a8, .value=0x86, .type=IO_READ},
        {.addr=0xe9a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x2508, .a=0x61, .x=0xc1, .y=0x63, .sp=0x90, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x70}, {.addr=0x2508, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2509, .a=0xd2, .x=0xc1, .y=0x63, .sp=0x90, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x70}, {.addr=0x2508, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2508, .value=0x86, .type=IO_READ},
        {.addr=0x2509, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xfde0, .a=0xbc, .x=0xdf, .y=0x6a, .sp=0x2b, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0xcb}, {.addr=0xfde0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xfde1, .a=0x87, .x=0xdf, .y=0x6a, .sp=0x2b, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0xcb}, {.addr=0xfde0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xfde0, .value=0x86, .type=IO_READ},
        {.addr=0xfde1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x7957, .a=0x5d, .x=0xba, .y=0xe1, .sp=0xcf, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0x39}, {.addr=0x7957, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7958, .a=0x96, .x=0xba, .y=0xe1, .sp=0xcf, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0x39}, {.addr=0x7957, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7957, .value=0x86, .type=IO_READ},
        {.addr=0x7958, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x4088, .a=0x32, .x=0xa4, .y=0x45, .sp=0x72, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0xdb}, {.addr=0x4088, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4089, .a=0x0d, .x=0xa4, .y=0x45, .sp=0x72, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xdb}, {.addr=0x4088, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4088, .value=0x86, .type=IO_READ},
        {.addr=0x4089, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x698f, .a=0x94, .x=0x97, .y=0x55, .sp=0x94, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x9e}, {.addr=0x698f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6990, .a=0x33, .x=0x97, .y=0x55, .sp=0x94, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x9e}, {.addr=0x698f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x698f, .value=0x86, .type=IO_READ},
        {.addr=0x6990, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x8062, .a=0xdc, .x=0xfc, .y=0xa8, .sp=0xe6, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x2e}, {.addr=0x8062, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8063, .a=0x0b, .x=0xfc, .y=0xa8, .sp=0xe6, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x2e}, {.addr=0x8062, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8062, .value=0x86, .type=IO_READ},
        {.addr=0x8063, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x8714, .a=0x22, .x=0x7f, .y=0x08, .sp=0xce, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x0a}, {.addr=0x8714, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8715, .a=0x2d, .x=0x7f, .y=0x08, .sp=0xce, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x0a}, {.addr=0x8714, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8714, .value=0x86, .type=IO_READ},
        {.addr=0x8715, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x74bf, .a=0xc0, .x=0x63, .y=0x89, .sp=0x75, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0xf5}, {.addr=0x74bf, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x74c0, .a=0xb6, .x=0x63, .y=0x89, .sp=0x75, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xf5}, {.addr=0x74bf, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x74bf, .value=0x86, .type=IO_READ},
        {.addr=0x74c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x990a, .a=0xb2, .x=0xe1, .y=0xd5, .sp=0x06, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0xe4}, {.addr=0x990a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x990b, .a=0x97, .x=0xe1, .y=0xd5, .sp=0x06, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0xe4}, {.addr=0x990a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x990a, .value=0x86, .type=IO_READ},
        {.addr=0x990b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x53bd, .a=0xf1, .x=0x8e, .y=0x2d, .sp=0x28, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0xc4}, {.addr=0x53bd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x53be, .a=0xb5, .x=0x8e, .y=0x2d, .sp=0x28, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xc4}, {.addr=0x53bd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x53bd, .value=0x86, .type=IO_READ},
        {.addr=0x53be, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xb73f, .a=0xff, .x=0x74, .y=0x4b, .sp=0x6b, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x13}, {.addr=0xb73f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb740, .a=0x13, .x=0x74, .y=0x4b, .sp=0x6b, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x13}, {.addr=0xb73f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb73f, .value=0x86, .type=IO_READ},
        {.addr=0xb740, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x23de, .a=0xcf, .x=0x24, .y=0x5b, .sp=0x90, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0xa9}, {.addr=0x23de, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x23df, .a=0x79, .x=0x24, .y=0x5b, .sp=0x90, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xa9}, {.addr=0x23de, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x23de, .value=0x86, .type=IO_READ},
        {.addr=0x23df, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x1386, .a=0xe6, .x=0xb1, .y=0xec, .sp=0xaa, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0xb5}, {.addr=0x1386, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1387, .a=0x9b, .x=0xb1, .y=0xec, .sp=0xaa, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0xb5}, {.addr=0x1386, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1386, .value=0x86, .type=IO_READ},
        {.addr=0x1387, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xa59a, .a=0x69, .x=0x0b, .y=0x6d, .sp=0xd4, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0xfe}, {.addr=0xa59a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa59b, .a=0x67, .x=0x0b, .y=0x6d, .sp=0xd4, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0xfe}, {.addr=0xa59a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa59a, .value=0x86, .type=IO_READ},
        {.addr=0xa59b, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xb5ba, .a=0x8b, .x=0x17, .y=0x31, .sp=0x66, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x32}, {.addr=0xb5ba, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb5bb, .a=0xbe, .x=0x17, .y=0x31, .sp=0x66, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x32}, {.addr=0xb5ba, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb5ba, .value=0x86, .type=IO_READ},
        {.addr=0xb5bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x7a5a, .a=0xda, .x=0x8b, .y=0x16, .sp=0x5a, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0xa0}, {.addr=0x7a5a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7a5b, .a=0x7b, .x=0x8b, .y=0x16, .sp=0x5a, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0xa0}, {.addr=0x7a5a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7a5a, .value=0x86, .type=IO_READ},
        {.addr=0x7a5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x008b, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xe332, .a=0x3d, .x=0xca, .y=0x19, .sp=0xf6, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x9a}, {.addr=0xe332, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe333, .a=0xd7, .x=0xca, .y=0x19, .sp=0xf6, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x9a}, {.addr=0xe332, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe332, .value=0x86, .type=IO_READ},
        {.addr=0xe333, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xb917, .a=0xd3, .x=0x18, .y=0xc8, .sp=0xc6, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0xab}, {.addr=0xb917, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb918, .a=0x7f, .x=0x18, .y=0xc8, .sp=0xc6, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0xab}, {.addr=0xb917, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb917, .value=0x86, .type=IO_READ},
        {.addr=0xb918, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x5fd7, .a=0x6c, .x=0xdb, .y=0x1c, .sp=0x15, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0xe6}, {.addr=0x5fd7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5fd8, .a=0x53, .x=0xdb, .y=0x1c, .sp=0x15, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0xe6}, {.addr=0x5fd7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5fd7, .value=0x86, .type=IO_READ},
        {.addr=0x5fd8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x86d9, .a=0x56, .x=0xc9, .y=0xec, .sp=0x90, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x16}, {.addr=0x86d9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x86da, .a=0x6d, .x=0xc9, .y=0xec, .sp=0x90, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x16}, {.addr=0x86d9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x86d9, .value=0x86, .type=IO_READ},
        {.addr=0x86da, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xf9ed, .a=0xc4, .x=0x90, .y=0x33, .sp=0xdb, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x5c}, {.addr=0xf9ed, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf9ee, .a=0x20, .x=0x90, .y=0x33, .sp=0xdb, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x5c}, {.addr=0xf9ed, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf9ed, .value=0x86, .type=IO_READ},
        {.addr=0xf9ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x7707, .a=0xb4, .x=0x6f, .y=0xd7, .sp=0x0b, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0xf2}, {.addr=0x7707, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7708, .a=0xa6, .x=0x6f, .y=0xd7, .sp=0x0b, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xf2}, {.addr=0x7707, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7707, .value=0x86, .type=IO_READ},
        {.addr=0x7708, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x2a95, .a=0xad, .x=0x93, .y=0x20, .sp=0x74, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x80}, {.addr=0x2a95, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2a96, .a=0x2d, .x=0x93, .y=0x20, .sp=0x74, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0x80}, {.addr=0x2a95, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2a95, .value=0x86, .type=IO_READ},
        {.addr=0x2a96, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x4092, .a=0x38, .x=0xc4, .y=0x70, .sp=0x43, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0xd1}, {.addr=0x4092, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4093, .a=0x0a, .x=0xc4, .y=0x70, .sp=0x43, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0xd1}, {.addr=0x4092, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4092, .value=0x86, .type=IO_READ},
        {.addr=0x4093, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x7752, .a=0x14, .x=0xa3, .y=0x5a, .sp=0xfc, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x83}, {.addr=0x7752, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7753, .a=0x97, .x=0xa3, .y=0x5a, .sp=0xfc, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x83}, {.addr=0x7752, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7752, .value=0x86, .type=IO_READ},
        {.addr=0x7753, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xc8f4, .a=0xb1, .x=0x63, .y=0x76, .sp=0x37, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x36}, {.addr=0xc8f4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc8f5, .a=0xe7, .x=0x63, .y=0x76, .sp=0x37, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x36}, {.addr=0xc8f4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc8f4, .value=0x86, .type=IO_READ},
        {.addr=0xc8f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x3374, .a=0x33, .x=0x1b, .y=0x49, .sp=0xa3, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0xbf}, {.addr=0x3374, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3375, .a=0xf3, .x=0x1b, .y=0x49, .sp=0xa3, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xbf}, {.addr=0x3374, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3374, .value=0x86, .type=IO_READ},
        {.addr=0x3375, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x56dc, .a=0xcb, .x=0x83, .y=0xb7, .sp=0x7d, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0xe3}, {.addr=0x56dc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x56dd, .a=0xae, .x=0x83, .y=0xb7, .sp=0x7d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xe3}, {.addr=0x56dc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x56dc, .value=0x86, .type=IO_READ},
        {.addr=0x56dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x9549, .a=0x85, .x=0x74, .y=0x43, .sp=0x77, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x06}, {.addr=0x9549, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x954a, .a=0x8c, .x=0x74, .y=0x43, .sp=0x77, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x06}, {.addr=0x9549, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9549, .value=0x86, .type=IO_READ},
        {.addr=0x954a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x03bc, .a=0xfb, .x=0x04, .y=0x19, .sp=0x12, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0004, .value=0x87}, {.addr=0x03bc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x03bd, .a=0x82, .x=0x04, .y=0x19, .sp=0x12, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0004, .value=0x87}, {.addr=0x03bc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x03bc, .value=0x86, .type=IO_READ},
        {.addr=0x03bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0004, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xcfaf, .a=0x46, .x=0xd1, .y=0x98, .sp=0xe9, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x51}, {.addr=0xcfaf, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcfb0, .a=0x97, .x=0xd1, .y=0x98, .sp=0xe9, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0x51}, {.addr=0xcfaf, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcfaf, .value=0x86, .type=IO_READ},
        {.addr=0xcfb0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d1, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x7f8d, .a=0x24, .x=0xa9, .y=0xb4, .sp=0x18, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x01}, {.addr=0x7f8d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7f8e, .a=0x26, .x=0xa9, .y=0xb4, .sp=0x18, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x01}, {.addr=0x7f8d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7f8d, .value=0x86, .type=IO_READ},
        {.addr=0x7f8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x1524, .a=0xe6, .x=0xa3, .y=0x4e, .sp=0x2e, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x3b}, {.addr=0x1524, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1525, .a=0x22, .x=0xa3, .y=0x4e, .sp=0x2e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x3b}, {.addr=0x1524, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1524, .value=0x86, .type=IO_READ},
        {.addr=0x1525, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xedc3, .a=0xc6, .x=0x2c, .y=0x0f, .sp=0x13, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x002c, .value=0x11}, {.addr=0xedc3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xedc4, .a=0xd7, .x=0x2c, .y=0x0f, .sp=0x13, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x002c, .value=0x11}, {.addr=0xedc3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xedc3, .value=0x86, .type=IO_READ},
        {.addr=0xedc4, .value=DUMMY, .type=IO_READ},
        {.addr=0x002c, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x6cb2, .a=0xa3, .x=0xd7, .y=0x45, .sp=0xc9, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x2b}, {.addr=0x6cb2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6cb3, .a=0xce, .x=0xd7, .y=0x45, .sp=0xc9, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x2b}, {.addr=0x6cb2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6cb2, .value=0x86, .type=IO_READ},
        {.addr=0x6cb3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xe168, .a=0x1d, .x=0x4f, .y=0x9e, .sp=0x00, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x004f, .value=0xac}, {.addr=0xe168, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe169, .a=0xc9, .x=0x4f, .y=0x9e, .sp=0x00, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x004f, .value=0xac}, {.addr=0xe168, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe168, .value=0x86, .type=IO_READ},
        {.addr=0xe169, .value=DUMMY, .type=IO_READ},
        {.addr=0x004f, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xe9d9, .a=0xa4, .x=0x90, .y=0x74, .sp=0x35, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0xfa}, {.addr=0xe9d9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe9da, .a=0x9e, .x=0x90, .y=0x74, .sp=0x35, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xfa}, {.addr=0xe9d9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe9d9, .value=0x86, .type=IO_READ},
        {.addr=0xe9da, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x8e2b, .a=0x37, .x=0x6b, .y=0x36, .sp=0x5f, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0x25}, {.addr=0x8e2b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8e2c, .a=0x5c, .x=0x6b, .y=0x36, .sp=0x5f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0x25}, {.addr=0x8e2b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8e2b, .value=0x86, .type=IO_READ},
        {.addr=0x8e2c, .value=DUMMY, .type=IO_READ},
        {.addr=0x006b, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x65c5, .a=0x07, .x=0xdd, .y=0x9e, .sp=0xcc, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0xb8}, {.addr=0x65c5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x65c6, .a=0xbf, .x=0xdd, .y=0x9e, .sp=0xcc, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0xb8}, {.addr=0x65c5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x65c5, .value=0x86, .type=IO_READ},
        {.addr=0x65c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xcda1, .a=0x07, .x=0xa8, .y=0x77, .sp=0x1e, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x65}, {.addr=0xcda1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcda2, .a=0x6c, .x=0xa8, .y=0x77, .sp=0x1e, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x65}, {.addr=0xcda1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcda1, .value=0x86, .type=IO_READ},
        {.addr=0xcda2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x7bf4, .a=0x4b, .x=0x9b, .y=0x23, .sp=0xea, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x4e}, {.addr=0x7bf4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7bf5, .a=0x9a, .x=0x9b, .y=0x23, .sp=0xea, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x4e}, {.addr=0x7bf4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7bf4, .value=0x86, .type=IO_READ},
        {.addr=0x7bf5, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0300) {
    const struct CPU_State initial_cpu = {.pc=0x3a0d, .a=0x4e, .x=0xb6, .y=0xcc, .sp=0x35, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x00b6, .value=0x53}, {.addr=0x3a0d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3a0e, .a=0xa2, .x=0xb6, .y=0xcc, .sp=0x35, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00b6, .value=0x53}, {.addr=0x3a0d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3a0d, .value=0x86, .type=IO_READ},
        {.addr=0x3a0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b6, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0301) {
    const struct CPU_State initial_cpu = {.pc=0x1246, .a=0x6c, .x=0xf8, .y=0xca, .sp=0xa9, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0xa8}, {.addr=0x1246, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1247, .a=0x14, .x=0xf8, .y=0xca, .sp=0xa9, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xa8}, {.addr=0x1246, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1246, .value=0x86, .type=IO_READ},
        {.addr=0x1247, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0302) {
    const struct CPU_State initial_cpu = {.pc=0x2861, .a=0x37, .x=0xf7, .y=0x4e, .sp=0xed, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x22}, {.addr=0x2861, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2862, .a=0x59, .x=0xf7, .y=0x4e, .sp=0xed, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x22}, {.addr=0x2861, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2861, .value=0x86, .type=IO_READ},
        {.addr=0x2862, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0303) {
    const struct CPU_State initial_cpu = {.pc=0xd24a, .a=0xfc, .x=0xee, .y=0xdc, .sp=0x51, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0x6a}, {.addr=0xd24a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd24b, .a=0x67, .x=0xee, .y=0xdc, .sp=0x51, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0x6a}, {.addr=0xd24a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd24a, .value=0x86, .type=IO_READ},
        {.addr=0xd24b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0304) {
    const struct CPU_State initial_cpu = {.pc=0x4942, .a=0xc8, .x=0x82, .y=0x16, .sp=0xc0, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x5d}, {.addr=0x4942, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4943, .a=0x26, .x=0x82, .y=0x16, .sp=0xc0, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x5d}, {.addr=0x4942, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4942, .value=0x86, .type=IO_READ},
        {.addr=0x4943, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0305) {
    const struct CPU_State initial_cpu = {.pc=0xacf2, .a=0x92, .x=0xd2, .y=0xcc, .sp=0x44, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0xaa}, {.addr=0xacf2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xacf3, .a=0x3c, .x=0xd2, .y=0xcc, .sp=0x44, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0xaa}, {.addr=0xacf2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xacf2, .value=0x86, .type=IO_READ},
        {.addr=0xacf3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0306) {
    const struct CPU_State initial_cpu = {.pc=0x8a2f, .a=0xcd, .x=0x2d, .y=0xcc, .sp=0xff, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0x00}, {.addr=0x8a2f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8a30, .a=0xce, .x=0x2d, .y=0xcc, .sp=0xff, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0x00}, {.addr=0x8a2f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8a2f, .value=0x86, .type=IO_READ},
        {.addr=0x8a30, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0307) {
    const struct CPU_State initial_cpu = {.pc=0xe36e, .a=0x3d, .x=0xff, .y=0x0e, .sp=0xac, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x8e}, {.addr=0xe36e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe36f, .a=0xcb, .x=0xff, .y=0x0e, .sp=0xac, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x8e}, {.addr=0xe36e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe36e, .value=0x86, .type=IO_READ},
        {.addr=0xe36f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0308) {
    const struct CPU_State initial_cpu = {.pc=0x408f, .a=0x94, .x=0x43, .y=0x78, .sp=0x2d, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0xc6}, {.addr=0x408f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4090, .a=0x5a, .x=0x43, .y=0x78, .sp=0x2d, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0xc6}, {.addr=0x408f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x408f, .value=0x86, .type=IO_READ},
        {.addr=0x4090, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0309) {
    const struct CPU_State initial_cpu = {.pc=0xc31b, .a=0xb2, .x=0x03, .y=0x7d, .sp=0x5b, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0003, .value=0xf7}, {.addr=0xc31b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc31c, .a=0xaa, .x=0x03, .y=0x7d, .sp=0x5b, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0003, .value=0xf7}, {.addr=0xc31b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc31b, .value=0x86, .type=IO_READ},
        {.addr=0xc31c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0003, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_030A) {
    const struct CPU_State initial_cpu = {.pc=0xde75, .a=0xc2, .x=0x17, .y=0x41, .sp=0x23, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x41}, {.addr=0xde75, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xde76, .a=0x04, .x=0x17, .y=0x41, .sp=0x23, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x41}, {.addr=0xde75, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xde75, .value=0x86, .type=IO_READ},
        {.addr=0xde76, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_030B) {
    const struct CPU_State initial_cpu = {.pc=0xe2b4, .a=0x82, .x=0x48, .y=0xe0, .sp=0x7f, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0xd3}, {.addr=0xe2b4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe2b5, .a=0x56, .x=0x48, .y=0xe0, .sp=0x7f, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0xd3}, {.addr=0xe2b4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe2b4, .value=0x86, .type=IO_READ},
        {.addr=0xe2b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_030C) {
    const struct CPU_State initial_cpu = {.pc=0x7342, .a=0x65, .x=0xe0, .y=0xb7, .sp=0x7e, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x0c}, {.addr=0x7342, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7343, .a=0x71, .x=0xe0, .y=0xb7, .sp=0x7e, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x0c}, {.addr=0x7342, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7342, .value=0x86, .type=IO_READ},
        {.addr=0x7343, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_030D) {
    const struct CPU_State initial_cpu = {.pc=0x592c, .a=0x38, .x=0x23, .y=0xea, .sp=0xd2, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x54}, {.addr=0x592c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x592d, .a=0x8d, .x=0x23, .y=0xea, .sp=0xd2, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x54}, {.addr=0x592c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x592c, .value=0x86, .type=IO_READ},
        {.addr=0x592d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_030E) {
    const struct CPU_State initial_cpu = {.pc=0x901a, .a=0x06, .x=0x7f, .y=0xf4, .sp=0x8e, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0xee}, {.addr=0x901a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x901b, .a=0xf4, .x=0x7f, .y=0xf4, .sp=0x8e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0xee}, {.addr=0x901a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x901a, .value=0x86, .type=IO_READ},
        {.addr=0x901b, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_030F) {
    const struct CPU_State initial_cpu = {.pc=0x2a7a, .a=0x74, .x=0xe8, .y=0x56, .sp=0x65, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0x35}, {.addr=0x2a7a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2a7b, .a=0xaa, .x=0xe8, .y=0x56, .sp=0x65, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0x35}, {.addr=0x2a7a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2a7a, .value=0x86, .type=IO_READ},
        {.addr=0x2a7b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0310) {
    const struct CPU_State initial_cpu = {.pc=0x50b3, .a=0x12, .x=0x1b, .y=0xb0, .sp=0x69, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x001b, .value=0x01}, {.addr=0x50b3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x50b4, .a=0x14, .x=0x1b, .y=0xb0, .sp=0x69, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x001b, .value=0x01}, {.addr=0x50b3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x50b3, .value=0x86, .type=IO_READ},
        {.addr=0x50b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x001b, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0311) {
    const struct CPU_State initial_cpu = {.pc=0x414d, .a=0x22, .x=0x09, .y=0x98, .sp=0x77, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0x5b}, {.addr=0x414d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x414e, .a=0x7d, .x=0x09, .y=0x98, .sp=0x77, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0x5b}, {.addr=0x414d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x414d, .value=0x86, .type=IO_READ},
        {.addr=0x414e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0009, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0312) {
    const struct CPU_State initial_cpu = {.pc=0x91fc, .a=0x4b, .x=0x47, .y=0x7a, .sp=0x55, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0xfa}, {.addr=0x91fc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x91fd, .a=0x46, .x=0x47, .y=0x7a, .sp=0x55, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0xfa}, {.addr=0x91fc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x91fc, .value=0x86, .type=IO_READ},
        {.addr=0x91fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0313) {
    const struct CPU_State initial_cpu = {.pc=0xfc93, .a=0x96, .x=0x3b, .y=0xe7, .sp=0xc5, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x6b}, {.addr=0xfc93, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xfc94, .a=0x01, .x=0x3b, .y=0xe7, .sp=0xc5, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x6b}, {.addr=0xfc93, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xfc93, .value=0x86, .type=IO_READ},
        {.addr=0xfc94, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0314) {
    const struct CPU_State initial_cpu = {.pc=0xba84, .a=0xaa, .x=0x9d, .y=0x54, .sp=0xb1, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x009d, .value=0x47}, {.addr=0xba84, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xba85, .a=0xf2, .x=0x9d, .y=0x54, .sp=0xb1, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x009d, .value=0x47}, {.addr=0xba84, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xba84, .value=0x86, .type=IO_READ},
        {.addr=0xba85, .value=DUMMY, .type=IO_READ},
        {.addr=0x009d, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0315) {
    const struct CPU_State initial_cpu = {.pc=0xa138, .a=0x26, .x=0xef, .y=0x08, .sp=0x5c, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x00ef, .value=0x46}, {.addr=0xa138, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa139, .a=0x6d, .x=0xef, .y=0x08, .sp=0x5c, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00ef, .value=0x46}, {.addr=0xa138, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa138, .value=0x86, .type=IO_READ},
        {.addr=0xa139, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ef, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0316) {
    const struct CPU_State initial_cpu = {.pc=0x9b24, .a=0x3c, .x=0x64, .y=0xd2, .sp=0x4d, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0xcf}, {.addr=0x9b24, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9b25, .a=0x0c, .x=0x64, .y=0xd2, .sp=0x4d, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0xcf}, {.addr=0x9b24, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9b24, .value=0x86, .type=IO_READ},
        {.addr=0x9b25, .value=DUMMY, .type=IO_READ},
        {.addr=0x0064, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0317) {
    const struct CPU_State initial_cpu = {.pc=0x95b3, .a=0x3c, .x=0x54, .y=0x71, .sp=0xd0, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x50}, {.addr=0x95b3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x95b4, .a=0x8d, .x=0x54, .y=0x71, .sp=0xd0, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x50}, {.addr=0x95b3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x95b3, .value=0x86, .type=IO_READ},
        {.addr=0x95b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0318) {
    const struct CPU_State initial_cpu = {.pc=0x4227, .a=0x82, .x=0x39, .y=0x9d, .sp=0x3f, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0x6a}, {.addr=0x4227, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4228, .a=0xec, .x=0x39, .y=0x9d, .sp=0x3f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0x6a}, {.addr=0x4227, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4227, .value=0x86, .type=IO_READ},
        {.addr=0x4228, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0319) {
    const struct CPU_State initial_cpu = {.pc=0x841b, .a=0xfe, .x=0xc8, .y=0x60, .sp=0x16, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x7f}, {.addr=0x841b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x841c, .a=0x7d, .x=0xc8, .y=0x60, .sp=0x16, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x7f}, {.addr=0x841b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x841b, .value=0x86, .type=IO_READ},
        {.addr=0x841c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_031A) {
    const struct CPU_State initial_cpu = {.pc=0xb9bd, .a=0xc7, .x=0x26, .y=0x69, .sp=0x74, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0026, .value=0x27}, {.addr=0xb9bd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb9be, .a=0xee, .x=0x26, .y=0x69, .sp=0x74, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0026, .value=0x27}, {.addr=0xb9bd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb9bd, .value=0x86, .type=IO_READ},
        {.addr=0xb9be, .value=DUMMY, .type=IO_READ},
        {.addr=0x0026, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_031B) {
    const struct CPU_State initial_cpu = {.pc=0x435b, .a=0x4f, .x=0x11, .y=0x01, .sp=0x7b, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0x02}, {.addr=0x435b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x435c, .a=0x51, .x=0x11, .y=0x01, .sp=0x7b, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0x02}, {.addr=0x435b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x435b, .value=0x86, .type=IO_READ},
        {.addr=0x435c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_031C) {
    const struct CPU_State initial_cpu = {.pc=0x58c3, .a=0xfa, .x=0x5e, .y=0x51, .sp=0x62, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0xb0}, {.addr=0x58c3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x58c4, .a=0xab, .x=0x5e, .y=0x51, .sp=0x62, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0xb0}, {.addr=0x58c3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x58c3, .value=0x86, .type=IO_READ},
        {.addr=0x58c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_031D) {
    const struct CPU_State initial_cpu = {.pc=0x108f, .a=0xea, .x=0xde, .y=0x4d, .sp=0x71, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0xe5}, {.addr=0x108f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1090, .a=0xd0, .x=0xde, .y=0x4d, .sp=0x71, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xe5}, {.addr=0x108f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x108f, .value=0x86, .type=IO_READ},
        {.addr=0x1090, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_031E) {
    const struct CPU_State initial_cpu = {.pc=0xc384, .a=0xee, .x=0x1f, .y=0xcc, .sp=0x6f, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xf6}, {.addr=0xc384, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc385, .a=0xe5, .x=0x1f, .y=0xcc, .sp=0x6f, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xf6}, {.addr=0xc384, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc384, .value=0x86, .type=IO_READ},
        {.addr=0xc385, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_031F) {
    const struct CPU_State initial_cpu = {.pc=0xd15e, .a=0xf3, .x=0x36, .y=0x32, .sp=0xfb, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0036, .value=0x55}, {.addr=0xd15e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd15f, .a=0x49, .x=0x36, .y=0x32, .sp=0xfb, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0036, .value=0x55}, {.addr=0xd15e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd15e, .value=0x86, .type=IO_READ},
        {.addr=0xd15f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0036, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0320) {
    const struct CPU_State initial_cpu = {.pc=0xbf8b, .a=0x45, .x=0xd4, .y=0x82, .sp=0xf2, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0x5a}, {.addr=0xbf8b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xbf8c, .a=0x9f, .x=0xd4, .y=0x82, .sp=0xf2, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x5a}, {.addr=0xbf8b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xbf8b, .value=0x86, .type=IO_READ},
        {.addr=0xbf8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0321) {
    const struct CPU_State initial_cpu = {.pc=0x2a42, .a=0x33, .x=0x07, .y=0xd5, .sp=0xe6, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0x0f}, {.addr=0x2a42, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2a43, .a=0x42, .x=0x07, .y=0xd5, .sp=0xe6, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0x0f}, {.addr=0x2a42, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2a42, .value=0x86, .type=IO_READ},
        {.addr=0x2a43, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0322) {
    const struct CPU_State initial_cpu = {.pc=0xbdcd, .a=0x48, .x=0x3f, .y=0x77, .sp=0x9d, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x70}, {.addr=0xbdcd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xbdce, .a=0xb8, .x=0x3f, .y=0x77, .sp=0x9d, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x70}, {.addr=0xbdcd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xbdcd, .value=0x86, .type=IO_READ},
        {.addr=0xbdce, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0323) {
    const struct CPU_State initial_cpu = {.pc=0x1864, .a=0x5f, .x=0x9f, .y=0xda, .sp=0x35, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0xfe}, {.addr=0x1864, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1865, .a=0x5e, .x=0x9f, .y=0xda, .sp=0x35, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0xfe}, {.addr=0x1864, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1864, .value=0x86, .type=IO_READ},
        {.addr=0x1865, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0324) {
    const struct CPU_State initial_cpu = {.pc=0xd634, .a=0x6c, .x=0x3c, .y=0x18, .sp=0x49, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x52}, {.addr=0xd634, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd635, .a=0xbf, .x=0x3c, .y=0x18, .sp=0x49, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x52}, {.addr=0xd634, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd634, .value=0x86, .type=IO_READ},
        {.addr=0xd635, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0325) {
    const struct CPU_State initial_cpu = {.pc=0xc5aa, .a=0xec, .x=0x4b, .y=0xb8, .sp=0x5f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0xd3}, {.addr=0xc5aa, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc5ab, .a=0xc0, .x=0x4b, .y=0xb8, .sp=0x5f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xd3}, {.addr=0xc5aa, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc5aa, .value=0x86, .type=IO_READ},
        {.addr=0xc5ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0326) {
    const struct CPU_State initial_cpu = {.pc=0xcdf8, .a=0x02, .x=0x5c, .y=0x32, .sp=0x83, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0x7c}, {.addr=0xcdf8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xcdf9, .a=0x7e, .x=0x5c, .y=0x32, .sp=0x83, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0x7c}, {.addr=0xcdf8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xcdf8, .value=0x86, .type=IO_READ},
        {.addr=0xcdf9, .value=DUMMY, .type=IO_READ},
        {.addr=0x005c, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0327) {
    const struct CPU_State initial_cpu = {.pc=0xd833, .a=0xc9, .x=0x14, .y=0xbd, .sp=0x0e, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0x78}, {.addr=0xd833, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd834, .a=0x41, .x=0x14, .y=0xbd, .sp=0x0e, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0x78}, {.addr=0xd833, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd833, .value=0x86, .type=IO_READ},
        {.addr=0xd834, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0328) {
    const struct CPU_State initial_cpu = {.pc=0x5017, .a=0xd0, .x=0x89, .y=0x19, .sp=0xaf, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0089, .value=0x17}, {.addr=0x5017, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5018, .a=0xe8, .x=0x89, .y=0x19, .sp=0xaf, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0089, .value=0x17}, {.addr=0x5017, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5017, .value=0x86, .type=IO_READ},
        {.addr=0x5018, .value=DUMMY, .type=IO_READ},
        {.addr=0x0089, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0329) {
    const struct CPU_State initial_cpu = {.pc=0x015b, .a=0x46, .x=0x0a, .y=0x60, .sp=0xe2, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0xdb}, {.addr=0x015b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x015c, .a=0x22, .x=0x0a, .y=0x60, .sp=0xe2, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0xdb}, {.addr=0x015b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x015b, .value=0x86, .type=IO_READ},
        {.addr=0x015c, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_032A) {
    const struct CPU_State initial_cpu = {.pc=0x22f4, .a=0xd5, .x=0xd5, .y=0x7e, .sp=0xb2, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0xa9}, {.addr=0x22f4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x22f5, .a=0x7e, .x=0xd5, .y=0x7e, .sp=0xb2, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0xa9}, {.addr=0x22f4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x22f4, .value=0x86, .type=IO_READ},
        {.addr=0x22f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_032B) {
    const struct CPU_State initial_cpu = {.pc=0x1cd2, .a=0x6f, .x=0xd3, .y=0xd8, .sp=0x83, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x6e}, {.addr=0x1cd2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1cd3, .a=0xdd, .x=0xd3, .y=0xd8, .sp=0x83, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x6e}, {.addr=0x1cd2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1cd2, .value=0x86, .type=IO_READ},
        {.addr=0x1cd3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_032D) {
    const struct CPU_State initial_cpu = {.pc=0x1d74, .a=0x01, .x=0x1c, .y=0x69, .sp=0xef, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x2c}, {.addr=0x1d74, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1d75, .a=0x2e, .x=0x1c, .y=0x69, .sp=0xef, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x2c}, {.addr=0x1d74, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1d74, .value=0x86, .type=IO_READ},
        {.addr=0x1d75, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_032E) {
    const struct CPU_State initial_cpu = {.pc=0x7512, .a=0x90, .x=0x4e, .y=0x5e, .sp=0x7e, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x0d}, {.addr=0x7512, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7513, .a=0x9e, .x=0x4e, .y=0x5e, .sp=0x7e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x0d}, {.addr=0x7512, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7512, .value=0x86, .type=IO_READ},
        {.addr=0x7513, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_032F) {
    const struct CPU_State initial_cpu = {.pc=0x555b, .a=0x51, .x=0xb2, .y=0x87, .sp=0x49, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00b2, .value=0x01}, {.addr=0x555b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x555c, .a=0x53, .x=0xb2, .y=0x87, .sp=0x49, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00b2, .value=0x01}, {.addr=0x555b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x555b, .value=0x86, .type=IO_READ},
        {.addr=0x555c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b2, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0330) {
    const struct CPU_State initial_cpu = {.pc=0x2391, .a=0x95, .x=0xba, .y=0x4c, .sp=0xfc, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x6e}, {.addr=0x2391, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2392, .a=0x04, .x=0xba, .y=0x4c, .sp=0xfc, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x6e}, {.addr=0x2391, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2391, .value=0x86, .type=IO_READ},
        {.addr=0x2392, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0331) {
    const struct CPU_State initial_cpu = {.pc=0x74bb, .a=0xb4, .x=0x42, .y=0xd2, .sp=0xa7, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0xf0}, {.addr=0x74bb, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x74bc, .a=0xa4, .x=0x42, .y=0xd2, .sp=0xa7, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0xf0}, {.addr=0x74bb, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x74bb, .value=0x86, .type=IO_READ},
        {.addr=0x74bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0332) {
    const struct CPU_State initial_cpu = {.pc=0xbed7, .a=0xbb, .x=0x46, .y=0xac, .sp=0xf1, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x71}, {.addr=0xbed7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xbed8, .a=0x2c, .x=0x46, .y=0xac, .sp=0xf1, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x71}, {.addr=0xbed7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xbed7, .value=0x86, .type=IO_READ},
        {.addr=0xbed8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0333) {
    const struct CPU_State initial_cpu = {.pc=0x08a7, .a=0x06, .x=0x5d, .y=0x9d, .sp=0x73, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0x63}, {.addr=0x08a7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x08a8, .a=0x69, .x=0x5d, .y=0x9d, .sp=0x73, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0x63}, {.addr=0x08a7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x08a7, .value=0x86, .type=IO_READ},
        {.addr=0x08a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0334) {
    const struct CPU_State initial_cpu = {.pc=0x20db, .a=0x20, .x=0x0a, .y=0xb3, .sp=0x24, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x54}, {.addr=0x20db, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x20dc, .a=0x74, .x=0x0a, .y=0xb3, .sp=0x24, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0x54}, {.addr=0x20db, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x20db, .value=0x86, .type=IO_READ},
        {.addr=0x20dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0335) {
    const struct CPU_State initial_cpu = {.pc=0x208e, .a=0xac, .x=0x6d, .y=0x15, .sp=0x5c, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x006d, .value=0x2f}, {.addr=0x208e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x208f, .a=0xdc, .x=0x6d, .y=0x15, .sp=0x5c, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x006d, .value=0x2f}, {.addr=0x208e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x208e, .value=0x86, .type=IO_READ},
        {.addr=0x208f, .value=DUMMY, .type=IO_READ},
        {.addr=0x006d, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0336) {
    const struct CPU_State initial_cpu = {.pc=0x3695, .a=0x7c, .x=0x5c, .y=0x71, .sp=0x5f, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0xb4}, {.addr=0x3695, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3696, .a=0x31, .x=0x5c, .y=0x71, .sp=0x5f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xb4}, {.addr=0x3695, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3695, .value=0x86, .type=IO_READ},
        {.addr=0x3696, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0337) {
    const struct CPU_State initial_cpu = {.pc=0xd5e1, .a=0x62, .x=0x16, .y=0x36, .sp=0xdb, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0016, .value=0x16}, {.addr=0xd5e1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd5e2, .a=0x79, .x=0x16, .y=0x36, .sp=0xdb, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0016, .value=0x16}, {.addr=0xd5e1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd5e1, .value=0x86, .type=IO_READ},
        {.addr=0xd5e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0016, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0338) {
    const struct CPU_State initial_cpu = {.pc=0x4993, .a=0x4f, .x=0x39, .y=0xd3, .sp=0xf2, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0x1a}, {.addr=0x4993, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4994, .a=0x69, .x=0x39, .y=0xd3, .sp=0xf2, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0x1a}, {.addr=0x4993, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4993, .value=0x86, .type=IO_READ},
        {.addr=0x4994, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0339) {
    const struct CPU_State initial_cpu = {.pc=0x025e, .a=0x8f, .x=0xa4, .y=0xa3, .sp=0x5e, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0xf3}, {.addr=0x025e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x025f, .a=0x82, .x=0xa4, .y=0xa3, .sp=0x5e, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xf3}, {.addr=0x025e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x025e, .value=0x86, .type=IO_READ},
        {.addr=0x025f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_033A) {
    const struct CPU_State initial_cpu = {.pc=0xaebb, .a=0xa3, .x=0xb6, .y=0x0d, .sp=0xc3, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x00b6, .value=0x44}, {.addr=0xaebb, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xaebc, .a=0xe7, .x=0xb6, .y=0x0d, .sp=0xc3, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00b6, .value=0x44}, {.addr=0xaebb, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xaebb, .value=0x86, .type=IO_READ},
        {.addr=0xaebc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b6, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_033B) {
    const struct CPU_State initial_cpu = {.pc=0x2dfe, .a=0x54, .x=0xe2, .y=0x04, .sp=0x34, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0xa2}, {.addr=0x2dfe, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2dff, .a=0xf7, .x=0xe2, .y=0x04, .sp=0x34, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0xa2}, {.addr=0x2dfe, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2dfe, .value=0x86, .type=IO_READ},
        {.addr=0x2dff, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_033C) {
    const struct CPU_State initial_cpu = {.pc=0x7205, .a=0x69, .x=0x26, .y=0xac, .sp=0xd6, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0xe8}, {.addr=0x7205, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7206, .a=0x51, .x=0x26, .y=0xac, .sp=0xd6, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xe8}, {.addr=0x7205, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7205, .value=0x86, .type=IO_READ},
        {.addr=0x7206, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_033D) {
    const struct CPU_State initial_cpu = {.pc=0xc426, .a=0x15, .x=0x5a, .y=0x44, .sp=0x84, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0x7a}, {.addr=0xc426, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc427, .a=0x90, .x=0x5a, .y=0x44, .sp=0x84, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0x7a}, {.addr=0xc426, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc426, .value=0x86, .type=IO_READ},
        {.addr=0xc427, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_033E) {
    const struct CPU_State initial_cpu = {.pc=0x44df, .a=0xf3, .x=0x42, .y=0xab, .sp=0xe8, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0xb5}, {.addr=0x44df, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x44e0, .a=0xa9, .x=0x42, .y=0xab, .sp=0xe8, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xb5}, {.addr=0x44df, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x44df, .value=0x86, .type=IO_READ},
        {.addr=0x44e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_033F) {
    const struct CPU_State initial_cpu = {.pc=0x9a0d, .a=0x9b, .x=0x4a, .y=0x30, .sp=0x8d, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0x64}, {.addr=0x9a0d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9a0e, .a=0x00, .x=0x4a, .y=0x30, .sp=0x8d, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0x64}, {.addr=0x9a0d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9a0d, .value=0x86, .type=IO_READ},
        {.addr=0x9a0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x004a, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0340) {
    const struct CPU_State initial_cpu = {.pc=0x2814, .a=0x6a, .x=0x5d, .y=0x4b, .sp=0xa8, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0x45}, {.addr=0x2814, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2815, .a=0xaf, .x=0x5d, .y=0x4b, .sp=0xa8, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0x45}, {.addr=0x2814, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2814, .value=0x86, .type=IO_READ},
        {.addr=0x2815, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0341) {
    const struct CPU_State initial_cpu = {.pc=0x41f5, .a=0xad, .x=0xcf, .y=0x4e, .sp=0x70, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xa3}, {.addr=0x41f5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x41f6, .a=0x51, .x=0xcf, .y=0x4e, .sp=0x70, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xa3}, {.addr=0x41f5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x41f5, .value=0x86, .type=IO_READ},
        {.addr=0x41f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0342) {
    const struct CPU_State initial_cpu = {.pc=0x58ab, .a=0xf3, .x=0xbc, .y=0x2b, .sp=0x96, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x4f}, {.addr=0x58ab, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x58ac, .a=0x42, .x=0xbc, .y=0x2b, .sp=0x96, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x4f}, {.addr=0x58ab, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x58ab, .value=0x86, .type=IO_READ},
        {.addr=0x58ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0343) {
    const struct CPU_State initial_cpu = {.pc=0x09e1, .a=0x6c, .x=0xb9, .y=0x9f, .sp=0x8f, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0xe4}, {.addr=0x09e1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x09e2, .a=0x51, .x=0xb9, .y=0x9f, .sp=0x8f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xe4}, {.addr=0x09e1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x09e1, .value=0x86, .type=IO_READ},
        {.addr=0x09e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0344) {
    const struct CPU_State initial_cpu = {.pc=0xfdcc, .a=0x4d, .x=0x90, .y=0x3a, .sp=0x67, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0xe2}, {.addr=0xfdcc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xfdcd, .a=0x30, .x=0x90, .y=0x3a, .sp=0x67, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xe2}, {.addr=0xfdcc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xfdcc, .value=0x86, .type=IO_READ},
        {.addr=0xfdcd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0345) {
    const struct CPU_State initial_cpu = {.pc=0x9cd1, .a=0xf9, .x=0x9f, .y=0xa2, .sp=0x14, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0xe2}, {.addr=0x9cd1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9cd2, .a=0xdb, .x=0x9f, .y=0xa2, .sp=0x14, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0xe2}, {.addr=0x9cd1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9cd1, .value=0x86, .type=IO_READ},
        {.addr=0x9cd2, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0346) {
    const struct CPU_State initial_cpu = {.pc=0x26e1, .a=0x7e, .x=0x4c, .y=0x9b, .sp=0x15, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x6b}, {.addr=0x26e1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x26e2, .a=0xea, .x=0x4c, .y=0x9b, .sp=0x15, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x6b}, {.addr=0x26e1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x26e1, .value=0x86, .type=IO_READ},
        {.addr=0x26e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0348) {
    const struct CPU_State initial_cpu = {.pc=0xe0e0, .a=0x5d, .x=0x45, .y=0x23, .sp=0x62, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0x1c}, {.addr=0xe0e0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe0e1, .a=0x7a, .x=0x45, .y=0x23, .sp=0x62, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0x1c}, {.addr=0xe0e0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe0e0, .value=0x86, .type=IO_READ},
        {.addr=0xe0e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0045, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0349) {
    const struct CPU_State initial_cpu = {.pc=0xedf3, .a=0x04, .x=0x85, .y=0x6e, .sp=0x58, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0xbb}, {.addr=0xedf3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xedf4, .a=0xc0, .x=0x85, .y=0x6e, .sp=0x58, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0xbb}, {.addr=0xedf3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xedf3, .value=0x86, .type=IO_READ},
        {.addr=0xedf4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_034A) {
    const struct CPU_State initial_cpu = {.pc=0x5a5a, .a=0x27, .x=0x0b, .y=0xd7, .sp=0xb2, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x32}, {.addr=0x5a5a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5a5b, .a=0x59, .x=0x0b, .y=0xd7, .sp=0xb2, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x32}, {.addr=0x5a5a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5a5a, .value=0x86, .type=IO_READ},
        {.addr=0x5a5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_034B) {
    const struct CPU_State initial_cpu = {.pc=0x8dd3, .a=0xdd, .x=0x39, .y=0x11, .sp=0xc2, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x3c}, {.addr=0x8dd3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8dd4, .a=0x1a, .x=0x39, .y=0x11, .sp=0xc2, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x3c}, {.addr=0x8dd3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8dd3, .value=0x86, .type=IO_READ},
        {.addr=0x8dd4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_034C) {
    const struct CPU_State initial_cpu = {.pc=0x1ab6, .a=0x95, .x=0x74, .y=0xa5, .sp=0x0a, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x12}, {.addr=0x1ab6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1ab7, .a=0xa8, .x=0x74, .y=0xa5, .sp=0x0a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x12}, {.addr=0x1ab6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1ab6, .value=0x86, .type=IO_READ},
        {.addr=0x1ab7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_034D) {
    const struct CPU_State initial_cpu = {.pc=0x6bf4, .a=0x38, .x=0x81, .y=0x08, .sp=0xbc, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x88}, {.addr=0x6bf4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6bf5, .a=0xc0, .x=0x81, .y=0x08, .sp=0xbc, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x88}, {.addr=0x6bf4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6bf4, .value=0x86, .type=IO_READ},
        {.addr=0x6bf5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_034E) {
    const struct CPU_State initial_cpu = {.pc=0x961f, .a=0x55, .x=0xbb, .y=0x12, .sp=0x97, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x77}, {.addr=0x961f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9620, .a=0xcc, .x=0xbb, .y=0x12, .sp=0x97, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x77}, {.addr=0x961f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x961f, .value=0x86, .type=IO_READ},
        {.addr=0x9620, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_034F) {
    const struct CPU_State initial_cpu = {.pc=0x0571, .a=0xda, .x=0x38, .y=0xd4, .sp=0x2c, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x52}, {.addr=0x0571, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0572, .a=0x2d, .x=0x38, .y=0xd4, .sp=0x2c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x52}, {.addr=0x0571, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0571, .value=0x86, .type=IO_READ},
        {.addr=0x0572, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0350) {
    const struct CPU_State initial_cpu = {.pc=0x40de, .a=0xb5, .x=0xd6, .y=0xfa, .sp=0xe6, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0xd2}, {.addr=0x40de, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x40df, .a=0x88, .x=0xd6, .y=0xfa, .sp=0xe6, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0xd2}, {.addr=0x40de, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x40de, .value=0x86, .type=IO_READ},
        {.addr=0x40df, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0351) {
    const struct CPU_State initial_cpu = {.pc=0x928d, .a=0xe3, .x=0x4a, .y=0x4f, .sp=0x39, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x0d}, {.addr=0x928d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x928e, .a=0xf1, .x=0x4a, .y=0x4f, .sp=0x39, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x0d}, {.addr=0x928d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x928d, .value=0x86, .type=IO_READ},
        {.addr=0x928e, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0352) {
    const struct CPU_State initial_cpu = {.pc=0x41c5, .a=0x82, .x=0xa4, .y=0xf0, .sp=0x36, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x24}, {.addr=0x41c5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x41c6, .a=0xa7, .x=0xa4, .y=0xf0, .sp=0x36, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x24}, {.addr=0x41c5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x41c5, .value=0x86, .type=IO_READ},
        {.addr=0x41c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0353) {
    const struct CPU_State initial_cpu = {.pc=0x4dd0, .a=0x80, .x=0x7a, .y=0xb5, .sp=0x7d, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0x5a}, {.addr=0x4dd0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4dd1, .a=0xdb, .x=0x7a, .y=0xb5, .sp=0x7d, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0x5a}, {.addr=0x4dd0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4dd0, .value=0x86, .type=IO_READ},
        {.addr=0x4dd1, .value=DUMMY, .type=IO_READ},
        {.addr=0x007a, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0354) {
    const struct CPU_State initial_cpu = {.pc=0x61e2, .a=0x67, .x=0x94, .y=0x03, .sp=0x17, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0xdb}, {.addr=0x61e2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x61e3, .a=0x42, .x=0x94, .y=0x03, .sp=0x17, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0xdb}, {.addr=0x61e2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x61e2, .value=0x86, .type=IO_READ},
        {.addr=0x61e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0355) {
    const struct CPU_State initial_cpu = {.pc=0x64ce, .a=0xd1, .x=0x87, .y=0x22, .sp=0x2a, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x89}, {.addr=0x64ce, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x64cf, .a=0x5b, .x=0x87, .y=0x22, .sp=0x2a, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x89}, {.addr=0x64ce, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x64ce, .value=0x86, .type=IO_READ},
        {.addr=0x64cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0356) {
    const struct CPU_State initial_cpu = {.pc=0x7a9c, .a=0x10, .x=0x36, .y=0x9a, .sp=0x52, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x8f}, {.addr=0x7a9c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7a9d, .a=0xa0, .x=0x36, .y=0x9a, .sp=0x52, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x8f}, {.addr=0x7a9c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7a9c, .value=0x86, .type=IO_READ},
        {.addr=0x7a9d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0357) {
    const struct CPU_State initial_cpu = {.pc=0xd340, .a=0x27, .x=0x83, .y=0x2c, .sp=0xd7, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x1e}, {.addr=0xd340, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd341, .a=0x45, .x=0x83, .y=0x2c, .sp=0xd7, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x1e}, {.addr=0xd340, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd340, .value=0x86, .type=IO_READ},
        {.addr=0xd341, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0358) {
    const struct CPU_State initial_cpu = {.pc=0x5564, .a=0xc0, .x=0xa0, .y=0x32, .sp=0xaf, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0xce}, {.addr=0x5564, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5565, .a=0x8e, .x=0xa0, .y=0x32, .sp=0xaf, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0xce}, {.addr=0x5564, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5564, .value=0x86, .type=IO_READ},
        {.addr=0x5565, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a0, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0359) {
    const struct CPU_State initial_cpu = {.pc=0x49ed, .a=0x1b, .x=0x94, .y=0x20, .sp=0xcc, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x03}, {.addr=0x49ed, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x49ee, .a=0x1f, .x=0x94, .y=0x20, .sp=0xcc, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x03}, {.addr=0x49ed, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x49ed, .value=0x86, .type=IO_READ},
        {.addr=0x49ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_035A) {
    const struct CPU_State initial_cpu = {.pc=0x4beb, .a=0x53, .x=0x30, .y=0x26, .sp=0x2f, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x8d}, {.addr=0x4beb, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4bec, .a=0xe1, .x=0x30, .y=0x26, .sp=0x2f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x8d}, {.addr=0x4beb, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4beb, .value=0x86, .type=IO_READ},
        {.addr=0x4bec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_035C) {
    const struct CPU_State initial_cpu = {.pc=0x9995, .a=0x70, .x=0x24, .y=0x99, .sp=0x28, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0024, .value=0xa9}, {.addr=0x9995, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9996, .a=0x19, .x=0x24, .y=0x99, .sp=0x28, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0024, .value=0xa9}, {.addr=0x9995, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9995, .value=0x86, .type=IO_READ},
        {.addr=0x9996, .value=DUMMY, .type=IO_READ},
        {.addr=0x0024, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_035D) {
    const struct CPU_State initial_cpu = {.pc=0x8b43, .a=0x49, .x=0x35, .y=0x2e, .sp=0x7b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0x54}, {.addr=0x8b43, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8b44, .a=0x9e, .x=0x35, .y=0x2e, .sp=0x7b, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0x54}, {.addr=0x8b43, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8b43, .value=0x86, .type=IO_READ},
        {.addr=0x8b44, .value=DUMMY, .type=IO_READ},
        {.addr=0x0035, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_035E) {
    const struct CPU_State initial_cpu = {.pc=0x8713, .a=0x95, .x=0xaf, .y=0xf5, .sp=0xb9, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0x20}, {.addr=0x8713, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8714, .a=0xb6, .x=0xaf, .y=0xf5, .sp=0xb9, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0x20}, {.addr=0x8713, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8713, .value=0x86, .type=IO_READ},
        {.addr=0x8714, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_035F) {
    const struct CPU_State initial_cpu = {.pc=0x23b2, .a=0xe2, .x=0xc7, .y=0x46, .sp=0xaf, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0x86}, {.addr=0x23b2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x23b3, .a=0x68, .x=0xc7, .y=0x46, .sp=0xaf, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0x86}, {.addr=0x23b2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x23b2, .value=0x86, .type=IO_READ},
        {.addr=0x23b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0360) {
    const struct CPU_State initial_cpu = {.pc=0x4760, .a=0x17, .x=0xd0, .y=0x11, .sp=0xa9, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0xfe}, {.addr=0x4760, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4761, .a=0x15, .x=0xd0, .y=0x11, .sp=0xa9, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0xfe}, {.addr=0x4760, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4760, .value=0x86, .type=IO_READ},
        {.addr=0x4761, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0361) {
    const struct CPU_State initial_cpu = {.pc=0x5a38, .a=0x84, .x=0x54, .y=0x8e, .sp=0xcc, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0xc5}, {.addr=0x5a38, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5a39, .a=0x4a, .x=0x54, .y=0x8e, .sp=0xcc, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xc5}, {.addr=0x5a38, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5a38, .value=0x86, .type=IO_READ},
        {.addr=0x5a39, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0362) {
    const struct CPU_State initial_cpu = {.pc=0x75e1, .a=0x26, .x=0x51, .y=0xb4, .sp=0xe3, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x6f}, {.addr=0x75e1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x75e2, .a=0x95, .x=0x51, .y=0xb4, .sp=0xe3, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x6f}, {.addr=0x75e1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x75e1, .value=0x86, .type=IO_READ},
        {.addr=0x75e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0363) {
    const struct CPU_State initial_cpu = {.pc=0x137e, .a=0x5f, .x=0xd5, .y=0x25, .sp=0x81, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0x8e}, {.addr=0x137e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x137f, .a=0xed, .x=0xd5, .y=0x25, .sp=0x81, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0x8e}, {.addr=0x137e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x137e, .value=0x86, .type=IO_READ},
        {.addr=0x137f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0364) {
    const struct CPU_State initial_cpu = {.pc=0x95df, .a=0x78, .x=0xdb, .y=0xcd, .sp=0xbe, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x38}, {.addr=0x95df, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x95e0, .a=0xb1, .x=0xdb, .y=0xcd, .sp=0xbe, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x38}, {.addr=0x95df, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x95df, .value=0x86, .type=IO_READ},
        {.addr=0x95e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0365) {
    const struct CPU_State initial_cpu = {.pc=0x97d0, .a=0x64, .x=0x7f, .y=0x36, .sp=0x9b, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x3d}, {.addr=0x97d0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x97d1, .a=0xa2, .x=0x7f, .y=0x36, .sp=0x9b, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x3d}, {.addr=0x97d0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x97d0, .value=0x86, .type=IO_READ},
        {.addr=0x97d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0366) {
    const struct CPU_State initial_cpu = {.pc=0xc4e7, .a=0xc2, .x=0xdf, .y=0x0f, .sp=0x09, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x32}, {.addr=0xc4e7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc4e8, .a=0xf5, .x=0xdf, .y=0x0f, .sp=0x09, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x32}, {.addr=0xc4e7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc4e7, .value=0x86, .type=IO_READ},
        {.addr=0xc4e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0367) {
    const struct CPU_State initial_cpu = {.pc=0xa3d1, .a=0x8a, .x=0x24, .y=0x77, .sp=0x67, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x03}, {.addr=0xa3d1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa3d2, .a=0x8d, .x=0x24, .y=0x77, .sp=0x67, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x03}, {.addr=0xa3d1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa3d1, .value=0x86, .type=IO_READ},
        {.addr=0xa3d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0368) {
    const struct CPU_State initial_cpu = {.pc=0x6426, .a=0xbd, .x=0xd1, .y=0x3c, .sp=0xd9, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x32}, {.addr=0x6426, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6427, .a=0xf0, .x=0xd1, .y=0x3c, .sp=0xd9, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0x32}, {.addr=0x6426, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6426, .value=0x86, .type=IO_READ},
        {.addr=0x6427, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d1, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0369) {
    const struct CPU_State initial_cpu = {.pc=0x6032, .a=0xcc, .x=0x50, .y=0xca, .sp=0xe6, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0x36}, {.addr=0x6032, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6033, .a=0x03, .x=0x50, .y=0xca, .sp=0xe6, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0x36}, {.addr=0x6032, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6032, .value=0x86, .type=IO_READ},
        {.addr=0x6033, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_036A) {
    const struct CPU_State initial_cpu = {.pc=0x07ef, .a=0x9e, .x=0xc6, .y=0x8b, .sp=0x82, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x83}, {.addr=0x07ef, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x07f0, .a=0x21, .x=0xc6, .y=0x8b, .sp=0x82, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x83}, {.addr=0x07ef, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x07ef, .value=0x86, .type=IO_READ},
        {.addr=0x07f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_036B) {
    const struct CPU_State initial_cpu = {.pc=0x484f, .a=0xcc, .x=0x5d, .y=0x2d, .sp=0x2c, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0xd5}, {.addr=0x484f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4850, .a=0xa2, .x=0x5d, .y=0x2d, .sp=0x2c, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0xd5}, {.addr=0x484f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x484f, .value=0x86, .type=IO_READ},
        {.addr=0x4850, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_036C) {
    const struct CPU_State initial_cpu = {.pc=0x6ac0, .a=0x29, .x=0x50, .y=0xf1, .sp=0x27, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0x16}, {.addr=0x6ac0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6ac1, .a=0x3f, .x=0x50, .y=0xf1, .sp=0x27, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0x16}, {.addr=0x6ac0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6ac0, .value=0x86, .type=IO_READ},
        {.addr=0x6ac1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_036D) {
    const struct CPU_State initial_cpu = {.pc=0xff94, .a=0x0a, .x=0x3c, .y=0x96, .sp=0x9f, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0x03}, {.addr=0xff94, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xff95, .a=0x0d, .x=0x3c, .y=0x96, .sp=0x9f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0x03}, {.addr=0xff94, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xff94, .value=0x86, .type=IO_READ},
        {.addr=0xff95, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_036E) {
    const struct CPU_State initial_cpu = {.pc=0x5b3a, .a=0xb2, .x=0x81, .y=0x41, .sp=0xb8, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x00}, {.addr=0x5b3a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5b3b, .a=0xb3, .x=0x81, .y=0x41, .sp=0xb8, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x00}, {.addr=0x5b3a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5b3a, .value=0x86, .type=IO_READ},
        {.addr=0x5b3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_036F) {
    const struct CPU_State initial_cpu = {.pc=0xe4a8, .a=0x10, .x=0x03, .y=0xac, .sp=0x5f, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0003, .value=0x93}, {.addr=0xe4a8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe4a9, .a=0xa3, .x=0x03, .y=0xac, .sp=0x5f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0003, .value=0x93}, {.addr=0xe4a8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe4a8, .value=0x86, .type=IO_READ},
        {.addr=0xe4a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0003, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0370) {
    const struct CPU_State initial_cpu = {.pc=0xeb9e, .a=0xc3, .x=0x82, .y=0xac, .sp=0xdb, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0xce}, {.addr=0xeb9e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xeb9f, .a=0x92, .x=0x82, .y=0xac, .sp=0xdb, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xce}, {.addr=0xeb9e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xeb9e, .value=0x86, .type=IO_READ},
        {.addr=0xeb9f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0371) {
    const struct CPU_State initial_cpu = {.pc=0x2355, .a=0xdb, .x=0x3a, .y=0xb3, .sp=0xa3, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0xe4}, {.addr=0x2355, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2356, .a=0xbf, .x=0x3a, .y=0xb3, .sp=0xa3, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0xe4}, {.addr=0x2355, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2355, .value=0x86, .type=IO_READ},
        {.addr=0x2356, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0372) {
    const struct CPU_State initial_cpu = {.pc=0x0a7a, .a=0x1c, .x=0xac, .y=0x11, .sp=0x3b, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x03}, {.addr=0x0a7a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0a7b, .a=0x20, .x=0xac, .y=0x11, .sp=0x3b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x03}, {.addr=0x0a7a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0a7a, .value=0x86, .type=IO_READ},
        {.addr=0x0a7b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0373) {
    const struct CPU_State initial_cpu = {.pc=0xef81, .a=0x69, .x=0xf2, .y=0x47, .sp=0x65, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x8d}, {.addr=0xef81, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xef82, .a=0xf6, .x=0xf2, .y=0x47, .sp=0x65, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x8d}, {.addr=0xef81, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xef81, .value=0x86, .type=IO_READ},
        {.addr=0xef82, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0374) {
    const struct CPU_State initial_cpu = {.pc=0xb9b7, .a=0x20, .x=0x9b, .y=0x87, .sp=0xb6, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0x57}, {.addr=0xb9b7, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb9b8, .a=0x77, .x=0x9b, .y=0x87, .sp=0xb6, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0x57}, {.addr=0xb9b7, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb9b7, .value=0x86, .type=IO_READ},
        {.addr=0xb9b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x009b, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0375) {
    const struct CPU_State initial_cpu = {.pc=0x16be, .a=0x94, .x=0x68, .y=0xc8, .sp=0x95, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0068, .value=0x91}, {.addr=0x16be, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x16bf, .a=0x25, .x=0x68, .y=0xc8, .sp=0x95, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0068, .value=0x91}, {.addr=0x16be, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x16be, .value=0x86, .type=IO_READ},
        {.addr=0x16bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0068, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0376) {
    const struct CPU_State initial_cpu = {.pc=0x70ee, .a=0xc4, .x=0x0b, .y=0x6d, .sp=0x0b, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x06}, {.addr=0x70ee, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x70ef, .a=0xca, .x=0x0b, .y=0x6d, .sp=0x0b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x06}, {.addr=0x70ee, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x70ee, .value=0x86, .type=IO_READ},
        {.addr=0x70ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0377) {
    const struct CPU_State initial_cpu = {.pc=0xaefc, .a=0x84, .x=0xab, .y=0x62, .sp=0xa9, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xd9}, {.addr=0xaefc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xaefd, .a=0x5d, .x=0xab, .y=0x62, .sp=0xa9, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xd9}, {.addr=0xaefc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xaefc, .value=0x86, .type=IO_READ},
        {.addr=0xaefd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0378) {
    const struct CPU_State initial_cpu = {.pc=0xe8fc, .a=0x25, .x=0x48, .y=0x14, .sp=0x19, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0x81}, {.addr=0xe8fc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe8fd, .a=0xa6, .x=0x48, .y=0x14, .sp=0x19, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0x81}, {.addr=0xe8fc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe8fc, .value=0x86, .type=IO_READ},
        {.addr=0xe8fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0379) {
    const struct CPU_State initial_cpu = {.pc=0xbaf6, .a=0x8f, .x=0x02, .y=0x1d, .sp=0x54, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0002, .value=0x36}, {.addr=0xbaf6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xbaf7, .a=0xc6, .x=0x02, .y=0x1d, .sp=0x54, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0002, .value=0x36}, {.addr=0xbaf6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xbaf6, .value=0x86, .type=IO_READ},
        {.addr=0xbaf7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0002, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_037B) {
    const struct CPU_State initial_cpu = {.pc=0x84c6, .a=0x1c, .x=0x49, .y=0xb8, .sp=0xfc, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0xa1}, {.addr=0x84c6, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x84c7, .a=0xbe, .x=0x49, .y=0xb8, .sp=0xfc, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0xa1}, {.addr=0x84c6, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x84c6, .value=0x86, .type=IO_READ},
        {.addr=0x84c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_037C) {
    const struct CPU_State initial_cpu = {.pc=0xc80e, .a=0xc0, .x=0xe5, .y=0x85, .sp=0x5b, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0x66}, {.addr=0xc80e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc80f, .a=0x27, .x=0xe5, .y=0x85, .sp=0x5b, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0x66}, {.addr=0xc80e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc80e, .value=0x86, .type=IO_READ},
        {.addr=0xc80f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e5, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_037D) {
    const struct CPU_State initial_cpu = {.pc=0x18dc, .a=0x78, .x=0x56, .y=0x0e, .sp=0x11, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x30}, {.addr=0x18dc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x18dd, .a=0xa8, .x=0x56, .y=0x0e, .sp=0x11, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x30}, {.addr=0x18dc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x18dc, .value=0x86, .type=IO_READ},
        {.addr=0x18dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_037E) {
    const struct CPU_State initial_cpu = {.pc=0x7974, .a=0xb1, .x=0xab, .y=0xdb, .sp=0x3f, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x40}, {.addr=0x7974, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7975, .a=0xf2, .x=0xab, .y=0xdb, .sp=0x3f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x40}, {.addr=0x7974, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7974, .value=0x86, .type=IO_READ},
        {.addr=0x7975, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_037F) {
    const struct CPU_State initial_cpu = {.pc=0x1cc0, .a=0x92, .x=0xbf, .y=0x99, .sp=0xfb, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0xe2}, {.addr=0x1cc0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1cc1, .a=0x74, .x=0xbf, .y=0x99, .sp=0xfb, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xe2}, {.addr=0x1cc0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1cc0, .value=0x86, .type=IO_READ},
        {.addr=0x1cc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0380) {
    const struct CPU_State initial_cpu = {.pc=0x4425, .a=0x35, .x=0x40, .y=0x60, .sp=0xc1, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0xa8}, {.addr=0x4425, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4426, .a=0xdd, .x=0x40, .y=0x60, .sp=0xc1, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xa8}, {.addr=0x4425, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4425, .value=0x86, .type=IO_READ},
        {.addr=0x4426, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0381) {
    const struct CPU_State initial_cpu = {.pc=0xa373, .a=0x95, .x=0xdc, .y=0x90, .sp=0x54, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0x77}, {.addr=0xa373, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa374, .a=0x0c, .x=0xdc, .y=0x90, .sp=0x54, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0x77}, {.addr=0xa373, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa373, .value=0x86, .type=IO_READ},
        {.addr=0xa374, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0382) {
    const struct CPU_State initial_cpu = {.pc=0xf17f, .a=0x8f, .x=0xa3, .y=0x71, .sp=0x9f, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0x52}, {.addr=0xf17f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf180, .a=0xe2, .x=0xa3, .y=0x71, .sp=0x9f, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0x52}, {.addr=0xf17f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf17f, .value=0x86, .type=IO_READ},
        {.addr=0xf180, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0383) {
    const struct CPU_State initial_cpu = {.pc=0xecda, .a=0x41, .x=0xd9, .y=0x00, .sp=0x9f, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x27}, {.addr=0xecda, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xecdb, .a=0x69, .x=0xd9, .y=0x00, .sp=0x9f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x27}, {.addr=0xecda, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xecda, .value=0x86, .type=IO_READ},
        {.addr=0xecdb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0384) {
    const struct CPU_State initial_cpu = {.pc=0x31be, .a=0x36, .x=0x6e, .y=0x58, .sp=0x29, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0xeb}, {.addr=0x31be, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x31bf, .a=0x22, .x=0x6e, .y=0x58, .sp=0x29, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0xeb}, {.addr=0x31be, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x31be, .value=0x86, .type=IO_READ},
        {.addr=0x31bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0385) {
    const struct CPU_State initial_cpu = {.pc=0xd3e2, .a=0x81, .x=0xd3, .y=0x4a, .sp=0xe8, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x56}, {.addr=0xd3e2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd3e3, .a=0xd7, .x=0xd3, .y=0x4a, .sp=0xe8, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x56}, {.addr=0xd3e2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd3e2, .value=0x86, .type=IO_READ},
        {.addr=0xd3e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0386) {
    const struct CPU_State initial_cpu = {.pc=0x9f3b, .a=0x3f, .x=0x5e, .y=0x13, .sp=0xbc, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0xa9}, {.addr=0x9f3b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9f3c, .a=0xe8, .x=0x5e, .y=0x13, .sp=0xbc, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0xa9}, {.addr=0x9f3b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9f3b, .value=0x86, .type=IO_READ},
        {.addr=0x9f3c, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0387) {
    const struct CPU_State initial_cpu = {.pc=0x5e34, .a=0xe2, .x=0xc2, .y=0x0f, .sp=0xb9, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x9b}, {.addr=0x5e34, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5e35, .a=0x7d, .x=0xc2, .y=0x0f, .sp=0xb9, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x9b}, {.addr=0x5e34, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5e34, .value=0x86, .type=IO_READ},
        {.addr=0x5e35, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0388) {
    const struct CPU_State initial_cpu = {.pc=0x82bd, .a=0x8a, .x=0x10, .y=0xe5, .sp=0x7e, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x16}, {.addr=0x82bd, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x82be, .a=0xa0, .x=0x10, .y=0xe5, .sp=0x7e, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x16}, {.addr=0x82bd, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x82bd, .value=0x86, .type=IO_READ},
        {.addr=0x82be, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0389) {
    const struct CPU_State initial_cpu = {.pc=0xf0b9, .a=0x0e, .x=0x89, .y=0xa6, .sp=0x68, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0089, .value=0xa9}, {.addr=0xf0b9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf0ba, .a=0xb7, .x=0x89, .y=0xa6, .sp=0x68, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0089, .value=0xa9}, {.addr=0xf0b9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf0b9, .value=0x86, .type=IO_READ},
        {.addr=0xf0ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0089, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_038A) {
    const struct CPU_State initial_cpu = {.pc=0x12e2, .a=0x6d, .x=0xd3, .y=0xd6, .sp=0x5b, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x12}, {.addr=0x12e2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x12e3, .a=0x80, .x=0xd3, .y=0xd6, .sp=0x5b, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x12}, {.addr=0x12e2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x12e2, .value=0x86, .type=IO_READ},
        {.addr=0x12e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_038B) {
    const struct CPU_State initial_cpu = {.pc=0xc9f8, .a=0xc2, .x=0x32, .y=0x6b, .sp=0x9c, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0xc7}, {.addr=0xc9f8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc9f9, .a=0x89, .x=0x32, .y=0x6b, .sp=0x9c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0xc7}, {.addr=0xc9f8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc9f8, .value=0x86, .type=IO_READ},
        {.addr=0xc9f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0032, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_038C) {
    const struct CPU_State initial_cpu = {.pc=0xab1f, .a=0x27, .x=0xc7, .y=0x70, .sp=0xaa, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0x75}, {.addr=0xab1f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xab20, .a=0x9c, .x=0xc7, .y=0x70, .sp=0xaa, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0x75}, {.addr=0xab1f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xab1f, .value=0x86, .type=IO_READ},
        {.addr=0xab20, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_038D) {
    const struct CPU_State initial_cpu = {.pc=0x1519, .a=0x5e, .x=0x49, .y=0xe3, .sp=0xfa, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x93}, {.addr=0x1519, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x151a, .a=0xf2, .x=0x49, .y=0xe3, .sp=0xfa, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x93}, {.addr=0x1519, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1519, .value=0x86, .type=IO_READ},
        {.addr=0x151a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_038E) {
    const struct CPU_State initial_cpu = {.pc=0x99b0, .a=0xe7, .x=0x42, .y=0x50, .sp=0xc8, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0x46}, {.addr=0x99b0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x99b1, .a=0x2d, .x=0x42, .y=0x50, .sp=0xc8, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0x46}, {.addr=0x99b0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x99b0, .value=0x86, .type=IO_READ},
        {.addr=0x99b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_038F) {
    const struct CPU_State initial_cpu = {.pc=0xd736, .a=0x93, .x=0xb8, .y=0x99, .sp=0x50, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x00b8, .value=0xe5}, {.addr=0xd736, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd737, .a=0x79, .x=0xb8, .y=0x99, .sp=0x50, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00b8, .value=0xe5}, {.addr=0xd736, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd736, .value=0x86, .type=IO_READ},
        {.addr=0xd737, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b8, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0390) {
    const struct CPU_State initial_cpu = {.pc=0x5520, .a=0xde, .x=0x54, .y=0xb4, .sp=0x96, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0xad}, {.addr=0x5520, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5521, .a=0x8b, .x=0x54, .y=0xb4, .sp=0x96, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0xad}, {.addr=0x5520, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5520, .value=0x86, .type=IO_READ},
        {.addr=0x5521, .value=DUMMY, .type=IO_READ},
        {.addr=0x0054, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0391) {
    const struct CPU_State initial_cpu = {.pc=0x011c, .a=0xc9, .x=0x9a, .y=0xd8, .sp=0x26, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0x9e}, {.addr=0x011c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x011d, .a=0x67, .x=0x9a, .y=0xd8, .sp=0x26, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0x9e}, {.addr=0x011c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x011c, .value=0x86, .type=IO_READ},
        {.addr=0x011d, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0392) {
    const struct CPU_State initial_cpu = {.pc=0x68a9, .a=0xaf, .x=0xaa, .y=0x6d, .sp=0x30, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x00aa, .value=0xb2}, {.addr=0x68a9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x68aa, .a=0x61, .x=0xaa, .y=0x6d, .sp=0x30, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00aa, .value=0xb2}, {.addr=0x68a9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x68a9, .value=0x86, .type=IO_READ},
        {.addr=0x68aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x00aa, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0393) {
    const struct CPU_State initial_cpu = {.pc=0x4ae9, .a=0x56, .x=0xba, .y=0x8d, .sp=0x53, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0x98}, {.addr=0x4ae9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4aea, .a=0xef, .x=0xba, .y=0x8d, .sp=0x53, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0x98}, {.addr=0x4ae9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4ae9, .value=0x86, .type=IO_READ},
        {.addr=0x4aea, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0394) {
    const struct CPU_State initial_cpu = {.pc=0x4ff1, .a=0x34, .x=0x2e, .y=0x37, .sp=0x5b, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0xcc}, {.addr=0x4ff1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4ff2, .a=0x00, .x=0x2e, .y=0x37, .sp=0x5b, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0xcc}, {.addr=0x4ff1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4ff1, .value=0x86, .type=IO_READ},
        {.addr=0x4ff2, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0395) {
    const struct CPU_State initial_cpu = {.pc=0xf8f1, .a=0xf8, .x=0x06, .y=0xe0, .sp=0x4d, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0xd1}, {.addr=0xf8f1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf8f2, .a=0xc9, .x=0x06, .y=0xe0, .sp=0x4d, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0xd1}, {.addr=0xf8f1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf8f1, .value=0x86, .type=IO_READ},
        {.addr=0xf8f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0396) {
    const struct CPU_State initial_cpu = {.pc=0x6599, .a=0xbf, .x=0xb3, .y=0x5e, .sp=0x16, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x25}, {.addr=0x6599, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x659a, .a=0xe5, .x=0xb3, .y=0x5e, .sp=0x16, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x25}, {.addr=0x6599, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6599, .value=0x86, .type=IO_READ},
        {.addr=0x659a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0397) {
    const struct CPU_State initial_cpu = {.pc=0xfed1, .a=0xba, .x=0x7f, .y=0x5f, .sp=0xb1, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x19}, {.addr=0xfed1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xfed2, .a=0xd3, .x=0x7f, .y=0x5f, .sp=0xb1, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x19}, {.addr=0xfed1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xfed1, .value=0x86, .type=IO_READ},
        {.addr=0xfed2, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0398) {
    const struct CPU_State initial_cpu = {.pc=0x453e, .a=0x73, .x=0xb7, .y=0x97, .sp=0x16, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x69}, {.addr=0x453e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x453f, .a=0xdc, .x=0xb7, .y=0x97, .sp=0x16, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x69}, {.addr=0x453e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x453e, .value=0x86, .type=IO_READ},
        {.addr=0x453f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_0399) {
    const struct CPU_State initial_cpu = {.pc=0x4c78, .a=0x34, .x=0xb1, .y=0x13, .sp=0x68, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0x6e}, {.addr=0x4c78, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4c79, .a=0xa2, .x=0xb1, .y=0x13, .sp=0x68, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0x6e}, {.addr=0x4c78, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4c78, .value=0x86, .type=IO_READ},
        {.addr=0x4c79, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_039A) {
    const struct CPU_State initial_cpu = {.pc=0x0a1a, .a=0x06, .x=0xd9, .y=0x76, .sp=0xff, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x44}, {.addr=0x0a1a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0a1b, .a=0x4a, .x=0xd9, .y=0x76, .sp=0xff, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x44}, {.addr=0x0a1a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0a1a, .value=0x86, .type=IO_READ},
        {.addr=0x0a1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_039B) {
    const struct CPU_State initial_cpu = {.pc=0xb650, .a=0x0d, .x=0x46, .y=0x30, .sp=0x4d, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0x91}, {.addr=0xb650, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb651, .a=0x9e, .x=0x46, .y=0x30, .sp=0x4d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0x91}, {.addr=0xb650, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb650, .value=0x86, .type=IO_READ},
        {.addr=0xb651, .value=DUMMY, .type=IO_READ},
        {.addr=0x0046, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_039C) {
    const struct CPU_State initial_cpu = {.pc=0x0765, .a=0x90, .x=0xba, .y=0x7c, .sp=0xab, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0xe0}, {.addr=0x0765, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0766, .a=0x70, .x=0xba, .y=0x7c, .sp=0xab, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0xe0}, {.addr=0x0765, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0765, .value=0x86, .type=IO_READ},
        {.addr=0x0766, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_039D) {
    const struct CPU_State initial_cpu = {.pc=0xdb12, .a=0xd8, .x=0xf0, .y=0xed, .sp=0x39, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0xbf}, {.addr=0xdb12, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xdb13, .a=0x97, .x=0xf0, .y=0xed, .sp=0x39, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xbf}, {.addr=0xdb12, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xdb12, .value=0x86, .type=IO_READ},
        {.addr=0xdb13, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_039E) {
    const struct CPU_State initial_cpu = {.pc=0xdd6b, .a=0x5e, .x=0x5c, .y=0xde, .sp=0xfd, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x6e}, {.addr=0xdd6b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xdd6c, .a=0xcc, .x=0x5c, .y=0xde, .sp=0xfd, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x6e}, {.addr=0xdd6b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xdd6b, .value=0x86, .type=IO_READ},
        {.addr=0xdd6c, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_039F) {
    const struct CPU_State initial_cpu = {.pc=0xb009, .a=0xbe, .x=0x3b, .y=0x33, .sp=0xb6, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0x77}, {.addr=0xb009, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb00a, .a=0x35, .x=0x3b, .y=0x33, .sp=0xb6, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0x77}, {.addr=0xb009, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb009, .value=0x86, .type=IO_READ},
        {.addr=0xb00a, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x61ee, .a=0xb5, .x=0x7d, .y=0x77, .sp=0x63, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x69}, {.addr=0x61ee, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x61ef, .a=0x1e, .x=0x7d, .y=0x77, .sp=0x63, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x69}, {.addr=0x61ee, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x61ee, .value=0x86, .type=IO_READ},
        {.addr=0x61ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x954a, .a=0x99, .x=0x00, .y=0x64, .sp=0x3c, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0x23}, {.addr=0x954a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x954b, .a=0xbc, .x=0x00, .y=0x64, .sp=0x3c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0x23}, {.addr=0x954a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x954a, .value=0x86, .type=IO_READ},
        {.addr=0x954b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0000, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xf7ad, .a=0x12, .x=0x1c, .y=0xc6, .sp=0x80, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x63}, {.addr=0xf7ad, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf7ae, .a=0x75, .x=0x1c, .y=0xc6, .sp=0x80, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x63}, {.addr=0xf7ad, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf7ad, .value=0x86, .type=IO_READ},
        {.addr=0xf7ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x51e0, .a=0x3d, .x=0xd2, .y=0xcb, .sp=0x1e, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0xcc}, {.addr=0x51e0, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x51e1, .a=0x0a, .x=0xd2, .y=0xcb, .sp=0x1e, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0xcc}, {.addr=0x51e0, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x51e0, .value=0x86, .type=IO_READ},
        {.addr=0x51e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d2, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x8493, .a=0xae, .x=0x8b, .y=0xfb, .sp=0x0a, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x7d}, {.addr=0x8493, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8494, .a=0x2c, .x=0x8b, .y=0xfb, .sp=0x0a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x7d}, {.addr=0x8493, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8493, .value=0x86, .type=IO_READ},
        {.addr=0x8494, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xfed8, .a=0xb9, .x=0x5a, .y=0xb4, .sp=0x18, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0x26}, {.addr=0xfed8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xfed9, .a=0xe0, .x=0x5a, .y=0xb4, .sp=0x18, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0x26}, {.addr=0xfed8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xfed8, .value=0x86, .type=IO_READ},
        {.addr=0xfed9, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x0a6b, .a=0x9b, .x=0x63, .y=0xdb, .sp=0x66, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0xf2}, {.addr=0x0a6b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0a6c, .a=0x8d, .x=0x63, .y=0xdb, .sp=0x66, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0xf2}, {.addr=0x0a6b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0a6b, .value=0x86, .type=IO_READ},
        {.addr=0x0a6c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0063, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xbc1d, .a=0xff, .x=0x17, .y=0xaa, .sp=0x96, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x69}, {.addr=0xbc1d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xbc1e, .a=0x68, .x=0x17, .y=0xaa, .sp=0x96, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x69}, {.addr=0xbc1d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xbc1d, .value=0x86, .type=IO_READ},
        {.addr=0xbc1e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x8055, .a=0x2b, .x=0xe6, .y=0x4e, .sp=0x1b, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0xe9}, {.addr=0x8055, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8056, .a=0x14, .x=0xe6, .y=0x4e, .sp=0x1b, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0xe9}, {.addr=0x8055, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8055, .value=0x86, .type=IO_READ},
        {.addr=0x8056, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e6, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xddc3, .a=0xcf, .x=0x04, .y=0x75, .sp=0xfb, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0004, .value=0xb5}, {.addr=0xddc3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xddc4, .a=0x85, .x=0x04, .y=0x75, .sp=0xfb, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0004, .value=0xb5}, {.addr=0xddc3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xddc3, .value=0x86, .type=IO_READ},
        {.addr=0xddc4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0004, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x3cc5, .a=0xbd, .x=0x96, .y=0x08, .sp=0xba, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0x89}, {.addr=0x3cc5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3cc6, .a=0x46, .x=0x96, .y=0x08, .sp=0xba, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0x89}, {.addr=0x3cc5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3cc5, .value=0x86, .type=IO_READ},
        {.addr=0x3cc6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x5537, .a=0xfd, .x=0xc3, .y=0x1f, .sp=0x86, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x26}, {.addr=0x5537, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5538, .a=0x23, .x=0xc3, .y=0x1f, .sp=0x86, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x26}, {.addr=0x5537, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5537, .value=0x86, .type=IO_READ},
        {.addr=0x5538, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xf251, .a=0xdc, .x=0x7e, .y=0xee, .sp=0x96, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x51}, {.addr=0xf251, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf252, .a=0x2d, .x=0x7e, .y=0xee, .sp=0x96, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x51}, {.addr=0xf251, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf251, .value=0x86, .type=IO_READ},
        {.addr=0xf252, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x1e4d, .a=0x45, .x=0x96, .y=0x0b, .sp=0x5d, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0x8b}, {.addr=0x1e4d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1e4e, .a=0xd1, .x=0x96, .y=0x0b, .sp=0x5d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0x8b}, {.addr=0x1e4d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1e4d, .value=0x86, .type=IO_READ},
        {.addr=0x1e4e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x001d, .a=0xa6, .x=0xa1, .y=0x17, .sp=0xa2, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0x86}, {.addr=0x01a1, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x001e, .a=0x31, .x=0xa1, .y=0x17, .sp=0xa2, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0x86}, {.addr=0x01a1, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x001d, .value=0x86, .type=IO_READ},
        {.addr=0x001e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x723c, .a=0x57, .x=0xeb, .y=0xae, .sp=0xbc, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x3b}, {.addr=0x723c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x723d, .a=0x93, .x=0xeb, .y=0xae, .sp=0xbc, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x3b}, {.addr=0x723c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x723c, .value=0x86, .type=IO_READ},
        {.addr=0x723d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x2cd1, .a=0x24, .x=0xd9, .y=0xb4, .sp=0xf9, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x54}, {.addr=0x2cd1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2cd2, .a=0x78, .x=0xd9, .y=0xb4, .sp=0xf9, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x54}, {.addr=0x2cd1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2cd1, .value=0x86, .type=IO_READ},
        {.addr=0x2cd2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x29fc, .a=0x8a, .x=0xc5, .y=0x3f, .sp=0x18, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0xb6}, {.addr=0x29fc, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x29fd, .a=0x41, .x=0xc5, .y=0x3f, .sp=0x18, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0xb6}, {.addr=0x29fc, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x29fc, .value=0x86, .type=IO_READ},
        {.addr=0x29fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x7159, .a=0x8a, .x=0x4b, .y=0x59, .sp=0x70, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x2c}, {.addr=0x7159, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x715a, .a=0xb6, .x=0x4b, .y=0x59, .sp=0x70, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x2c}, {.addr=0x7159, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7159, .value=0x86, .type=IO_READ},
        {.addr=0x715a, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x7502, .a=0x47, .x=0x46, .y=0x4e, .sp=0x29, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x1d}, {.addr=0x7502, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7503, .a=0x64, .x=0x46, .y=0x4e, .sp=0x29, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x1d}, {.addr=0x7502, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7502, .value=0x86, .type=IO_READ},
        {.addr=0x7503, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x1086, .a=0xaa, .x=0x86, .y=0x29, .sp=0x44, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x5c}, {.addr=0x1086, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1087, .a=0x07, .x=0x86, .y=0x29, .sp=0x44, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0x5c}, {.addr=0x1086, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1086, .value=0x86, .type=IO_READ},
        {.addr=0x1087, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x2d23, .a=0x66, .x=0x47, .y=0x44, .sp=0x3e, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x28}, {.addr=0x2d23, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2d24, .a=0x8f, .x=0x47, .y=0x44, .sp=0x3e, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x28}, {.addr=0x2d23, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2d23, .value=0x86, .type=IO_READ},
        {.addr=0x2d24, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xa813, .a=0x11, .x=0xc8, .y=0x47, .sp=0x9d, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0xe5}, {.addr=0xa813, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa814, .a=0xf6, .x=0xc8, .y=0x47, .sp=0x9d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xe5}, {.addr=0xa813, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa813, .value=0x86, .type=IO_READ},
        {.addr=0xa814, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x2dc4, .a=0x08, .x=0xea, .y=0x0e, .sp=0x3c, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0xa1}, {.addr=0x2dc4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2dc5, .a=0xaa, .x=0xea, .y=0x0e, .sp=0x3c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xa1}, {.addr=0x2dc4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2dc4, .value=0x86, .type=IO_READ},
        {.addr=0x2dc5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xd159, .a=0x72, .x=0x93, .y=0xda, .sp=0x01, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0xf6}, {.addr=0xd159, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd15a, .a=0x68, .x=0x93, .y=0xda, .sp=0x01, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0xf6}, {.addr=0xd159, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd159, .value=0x86, .type=IO_READ},
        {.addr=0xd15a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xf0ec, .a=0x7d, .x=0x82, .y=0x65, .sp=0x07, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0x12}, {.addr=0xf0ec, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xf0ed, .a=0x8f, .x=0x82, .y=0x65, .sp=0x07, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0x12}, {.addr=0xf0ec, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xf0ec, .value=0x86, .type=IO_READ},
        {.addr=0xf0ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x4098, .a=0x48, .x=0x18, .y=0x52, .sp=0xae, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0x0c}, {.addr=0x4098, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x4099, .a=0x54, .x=0x18, .y=0x52, .sp=0xae, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0x0c}, {.addr=0x4098, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x4098, .value=0x86, .type=IO_READ},
        {.addr=0x4099, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xe99c, .a=0x0a, .x=0xd4, .y=0xdb, .sp=0x2c, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0x99}, {.addr=0xe99c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe99d, .a=0xa3, .x=0xd4, .y=0xdb, .sp=0x2c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x99}, {.addr=0xe99c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe99c, .value=0x86, .type=IO_READ},
        {.addr=0xe99d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x1910, .a=0xa0, .x=0x9d, .y=0xb0, .sp=0xb4, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x41}, {.addr=0x1910, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1911, .a=0xe2, .x=0x9d, .y=0xb0, .sp=0xb4, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x41}, {.addr=0x1910, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1910, .value=0x86, .type=IO_READ},
        {.addr=0x1911, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x2ab4, .a=0x4e, .x=0xa9, .y=0x9c, .sp=0xe7, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0xea}, {.addr=0x2ab4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2ab5, .a=0x39, .x=0xa9, .y=0x9c, .sp=0xe7, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xea}, {.addr=0x2ab4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2ab4, .value=0x86, .type=IO_READ},
        {.addr=0x2ab5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x1b22, .a=0x18, .x=0xde, .y=0xc2, .sp=0xf6, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x00de, .value=0x85}, {.addr=0x1b22, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x1b23, .a=0x9d, .x=0xde, .y=0xc2, .sp=0xf6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00de, .value=0x85}, {.addr=0x1b22, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x1b22, .value=0x86, .type=IO_READ},
        {.addr=0x1b23, .value=DUMMY, .type=IO_READ},
        {.addr=0x00de, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xb09a, .a=0x88, .x=0xc3, .y=0xd2, .sp=0x32, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xbc}, {.addr=0xb09a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xb09b, .a=0x45, .x=0xc3, .y=0xd2, .sp=0x32, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xbc}, {.addr=0xb09a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xb09a, .value=0x86, .type=IO_READ},
        {.addr=0xb09b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xac5e, .a=0xe1, .x=0xe0, .y=0x51, .sp=0x56, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x00e0, .value=0xfc}, {.addr=0xac5e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xac5f, .a=0xde, .x=0xe0, .y=0x51, .sp=0x56, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00e0, .value=0xfc}, {.addr=0xac5e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xac5e, .value=0x86, .type=IO_READ},
        {.addr=0xac5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e0, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x28de, .a=0x34, .x=0x03, .y=0x16, .sp=0x74, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0003, .value=0x02}, {.addr=0x28de, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x28df, .a=0x36, .x=0x03, .y=0x16, .sp=0x74, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0003, .value=0x02}, {.addr=0x28de, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x28de, .value=0x86, .type=IO_READ},
        {.addr=0x28df, .value=DUMMY, .type=IO_READ},
        {.addr=0x0003, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x29ae, .a=0xe6, .x=0xe2, .y=0x45, .sp=0xc6, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0x44}, {.addr=0x29ae, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x29af, .a=0x2b, .x=0xe2, .y=0x45, .sp=0xc6, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0x44}, {.addr=0x29ae, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x29ae, .value=0x86, .type=IO_READ},
        {.addr=0x29af, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x7ad9, .a=0x10, .x=0x73, .y=0xa6, .sp=0x3e, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0xd1}, {.addr=0x7ad9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7ada, .a=0xe1, .x=0x73, .y=0xa6, .sp=0x3e, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0xd1}, {.addr=0x7ad9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7ad9, .value=0x86, .type=IO_READ},
        {.addr=0x7ada, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x04c2, .a=0x1a, .x=0xb2, .y=0xe3, .sp=0x14, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0xf7}, {.addr=0x04c2, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x04c3, .a=0x11, .x=0xb2, .y=0xe3, .sp=0x14, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xf7}, {.addr=0x04c2, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x04c2, .value=0x86, .type=IO_READ},
        {.addr=0x04c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xbd1b, .a=0x59, .x=0x72, .y=0xfb, .sp=0xd5, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0xd1}, {.addr=0xbd1b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xbd1c, .a=0x2b, .x=0x72, .y=0xfb, .sp=0xd5, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0xd1}, {.addr=0xbd1b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xbd1b, .value=0x86, .type=IO_READ},
        {.addr=0xbd1c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0072, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x031e, .a=0x49, .x=0x4b, .y=0x53, .sp=0x2a, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x9e}, {.addr=0x031e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x031f, .a=0xe8, .x=0x4b, .y=0x53, .sp=0x2a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x9e}, {.addr=0x031e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x031e, .value=0x86, .type=IO_READ},
        {.addr=0x031f, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x7285, .a=0xdf, .x=0x50, .y=0x4b, .sp=0x1d, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x36}, {.addr=0x7285, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7286, .a=0x16, .x=0x50, .y=0x4b, .sp=0x1d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x36}, {.addr=0x7285, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7285, .value=0x86, .type=IO_READ},
        {.addr=0x7286, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x7e22, .a=0xee, .x=0x78, .y=0xdf, .sp=0x79, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x24}, {.addr=0x7e22, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7e23, .a=0x12, .x=0x78, .y=0xdf, .sp=0x79, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x24}, {.addr=0x7e22, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7e22, .value=0x86, .type=IO_READ},
        {.addr=0x7e23, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xd796, .a=0xe5, .x=0xae, .y=0x4f, .sp=0x4f, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0xa0}, {.addr=0xd796, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd797, .a=0x85, .x=0xae, .y=0x4f, .sp=0x4f, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xa0}, {.addr=0xd796, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd796, .value=0x86, .type=IO_READ},
        {.addr=0xd797, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x2e6f, .a=0xf6, .x=0x75, .y=0xce, .sp=0xf9, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0xf1}, {.addr=0x2e6f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2e70, .a=0xe7, .x=0x75, .y=0xce, .sp=0xf9, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0xf1}, {.addr=0x2e6f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2e6f, .value=0x86, .type=IO_READ},
        {.addr=0x2e70, .value=DUMMY, .type=IO_READ},
        {.addr=0x0075, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x74c9, .a=0x6a, .x=0xb1, .y=0x69, .sp=0x9a, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0x65}, {.addr=0x74c9, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x74ca, .a=0xcf, .x=0xb1, .y=0x69, .sp=0x9a, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0x65}, {.addr=0x74c9, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x74c9, .value=0x86, .type=IO_READ},
        {.addr=0x74ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xa64d, .a=0x3f, .x=0xd0, .y=0xde, .sp=0xcc, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0x51}, {.addr=0xa64d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa64e, .a=0x91, .x=0xd0, .y=0xde, .sp=0xcc, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0x51}, {.addr=0xa64d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa64d, .value=0x86, .type=IO_READ},
        {.addr=0xa64e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x6a13, .a=0x3c, .x=0x59, .y=0x45, .sp=0x42, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0x11}, {.addr=0x6a13, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6a14, .a=0x4e, .x=0x59, .y=0x45, .sp=0x42, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0x11}, {.addr=0x6a13, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6a13, .value=0x86, .type=IO_READ},
        {.addr=0x6a14, .value=DUMMY, .type=IO_READ},
        {.addr=0x0059, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x9336, .a=0xaf, .x=0x5c, .y=0x7e, .sp=0x9c, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x5c}, {.addr=0x9336, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9337, .a=0x0c, .x=0x5c, .y=0x7e, .sp=0x9c, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x5c}, {.addr=0x9336, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9336, .value=0x86, .type=IO_READ},
        {.addr=0x9337, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x9046, .a=0xd3, .x=0xda, .y=0xa8, .sp=0xb8, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x5d}, {.addr=0x9046, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9047, .a=0x30, .x=0xda, .y=0xa8, .sp=0xb8, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x5d}, {.addr=0x9046, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9046, .value=0x86, .type=IO_READ},
        {.addr=0x9047, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xc3f1, .a=0xb2, .x=0xdb, .y=0x5c, .sp=0xc8, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x8a}, {.addr=0xc3f1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc3f2, .a=0x3c, .x=0xdb, .y=0x5c, .sp=0xc8, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x8a}, {.addr=0xc3f1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc3f1, .value=0x86, .type=IO_READ},
        {.addr=0xc3f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x0f1a, .a=0xb6, .x=0x49, .y=0xd1, .sp=0xca, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x93}, {.addr=0x0f1a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0f1b, .a=0x4a, .x=0x49, .y=0xd1, .sp=0xca, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x93}, {.addr=0x0f1a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0f1a, .value=0x86, .type=IO_READ},
        {.addr=0x0f1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xa88f, .a=0x79, .x=0x18, .y=0x38, .sp=0x52, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0xdc}, {.addr=0xa88f, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa890, .a=0x56, .x=0x18, .y=0x38, .sp=0x52, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xdc}, {.addr=0xa88f, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa88f, .value=0x86, .type=IO_READ},
        {.addr=0xa890, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xe196, .a=0x33, .x=0x19, .y=0x97, .sp=0x66, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0019, .value=0x56}, {.addr=0xe196, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe197, .a=0x8a, .x=0x19, .y=0x97, .sp=0x66, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0019, .value=0x56}, {.addr=0xe196, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe196, .value=0x86, .type=IO_READ},
        {.addr=0xe197, .value=DUMMY, .type=IO_READ},
        {.addr=0x0019, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xbb24, .a=0x88, .x=0xcc, .y=0x01, .sp=0x9e, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x00cc, .value=0x51}, {.addr=0xbb24, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xbb25, .a=0xd9, .x=0xcc, .y=0x01, .sp=0x9e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00cc, .value=0x51}, {.addr=0xbb24, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xbb24, .value=0x86, .type=IO_READ},
        {.addr=0xbb25, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cc, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x26cb, .a=0x1c, .x=0xbf, .y=0x23, .sp=0x7c, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0x4b}, {.addr=0x26cb, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x26cc, .a=0x67, .x=0xbf, .y=0x23, .sp=0x7c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0x4b}, {.addr=0x26cb, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x26cb, .value=0x86, .type=IO_READ},
        {.addr=0x26cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xe4b1, .a=0x1d, .x=0x46, .y=0x49, .sp=0xb3, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0xdd}, {.addr=0xe4b1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe4b2, .a=0xfa, .x=0x46, .y=0x49, .sp=0xb3, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0xdd}, {.addr=0xe4b1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe4b1, .value=0x86, .type=IO_READ},
        {.addr=0xe4b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0046, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xd0e3, .a=0x47, .x=0x07, .y=0xec, .sp=0x6b, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x72}, {.addr=0xd0e3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd0e4, .a=0xba, .x=0x07, .y=0xec, .sp=0x6b, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x72}, {.addr=0xd0e3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd0e3, .value=0x86, .type=IO_READ},
        {.addr=0xd0e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x17ce, .a=0x28, .x=0xc6, .y=0x4c, .sp=0x23, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x0a}, {.addr=0x17ce, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x17cf, .a=0x33, .x=0xc6, .y=0x4c, .sp=0x23, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x0a}, {.addr=0x17ce, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x17ce, .value=0x86, .type=IO_READ},
        {.addr=0x17cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x6774, .a=0x4b, .x=0x62, .y=0x9c, .sp=0x9b, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0xe2}, {.addr=0x6774, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x6775, .a=0x2d, .x=0x62, .y=0x9c, .sp=0x9b, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xe2}, {.addr=0x6774, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x6774, .value=0x86, .type=IO_READ},
        {.addr=0x6775, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x9714, .a=0xe1, .x=0x33, .y=0x6a, .sp=0xa2, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x12}, {.addr=0x9714, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9715, .a=0xf4, .x=0x33, .y=0x6a, .sp=0xa2, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x12}, {.addr=0x9714, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9714, .value=0x86, .type=IO_READ},
        {.addr=0x9715, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xd100, .a=0x8c, .x=0xdb, .y=0xd8, .sp=0x7e, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x67}, {.addr=0xd100, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd101, .a=0xf3, .x=0xdb, .y=0xd8, .sp=0x7e, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x67}, {.addr=0xd100, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd100, .value=0x86, .type=IO_READ},
        {.addr=0xd101, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x0df1, .a=0x81, .x=0x80, .y=0xe9, .sp=0x6b, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xf4}, {.addr=0x0df1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x0df2, .a=0x75, .x=0x80, .y=0xe9, .sp=0x6b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xf4}, {.addr=0x0df1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x0df1, .value=0x86, .type=IO_READ},
        {.addr=0x0df2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x5ee1, .a=0x67, .x=0x00, .y=0x60, .sp=0xf5, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x2f}, {.addr=0x5ee1, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5ee2, .a=0x97, .x=0x00, .y=0x60, .sp=0xf5, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x2f}, {.addr=0x5ee1, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5ee1, .value=0x86, .type=IO_READ},
        {.addr=0x5ee2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x9e2b, .a=0xa4, .x=0xcd, .y=0xe3, .sp=0x89, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x0f}, {.addr=0x9e2b, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9e2c, .a=0xb3, .x=0xcd, .y=0xe3, .sp=0x89, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0x0f}, {.addr=0x9e2b, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9e2b, .value=0x86, .type=IO_READ},
        {.addr=0x9e2c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cd, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xe6b5, .a=0xb3, .x=0xc3, .y=0xee, .sp=0xfa, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x12}, {.addr=0xe6b5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe6b6, .a=0xc6, .x=0xc3, .y=0xee, .sp=0xfa, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x12}, {.addr=0xe6b5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe6b5, .value=0x86, .type=IO_READ},
        {.addr=0xe6b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x5fa4, .a=0xc3, .x=0xba, .y=0x11, .sp=0xff, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0xb6}, {.addr=0x5fa4, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x5fa5, .a=0x79, .x=0xba, .y=0x11, .sp=0xff, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xb6}, {.addr=0x5fa4, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5fa4, .value=0x86, .type=IO_READ},
        {.addr=0x5fa5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xda3e, .a=0x18, .x=0x7b, .y=0xa5, .sp=0xdd, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0xb5}, {.addr=0xda3e, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xda3f, .a=0xcd, .x=0x7b, .y=0xa5, .sp=0xdd, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0xb5}, {.addr=0xda3e, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xda3e, .value=0x86, .type=IO_READ},
        {.addr=0xda3f, .value=DUMMY, .type=IO_READ},
        {.addr=0x007b, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x8eb5, .a=0x47, .x=0xba, .y=0x39, .sp=0x33, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x93}, {.addr=0x8eb5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x8eb6, .a=0xda, .x=0xba, .y=0x39, .sp=0x33, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x93}, {.addr=0x8eb5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8eb5, .value=0x86, .type=IO_READ},
        {.addr=0x8eb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x996a, .a=0x75, .x=0xda, .y=0x1f, .sp=0x79, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xaa}, {.addr=0x996a, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x996b, .a=0x20, .x=0xda, .y=0x1f, .sp=0x79, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xaa}, {.addr=0x996a, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x996a, .value=0x86, .type=IO_READ},
        {.addr=0x996b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_86, _86_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x3780, .a=0x39, .x=0xec, .y=0x6f, .sp=0x1b, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0x16}, {.addr=0x3780, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x3781, .a=0x50, .x=0xec, .y=0x6f, .sp=0x1b, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0x16}, {.addr=0x3780, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x3780, .value=0x86, .type=IO_READ},
        {.addr=0x3781, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("86 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
