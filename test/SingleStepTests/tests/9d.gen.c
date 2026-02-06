#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_9D, _9D_0000) {
    const struct CPU_State initial_cpu = {.pc=0xdd81, .a=0x1f, .x=0x62, .y=0xc0, .sp=0xfa, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xdd81, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xdd82, .a=0x1f, .x=0xfa, .y=0xc0, .sp=0xfa, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xdd81, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xdd81, .value=0x9d, .type=IO_READ},
        {.addr=0xdd82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0001) {
    const struct CPU_State initial_cpu = {.pc=0x258b, .a=0x58, .x=0x0e, .y=0x38, .sp=0x23, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x258b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x258c, .a=0x58, .x=0x23, .y=0x38, .sp=0x23, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x258b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x258b, .value=0x9d, .type=IO_READ},
        {.addr=0x258c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0002) {
    const struct CPU_State initial_cpu = {.pc=0xd000, .a=0x68, .x=0xa7, .y=0xeb, .sp=0x7d, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xd000, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd001, .a=0x68, .x=0x7d, .y=0xeb, .sp=0x7d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xd000, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd000, .value=0x9d, .type=IO_READ},
        {.addr=0xd001, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0003) {
    const struct CPU_State initial_cpu = {.pc=0x2349, .a=0x41, .x=0x99, .y=0xa5, .sp=0x99, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x2349, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x234a, .a=0x41, .x=0x99, .y=0xa5, .sp=0x99, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x2349, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2349, .value=0x9d, .type=IO_READ},
        {.addr=0x234a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0004) {
    const struct CPU_State initial_cpu = {.pc=0xa7f3, .a=0xba, .x=0x89, .y=0xe1, .sp=0xe4, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xa7f3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa7f4, .a=0xba, .x=0xe4, .y=0xe1, .sp=0xe4, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xa7f3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa7f3, .value=0x9d, .type=IO_READ},
        {.addr=0xa7f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0005) {
    const struct CPU_State initial_cpu = {.pc=0x4cd8, .a=0xbd, .x=0x80, .y=0x02, .sp=0xc8, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x4cd8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4cd9, .a=0xbd, .x=0xc8, .y=0x02, .sp=0xc8, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x4cd8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4cd8, .value=0x9d, .type=IO_READ},
        {.addr=0x4cd9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0006) {
    const struct CPU_State initial_cpu = {.pc=0x242d, .a=0x65, .x=0xdc, .y=0x8c, .sp=0xbe, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x242d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x242e, .a=0x65, .x=0xbe, .y=0x8c, .sp=0xbe, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x242d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x242d, .value=0x9d, .type=IO_READ},
        {.addr=0x242e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0007) {
    const struct CPU_State initial_cpu = {.pc=0xfc17, .a=0x95, .x=0x6a, .y=0x22, .sp=0xca, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xfc17, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xfc18, .a=0x95, .x=0xca, .y=0x22, .sp=0xca, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xfc17, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfc17, .value=0x9d, .type=IO_READ},
        {.addr=0xfc18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0008) {
    const struct CPU_State initial_cpu = {.pc=0x19a9, .a=0xf1, .x=0x38, .y=0x9d, .sp=0x8b, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x19a9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x19aa, .a=0xf1, .x=0x8b, .y=0x9d, .sp=0x8b, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x19a9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x19a9, .value=0x9d, .type=IO_READ},
        {.addr=0x19aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0009) {
    const struct CPU_State initial_cpu = {.pc=0x5892, .a=0x65, .x=0x00, .y=0x3f, .sp=0xb3, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x5892, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5893, .a=0x65, .x=0xb3, .y=0x3f, .sp=0xb3, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x5892, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5892, .value=0x9d, .type=IO_READ},
        {.addr=0x5893, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_000A) {
    const struct CPU_State initial_cpu = {.pc=0x1b53, .a=0xaa, .x=0x13, .y=0xef, .sp=0x6d, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x1b53, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1b54, .a=0xaa, .x=0x6d, .y=0xef, .sp=0x6d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x1b53, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1b53, .value=0x9d, .type=IO_READ},
        {.addr=0x1b54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_000B) {
    const struct CPU_State initial_cpu = {.pc=0x408d, .a=0x94, .x=0x4d, .y=0xf0, .sp=0x4d, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x408d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x408e, .a=0x94, .x=0x4d, .y=0xf0, .sp=0x4d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x408d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x408d, .value=0x9d, .type=IO_READ},
        {.addr=0x408e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_000C) {
    const struct CPU_State initial_cpu = {.pc=0x2e37, .a=0xca, .x=0x24, .y=0x4d, .sp=0x92, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x2e37, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2e38, .a=0xca, .x=0x92, .y=0x4d, .sp=0x92, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x2e37, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2e37, .value=0x9d, .type=IO_READ},
        {.addr=0x2e38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_000D) {
    const struct CPU_State initial_cpu = {.pc=0x220d, .a=0x6a, .x=0x85, .y=0xf0, .sp=0x8d, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x220d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x220e, .a=0x6a, .x=0x8d, .y=0xf0, .sp=0x8d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x220d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x220d, .value=0x9d, .type=IO_READ},
        {.addr=0x220e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_000E) {
    const struct CPU_State initial_cpu = {.pc=0xc22d, .a=0xc2, .x=0x5d, .y=0x74, .sp=0x51, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xc22d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc22e, .a=0xc2, .x=0x51, .y=0x74, .sp=0x51, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xc22d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc22d, .value=0x9d, .type=IO_READ},
        {.addr=0xc22e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_000F) {
    const struct CPU_State initial_cpu = {.pc=0x3ab5, .a=0x3c, .x=0x25, .y=0xf4, .sp=0x4c, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x3ab5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3ab6, .a=0x3c, .x=0x4c, .y=0xf4, .sp=0x4c, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x3ab5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3ab5, .value=0x9d, .type=IO_READ},
        {.addr=0x3ab6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0010) {
    const struct CPU_State initial_cpu = {.pc=0x5ddd, .a=0x18, .x=0x1f, .y=0xe2, .sp=0x7d, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x5ddd, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5dde, .a=0x18, .x=0x7d, .y=0xe2, .sp=0x7d, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x5ddd, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5ddd, .value=0x9d, .type=IO_READ},
        {.addr=0x5dde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0011) {
    const struct CPU_State initial_cpu = {.pc=0xacff, .a=0x1c, .x=0xed, .y=0x75, .sp=0xb1, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xacff, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xad00, .a=0x1c, .x=0xb1, .y=0x75, .sp=0xb1, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xacff, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xacff, .value=0x9d, .type=IO_READ},
        {.addr=0xad00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0012) {
    const struct CPU_State initial_cpu = {.pc=0xc7ad, .a=0xd1, .x=0x0e, .y=0x72, .sp=0x56, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xc7ad, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc7ae, .a=0xd1, .x=0x56, .y=0x72, .sp=0x56, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xc7ad, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc7ad, .value=0x9d, .type=IO_READ},
        {.addr=0xc7ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0013) {
    const struct CPU_State initial_cpu = {.pc=0xb030, .a=0x14, .x=0x78, .y=0x42, .sp=0xe3, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xb030, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb031, .a=0x14, .x=0xe3, .y=0x42, .sp=0xe3, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xb030, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb030, .value=0x9d, .type=IO_READ},
        {.addr=0xb031, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0014) {
    const struct CPU_State initial_cpu = {.pc=0x1984, .a=0x34, .x=0x7e, .y=0x3c, .sp=0xe4, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x1984, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1985, .a=0x34, .x=0xe4, .y=0x3c, .sp=0xe4, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x1984, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1984, .value=0x9d, .type=IO_READ},
        {.addr=0x1985, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0015) {
    const struct CPU_State initial_cpu = {.pc=0xa195, .a=0xba, .x=0xdd, .y=0xc9, .sp=0xaa, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xa195, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa196, .a=0xba, .x=0xaa, .y=0xc9, .sp=0xaa, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xa195, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa195, .value=0x9d, .type=IO_READ},
        {.addr=0xa196, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0016) {
    const struct CPU_State initial_cpu = {.pc=0xee41, .a=0x4f, .x=0x64, .y=0xaf, .sp=0x0c, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xee41, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xee42, .a=0x4f, .x=0x0c, .y=0xaf, .sp=0x0c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xee41, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xee41, .value=0x9d, .type=IO_READ},
        {.addr=0xee42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0017) {
    const struct CPU_State initial_cpu = {.pc=0x6130, .a=0xdb, .x=0xcc, .y=0x9e, .sp=0xd8, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x6130, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6131, .a=0xdb, .x=0xd8, .y=0x9e, .sp=0xd8, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x6130, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6130, .value=0x9d, .type=IO_READ},
        {.addr=0x6131, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0018) {
    const struct CPU_State initial_cpu = {.pc=0x31a8, .a=0xa7, .x=0xce, .y=0xdc, .sp=0x7b, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x31a8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x31a9, .a=0xa7, .x=0x7b, .y=0xdc, .sp=0x7b, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x31a8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x31a8, .value=0x9d, .type=IO_READ},
        {.addr=0x31a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0019) {
    const struct CPU_State initial_cpu = {.pc=0x0b40, .a=0x7d, .x=0x27, .y=0x8b, .sp=0xe9, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0b40, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0b41, .a=0x7d, .x=0xe9, .y=0x8b, .sp=0xe9, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0b40, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0b40, .value=0x9d, .type=IO_READ},
        {.addr=0x0b41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_001A) {
    const struct CPU_State initial_cpu = {.pc=0x2d55, .a=0xa6, .x=0x5a, .y=0xa7, .sp=0x54, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x2d55, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2d56, .a=0xa6, .x=0x54, .y=0xa7, .sp=0x54, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x2d55, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2d55, .value=0x9d, .type=IO_READ},
        {.addr=0x2d56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_001B) {
    const struct CPU_State initial_cpu = {.pc=0x28bc, .a=0x75, .x=0x80, .y=0x82, .sp=0x96, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x28bc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x28bd, .a=0x75, .x=0x96, .y=0x82, .sp=0x96, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x28bc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x28bc, .value=0x9d, .type=IO_READ},
        {.addr=0x28bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_001C) {
    const struct CPU_State initial_cpu = {.pc=0x236c, .a=0x13, .x=0x6d, .y=0x37, .sp=0x77, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x236c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x236d, .a=0x13, .x=0x77, .y=0x37, .sp=0x77, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x236c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x236c, .value=0x9d, .type=IO_READ},
        {.addr=0x236d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_001D) {
    const struct CPU_State initial_cpu = {.pc=0x187d, .a=0x4e, .x=0xfe, .y=0x95, .sp=0x44, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x187d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x187e, .a=0x4e, .x=0x44, .y=0x95, .sp=0x44, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x187d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x187d, .value=0x9d, .type=IO_READ},
        {.addr=0x187e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_001E) {
    const struct CPU_State initial_cpu = {.pc=0x78b7, .a=0xb4, .x=0x55, .y=0x6f, .sp=0xe8, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x78b7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x78b8, .a=0xb4, .x=0xe8, .y=0x6f, .sp=0xe8, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x78b7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x78b7, .value=0x9d, .type=IO_READ},
        {.addr=0x78b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_001F) {
    const struct CPU_State initial_cpu = {.pc=0xa1a3, .a=0xe1, .x=0xf3, .y=0xae, .sp=0xfe, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xa1a3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa1a4, .a=0xe1, .x=0xfe, .y=0xae, .sp=0xfe, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xa1a3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa1a3, .value=0x9d, .type=IO_READ},
        {.addr=0xa1a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0020) {
    const struct CPU_State initial_cpu = {.pc=0x119e, .a=0xad, .x=0xf3, .y=0x03, .sp=0x54, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x119e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x119f, .a=0xad, .x=0x54, .y=0x03, .sp=0x54, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x119e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x119e, .value=0x9d, .type=IO_READ},
        {.addr=0x119f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0021) {
    const struct CPU_State initial_cpu = {.pc=0x3a6b, .a=0x43, .x=0x0e, .y=0x4a, .sp=0x17, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x3a6b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3a6c, .a=0x43, .x=0x17, .y=0x4a, .sp=0x17, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x3a6b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3a6b, .value=0x9d, .type=IO_READ},
        {.addr=0x3a6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0022) {
    const struct CPU_State initial_cpu = {.pc=0x5ae8, .a=0xec, .x=0x20, .y=0x28, .sp=0x55, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x5ae8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5ae9, .a=0xec, .x=0x55, .y=0x28, .sp=0x55, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x5ae8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5ae8, .value=0x9d, .type=IO_READ},
        {.addr=0x5ae9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0023) {
    const struct CPU_State initial_cpu = {.pc=0x43a0, .a=0xc5, .x=0x18, .y=0x6d, .sp=0x89, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x43a0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x43a1, .a=0xc5, .x=0x89, .y=0x6d, .sp=0x89, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x43a0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x43a0, .value=0x9d, .type=IO_READ},
        {.addr=0x43a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0024) {
    const struct CPU_State initial_cpu = {.pc=0xb911, .a=0x79, .x=0x6b, .y=0xcb, .sp=0x2d, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xb911, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb912, .a=0x79, .x=0x2d, .y=0xcb, .sp=0x2d, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb911, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb911, .value=0x9d, .type=IO_READ},
        {.addr=0xb912, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0025) {
    const struct CPU_State initial_cpu = {.pc=0x8c2b, .a=0xa0, .x=0x15, .y=0xcb, .sp=0x17, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x8c2b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8c2c, .a=0xa0, .x=0x17, .y=0xcb, .sp=0x17, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x8c2b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8c2b, .value=0x9d, .type=IO_READ},
        {.addr=0x8c2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0026) {
    const struct CPU_State initial_cpu = {.pc=0x1969, .a=0x93, .x=0x1d, .y=0xb3, .sp=0x01, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x1969, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x196a, .a=0x93, .x=0x01, .y=0xb3, .sp=0x01, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x1969, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1969, .value=0x9d, .type=IO_READ},
        {.addr=0x196a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0027) {
    const struct CPU_State initial_cpu = {.pc=0x7f91, .a=0x96, .x=0xab, .y=0xb1, .sp=0x09, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x7f91, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7f92, .a=0x96, .x=0x09, .y=0xb1, .sp=0x09, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7f91, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7f91, .value=0x9d, .type=IO_READ},
        {.addr=0x7f92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0028) {
    const struct CPU_State initial_cpu = {.pc=0xcb78, .a=0x71, .x=0x88, .y=0x6d, .sp=0xe5, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xcb78, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcb79, .a=0x71, .x=0xe5, .y=0x6d, .sp=0xe5, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xcb78, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcb78, .value=0x9d, .type=IO_READ},
        {.addr=0xcb79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0029) {
    const struct CPU_State initial_cpu = {.pc=0xa040, .a=0x3c, .x=0xe2, .y=0x1a, .sp=0xa4, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xa040, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa041, .a=0x3c, .x=0xa4, .y=0x1a, .sp=0xa4, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xa040, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa040, .value=0x9d, .type=IO_READ},
        {.addr=0xa041, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_002A) {
    const struct CPU_State initial_cpu = {.pc=0x85d0, .a=0x04, .x=0x89, .y=0xb7, .sp=0x4d, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x85d0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x85d1, .a=0x04, .x=0x4d, .y=0xb7, .sp=0x4d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x85d0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x85d0, .value=0x9d, .type=IO_READ},
        {.addr=0x85d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_002B) {
    const struct CPU_State initial_cpu = {.pc=0x9705, .a=0x0a, .x=0x06, .y=0x19, .sp=0x89, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x9705, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9706, .a=0x0a, .x=0x89, .y=0x19, .sp=0x89, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9705, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9705, .value=0x9d, .type=IO_READ},
        {.addr=0x9706, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_002C) {
    const struct CPU_State initial_cpu = {.pc=0x3185, .a=0xd3, .x=0x88, .y=0x98, .sp=0xbb, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x3185, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3186, .a=0xd3, .x=0xbb, .y=0x98, .sp=0xbb, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x3185, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3185, .value=0x9d, .type=IO_READ},
        {.addr=0x3186, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_002D) {
    const struct CPU_State initial_cpu = {.pc=0xecf0, .a=0x11, .x=0x35, .y=0xb3, .sp=0x15, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xecf0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xecf1, .a=0x11, .x=0x15, .y=0xb3, .sp=0x15, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xecf0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xecf0, .value=0x9d, .type=IO_READ},
        {.addr=0xecf1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_002E) {
    const struct CPU_State initial_cpu = {.pc=0x6a01, .a=0x19, .x=0x8d, .y=0x40, .sp=0x36, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x6a01, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6a02, .a=0x19, .x=0x36, .y=0x40, .sp=0x36, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x6a01, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6a01, .value=0x9d, .type=IO_READ},
        {.addr=0x6a02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_002F) {
    const struct CPU_State initial_cpu = {.pc=0x2768, .a=0x7a, .x=0x2d, .y=0x4e, .sp=0xac, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x2768, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2769, .a=0x7a, .x=0xac, .y=0x4e, .sp=0xac, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x2768, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2768, .value=0x9d, .type=IO_READ},
        {.addr=0x2769, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0030) {
    const struct CPU_State initial_cpu = {.pc=0x0150, .a=0x9e, .x=0x1a, .y=0xe7, .sp=0x92, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0151, .a=0x9e, .x=0x92, .y=0xe7, .sp=0x92, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0150, .value=0x9d, .type=IO_READ},
        {.addr=0x0151, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0031) {
    const struct CPU_State initial_cpu = {.pc=0x46fa, .a=0x62, .x=0xd3, .y=0xbd, .sp=0xc1, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x46fa, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x46fb, .a=0x62, .x=0xc1, .y=0xbd, .sp=0xc1, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x46fa, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x46fa, .value=0x9d, .type=IO_READ},
        {.addr=0x46fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0032) {
    const struct CPU_State initial_cpu = {.pc=0xa9b6, .a=0x1b, .x=0xb0, .y=0x32, .sp=0xd2, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xa9b6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa9b7, .a=0x1b, .x=0xd2, .y=0x32, .sp=0xd2, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xa9b6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa9b6, .value=0x9d, .type=IO_READ},
        {.addr=0xa9b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0033) {
    const struct CPU_State initial_cpu = {.pc=0x9830, .a=0x3d, .x=0xe5, .y=0x21, .sp=0xc4, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x9830, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9831, .a=0x3d, .x=0xc4, .y=0x21, .sp=0xc4, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x9830, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9830, .value=0x9d, .type=IO_READ},
        {.addr=0x9831, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0034) {
    const struct CPU_State initial_cpu = {.pc=0x0a14, .a=0x29, .x=0x55, .y=0x3a, .sp=0xce, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0a14, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0a15, .a=0x29, .x=0xce, .y=0x3a, .sp=0xce, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0a14, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0a14, .value=0x9d, .type=IO_READ},
        {.addr=0x0a15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0035) {
    const struct CPU_State initial_cpu = {.pc=0xc82e, .a=0x5e, .x=0xee, .y=0x1b, .sp=0x5f, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xc82e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc82f, .a=0x5e, .x=0x5f, .y=0x1b, .sp=0x5f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xc82e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc82e, .value=0x9d, .type=IO_READ},
        {.addr=0xc82f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0036) {
    const struct CPU_State initial_cpu = {.pc=0xa87d, .a=0xbb, .x=0x37, .y=0x56, .sp=0xc8, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xa87d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa87e, .a=0xbb, .x=0xc8, .y=0x56, .sp=0xc8, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xa87d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa87d, .value=0x9d, .type=IO_READ},
        {.addr=0xa87e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0037) {
    const struct CPU_State initial_cpu = {.pc=0xd3b1, .a=0xb7, .x=0x7a, .y=0x31, .sp=0xba, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xd3b1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd3b2, .a=0xb7, .x=0xba, .y=0x31, .sp=0xba, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xd3b1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd3b1, .value=0x9d, .type=IO_READ},
        {.addr=0xd3b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0038) {
    const struct CPU_State initial_cpu = {.pc=0x9e6f, .a=0xb2, .x=0x88, .y=0xaf, .sp=0x16, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x9e6f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9e70, .a=0xb2, .x=0x16, .y=0xaf, .sp=0x16, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x9e6f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9e6f, .value=0x9d, .type=IO_READ},
        {.addr=0x9e70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0039) {
    const struct CPU_State initial_cpu = {.pc=0xb2b8, .a=0x26, .x=0xf5, .y=0x63, .sp=0x63, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xb2b8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb2b9, .a=0x26, .x=0x63, .y=0x63, .sp=0x63, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xb2b8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb2b8, .value=0x9d, .type=IO_READ},
        {.addr=0xb2b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_003A) {
    const struct CPU_State initial_cpu = {.pc=0xf0a6, .a=0xde, .x=0x2c, .y=0xf7, .sp=0x90, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xf0a6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf0a7, .a=0xde, .x=0x90, .y=0xf7, .sp=0x90, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xf0a6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf0a6, .value=0x9d, .type=IO_READ},
        {.addr=0xf0a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_003B) {
    const struct CPU_State initial_cpu = {.pc=0x4fe0, .a=0x82, .x=0x84, .y=0x8c, .sp=0xf5, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x4fe0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4fe1, .a=0x82, .x=0xf5, .y=0x8c, .sp=0xf5, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x4fe0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4fe0, .value=0x9d, .type=IO_READ},
        {.addr=0x4fe1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_003C) {
    const struct CPU_State initial_cpu = {.pc=0x44f5, .a=0x7a, .x=0x82, .y=0x89, .sp=0x15, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x44f5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x44f6, .a=0x7a, .x=0x15, .y=0x89, .sp=0x15, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x44f5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x44f5, .value=0x9d, .type=IO_READ},
        {.addr=0x44f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_003D) {
    const struct CPU_State initial_cpu = {.pc=0x0ea6, .a=0x4c, .x=0xf6, .y=0x47, .sp=0xd4, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0ea6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0ea7, .a=0x4c, .x=0xd4, .y=0x47, .sp=0xd4, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0ea6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0ea6, .value=0x9d, .type=IO_READ},
        {.addr=0x0ea7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_003E) {
    const struct CPU_State initial_cpu = {.pc=0x9e6b, .a=0x54, .x=0xca, .y=0x5c, .sp=0xb4, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x9e6b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9e6c, .a=0x54, .x=0xb4, .y=0x5c, .sp=0xb4, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x9e6b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9e6b, .value=0x9d, .type=IO_READ},
        {.addr=0x9e6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_003F) {
    const struct CPU_State initial_cpu = {.pc=0x446c, .a=0xef, .x=0x01, .y=0xb4, .sp=0x8e, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x446c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x446d, .a=0xef, .x=0x8e, .y=0xb4, .sp=0x8e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x446c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x446c, .value=0x9d, .type=IO_READ},
        {.addr=0x446d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0040) {
    const struct CPU_State initial_cpu = {.pc=0x8e6c, .a=0x15, .x=0x20, .y=0x7b, .sp=0x38, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x8e6c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8e6d, .a=0x15, .x=0x38, .y=0x7b, .sp=0x38, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x8e6c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8e6c, .value=0x9d, .type=IO_READ},
        {.addr=0x8e6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0041) {
    const struct CPU_State initial_cpu = {.pc=0x4803, .a=0xcb, .x=0x8c, .y=0x58, .sp=0xef, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x4803, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4804, .a=0xcb, .x=0xef, .y=0x58, .sp=0xef, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x4803, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4803, .value=0x9d, .type=IO_READ},
        {.addr=0x4804, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0042) {
    const struct CPU_State initial_cpu = {.pc=0x8713, .a=0x99, .x=0x34, .y=0xdf, .sp=0xe2, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x8713, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8714, .a=0x99, .x=0xe2, .y=0xdf, .sp=0xe2, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x8713, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8713, .value=0x9d, .type=IO_READ},
        {.addr=0x8714, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0043) {
    const struct CPU_State initial_cpu = {.pc=0xca2d, .a=0x35, .x=0xb8, .y=0x38, .sp=0xfb, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xca2d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xca2e, .a=0x35, .x=0xfb, .y=0x38, .sp=0xfb, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xca2d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xca2d, .value=0x9d, .type=IO_READ},
        {.addr=0xca2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0044) {
    const struct CPU_State initial_cpu = {.pc=0x834f, .a=0x8d, .x=0x38, .y=0xcd, .sp=0xbb, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x834f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8350, .a=0x8d, .x=0xbb, .y=0xcd, .sp=0xbb, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x834f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x834f, .value=0x9d, .type=IO_READ},
        {.addr=0x8350, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0045) {
    const struct CPU_State initial_cpu = {.pc=0x4574, .a=0x96, .x=0x4e, .y=0x28, .sp=0x27, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x4574, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4575, .a=0x96, .x=0x27, .y=0x28, .sp=0x27, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x4574, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4574, .value=0x9d, .type=IO_READ},
        {.addr=0x4575, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0046) {
    const struct CPU_State initial_cpu = {.pc=0x1a71, .a=0xec, .x=0x71, .y=0xae, .sp=0xd9, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x1a71, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1a72, .a=0xec, .x=0xd9, .y=0xae, .sp=0xd9, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x1a71, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1a71, .value=0x9d, .type=IO_READ},
        {.addr=0x1a72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0047) {
    const struct CPU_State initial_cpu = {.pc=0xe4ab, .a=0xe8, .x=0x37, .y=0x87, .sp=0xcc, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xe4ab, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe4ac, .a=0xe8, .x=0xcc, .y=0x87, .sp=0xcc, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xe4ab, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe4ab, .value=0x9d, .type=IO_READ},
        {.addr=0xe4ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0048) {
    const struct CPU_State initial_cpu = {.pc=0x1ee8, .a=0xff, .x=0xe9, .y=0x9f, .sp=0x4b, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x1ee8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1ee9, .a=0xff, .x=0x4b, .y=0x9f, .sp=0x4b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1ee8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1ee8, .value=0x9d, .type=IO_READ},
        {.addr=0x1ee9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0049) {
    const struct CPU_State initial_cpu = {.pc=0xc9a7, .a=0x7d, .x=0x64, .y=0xa8, .sp=0xe9, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xc9a7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc9a8, .a=0x7d, .x=0xe9, .y=0xa8, .sp=0xe9, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xc9a7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc9a7, .value=0x9d, .type=IO_READ},
        {.addr=0xc9a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_004A) {
    const struct CPU_State initial_cpu = {.pc=0x598f, .a=0x8b, .x=0x51, .y=0xe3, .sp=0x9f, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x598f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5990, .a=0x8b, .x=0x9f, .y=0xe3, .sp=0x9f, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x598f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x598f, .value=0x9d, .type=IO_READ},
        {.addr=0x5990, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_004B) {
    const struct CPU_State initial_cpu = {.pc=0xa95c, .a=0xaf, .x=0x30, .y=0x3d, .sp=0xea, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xa95c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa95d, .a=0xaf, .x=0xea, .y=0x3d, .sp=0xea, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xa95c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa95c, .value=0x9d, .type=IO_READ},
        {.addr=0xa95d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_004C) {
    const struct CPU_State initial_cpu = {.pc=0x7251, .a=0xaa, .x=0xf5, .y=0x78, .sp=0xf7, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x7251, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7252, .a=0xaa, .x=0xf7, .y=0x78, .sp=0xf7, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x7251, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7251, .value=0x9d, .type=IO_READ},
        {.addr=0x7252, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_004D) {
    const struct CPU_State initial_cpu = {.pc=0x200d, .a=0xd1, .x=0x4f, .y=0x1b, .sp=0x6b, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x200d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x200e, .a=0xd1, .x=0x6b, .y=0x1b, .sp=0x6b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x200d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x200d, .value=0x9d, .type=IO_READ},
        {.addr=0x200e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_004E) {
    const struct CPU_State initial_cpu = {.pc=0xfc71, .a=0x6a, .x=0xda, .y=0xa0, .sp=0x83, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xfc71, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xfc72, .a=0x6a, .x=0x83, .y=0xa0, .sp=0x83, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xfc71, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfc71, .value=0x9d, .type=IO_READ},
        {.addr=0xfc72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_004F) {
    const struct CPU_State initial_cpu = {.pc=0x8d16, .a=0x9f, .x=0x55, .y=0xe5, .sp=0x49, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x8d16, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8d17, .a=0x9f, .x=0x49, .y=0xe5, .sp=0x49, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x8d16, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8d16, .value=0x9d, .type=IO_READ},
        {.addr=0x8d17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0050) {
    const struct CPU_State initial_cpu = {.pc=0x2203, .a=0x7a, .x=0x19, .y=0x11, .sp=0x04, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x2203, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2204, .a=0x7a, .x=0x04, .y=0x11, .sp=0x04, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x2203, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2203, .value=0x9d, .type=IO_READ},
        {.addr=0x2204, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0051) {
    const struct CPU_State initial_cpu = {.pc=0xa4e8, .a=0x6b, .x=0xc9, .y=0x9e, .sp=0x00, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xa4e8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa4e9, .a=0x6b, .x=0x00, .y=0x9e, .sp=0x00, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xa4e8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa4e8, .value=0x9d, .type=IO_READ},
        {.addr=0xa4e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0052) {
    const struct CPU_State initial_cpu = {.pc=0xc9f5, .a=0x98, .x=0x04, .y=0x30, .sp=0x04, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xc9f5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc9f6, .a=0x98, .x=0x04, .y=0x30, .sp=0x04, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xc9f5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc9f5, .value=0x9d, .type=IO_READ},
        {.addr=0xc9f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0053) {
    const struct CPU_State initial_cpu = {.pc=0x2c55, .a=0x45, .x=0x29, .y=0x45, .sp=0xdf, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x2c55, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2c56, .a=0x45, .x=0xdf, .y=0x45, .sp=0xdf, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x2c55, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2c55, .value=0x9d, .type=IO_READ},
        {.addr=0x2c56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0054) {
    const struct CPU_State initial_cpu = {.pc=0x6f20, .a=0x86, .x=0xc4, .y=0x02, .sp=0xd9, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x6f20, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6f21, .a=0x86, .x=0xd9, .y=0x02, .sp=0xd9, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x6f20, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6f20, .value=0x9d, .type=IO_READ},
        {.addr=0x6f21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0055) {
    const struct CPU_State initial_cpu = {.pc=0x3fcc, .a=0x0a, .x=0x22, .y=0x6a, .sp=0x62, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x3fcc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3fcd, .a=0x0a, .x=0x62, .y=0x6a, .sp=0x62, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x3fcc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3fcc, .value=0x9d, .type=IO_READ},
        {.addr=0x3fcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0056) {
    const struct CPU_State initial_cpu = {.pc=0xf6b6, .a=0xf2, .x=0x74, .y=0x6f, .sp=0x5b, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xf6b6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf6b7, .a=0xf2, .x=0x5b, .y=0x6f, .sp=0x5b, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xf6b6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf6b6, .value=0x9d, .type=IO_READ},
        {.addr=0xf6b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0057) {
    const struct CPU_State initial_cpu = {.pc=0x83a9, .a=0x10, .x=0xf1, .y=0x9d, .sp=0xdf, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x83a9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x83aa, .a=0x10, .x=0xdf, .y=0x9d, .sp=0xdf, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x83a9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x83a9, .value=0x9d, .type=IO_READ},
        {.addr=0x83aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0058) {
    const struct CPU_State initial_cpu = {.pc=0x7149, .a=0xb0, .x=0xb5, .y=0x11, .sp=0x22, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x7149, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x714a, .a=0xb0, .x=0x22, .y=0x11, .sp=0x22, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x7149, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7149, .value=0x9d, .type=IO_READ},
        {.addr=0x714a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0059) {
    const struct CPU_State initial_cpu = {.pc=0x9449, .a=0xb1, .x=0xec, .y=0xdb, .sp=0xfa, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x9449, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x944a, .a=0xb1, .x=0xfa, .y=0xdb, .sp=0xfa, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x9449, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9449, .value=0x9d, .type=IO_READ},
        {.addr=0x944a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_005A) {
    const struct CPU_State initial_cpu = {.pc=0x5e19, .a=0x4c, .x=0xf6, .y=0x31, .sp=0x33, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x5e19, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5e1a, .a=0x4c, .x=0x33, .y=0x31, .sp=0x33, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x5e19, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5e19, .value=0x9d, .type=IO_READ},
        {.addr=0x5e1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_005B) {
    const struct CPU_State initial_cpu = {.pc=0xb102, .a=0xfb, .x=0xf8, .y=0xea, .sp=0xd6, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xb102, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb103, .a=0xfb, .x=0xd6, .y=0xea, .sp=0xd6, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xb102, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb102, .value=0x9d, .type=IO_READ},
        {.addr=0xb103, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_005C) {
    const struct CPU_State initial_cpu = {.pc=0x1068, .a=0x40, .x=0x21, .y=0xf1, .sp=0xed, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x1068, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1069, .a=0x40, .x=0xed, .y=0xf1, .sp=0xed, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x1068, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1068, .value=0x9d, .type=IO_READ},
        {.addr=0x1069, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_005D) {
    const struct CPU_State initial_cpu = {.pc=0x5526, .a=0x56, .x=0x99, .y=0x7a, .sp=0xe3, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x5526, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5527, .a=0x56, .x=0xe3, .y=0x7a, .sp=0xe3, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x5526, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5526, .value=0x9d, .type=IO_READ},
        {.addr=0x5527, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_005E) {
    const struct CPU_State initial_cpu = {.pc=0x01ed, .a=0x0f, .x=0x37, .y=0x5f, .sp=0x5f, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x01ee, .a=0x0f, .x=0x5f, .y=0x5f, .sp=0x5f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x01ed, .value=0x9d, .type=IO_READ},
        {.addr=0x01ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_005F) {
    const struct CPU_State initial_cpu = {.pc=0x6446, .a=0x4d, .x=0x15, .y=0x8c, .sp=0x4e, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x6446, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6447, .a=0x4d, .x=0x4e, .y=0x8c, .sp=0x4e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x6446, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6446, .value=0x9d, .type=IO_READ},
        {.addr=0x6447, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0060) {
    const struct CPU_State initial_cpu = {.pc=0x8391, .a=0xa8, .x=0xb1, .y=0x80, .sp=0x0d, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x8391, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8392, .a=0xa8, .x=0x0d, .y=0x80, .sp=0x0d, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x8391, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8391, .value=0x9d, .type=IO_READ},
        {.addr=0x8392, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0061) {
    const struct CPU_State initial_cpu = {.pc=0x77ca, .a=0x5f, .x=0xea, .y=0xf1, .sp=0x5b, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x77ca, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x77cb, .a=0x5f, .x=0x5b, .y=0xf1, .sp=0x5b, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x77ca, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x77ca, .value=0x9d, .type=IO_READ},
        {.addr=0x77cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0062) {
    const struct CPU_State initial_cpu = {.pc=0x9bc4, .a=0xca, .x=0x64, .y=0xdc, .sp=0xe9, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x9bc4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9bc5, .a=0xca, .x=0xe9, .y=0xdc, .sp=0xe9, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x9bc4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9bc4, .value=0x9d, .type=IO_READ},
        {.addr=0x9bc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0063) {
    const struct CPU_State initial_cpu = {.pc=0xc71a, .a=0x03, .x=0x6f, .y=0x4d, .sp=0xc4, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xc71a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc71b, .a=0x03, .x=0xc4, .y=0x4d, .sp=0xc4, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xc71a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc71a, .value=0x9d, .type=IO_READ},
        {.addr=0xc71b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0064) {
    const struct CPU_State initial_cpu = {.pc=0x762c, .a=0x0d, .x=0x62, .y=0x99, .sp=0xe4, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x762c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x762d, .a=0x0d, .x=0xe4, .y=0x99, .sp=0xe4, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x762c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x762c, .value=0x9d, .type=IO_READ},
        {.addr=0x762d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0065) {
    const struct CPU_State initial_cpu = {.pc=0xa192, .a=0x5c, .x=0xc3, .y=0xe3, .sp=0x57, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xa192, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa193, .a=0x5c, .x=0x57, .y=0xe3, .sp=0x57, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xa192, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa192, .value=0x9d, .type=IO_READ},
        {.addr=0xa193, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0066) {
    const struct CPU_State initial_cpu = {.pc=0x0736, .a=0xb3, .x=0x41, .y=0x1c, .sp=0x67, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0736, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0737, .a=0xb3, .x=0x67, .y=0x1c, .sp=0x67, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0736, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0736, .value=0x9d, .type=IO_READ},
        {.addr=0x0737, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0067) {
    const struct CPU_State initial_cpu = {.pc=0x9d71, .a=0xe3, .x=0x4e, .y=0x08, .sp=0x4b, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x9d71, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9d72, .a=0xe3, .x=0x4b, .y=0x08, .sp=0x4b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x9d71, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9d71, .value=0x9d, .type=IO_READ},
        {.addr=0x9d72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0068) {
    const struct CPU_State initial_cpu = {.pc=0x50d1, .a=0xd5, .x=0x9d, .y=0x59, .sp=0x69, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x50d1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x50d2, .a=0xd5, .x=0x69, .y=0x59, .sp=0x69, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x50d1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x50d1, .value=0x9d, .type=IO_READ},
        {.addr=0x50d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0069) {
    const struct CPU_State initial_cpu = {.pc=0x1687, .a=0xfa, .x=0xb3, .y=0x4f, .sp=0xf9, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x1687, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1688, .a=0xfa, .x=0xf9, .y=0x4f, .sp=0xf9, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x1687, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1687, .value=0x9d, .type=IO_READ},
        {.addr=0x1688, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_006A) {
    const struct CPU_State initial_cpu = {.pc=0xd651, .a=0x1e, .x=0xda, .y=0x4b, .sp=0xb3, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xd651, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd652, .a=0x1e, .x=0xb3, .y=0x4b, .sp=0xb3, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xd651, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd651, .value=0x9d, .type=IO_READ},
        {.addr=0xd652, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_006B) {
    const struct CPU_State initial_cpu = {.pc=0x87ff, .a=0x06, .x=0x69, .y=0xac, .sp=0x51, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x87ff, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8800, .a=0x06, .x=0x51, .y=0xac, .sp=0x51, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x87ff, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x87ff, .value=0x9d, .type=IO_READ},
        {.addr=0x8800, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_006C) {
    const struct CPU_State initial_cpu = {.pc=0xd1c1, .a=0xaf, .x=0xc7, .y=0x2e, .sp=0x58, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xd1c1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd1c2, .a=0xaf, .x=0x58, .y=0x2e, .sp=0x58, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xd1c1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd1c1, .value=0x9d, .type=IO_READ},
        {.addr=0xd1c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_006D) {
    const struct CPU_State initial_cpu = {.pc=0x9443, .a=0x2d, .x=0x88, .y=0x11, .sp=0x39, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x9443, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9444, .a=0x2d, .x=0x39, .y=0x11, .sp=0x39, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x9443, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9443, .value=0x9d, .type=IO_READ},
        {.addr=0x9444, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_006E) {
    const struct CPU_State initial_cpu = {.pc=0x99cf, .a=0x11, .x=0x6f, .y=0xe8, .sp=0x90, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x99cf, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x99d0, .a=0x11, .x=0x90, .y=0xe8, .sp=0x90, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x99cf, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x99cf, .value=0x9d, .type=IO_READ},
        {.addr=0x99d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_006F) {
    const struct CPU_State initial_cpu = {.pc=0x2e15, .a=0x7f, .x=0x83, .y=0x2b, .sp=0x43, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x2e15, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2e16, .a=0x7f, .x=0x43, .y=0x2b, .sp=0x43, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x2e15, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2e15, .value=0x9d, .type=IO_READ},
        {.addr=0x2e16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0070) {
    const struct CPU_State initial_cpu = {.pc=0x5a25, .a=0xa6, .x=0x21, .y=0x61, .sp=0xce, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x5a25, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5a26, .a=0xa6, .x=0xce, .y=0x61, .sp=0xce, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x5a25, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5a25, .value=0x9d, .type=IO_READ},
        {.addr=0x5a26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0071) {
    const struct CPU_State initial_cpu = {.pc=0xc1f9, .a=0xb5, .x=0x9e, .y=0x62, .sp=0x37, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xc1f9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc1fa, .a=0xb5, .x=0x37, .y=0x62, .sp=0x37, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xc1f9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc1f9, .value=0x9d, .type=IO_READ},
        {.addr=0xc1fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0072) {
    const struct CPU_State initial_cpu = {.pc=0x9a91, .a=0x75, .x=0x5c, .y=0x6c, .sp=0x34, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x9a91, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9a92, .a=0x75, .x=0x34, .y=0x6c, .sp=0x34, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x9a91, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9a91, .value=0x9d, .type=IO_READ},
        {.addr=0x9a92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0073) {
    const struct CPU_State initial_cpu = {.pc=0xf030, .a=0x72, .x=0x61, .y=0x7b, .sp=0xbb, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xf030, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf031, .a=0x72, .x=0xbb, .y=0x7b, .sp=0xbb, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xf030, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf030, .value=0x9d, .type=IO_READ},
        {.addr=0xf031, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0074) {
    const struct CPU_State initial_cpu = {.pc=0x8b7d, .a=0x5f, .x=0xeb, .y=0x07, .sp=0x7b, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x8b7d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8b7e, .a=0x5f, .x=0x7b, .y=0x07, .sp=0x7b, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x8b7d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8b7d, .value=0x9d, .type=IO_READ},
        {.addr=0x8b7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0075) {
    const struct CPU_State initial_cpu = {.pc=0x38ac, .a=0x62, .x=0x85, .y=0x7b, .sp=0x71, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x38ac, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x38ad, .a=0x62, .x=0x71, .y=0x7b, .sp=0x71, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x38ac, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x38ac, .value=0x9d, .type=IO_READ},
        {.addr=0x38ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0076) {
    const struct CPU_State initial_cpu = {.pc=0x249e, .a=0xa2, .x=0xeb, .y=0xf6, .sp=0xc8, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x249e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x249f, .a=0xa2, .x=0xc8, .y=0xf6, .sp=0xc8, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x249e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x249e, .value=0x9d, .type=IO_READ},
        {.addr=0x249f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0077) {
    const struct CPU_State initial_cpu = {.pc=0xc7c2, .a=0x39, .x=0x47, .y=0x08, .sp=0x46, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xc7c2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc7c3, .a=0x39, .x=0x46, .y=0x08, .sp=0x46, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xc7c2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc7c2, .value=0x9d, .type=IO_READ},
        {.addr=0xc7c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0078) {
    const struct CPU_State initial_cpu = {.pc=0x85ec, .a=0x60, .x=0xa8, .y=0x69, .sp=0xa4, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x85ec, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x85ed, .a=0x60, .x=0xa4, .y=0x69, .sp=0xa4, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x85ec, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x85ec, .value=0x9d, .type=IO_READ},
        {.addr=0x85ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0079) {
    const struct CPU_State initial_cpu = {.pc=0xd437, .a=0x31, .x=0x92, .y=0xe3, .sp=0x44, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xd437, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd438, .a=0x31, .x=0x44, .y=0xe3, .sp=0x44, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xd437, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd437, .value=0x9d, .type=IO_READ},
        {.addr=0xd438, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_007A) {
    const struct CPU_State initial_cpu = {.pc=0x76e2, .a=0x6a, .x=0x5f, .y=0x39, .sp=0x6c, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x76e2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x76e3, .a=0x6a, .x=0x6c, .y=0x39, .sp=0x6c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x76e2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x76e2, .value=0x9d, .type=IO_READ},
        {.addr=0x76e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_007B) {
    const struct CPU_State initial_cpu = {.pc=0xcf58, .a=0x14, .x=0xe7, .y=0xb9, .sp=0xf5, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xcf58, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcf59, .a=0x14, .x=0xf5, .y=0xb9, .sp=0xf5, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xcf58, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcf58, .value=0x9d, .type=IO_READ},
        {.addr=0xcf59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_007C) {
    const struct CPU_State initial_cpu = {.pc=0x1645, .a=0x8c, .x=0xaa, .y=0x67, .sp=0xf8, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x1645, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1646, .a=0x8c, .x=0xf8, .y=0x67, .sp=0xf8, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x1645, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1645, .value=0x9d, .type=IO_READ},
        {.addr=0x1646, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_007D) {
    const struct CPU_State initial_cpu = {.pc=0x5020, .a=0x9c, .x=0x84, .y=0xe8, .sp=0x38, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x5020, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5021, .a=0x9c, .x=0x38, .y=0xe8, .sp=0x38, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x5020, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5020, .value=0x9d, .type=IO_READ},
        {.addr=0x5021, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_007E) {
    const struct CPU_State initial_cpu = {.pc=0xb30d, .a=0x9e, .x=0xdb, .y=0x7c, .sp=0x58, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xb30d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb30e, .a=0x9e, .x=0x58, .y=0x7c, .sp=0x58, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xb30d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb30d, .value=0x9d, .type=IO_READ},
        {.addr=0xb30e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_007F) {
    const struct CPU_State initial_cpu = {.pc=0x3b8a, .a=0xb8, .x=0xcd, .y=0xdd, .sp=0xc6, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x3b8a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3b8b, .a=0xb8, .x=0xc6, .y=0xdd, .sp=0xc6, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x3b8a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3b8a, .value=0x9d, .type=IO_READ},
        {.addr=0x3b8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0080) {
    const struct CPU_State initial_cpu = {.pc=0xebb8, .a=0x5d, .x=0xd7, .y=0x83, .sp=0xac, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xebb8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xebb9, .a=0x5d, .x=0xac, .y=0x83, .sp=0xac, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xebb8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xebb8, .value=0x9d, .type=IO_READ},
        {.addr=0xebb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0081) {
    const struct CPU_State initial_cpu = {.pc=0x48c5, .a=0xf7, .x=0x68, .y=0xb9, .sp=0x53, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x48c5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x48c6, .a=0xf7, .x=0x53, .y=0xb9, .sp=0x53, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x48c5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x48c5, .value=0x9d, .type=IO_READ},
        {.addr=0x48c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0082) {
    const struct CPU_State initial_cpu = {.pc=0x337f, .a=0x51, .x=0x4e, .y=0xc6, .sp=0xb0, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x337f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3380, .a=0x51, .x=0xb0, .y=0xc6, .sp=0xb0, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x337f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x337f, .value=0x9d, .type=IO_READ},
        {.addr=0x3380, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0083) {
    const struct CPU_State initial_cpu = {.pc=0x238b, .a=0xc0, .x=0x6c, .y=0x20, .sp=0x17, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x238b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x238c, .a=0xc0, .x=0x17, .y=0x20, .sp=0x17, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x238b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x238b, .value=0x9d, .type=IO_READ},
        {.addr=0x238c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0084) {
    const struct CPU_State initial_cpu = {.pc=0x0283, .a=0xca, .x=0xa7, .y=0xf7, .sp=0x59, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0283, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0284, .a=0xca, .x=0x59, .y=0xf7, .sp=0x59, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0283, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0283, .value=0x9d, .type=IO_READ},
        {.addr=0x0284, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0085) {
    const struct CPU_State initial_cpu = {.pc=0x141e, .a=0x1c, .x=0x2f, .y=0x38, .sp=0x2d, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x141e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x141f, .a=0x1c, .x=0x2d, .y=0x38, .sp=0x2d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x141e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x141e, .value=0x9d, .type=IO_READ},
        {.addr=0x141f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0086) {
    const struct CPU_State initial_cpu = {.pc=0x3961, .a=0x3b, .x=0x43, .y=0x0f, .sp=0x12, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x3961, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3962, .a=0x3b, .x=0x12, .y=0x0f, .sp=0x12, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x3961, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3961, .value=0x9d, .type=IO_READ},
        {.addr=0x3962, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0087) {
    const struct CPU_State initial_cpu = {.pc=0xebf2, .a=0x70, .x=0x30, .y=0x78, .sp=0x30, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xebf2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xebf3, .a=0x70, .x=0x30, .y=0x78, .sp=0x30, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xebf2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xebf2, .value=0x9d, .type=IO_READ},
        {.addr=0xebf3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0088) {
    const struct CPU_State initial_cpu = {.pc=0x7907, .a=0xf6, .x=0x32, .y=0x44, .sp=0xac, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x7907, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7908, .a=0xf6, .x=0xac, .y=0x44, .sp=0xac, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x7907, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7907, .value=0x9d, .type=IO_READ},
        {.addr=0x7908, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0089) {
    const struct CPU_State initial_cpu = {.pc=0x7756, .a=0x13, .x=0x24, .y=0x16, .sp=0xda, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x7756, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7757, .a=0x13, .x=0xda, .y=0x16, .sp=0xda, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x7756, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7756, .value=0x9d, .type=IO_READ},
        {.addr=0x7757, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_008A) {
    const struct CPU_State initial_cpu = {.pc=0xcec6, .a=0x06, .x=0x10, .y=0xb1, .sp=0x6d, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xcec6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcec7, .a=0x06, .x=0x6d, .y=0xb1, .sp=0x6d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xcec6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcec6, .value=0x9d, .type=IO_READ},
        {.addr=0xcec7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_008B) {
    const struct CPU_State initial_cpu = {.pc=0x11a1, .a=0x76, .x=0xf2, .y=0x3e, .sp=0x3e, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x11a1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x11a2, .a=0x76, .x=0x3e, .y=0x3e, .sp=0x3e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x11a1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x11a1, .value=0x9d, .type=IO_READ},
        {.addr=0x11a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_008C) {
    const struct CPU_State initial_cpu = {.pc=0x6b44, .a=0x78, .x=0xca, .y=0x44, .sp=0xd2, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x6b44, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6b45, .a=0x78, .x=0xd2, .y=0x44, .sp=0xd2, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x6b44, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6b44, .value=0x9d, .type=IO_READ},
        {.addr=0x6b45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_008D) {
    const struct CPU_State initial_cpu = {.pc=0x79dc, .a=0xc0, .x=0x5d, .y=0x45, .sp=0xf0, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x79dc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x79dd, .a=0xc0, .x=0xf0, .y=0x45, .sp=0xf0, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x79dc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x79dc, .value=0x9d, .type=IO_READ},
        {.addr=0x79dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_008E) {
    const struct CPU_State initial_cpu = {.pc=0xb967, .a=0x0e, .x=0x85, .y=0x9b, .sp=0x8e, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xb967, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb968, .a=0x0e, .x=0x8e, .y=0x9b, .sp=0x8e, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xb967, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb967, .value=0x9d, .type=IO_READ},
        {.addr=0xb968, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_008F) {
    const struct CPU_State initial_cpu = {.pc=0x7c14, .a=0xa6, .x=0x2c, .y=0xad, .sp=0xd0, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x7c14, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7c15, .a=0xa6, .x=0xd0, .y=0xad, .sp=0xd0, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x7c14, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7c14, .value=0x9d, .type=IO_READ},
        {.addr=0x7c15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0090) {
    const struct CPU_State initial_cpu = {.pc=0x0630, .a=0xd1, .x=0x56, .y=0x9f, .sp=0xa1, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0630, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0631, .a=0xd1, .x=0xa1, .y=0x9f, .sp=0xa1, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0630, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0630, .value=0x9d, .type=IO_READ},
        {.addr=0x0631, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0091) {
    const struct CPU_State initial_cpu = {.pc=0x256b, .a=0x3f, .x=0xef, .y=0xbc, .sp=0xa3, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x256b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x256c, .a=0x3f, .x=0xa3, .y=0xbc, .sp=0xa3, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x256b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x256b, .value=0x9d, .type=IO_READ},
        {.addr=0x256c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0092) {
    const struct CPU_State initial_cpu = {.pc=0xda99, .a=0x19, .x=0xfb, .y=0xed, .sp=0x4e, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xda99, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xda9a, .a=0x19, .x=0x4e, .y=0xed, .sp=0x4e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xda99, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xda99, .value=0x9d, .type=IO_READ},
        {.addr=0xda9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0093) {
    const struct CPU_State initial_cpu = {.pc=0x7758, .a=0x38, .x=0xb4, .y=0x73, .sp=0xda, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x7758, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7759, .a=0x38, .x=0xda, .y=0x73, .sp=0xda, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x7758, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7758, .value=0x9d, .type=IO_READ},
        {.addr=0x7759, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0094) {
    const struct CPU_State initial_cpu = {.pc=0x2d24, .a=0x2b, .x=0x16, .y=0xb4, .sp=0x3c, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x2d24, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2d25, .a=0x2b, .x=0x3c, .y=0xb4, .sp=0x3c, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2d24, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2d24, .value=0x9d, .type=IO_READ},
        {.addr=0x2d25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0095) {
    const struct CPU_State initial_cpu = {.pc=0xd64c, .a=0x1f, .x=0x5b, .y=0x21, .sp=0xd3, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xd64c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd64d, .a=0x1f, .x=0xd3, .y=0x21, .sp=0xd3, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd64c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd64c, .value=0x9d, .type=IO_READ},
        {.addr=0xd64d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0096) {
    const struct CPU_State initial_cpu = {.pc=0x6aa0, .a=0xe0, .x=0x31, .y=0x0a, .sp=0x7e, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x6aa0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6aa1, .a=0xe0, .x=0x7e, .y=0x0a, .sp=0x7e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x6aa0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6aa0, .value=0x9d, .type=IO_READ},
        {.addr=0x6aa1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0097) {
    const struct CPU_State initial_cpu = {.pc=0x7db1, .a=0x57, .x=0x24, .y=0x64, .sp=0x24, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x7db1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7db2, .a=0x57, .x=0x24, .y=0x64, .sp=0x24, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x7db1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7db1, .value=0x9d, .type=IO_READ},
        {.addr=0x7db2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0098) {
    const struct CPU_State initial_cpu = {.pc=0xe76a, .a=0x24, .x=0xbe, .y=0xfd, .sp=0x13, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xe76a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe76b, .a=0x24, .x=0x13, .y=0xfd, .sp=0x13, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xe76a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe76a, .value=0x9d, .type=IO_READ},
        {.addr=0xe76b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0099) {
    const struct CPU_State initial_cpu = {.pc=0x2a1b, .a=0xb3, .x=0x5d, .y=0xce, .sp=0xcd, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x2a1b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2a1c, .a=0xb3, .x=0xcd, .y=0xce, .sp=0xcd, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2a1b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2a1b, .value=0x9d, .type=IO_READ},
        {.addr=0x2a1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_009A) {
    const struct CPU_State initial_cpu = {.pc=0xe928, .a=0xb5, .x=0xbf, .y=0x20, .sp=0xb4, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xe928, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe929, .a=0xb5, .x=0xb4, .y=0x20, .sp=0xb4, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe928, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe928, .value=0x9d, .type=IO_READ},
        {.addr=0xe929, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_009B) {
    const struct CPU_State initial_cpu = {.pc=0x1c2a, .a=0x36, .x=0x15, .y=0x12, .sp=0x19, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x1c2a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1c2b, .a=0x36, .x=0x19, .y=0x12, .sp=0x19, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x1c2a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1c2a, .value=0x9d, .type=IO_READ},
        {.addr=0x1c2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_009C) {
    const struct CPU_State initial_cpu = {.pc=0x87d5, .a=0xaa, .x=0x0d, .y=0xc3, .sp=0x45, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x87d5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x87d6, .a=0xaa, .x=0x45, .y=0xc3, .sp=0x45, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x87d5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x87d5, .value=0x9d, .type=IO_READ},
        {.addr=0x87d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_009D) {
    const struct CPU_State initial_cpu = {.pc=0xfa7e, .a=0xd9, .x=0x96, .y=0x89, .sp=0xa1, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xfa7e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xfa7f, .a=0xd9, .x=0xa1, .y=0x89, .sp=0xa1, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xfa7e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfa7e, .value=0x9d, .type=IO_READ},
        {.addr=0xfa7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_009E) {
    const struct CPU_State initial_cpu = {.pc=0x7c6e, .a=0x06, .x=0x28, .y=0x5d, .sp=0xef, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x7c6e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7c6f, .a=0x06, .x=0xef, .y=0x5d, .sp=0xef, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x7c6e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7c6e, .value=0x9d, .type=IO_READ},
        {.addr=0x7c6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_009F) {
    const struct CPU_State initial_cpu = {.pc=0x4b9b, .a=0x7f, .x=0x64, .y=0x46, .sp=0x86, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x4b9b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4b9c, .a=0x7f, .x=0x86, .y=0x46, .sp=0x86, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x4b9b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4b9b, .value=0x9d, .type=IO_READ},
        {.addr=0x4b9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x65b8, .a=0x56, .x=0xa2, .y=0xd4, .sp=0xf7, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x65b8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x65b9, .a=0x56, .x=0xf7, .y=0xd4, .sp=0xf7, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x65b8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x65b8, .value=0x9d, .type=IO_READ},
        {.addr=0x65b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x453e, .a=0xa2, .x=0x67, .y=0x60, .sp=0x09, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x453e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x453f, .a=0xa2, .x=0x09, .y=0x60, .sp=0x09, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x453e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x453e, .value=0x9d, .type=IO_READ},
        {.addr=0x453f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xa46d, .a=0x94, .x=0xf0, .y=0xd2, .sp=0x11, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xa46d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa46e, .a=0x94, .x=0x11, .y=0xd2, .sp=0x11, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xa46d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa46d, .value=0x9d, .type=IO_READ},
        {.addr=0xa46e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x598c, .a=0x6f, .x=0x43, .y=0xc2, .sp=0x40, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x598c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x598d, .a=0x6f, .x=0x40, .y=0xc2, .sp=0x40, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x598c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x598c, .value=0x9d, .type=IO_READ},
        {.addr=0x598d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xe1c5, .a=0x4f, .x=0x5c, .y=0xce, .sp=0x1e, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xe1c5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe1c6, .a=0x4f, .x=0x1e, .y=0xce, .sp=0x1e, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xe1c5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe1c5, .value=0x9d, .type=IO_READ},
        {.addr=0xe1c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xe364, .a=0x4e, .x=0x2c, .y=0x69, .sp=0x3b, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xe364, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe365, .a=0x4e, .x=0x3b, .y=0x69, .sp=0x3b, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xe364, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe364, .value=0x9d, .type=IO_READ},
        {.addr=0xe365, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x917e, .a=0x2f, .x=0xa2, .y=0xfa, .sp=0x58, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x917e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x917f, .a=0x2f, .x=0x58, .y=0xfa, .sp=0x58, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x917e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x917e, .value=0x9d, .type=IO_READ},
        {.addr=0x917f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x8a23, .a=0xce, .x=0x68, .y=0x25, .sp=0x27, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x8a23, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8a24, .a=0xce, .x=0x27, .y=0x25, .sp=0x27, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x8a23, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8a23, .value=0x9d, .type=IO_READ},
        {.addr=0x8a24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x7ed3, .a=0x00, .x=0x52, .y=0x45, .sp=0x8c, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x7ed3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7ed4, .a=0x00, .x=0x8c, .y=0x45, .sp=0x8c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x7ed3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7ed3, .value=0x9d, .type=IO_READ},
        {.addr=0x7ed4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xb456, .a=0x3e, .x=0x46, .y=0x74, .sp=0x29, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xb456, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb457, .a=0x3e, .x=0x29, .y=0x74, .sp=0x29, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xb456, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb456, .value=0x9d, .type=IO_READ},
        {.addr=0xb457, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xf6de, .a=0xe2, .x=0xf2, .y=0x2a, .sp=0xe7, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xf6de, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf6df, .a=0xe2, .x=0xe7, .y=0x2a, .sp=0xe7, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xf6de, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf6de, .value=0x9d, .type=IO_READ},
        {.addr=0xf6df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x1488, .a=0xa6, .x=0x49, .y=0xd0, .sp=0x55, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x1488, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1489, .a=0xa6, .x=0x55, .y=0xd0, .sp=0x55, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x1488, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1488, .value=0x9d, .type=IO_READ},
        {.addr=0x1489, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xd6ea, .a=0x0d, .x=0x52, .y=0xe1, .sp=0xa1, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xd6ea, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd6eb, .a=0x0d, .x=0xa1, .y=0xe1, .sp=0xa1, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xd6ea, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd6ea, .value=0x9d, .type=IO_READ},
        {.addr=0xd6eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x5345, .a=0xa0, .x=0x67, .y=0x19, .sp=0xfd, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x5345, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5346, .a=0xa0, .x=0xfd, .y=0x19, .sp=0xfd, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x5345, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5345, .value=0x9d, .type=IO_READ},
        {.addr=0x5346, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x8223, .a=0x44, .x=0x77, .y=0x14, .sp=0xb7, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x8223, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8224, .a=0x44, .x=0xb7, .y=0x14, .sp=0xb7, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x8223, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8223, .value=0x9d, .type=IO_READ},
        {.addr=0x8224, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xb304, .a=0x4d, .x=0xe5, .y=0x22, .sp=0xa6, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xb304, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb305, .a=0x4d, .x=0xa6, .y=0x22, .sp=0xa6, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xb304, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb304, .value=0x9d, .type=IO_READ},
        {.addr=0xb305, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xc450, .a=0x16, .x=0x11, .y=0x39, .sp=0x66, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xc450, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc451, .a=0x16, .x=0x66, .y=0x39, .sp=0x66, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xc450, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc450, .value=0x9d, .type=IO_READ},
        {.addr=0xc451, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x5e6d, .a=0xda, .x=0xe4, .y=0x5e, .sp=0x61, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x5e6d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5e6e, .a=0xda, .x=0x61, .y=0x5e, .sp=0x61, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x5e6d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5e6d, .value=0x9d, .type=IO_READ},
        {.addr=0x5e6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x58c3, .a=0x6f, .x=0x32, .y=0xd9, .sp=0x79, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x58c3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x58c4, .a=0x6f, .x=0x79, .y=0xd9, .sp=0x79, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x58c3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x58c3, .value=0x9d, .type=IO_READ},
        {.addr=0x58c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x5d4d, .a=0x06, .x=0xf1, .y=0x1d, .sp=0x2d, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x5d4d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5d4e, .a=0x06, .x=0x2d, .y=0x1d, .sp=0x2d, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x5d4d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5d4d, .value=0x9d, .type=IO_READ},
        {.addr=0x5d4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x0981, .a=0xb8, .x=0x89, .y=0xe8, .sp=0xae, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0981, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0982, .a=0xb8, .x=0xae, .y=0xe8, .sp=0xae, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0981, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0981, .value=0x9d, .type=IO_READ},
        {.addr=0x0982, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xc6dc, .a=0xd2, .x=0x93, .y=0xaf, .sp=0x93, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xc6dc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc6dd, .a=0xd2, .x=0x93, .y=0xaf, .sp=0x93, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xc6dc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc6dc, .value=0x9d, .type=IO_READ},
        {.addr=0xc6dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x3e3a, .a=0xaa, .x=0xd0, .y=0xcb, .sp=0x8c, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x3e3a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3e3b, .a=0xaa, .x=0x8c, .y=0xcb, .sp=0x8c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3e3a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3e3a, .value=0x9d, .type=IO_READ},
        {.addr=0x3e3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x03c3, .a=0x87, .x=0xf7, .y=0xd8, .sp=0x42, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x03c3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x03c4, .a=0x87, .x=0x42, .y=0xd8, .sp=0x42, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x03c3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x03c3, .value=0x9d, .type=IO_READ},
        {.addr=0x03c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xb283, .a=0x9f, .x=0x27, .y=0xe9, .sp=0xf4, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xb283, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb284, .a=0x9f, .x=0xf4, .y=0xe9, .sp=0xf4, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xb283, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb283, .value=0x9d, .type=IO_READ},
        {.addr=0xb284, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x97b5, .a=0xcd, .x=0xae, .y=0x3b, .sp=0x5f, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x97b5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x97b6, .a=0xcd, .x=0x5f, .y=0x3b, .sp=0x5f, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x97b5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x97b5, .value=0x9d, .type=IO_READ},
        {.addr=0x97b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x45e0, .a=0xad, .x=0xfe, .y=0x9b, .sp=0x32, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x45e0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x45e1, .a=0xad, .x=0x32, .y=0x9b, .sp=0x32, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x45e0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x45e0, .value=0x9d, .type=IO_READ},
        {.addr=0x45e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x4aaf, .a=0x0d, .x=0xa0, .y=0x70, .sp=0x71, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x4aaf, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4ab0, .a=0x0d, .x=0x71, .y=0x70, .sp=0x71, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x4aaf, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4aaf, .value=0x9d, .type=IO_READ},
        {.addr=0x4ab0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x8da4, .a=0x51, .x=0x10, .y=0x7c, .sp=0x5e, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x8da4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8da5, .a=0x51, .x=0x5e, .y=0x7c, .sp=0x5e, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x8da4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8da4, .value=0x9d, .type=IO_READ},
        {.addr=0x8da5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x14c8, .a=0xf8, .x=0x8b, .y=0x01, .sp=0x59, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x14c8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x14c9, .a=0xf8, .x=0x59, .y=0x01, .sp=0x59, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x14c8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x14c8, .value=0x9d, .type=IO_READ},
        {.addr=0x14c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x7b92, .a=0x82, .x=0xea, .y=0x4b, .sp=0x82, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x7b92, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7b93, .a=0x82, .x=0x82, .y=0x4b, .sp=0x82, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x7b92, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7b92, .value=0x9d, .type=IO_READ},
        {.addr=0x7b93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x2ab7, .a=0x02, .x=0x31, .y=0x3d, .sp=0x43, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x2ab7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2ab8, .a=0x02, .x=0x43, .y=0x3d, .sp=0x43, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x2ab7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2ab7, .value=0x9d, .type=IO_READ},
        {.addr=0x2ab8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x0a27, .a=0x7d, .x=0x03, .y=0x94, .sp=0x1d, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0a27, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0a28, .a=0x7d, .x=0x1d, .y=0x94, .sp=0x1d, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0a27, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0a27, .value=0x9d, .type=IO_READ},
        {.addr=0x0a28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xeec6, .a=0x4e, .x=0x72, .y=0x31, .sp=0x98, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xeec6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xeec7, .a=0x4e, .x=0x98, .y=0x31, .sp=0x98, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xeec6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xeec6, .value=0x9d, .type=IO_READ},
        {.addr=0xeec7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xeebe, .a=0x3a, .x=0xb2, .y=0x05, .sp=0x64, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xeebe, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xeebf, .a=0x3a, .x=0x64, .y=0x05, .sp=0x64, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xeebe, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xeebe, .value=0x9d, .type=IO_READ},
        {.addr=0xeebf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x13ea, .a=0xab, .x=0xcf, .y=0xc2, .sp=0xa5, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x13ea, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x13eb, .a=0xab, .x=0xa5, .y=0xc2, .sp=0xa5, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x13ea, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x13ea, .value=0x9d, .type=IO_READ},
        {.addr=0x13eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xe5dd, .a=0x92, .x=0xab, .y=0xe0, .sp=0xfb, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xe5dd, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe5de, .a=0x92, .x=0xfb, .y=0xe0, .sp=0xfb, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xe5dd, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe5dd, .value=0x9d, .type=IO_READ},
        {.addr=0xe5de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x1d65, .a=0x8c, .x=0x9e, .y=0x8f, .sp=0x72, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x1d65, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1d66, .a=0x8c, .x=0x72, .y=0x8f, .sp=0x72, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x1d65, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1d65, .value=0x9d, .type=IO_READ},
        {.addr=0x1d66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xadc3, .a=0x6c, .x=0x3f, .y=0x49, .sp=0x96, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xadc3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xadc4, .a=0x6c, .x=0x96, .y=0x49, .sp=0x96, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xadc3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xadc3, .value=0x9d, .type=IO_READ},
        {.addr=0xadc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x53aa, .a=0xe0, .x=0xd5, .y=0xfc, .sp=0xb4, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x53aa, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x53ab, .a=0xe0, .x=0xb4, .y=0xfc, .sp=0xb4, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x53aa, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x53aa, .value=0x9d, .type=IO_READ},
        {.addr=0x53ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xc1dd, .a=0x77, .x=0x05, .y=0x4d, .sp=0xfe, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xc1dd, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc1de, .a=0x77, .x=0xfe, .y=0x4d, .sp=0xfe, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xc1dd, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc1dd, .value=0x9d, .type=IO_READ},
        {.addr=0xc1de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xbe34, .a=0xc7, .x=0x53, .y=0x3b, .sp=0x46, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xbe34, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbe35, .a=0xc7, .x=0x46, .y=0x3b, .sp=0x46, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xbe34, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbe34, .value=0x9d, .type=IO_READ},
        {.addr=0xbe35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xa9e1, .a=0x98, .x=0x4b, .y=0x1d, .sp=0xd1, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xa9e1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa9e2, .a=0x98, .x=0xd1, .y=0x1d, .sp=0xd1, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xa9e1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa9e1, .value=0x9d, .type=IO_READ},
        {.addr=0xa9e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x2980, .a=0xda, .x=0xe3, .y=0x56, .sp=0x04, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x2980, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2981, .a=0xda, .x=0x04, .y=0x56, .sp=0x04, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x2980, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2980, .value=0x9d, .type=IO_READ},
        {.addr=0x2981, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x673e, .a=0xd3, .x=0x3a, .y=0xf4, .sp=0x82, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x673e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x673f, .a=0xd3, .x=0x82, .y=0xf4, .sp=0x82, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x673e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x673e, .value=0x9d, .type=IO_READ},
        {.addr=0x673f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x9eb7, .a=0x64, .x=0x29, .y=0x2f, .sp=0xb4, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x9eb7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9eb8, .a=0x64, .x=0xb4, .y=0x2f, .sp=0xb4, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x9eb7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9eb7, .value=0x9d, .type=IO_READ},
        {.addr=0x9eb8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xd7c6, .a=0xf9, .x=0x24, .y=0xf0, .sp=0xf0, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xd7c6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd7c7, .a=0xf9, .x=0xf0, .y=0xf0, .sp=0xf0, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xd7c6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd7c6, .value=0x9d, .type=IO_READ},
        {.addr=0xd7c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x9da7, .a=0xcd, .x=0x5c, .y=0x22, .sp=0x02, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x9da7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9da8, .a=0xcd, .x=0x02, .y=0x22, .sp=0x02, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9da7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9da7, .value=0x9d, .type=IO_READ},
        {.addr=0x9da8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x1e74, .a=0x48, .x=0x97, .y=0x7a, .sp=0x7e, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x1e74, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1e75, .a=0x48, .x=0x7e, .y=0x7a, .sp=0x7e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x1e74, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1e74, .value=0x9d, .type=IO_READ},
        {.addr=0x1e75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xed57, .a=0xf0, .x=0x58, .y=0x16, .sp=0x22, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xed57, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xed58, .a=0xf0, .x=0x22, .y=0x16, .sp=0x22, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xed57, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xed57, .value=0x9d, .type=IO_READ},
        {.addr=0xed58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x828c, .a=0xf6, .x=0x8a, .y=0x68, .sp=0x4b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x828c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x828d, .a=0xf6, .x=0x4b, .y=0x68, .sp=0x4b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x828c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x828c, .value=0x9d, .type=IO_READ},
        {.addr=0x828d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x3878, .a=0x42, .x=0xea, .y=0x05, .sp=0x51, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x3878, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3879, .a=0x42, .x=0x51, .y=0x05, .sp=0x51, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x3878, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3878, .value=0x9d, .type=IO_READ},
        {.addr=0x3879, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x437a, .a=0xe8, .x=0x50, .y=0x0b, .sp=0xa3, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x437a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x437b, .a=0xe8, .x=0xa3, .y=0x0b, .sp=0xa3, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x437a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x437a, .value=0x9d, .type=IO_READ},
        {.addr=0x437b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x47f4, .a=0xda, .x=0x74, .y=0x10, .sp=0xc3, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x47f4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x47f5, .a=0xda, .x=0xc3, .y=0x10, .sp=0xc3, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x47f4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x47f4, .value=0x9d, .type=IO_READ},
        {.addr=0x47f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xbd1e, .a=0x90, .x=0x3e, .y=0xbd, .sp=0x11, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xbd1e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbd1f, .a=0x90, .x=0x11, .y=0xbd, .sp=0x11, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xbd1e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbd1e, .value=0x9d, .type=IO_READ},
        {.addr=0xbd1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xf7ef, .a=0xfa, .x=0xca, .y=0xbb, .sp=0x7d, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xf7ef, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf7f0, .a=0xfa, .x=0x7d, .y=0xbb, .sp=0x7d, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xf7ef, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf7ef, .value=0x9d, .type=IO_READ},
        {.addr=0xf7f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x0dc7, .a=0x63, .x=0xde, .y=0x0a, .sp=0x54, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0dc7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0dc8, .a=0x63, .x=0x54, .y=0x0a, .sp=0x54, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0dc7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0dc7, .value=0x9d, .type=IO_READ},
        {.addr=0x0dc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x3de5, .a=0x65, .x=0x08, .y=0x4b, .sp=0x70, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x3de5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3de6, .a=0x65, .x=0x70, .y=0x4b, .sp=0x70, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x3de5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3de5, .value=0x9d, .type=IO_READ},
        {.addr=0x3de6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x7b16, .a=0x18, .x=0x4e, .y=0xa6, .sp=0x91, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x7b16, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7b17, .a=0x18, .x=0x91, .y=0xa6, .sp=0x91, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x7b16, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7b16, .value=0x9d, .type=IO_READ},
        {.addr=0x7b17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x7ead, .a=0xa5, .x=0xf9, .y=0x4c, .sp=0xa3, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x7ead, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7eae, .a=0xa5, .x=0xa3, .y=0x4c, .sp=0xa3, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x7ead, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7ead, .value=0x9d, .type=IO_READ},
        {.addr=0x7eae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xd44b, .a=0x87, .x=0xdb, .y=0x24, .sp=0x71, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xd44b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd44c, .a=0x87, .x=0x71, .y=0x24, .sp=0x71, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xd44b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd44b, .value=0x9d, .type=IO_READ},
        {.addr=0xd44c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x0579, .a=0xb9, .x=0x11, .y=0x83, .sp=0x67, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0579, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x057a, .a=0xb9, .x=0x67, .y=0x83, .sp=0x67, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0579, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0579, .value=0x9d, .type=IO_READ},
        {.addr=0x057a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x0439, .a=0xad, .x=0xba, .y=0xcb, .sp=0x4d, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0439, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x043a, .a=0xad, .x=0x4d, .y=0xcb, .sp=0x4d, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0439, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0439, .value=0x9d, .type=IO_READ},
        {.addr=0x043a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x62c0, .a=0xfc, .x=0x60, .y=0x75, .sp=0xbd, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x62c0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x62c1, .a=0xfc, .x=0xbd, .y=0x75, .sp=0xbd, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x62c0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x62c0, .value=0x9d, .type=IO_READ},
        {.addr=0x62c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xf77c, .a=0x89, .x=0x1e, .y=0xc6, .sp=0x18, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xf77c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf77d, .a=0x89, .x=0x18, .y=0xc6, .sp=0x18, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf77c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf77c, .value=0x9d, .type=IO_READ},
        {.addr=0xf77d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x7b67, .a=0x45, .x=0xa9, .y=0xe2, .sp=0x9d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x7b67, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7b68, .a=0x45, .x=0x9d, .y=0xe2, .sp=0x9d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x7b67, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7b67, .value=0x9d, .type=IO_READ},
        {.addr=0x7b68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00E2) {
    const struct CPU_State initial_cpu = {.pc=0xf927, .a=0x81, .x=0x2e, .y=0x77, .sp=0xbf, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xf927, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf928, .a=0x81, .x=0xbf, .y=0x77, .sp=0xbf, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xf927, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf927, .value=0x9d, .type=IO_READ},
        {.addr=0xf928, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x9b2e, .a=0x38, .x=0x18, .y=0xb0, .sp=0xa9, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x9b2e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9b2f, .a=0x38, .x=0xa9, .y=0xb0, .sp=0xa9, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9b2e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9b2e, .value=0x9d, .type=IO_READ},
        {.addr=0x9b2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x7358, .a=0x60, .x=0xb5, .y=0x6f, .sp=0xab, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x7358, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7359, .a=0x60, .x=0xab, .y=0x6f, .sp=0xab, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x7358, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7358, .value=0x9d, .type=IO_READ},
        {.addr=0x7359, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x9df5, .a=0xf3, .x=0x2c, .y=0x61, .sp=0xad, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x9df5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9df6, .a=0xf3, .x=0xad, .y=0x61, .sp=0xad, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x9df5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9df5, .value=0x9d, .type=IO_READ},
        {.addr=0x9df6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xee14, .a=0xf5, .x=0x3e, .y=0x75, .sp=0x8f, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xee14, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xee15, .a=0xf5, .x=0x8f, .y=0x75, .sp=0x8f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xee14, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xee14, .value=0x9d, .type=IO_READ},
        {.addr=0xee15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xe89e, .a=0x07, .x=0xcf, .y=0xd1, .sp=0xa8, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xe89e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe89f, .a=0x07, .x=0xa8, .y=0xd1, .sp=0xa8, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xe89e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe89e, .value=0x9d, .type=IO_READ},
        {.addr=0xe89f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x7ac8, .a=0x89, .x=0x65, .y=0x8d, .sp=0x6a, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x7ac8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7ac9, .a=0x89, .x=0x6a, .y=0x8d, .sp=0x6a, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x7ac8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7ac8, .value=0x9d, .type=IO_READ},
        {.addr=0x7ac9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x5848, .a=0x4e, .x=0xd7, .y=0x63, .sp=0x76, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x5848, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5849, .a=0x4e, .x=0x76, .y=0x63, .sp=0x76, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x5848, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5848, .value=0x9d, .type=IO_READ},
        {.addr=0x5849, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xdaef, .a=0xf7, .x=0xcc, .y=0xbc, .sp=0xc9, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xdaef, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xdaf0, .a=0xf7, .x=0xc9, .y=0xbc, .sp=0xc9, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xdaef, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xdaef, .value=0x9d, .type=IO_READ},
        {.addr=0xdaf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x1c0f, .a=0xa5, .x=0xc0, .y=0x20, .sp=0xfb, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x1c0f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1c10, .a=0xa5, .x=0xfb, .y=0x20, .sp=0xfb, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x1c0f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1c0f, .value=0x9d, .type=IO_READ},
        {.addr=0x1c10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xac78, .a=0x19, .x=0x9d, .y=0xd6, .sp=0x2d, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xac78, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xac79, .a=0x19, .x=0x2d, .y=0xd6, .sp=0x2d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xac78, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xac78, .value=0x9d, .type=IO_READ},
        {.addr=0xac79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x69f1, .a=0xe6, .x=0x79, .y=0x19, .sp=0xa8, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x69f1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x69f2, .a=0xe6, .x=0xa8, .y=0x19, .sp=0xa8, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x69f1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x69f1, .value=0x9d, .type=IO_READ},
        {.addr=0x69f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x3f2a, .a=0xfc, .x=0x68, .y=0x5e, .sp=0x7a, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x3f2a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3f2b, .a=0xfc, .x=0x7a, .y=0x5e, .sp=0x7a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x3f2a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3f2a, .value=0x9d, .type=IO_READ},
        {.addr=0x3f2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x6093, .a=0xb5, .x=0x77, .y=0x76, .sp=0x5b, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x6093, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6094, .a=0xb5, .x=0x5b, .y=0x76, .sp=0x5b, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x6093, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6093, .value=0x9d, .type=IO_READ},
        {.addr=0x6094, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x0145, .a=0x36, .x=0x30, .y=0x35, .sp=0x39, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0146, .a=0x36, .x=0x39, .y=0x35, .sp=0x39, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0145, .value=0x9d, .type=IO_READ},
        {.addr=0x0146, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xd1b5, .a=0xdd, .x=0x76, .y=0x86, .sp=0x65, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xd1b5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd1b6, .a=0xdd, .x=0x65, .y=0x86, .sp=0x65, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xd1b5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd1b5, .value=0x9d, .type=IO_READ},
        {.addr=0xd1b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x6e8f, .a=0x2c, .x=0x8c, .y=0x73, .sp=0xe1, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x6e8f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6e90, .a=0x2c, .x=0xe1, .y=0x73, .sp=0xe1, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x6e8f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6e8f, .value=0x9d, .type=IO_READ},
        {.addr=0x6e90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x4859, .a=0x4f, .x=0xd2, .y=0x19, .sp=0xd2, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x4859, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x485a, .a=0x4f, .x=0xd2, .y=0x19, .sp=0xd2, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x4859, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4859, .value=0x9d, .type=IO_READ},
        {.addr=0x485a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x8b81, .a=0xaa, .x=0x16, .y=0xd4, .sp=0x0f, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x8b81, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8b82, .a=0xaa, .x=0x0f, .y=0xd4, .sp=0x0f, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x8b81, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8b81, .value=0x9d, .type=IO_READ},
        {.addr=0x8b82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x5c44, .a=0x0c, .x=0xb5, .y=0x4d, .sp=0x83, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x5c44, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5c45, .a=0x0c, .x=0x83, .y=0x4d, .sp=0x83, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x5c44, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5c44, .value=0x9d, .type=IO_READ},
        {.addr=0x5c45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xeb01, .a=0x1b, .x=0x09, .y=0xc0, .sp=0x62, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xeb01, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xeb02, .a=0x1b, .x=0x62, .y=0xc0, .sp=0x62, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xeb01, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xeb01, .value=0x9d, .type=IO_READ},
        {.addr=0xeb02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xea77, .a=0x31, .x=0xca, .y=0x2e, .sp=0x1c, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xea77, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xea78, .a=0x31, .x=0x1c, .y=0x2e, .sp=0x1c, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xea77, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xea77, .value=0x9d, .type=IO_READ},
        {.addr=0xea78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xc9c9, .a=0xd5, .x=0x30, .y=0xe4, .sp=0x06, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xc9c9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc9ca, .a=0xd5, .x=0x06, .y=0xe4, .sp=0x06, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xc9c9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc9c9, .value=0x9d, .type=IO_READ},
        {.addr=0xc9ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x6c41, .a=0x49, .x=0xff, .y=0x8f, .sp=0x53, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x6c41, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6c42, .a=0x49, .x=0x53, .y=0x8f, .sp=0x53, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x6c41, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6c41, .value=0x9d, .type=IO_READ},
        {.addr=0x6c42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xe513, .a=0x9c, .x=0xcc, .y=0x1b, .sp=0xa5, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xe513, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe514, .a=0x9c, .x=0xa5, .y=0x1b, .sp=0xa5, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xe513, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe513, .value=0x9d, .type=IO_READ},
        {.addr=0xe514, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x1aaf, .a=0x23, .x=0x65, .y=0xa9, .sp=0x57, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x1aaf, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1ab0, .a=0x23, .x=0x57, .y=0xa9, .sp=0x57, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x1aaf, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1aaf, .value=0x9d, .type=IO_READ},
        {.addr=0x1ab0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xd474, .a=0xab, .x=0xab, .y=0x08, .sp=0xda, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xd474, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd475, .a=0xab, .x=0xda, .y=0x08, .sp=0xda, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xd474, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd474, .value=0x9d, .type=IO_READ},
        {.addr=0xd475, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x481a, .a=0x82, .x=0x9e, .y=0x6a, .sp=0x3a, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x481a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x481b, .a=0x82, .x=0x3a, .y=0x6a, .sp=0x3a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x481a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x481a, .value=0x9d, .type=IO_READ},
        {.addr=0x481b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x1e7b, .a=0x03, .x=0x2d, .y=0x6f, .sp=0x7a, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x1e7b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1e7c, .a=0x03, .x=0x7a, .y=0x6f, .sp=0x7a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x1e7b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1e7b, .value=0x9d, .type=IO_READ},
        {.addr=0x1e7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x3b11, .a=0x6e, .x=0x81, .y=0x81, .sp=0xf0, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x3b11, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3b12, .a=0x6e, .x=0xf0, .y=0x81, .sp=0xf0, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x3b11, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3b11, .value=0x9d, .type=IO_READ},
        {.addr=0x3b12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0100) {
    const struct CPU_State initial_cpu = {.pc=0x5ec5, .a=0x2c, .x=0xce, .y=0x34, .sp=0x00, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x5ec5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5ec6, .a=0x2c, .x=0x00, .y=0x34, .sp=0x00, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x5ec5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5ec5, .value=0x9d, .type=IO_READ},
        {.addr=0x5ec6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0101) {
    const struct CPU_State initial_cpu = {.pc=0xc4c4, .a=0xac, .x=0xa6, .y=0x09, .sp=0x51, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xc4c4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc4c5, .a=0xac, .x=0x51, .y=0x09, .sp=0x51, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xc4c4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc4c4, .value=0x9d, .type=IO_READ},
        {.addr=0xc4c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0102) {
    const struct CPU_State initial_cpu = {.pc=0x38b2, .a=0xd7, .x=0x84, .y=0xef, .sp=0x89, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x38b2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x38b3, .a=0xd7, .x=0x89, .y=0xef, .sp=0x89, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x38b2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x38b2, .value=0x9d, .type=IO_READ},
        {.addr=0x38b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0103) {
    const struct CPU_State initial_cpu = {.pc=0xb40b, .a=0x45, .x=0xa1, .y=0x4a, .sp=0xf6, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xb40b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb40c, .a=0x45, .x=0xf6, .y=0x4a, .sp=0xf6, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xb40b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb40b, .value=0x9d, .type=IO_READ},
        {.addr=0xb40c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0104) {
    const struct CPU_State initial_cpu = {.pc=0xeba4, .a=0x9d, .x=0xda, .y=0x50, .sp=0x9f, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xeba4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xeba5, .a=0x9d, .x=0x9f, .y=0x50, .sp=0x9f, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xeba4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xeba4, .value=0x9d, .type=IO_READ},
        {.addr=0xeba5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0105) {
    const struct CPU_State initial_cpu = {.pc=0x255d, .a=0xda, .x=0x53, .y=0x73, .sp=0x1b, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x255d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x255e, .a=0xda, .x=0x1b, .y=0x73, .sp=0x1b, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x255d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x255d, .value=0x9d, .type=IO_READ},
        {.addr=0x255e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0106) {
    const struct CPU_State initial_cpu = {.pc=0xdcb1, .a=0xd9, .x=0x8c, .y=0x47, .sp=0x54, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xdcb1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xdcb2, .a=0xd9, .x=0x54, .y=0x47, .sp=0x54, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xdcb1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xdcb1, .value=0x9d, .type=IO_READ},
        {.addr=0xdcb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0107) {
    const struct CPU_State initial_cpu = {.pc=0x83f2, .a=0x00, .x=0x1f, .y=0x8a, .sp=0x2a, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x83f2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x83f3, .a=0x00, .x=0x2a, .y=0x8a, .sp=0x2a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x83f2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x83f2, .value=0x9d, .type=IO_READ},
        {.addr=0x83f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0108) {
    const struct CPU_State initial_cpu = {.pc=0xc901, .a=0xe7, .x=0xda, .y=0xb2, .sp=0xdc, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xc901, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc902, .a=0xe7, .x=0xdc, .y=0xb2, .sp=0xdc, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xc901, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc901, .value=0x9d, .type=IO_READ},
        {.addr=0xc902, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0109) {
    const struct CPU_State initial_cpu = {.pc=0x5380, .a=0x20, .x=0xdf, .y=0xb2, .sp=0x7b, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x5380, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5381, .a=0x20, .x=0x7b, .y=0xb2, .sp=0x7b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x5380, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5380, .value=0x9d, .type=IO_READ},
        {.addr=0x5381, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_010A) {
    const struct CPU_State initial_cpu = {.pc=0x9b81, .a=0xf1, .x=0x77, .y=0xf1, .sp=0x48, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x9b81, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9b82, .a=0xf1, .x=0x48, .y=0xf1, .sp=0x48, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x9b81, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9b81, .value=0x9d, .type=IO_READ},
        {.addr=0x9b82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_010B) {
    const struct CPU_State initial_cpu = {.pc=0xc3e7, .a=0x35, .x=0x6d, .y=0x8e, .sp=0x3a, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xc3e7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc3e8, .a=0x35, .x=0x3a, .y=0x8e, .sp=0x3a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xc3e7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc3e7, .value=0x9d, .type=IO_READ},
        {.addr=0xc3e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_010C) {
    const struct CPU_State initial_cpu = {.pc=0x7b5f, .a=0xa2, .x=0x52, .y=0x75, .sp=0x90, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x7b5f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7b60, .a=0xa2, .x=0x90, .y=0x75, .sp=0x90, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x7b5f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7b5f, .value=0x9d, .type=IO_READ},
        {.addr=0x7b60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_010D) {
    const struct CPU_State initial_cpu = {.pc=0xe066, .a=0x4f, .x=0xe3, .y=0x72, .sp=0x07, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xe066, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe067, .a=0x4f, .x=0x07, .y=0x72, .sp=0x07, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xe066, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe066, .value=0x9d, .type=IO_READ},
        {.addr=0xe067, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_010E) {
    const struct CPU_State initial_cpu = {.pc=0x90e1, .a=0x7d, .x=0xbf, .y=0xfe, .sp=0x78, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x90e1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x90e2, .a=0x7d, .x=0x78, .y=0xfe, .sp=0x78, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x90e1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x90e1, .value=0x9d, .type=IO_READ},
        {.addr=0x90e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_010F) {
    const struct CPU_State initial_cpu = {.pc=0x6dcb, .a=0xeb, .x=0x77, .y=0x63, .sp=0x4d, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x6dcb, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6dcc, .a=0xeb, .x=0x4d, .y=0x63, .sp=0x4d, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x6dcb, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6dcb, .value=0x9d, .type=IO_READ},
        {.addr=0x6dcc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0110) {
    const struct CPU_State initial_cpu = {.pc=0x5fb8, .a=0x00, .x=0x10, .y=0x2f, .sp=0x11, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x5fb8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5fb9, .a=0x00, .x=0x11, .y=0x2f, .sp=0x11, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x5fb8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5fb8, .value=0x9d, .type=IO_READ},
        {.addr=0x5fb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0111) {
    const struct CPU_State initial_cpu = {.pc=0x4c2f, .a=0xfc, .x=0x4d, .y=0xb6, .sp=0x1c, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x4c2f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4c30, .a=0xfc, .x=0x1c, .y=0xb6, .sp=0x1c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x4c2f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4c2f, .value=0x9d, .type=IO_READ},
        {.addr=0x4c30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0112) {
    const struct CPU_State initial_cpu = {.pc=0xbb34, .a=0x95, .x=0xf3, .y=0x92, .sp=0x43, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xbb34, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbb35, .a=0x95, .x=0x43, .y=0x92, .sp=0x43, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xbb34, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbb34, .value=0x9d, .type=IO_READ},
        {.addr=0xbb35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0113) {
    const struct CPU_State initial_cpu = {.pc=0x8856, .a=0x35, .x=0x48, .y=0x30, .sp=0x6b, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x8856, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8857, .a=0x35, .x=0x6b, .y=0x30, .sp=0x6b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x8856, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8856, .value=0x9d, .type=IO_READ},
        {.addr=0x8857, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0114) {
    const struct CPU_State initial_cpu = {.pc=0x9144, .a=0xc3, .x=0xe7, .y=0x3c, .sp=0xc5, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x9144, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9145, .a=0xc3, .x=0xc5, .y=0x3c, .sp=0xc5, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9144, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9144, .value=0x9d, .type=IO_READ},
        {.addr=0x9145, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0115) {
    const struct CPU_State initial_cpu = {.pc=0xde1b, .a=0x8a, .x=0x2b, .y=0x91, .sp=0x41, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xde1b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xde1c, .a=0x8a, .x=0x41, .y=0x91, .sp=0x41, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xde1b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xde1b, .value=0x9d, .type=IO_READ},
        {.addr=0xde1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0116) {
    const struct CPU_State initial_cpu = {.pc=0x8e51, .a=0x99, .x=0xc4, .y=0xda, .sp=0x7b, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x8e51, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8e52, .a=0x99, .x=0x7b, .y=0xda, .sp=0x7b, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x8e51, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8e51, .value=0x9d, .type=IO_READ},
        {.addr=0x8e52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0117) {
    const struct CPU_State initial_cpu = {.pc=0x9aa7, .a=0x4f, .x=0x54, .y=0xaa, .sp=0x99, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x9aa7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9aa8, .a=0x4f, .x=0x99, .y=0xaa, .sp=0x99, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x9aa7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9aa7, .value=0x9d, .type=IO_READ},
        {.addr=0x9aa8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0118) {
    const struct CPU_State initial_cpu = {.pc=0x0018, .a=0x58, .x=0x3c, .y=0x04, .sp=0xcf, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0019, .a=0x58, .x=0xcf, .y=0x04, .sp=0xcf, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0018, .value=0x9d, .type=IO_READ},
        {.addr=0x0019, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0119) {
    const struct CPU_State initial_cpu = {.pc=0xf511, .a=0x5e, .x=0x9a, .y=0x59, .sp=0xb2, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xf511, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf512, .a=0x5e, .x=0xb2, .y=0x59, .sp=0xb2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf511, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf511, .value=0x9d, .type=IO_READ},
        {.addr=0xf512, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_011A) {
    const struct CPU_State initial_cpu = {.pc=0x6d99, .a=0xfd, .x=0xcf, .y=0x99, .sp=0xda, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x6d99, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6d9a, .a=0xfd, .x=0xda, .y=0x99, .sp=0xda, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x6d99, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6d99, .value=0x9d, .type=IO_READ},
        {.addr=0x6d9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_011B) {
    const struct CPU_State initial_cpu = {.pc=0x1e28, .a=0x9c, .x=0x91, .y=0x1e, .sp=0xbd, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x1e28, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1e29, .a=0x9c, .x=0xbd, .y=0x1e, .sp=0xbd, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x1e28, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1e28, .value=0x9d, .type=IO_READ},
        {.addr=0x1e29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_011C) {
    const struct CPU_State initial_cpu = {.pc=0xe2f3, .a=0xec, .x=0xe4, .y=0xb8, .sp=0x4f, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xe2f3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe2f4, .a=0xec, .x=0x4f, .y=0xb8, .sp=0x4f, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xe2f3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe2f3, .value=0x9d, .type=IO_READ},
        {.addr=0xe2f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_011D) {
    const struct CPU_State initial_cpu = {.pc=0xd24e, .a=0xfe, .x=0xbe, .y=0x89, .sp=0x01, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xd24e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd24f, .a=0xfe, .x=0x01, .y=0x89, .sp=0x01, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xd24e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd24e, .value=0x9d, .type=IO_READ},
        {.addr=0xd24f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_011E) {
    const struct CPU_State initial_cpu = {.pc=0x62c5, .a=0xc0, .x=0xdc, .y=0x1f, .sp=0x44, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x62c5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x62c6, .a=0xc0, .x=0x44, .y=0x1f, .sp=0x44, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x62c5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x62c5, .value=0x9d, .type=IO_READ},
        {.addr=0x62c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_011F) {
    const struct CPU_State initial_cpu = {.pc=0xcfed, .a=0x5f, .x=0x95, .y=0x27, .sp=0xd6, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xcfed, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcfee, .a=0x5f, .x=0xd6, .y=0x27, .sp=0xd6, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xcfed, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcfed, .value=0x9d, .type=IO_READ},
        {.addr=0xcfee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0120) {
    const struct CPU_State initial_cpu = {.pc=0x9f66, .a=0x81, .x=0xa9, .y=0x68, .sp=0xc6, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x9f66, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9f67, .a=0x81, .x=0xc6, .y=0x68, .sp=0xc6, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x9f66, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9f66, .value=0x9d, .type=IO_READ},
        {.addr=0x9f67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0121) {
    const struct CPU_State initial_cpu = {.pc=0x56e5, .a=0xd3, .x=0x9d, .y=0x92, .sp=0x24, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x56e5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x56e6, .a=0xd3, .x=0x24, .y=0x92, .sp=0x24, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x56e5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x56e5, .value=0x9d, .type=IO_READ},
        {.addr=0x56e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0122) {
    const struct CPU_State initial_cpu = {.pc=0x127a, .a=0x7c, .x=0x08, .y=0x51, .sp=0x8c, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x127a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x127b, .a=0x7c, .x=0x8c, .y=0x51, .sp=0x8c, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x127a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x127a, .value=0x9d, .type=IO_READ},
        {.addr=0x127b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0123) {
    const struct CPU_State initial_cpu = {.pc=0x8289, .a=0x48, .x=0x44, .y=0x41, .sp=0xf3, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x8289, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x828a, .a=0x48, .x=0xf3, .y=0x41, .sp=0xf3, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x8289, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8289, .value=0x9d, .type=IO_READ},
        {.addr=0x828a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0124) {
    const struct CPU_State initial_cpu = {.pc=0x4cba, .a=0x9a, .x=0xc5, .y=0xca, .sp=0x81, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x4cba, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4cbb, .a=0x9a, .x=0x81, .y=0xca, .sp=0x81, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x4cba, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4cba, .value=0x9d, .type=IO_READ},
        {.addr=0x4cbb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0125) {
    const struct CPU_State initial_cpu = {.pc=0x4246, .a=0xc1, .x=0x45, .y=0x8f, .sp=0xa0, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x4246, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4247, .a=0xc1, .x=0xa0, .y=0x8f, .sp=0xa0, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x4246, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4246, .value=0x9d, .type=IO_READ},
        {.addr=0x4247, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0126) {
    const struct CPU_State initial_cpu = {.pc=0x50ef, .a=0x69, .x=0x09, .y=0x2f, .sp=0xd8, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x50ef, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x50f0, .a=0x69, .x=0xd8, .y=0x2f, .sp=0xd8, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x50ef, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x50ef, .value=0x9d, .type=IO_READ},
        {.addr=0x50f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0127) {
    const struct CPU_State initial_cpu = {.pc=0x6622, .a=0xe8, .x=0x8e, .y=0x06, .sp=0xe6, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x6622, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6623, .a=0xe8, .x=0xe6, .y=0x06, .sp=0xe6, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x6622, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6622, .value=0x9d, .type=IO_READ},
        {.addr=0x6623, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0128) {
    const struct CPU_State initial_cpu = {.pc=0x0811, .a=0xbd, .x=0xbe, .y=0xb0, .sp=0xf8, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0811, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0812, .a=0xbd, .x=0xf8, .y=0xb0, .sp=0xf8, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0811, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0811, .value=0x9d, .type=IO_READ},
        {.addr=0x0812, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0129) {
    const struct CPU_State initial_cpu = {.pc=0x493b, .a=0xc5, .x=0xbb, .y=0xaf, .sp=0xa4, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x493b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x493c, .a=0xc5, .x=0xa4, .y=0xaf, .sp=0xa4, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x493b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x493b, .value=0x9d, .type=IO_READ},
        {.addr=0x493c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_012A) {
    const struct CPU_State initial_cpu = {.pc=0x8b64, .a=0x77, .x=0x42, .y=0xe7, .sp=0xdf, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x8b64, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8b65, .a=0x77, .x=0xdf, .y=0xe7, .sp=0xdf, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x8b64, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8b64, .value=0x9d, .type=IO_READ},
        {.addr=0x8b65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_012B) {
    const struct CPU_State initial_cpu = {.pc=0xa150, .a=0xd0, .x=0xb9, .y=0x91, .sp=0x95, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xa150, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa151, .a=0xd0, .x=0x95, .y=0x91, .sp=0x95, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xa150, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa150, .value=0x9d, .type=IO_READ},
        {.addr=0xa151, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_012C) {
    const struct CPU_State initial_cpu = {.pc=0x4da1, .a=0x7a, .x=0x61, .y=0x54, .sp=0x6f, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x4da1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4da2, .a=0x7a, .x=0x6f, .y=0x54, .sp=0x6f, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x4da1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4da1, .value=0x9d, .type=IO_READ},
        {.addr=0x4da2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_012D) {
    const struct CPU_State initial_cpu = {.pc=0x50fc, .a=0x51, .x=0x27, .y=0xef, .sp=0x43, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x50fc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x50fd, .a=0x51, .x=0x43, .y=0xef, .sp=0x43, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x50fc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x50fc, .value=0x9d, .type=IO_READ},
        {.addr=0x50fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_012E) {
    const struct CPU_State initial_cpu = {.pc=0xc373, .a=0x70, .x=0x8c, .y=0xf5, .sp=0x39, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xc373, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc374, .a=0x70, .x=0x39, .y=0xf5, .sp=0x39, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xc373, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc373, .value=0x9d, .type=IO_READ},
        {.addr=0xc374, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_012F) {
    const struct CPU_State initial_cpu = {.pc=0xb742, .a=0xa1, .x=0x20, .y=0x52, .sp=0x20, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xb742, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb743, .a=0xa1, .x=0x20, .y=0x52, .sp=0x20, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xb742, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb742, .value=0x9d, .type=IO_READ},
        {.addr=0xb743, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0130) {
    const struct CPU_State initial_cpu = {.pc=0x2b95, .a=0x4e, .x=0x64, .y=0x79, .sp=0x8a, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x2b95, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2b96, .a=0x4e, .x=0x8a, .y=0x79, .sp=0x8a, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2b95, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2b95, .value=0x9d, .type=IO_READ},
        {.addr=0x2b96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0131) {
    const struct CPU_State initial_cpu = {.pc=0xd263, .a=0x66, .x=0x1f, .y=0x6b, .sp=0x9f, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xd263, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd264, .a=0x66, .x=0x9f, .y=0x6b, .sp=0x9f, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xd263, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd263, .value=0x9d, .type=IO_READ},
        {.addr=0xd264, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0132) {
    const struct CPU_State initial_cpu = {.pc=0x779d, .a=0x23, .x=0x08, .y=0xe7, .sp=0x26, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x779d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x779e, .a=0x23, .x=0x26, .y=0xe7, .sp=0x26, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x779d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x779d, .value=0x9d, .type=IO_READ},
        {.addr=0x779e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0133) {
    const struct CPU_State initial_cpu = {.pc=0xd7e4, .a=0xf7, .x=0x2e, .y=0x9d, .sp=0x15, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xd7e4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd7e5, .a=0xf7, .x=0x15, .y=0x9d, .sp=0x15, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd7e4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd7e4, .value=0x9d, .type=IO_READ},
        {.addr=0xd7e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0134) {
    const struct CPU_State initial_cpu = {.pc=0x2de7, .a=0x1a, .x=0x59, .y=0x67, .sp=0x7c, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x2de7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2de8, .a=0x1a, .x=0x7c, .y=0x67, .sp=0x7c, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2de7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2de7, .value=0x9d, .type=IO_READ},
        {.addr=0x2de8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0135) {
    const struct CPU_State initial_cpu = {.pc=0xef30, .a=0x4f, .x=0x13, .y=0xb0, .sp=0xf9, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xef30, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xef31, .a=0x4f, .x=0xf9, .y=0xb0, .sp=0xf9, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xef30, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xef30, .value=0x9d, .type=IO_READ},
        {.addr=0xef31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0136) {
    const struct CPU_State initial_cpu = {.pc=0x2066, .a=0xf0, .x=0xd1, .y=0x4e, .sp=0xcd, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x2066, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2067, .a=0xf0, .x=0xcd, .y=0x4e, .sp=0xcd, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x2066, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2066, .value=0x9d, .type=IO_READ},
        {.addr=0x2067, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0137) {
    const struct CPU_State initial_cpu = {.pc=0x6e17, .a=0x35, .x=0x8a, .y=0xae, .sp=0x9e, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x6e17, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6e18, .a=0x35, .x=0x9e, .y=0xae, .sp=0x9e, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x6e17, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6e17, .value=0x9d, .type=IO_READ},
        {.addr=0x6e18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0138) {
    const struct CPU_State initial_cpu = {.pc=0x8b68, .a=0xb8, .x=0x71, .y=0x31, .sp=0x6a, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x8b68, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8b69, .a=0xb8, .x=0x6a, .y=0x31, .sp=0x6a, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x8b68, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8b68, .value=0x9d, .type=IO_READ},
        {.addr=0x8b69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0139) {
    const struct CPU_State initial_cpu = {.pc=0x24bc, .a=0x14, .x=0xc6, .y=0x66, .sp=0x4c, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x24bc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x24bd, .a=0x14, .x=0x4c, .y=0x66, .sp=0x4c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x24bc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x24bc, .value=0x9d, .type=IO_READ},
        {.addr=0x24bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_013A) {
    const struct CPU_State initial_cpu = {.pc=0x471c, .a=0x70, .x=0xb0, .y=0x74, .sp=0x2f, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x471c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x471d, .a=0x70, .x=0x2f, .y=0x74, .sp=0x2f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x471c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x471c, .value=0x9d, .type=IO_READ},
        {.addr=0x471d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_013B) {
    const struct CPU_State initial_cpu = {.pc=0x560d, .a=0x9d, .x=0xa0, .y=0xd2, .sp=0x22, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x560d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x560e, .a=0x9d, .x=0x22, .y=0xd2, .sp=0x22, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x560d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x560d, .value=0x9d, .type=IO_READ},
        {.addr=0x560e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_013C) {
    const struct CPU_State initial_cpu = {.pc=0xe811, .a=0xd5, .x=0x9e, .y=0xd9, .sp=0x9f, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xe811, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe812, .a=0xd5, .x=0x9f, .y=0xd9, .sp=0x9f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xe811, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe811, .value=0x9d, .type=IO_READ},
        {.addr=0xe812, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_013D) {
    const struct CPU_State initial_cpu = {.pc=0x3e42, .a=0x63, .x=0x83, .y=0x88, .sp=0xd6, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x3e42, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3e43, .a=0x63, .x=0xd6, .y=0x88, .sp=0xd6, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x3e42, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3e42, .value=0x9d, .type=IO_READ},
        {.addr=0x3e43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_013E) {
    const struct CPU_State initial_cpu = {.pc=0xc388, .a=0xf7, .x=0xe1, .y=0x82, .sp=0x17, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xc388, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc389, .a=0xf7, .x=0x17, .y=0x82, .sp=0x17, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xc388, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc388, .value=0x9d, .type=IO_READ},
        {.addr=0xc389, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_013F) {
    const struct CPU_State initial_cpu = {.pc=0x28f0, .a=0x38, .x=0xb4, .y=0xfb, .sp=0xa8, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x28f0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x28f1, .a=0x38, .x=0xa8, .y=0xfb, .sp=0xa8, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x28f0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x28f0, .value=0x9d, .type=IO_READ},
        {.addr=0x28f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0140) {
    const struct CPU_State initial_cpu = {.pc=0xe162, .a=0xfd, .x=0x16, .y=0x31, .sp=0xfe, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xe162, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe163, .a=0xfd, .x=0xfe, .y=0x31, .sp=0xfe, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xe162, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe162, .value=0x9d, .type=IO_READ},
        {.addr=0xe163, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0141) {
    const struct CPU_State initial_cpu = {.pc=0xeeae, .a=0x21, .x=0x53, .y=0x4e, .sp=0x15, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xeeae, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xeeaf, .a=0x21, .x=0x15, .y=0x4e, .sp=0x15, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xeeae, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xeeae, .value=0x9d, .type=IO_READ},
        {.addr=0xeeaf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0142) {
    const struct CPU_State initial_cpu = {.pc=0xb309, .a=0x1e, .x=0x15, .y=0x8a, .sp=0xf1, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xb309, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb30a, .a=0x1e, .x=0xf1, .y=0x8a, .sp=0xf1, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xb309, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb309, .value=0x9d, .type=IO_READ},
        {.addr=0xb30a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0143) {
    const struct CPU_State initial_cpu = {.pc=0xbc9f, .a=0xe2, .x=0x39, .y=0x21, .sp=0x06, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xbc9f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbca0, .a=0xe2, .x=0x06, .y=0x21, .sp=0x06, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xbc9f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbc9f, .value=0x9d, .type=IO_READ},
        {.addr=0xbca0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0144) {
    const struct CPU_State initial_cpu = {.pc=0x02d2, .a=0x81, .x=0xd9, .y=0xf6, .sp=0xd3, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x02d2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x02d3, .a=0x81, .x=0xd3, .y=0xf6, .sp=0xd3, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x02d2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x02d2, .value=0x9d, .type=IO_READ},
        {.addr=0x02d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0145) {
    const struct CPU_State initial_cpu = {.pc=0x64ef, .a=0xc6, .x=0x85, .y=0x23, .sp=0x75, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x64ef, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x64f0, .a=0xc6, .x=0x75, .y=0x23, .sp=0x75, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x64ef, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x64ef, .value=0x9d, .type=IO_READ},
        {.addr=0x64f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0146) {
    const struct CPU_State initial_cpu = {.pc=0x7793, .a=0x9e, .x=0xaa, .y=0x50, .sp=0x66, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x7793, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7794, .a=0x9e, .x=0x66, .y=0x50, .sp=0x66, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x7793, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7793, .value=0x9d, .type=IO_READ},
        {.addr=0x7794, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0147) {
    const struct CPU_State initial_cpu = {.pc=0x496f, .a=0x28, .x=0x1c, .y=0x61, .sp=0x75, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x496f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4970, .a=0x28, .x=0x75, .y=0x61, .sp=0x75, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x496f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x496f, .value=0x9d, .type=IO_READ},
        {.addr=0x4970, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0148) {
    const struct CPU_State initial_cpu = {.pc=0x6f36, .a=0x01, .x=0xb4, .y=0x3a, .sp=0x0f, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x6f36, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6f37, .a=0x01, .x=0x0f, .y=0x3a, .sp=0x0f, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x6f36, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6f36, .value=0x9d, .type=IO_READ},
        {.addr=0x6f37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0149) {
    const struct CPU_State initial_cpu = {.pc=0x1bf0, .a=0x41, .x=0x53, .y=0x95, .sp=0xd4, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x1bf0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1bf1, .a=0x41, .x=0xd4, .y=0x95, .sp=0xd4, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x1bf0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1bf0, .value=0x9d, .type=IO_READ},
        {.addr=0x1bf1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_014A) {
    const struct CPU_State initial_cpu = {.pc=0xda7a, .a=0x7c, .x=0xd7, .y=0x85, .sp=0x63, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xda7a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xda7b, .a=0x7c, .x=0x63, .y=0x85, .sp=0x63, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xda7a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xda7a, .value=0x9d, .type=IO_READ},
        {.addr=0xda7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_014B) {
    const struct CPU_State initial_cpu = {.pc=0xf372, .a=0x85, .x=0x66, .y=0x00, .sp=0x2d, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xf372, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf373, .a=0x85, .x=0x2d, .y=0x00, .sp=0x2d, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xf372, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf372, .value=0x9d, .type=IO_READ},
        {.addr=0xf373, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_014C) {
    const struct CPU_State initial_cpu = {.pc=0x2e4b, .a=0x17, .x=0xb5, .y=0xf1, .sp=0xd0, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x2e4b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2e4c, .a=0x17, .x=0xd0, .y=0xf1, .sp=0xd0, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x2e4b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2e4b, .value=0x9d, .type=IO_READ},
        {.addr=0x2e4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_014D) {
    const struct CPU_State initial_cpu = {.pc=0x4c7a, .a=0xd7, .x=0xdf, .y=0x19, .sp=0x56, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x4c7a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4c7b, .a=0xd7, .x=0x56, .y=0x19, .sp=0x56, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x4c7a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4c7a, .value=0x9d, .type=IO_READ},
        {.addr=0x4c7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_014E) {
    const struct CPU_State initial_cpu = {.pc=0x833d, .a=0x7e, .x=0xed, .y=0xb6, .sp=0x56, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x833d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x833e, .a=0x7e, .x=0x56, .y=0xb6, .sp=0x56, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x833d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x833d, .value=0x9d, .type=IO_READ},
        {.addr=0x833e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_014F) {
    const struct CPU_State initial_cpu = {.pc=0x91c8, .a=0x17, .x=0x3d, .y=0xed, .sp=0xd6, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x91c8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x91c9, .a=0x17, .x=0xd6, .y=0xed, .sp=0xd6, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x91c8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x91c8, .value=0x9d, .type=IO_READ},
        {.addr=0x91c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0150) {
    const struct CPU_State initial_cpu = {.pc=0x74fc, .a=0x64, .x=0x5c, .y=0x83, .sp=0x76, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x74fc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x74fd, .a=0x64, .x=0x76, .y=0x83, .sp=0x76, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x74fc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x74fc, .value=0x9d, .type=IO_READ},
        {.addr=0x74fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0151) {
    const struct CPU_State initial_cpu = {.pc=0xe86c, .a=0x2f, .x=0xd9, .y=0x3f, .sp=0x45, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xe86c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe86d, .a=0x2f, .x=0x45, .y=0x3f, .sp=0x45, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xe86c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe86c, .value=0x9d, .type=IO_READ},
        {.addr=0xe86d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0152) {
    const struct CPU_State initial_cpu = {.pc=0xe213, .a=0xf1, .x=0x13, .y=0xc2, .sp=0x9a, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xe213, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe214, .a=0xf1, .x=0x9a, .y=0xc2, .sp=0x9a, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xe213, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe213, .value=0x9d, .type=IO_READ},
        {.addr=0xe214, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0153) {
    const struct CPU_State initial_cpu = {.pc=0x2fe3, .a=0xb9, .x=0xb4, .y=0x5b, .sp=0x50, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x2fe3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2fe4, .a=0xb9, .x=0x50, .y=0x5b, .sp=0x50, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x2fe3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2fe3, .value=0x9d, .type=IO_READ},
        {.addr=0x2fe4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0154) {
    const struct CPU_State initial_cpu = {.pc=0xb1f2, .a=0x48, .x=0xab, .y=0x4e, .sp=0x54, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xb1f2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb1f3, .a=0x48, .x=0x54, .y=0x4e, .sp=0x54, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb1f2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb1f2, .value=0x9d, .type=IO_READ},
        {.addr=0xb1f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0155) {
    const struct CPU_State initial_cpu = {.pc=0x4a52, .a=0x22, .x=0xca, .y=0x83, .sp=0x5b, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x4a52, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4a53, .a=0x22, .x=0x5b, .y=0x83, .sp=0x5b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x4a52, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4a52, .value=0x9d, .type=IO_READ},
        {.addr=0x4a53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0156) {
    const struct CPU_State initial_cpu = {.pc=0xcc21, .a=0x43, .x=0xd0, .y=0x8e, .sp=0x4c, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xcc21, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcc22, .a=0x43, .x=0x4c, .y=0x8e, .sp=0x4c, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xcc21, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcc21, .value=0x9d, .type=IO_READ},
        {.addr=0xcc22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0157) {
    const struct CPU_State initial_cpu = {.pc=0xd597, .a=0xd6, .x=0x27, .y=0xe8, .sp=0x6b, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xd597, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd598, .a=0xd6, .x=0x6b, .y=0xe8, .sp=0x6b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xd597, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd597, .value=0x9d, .type=IO_READ},
        {.addr=0xd598, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0158) {
    const struct CPU_State initial_cpu = {.pc=0x2835, .a=0x21, .x=0x23, .y=0x05, .sp=0x66, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x2835, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2836, .a=0x21, .x=0x66, .y=0x05, .sp=0x66, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x2835, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2835, .value=0x9d, .type=IO_READ},
        {.addr=0x2836, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0159) {
    const struct CPU_State initial_cpu = {.pc=0xb1bb, .a=0x53, .x=0xac, .y=0xca, .sp=0x2b, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xb1bb, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb1bc, .a=0x53, .x=0x2b, .y=0xca, .sp=0x2b, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xb1bb, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb1bb, .value=0x9d, .type=IO_READ},
        {.addr=0xb1bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_015A) {
    const struct CPU_State initial_cpu = {.pc=0xbc79, .a=0x29, .x=0x5a, .y=0x65, .sp=0x8e, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xbc79, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbc7a, .a=0x29, .x=0x8e, .y=0x65, .sp=0x8e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xbc79, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbc79, .value=0x9d, .type=IO_READ},
        {.addr=0xbc7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_015B) {
    const struct CPU_State initial_cpu = {.pc=0xe9a6, .a=0x6e, .x=0x08, .y=0x35, .sp=0x70, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xe9a6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe9a7, .a=0x6e, .x=0x70, .y=0x35, .sp=0x70, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xe9a6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe9a6, .value=0x9d, .type=IO_READ},
        {.addr=0xe9a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_015C) {
    const struct CPU_State initial_cpu = {.pc=0x5fd4, .a=0x65, .x=0xa3, .y=0xa4, .sp=0x93, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x5fd4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5fd5, .a=0x65, .x=0x93, .y=0xa4, .sp=0x93, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x5fd4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5fd4, .value=0x9d, .type=IO_READ},
        {.addr=0x5fd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_015D) {
    const struct CPU_State initial_cpu = {.pc=0x7b8c, .a=0x51, .x=0x46, .y=0xf8, .sp=0x19, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x7b8c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7b8d, .a=0x51, .x=0x19, .y=0xf8, .sp=0x19, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x7b8c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7b8c, .value=0x9d, .type=IO_READ},
        {.addr=0x7b8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_015E) {
    const struct CPU_State initial_cpu = {.pc=0x83a5, .a=0xe0, .x=0x55, .y=0x1e, .sp=0x98, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x83a5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x83a6, .a=0xe0, .x=0x98, .y=0x1e, .sp=0x98, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x83a5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x83a5, .value=0x9d, .type=IO_READ},
        {.addr=0x83a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_015F) {
    const struct CPU_State initial_cpu = {.pc=0x043c, .a=0x96, .x=0x70, .y=0x5d, .sp=0x3c, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x043c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x043d, .a=0x96, .x=0x3c, .y=0x5d, .sp=0x3c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x043c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x043c, .value=0x9d, .type=IO_READ},
        {.addr=0x043d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0160) {
    const struct CPU_State initial_cpu = {.pc=0x6da5, .a=0x38, .x=0x10, .y=0x37, .sp=0xdc, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x6da5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6da6, .a=0x38, .x=0xdc, .y=0x37, .sp=0xdc, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x6da5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6da5, .value=0x9d, .type=IO_READ},
        {.addr=0x6da6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0161) {
    const struct CPU_State initial_cpu = {.pc=0xe409, .a=0xd2, .x=0x1a, .y=0x4b, .sp=0xed, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xe409, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe40a, .a=0xd2, .x=0xed, .y=0x4b, .sp=0xed, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xe409, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe409, .value=0x9d, .type=IO_READ},
        {.addr=0xe40a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0162) {
    const struct CPU_State initial_cpu = {.pc=0x5aa4, .a=0xca, .x=0xc4, .y=0x83, .sp=0x8e, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x5aa4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5aa5, .a=0xca, .x=0x8e, .y=0x83, .sp=0x8e, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x5aa4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5aa4, .value=0x9d, .type=IO_READ},
        {.addr=0x5aa5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0163) {
    const struct CPU_State initial_cpu = {.pc=0xf4b6, .a=0x89, .x=0x34, .y=0x18, .sp=0xe5, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xf4b6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf4b7, .a=0x89, .x=0xe5, .y=0x18, .sp=0xe5, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xf4b6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf4b6, .value=0x9d, .type=IO_READ},
        {.addr=0xf4b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0164) {
    const struct CPU_State initial_cpu = {.pc=0xa2dd, .a=0xf8, .x=0xd9, .y=0x48, .sp=0xff, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xa2dd, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa2de, .a=0xf8, .x=0xff, .y=0x48, .sp=0xff, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xa2dd, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa2dd, .value=0x9d, .type=IO_READ},
        {.addr=0xa2de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0165) {
    const struct CPU_State initial_cpu = {.pc=0x34d9, .a=0x69, .x=0x97, .y=0x8c, .sp=0xbd, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x34d9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x34da, .a=0x69, .x=0xbd, .y=0x8c, .sp=0xbd, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x34d9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x34d9, .value=0x9d, .type=IO_READ},
        {.addr=0x34da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0166) {
    const struct CPU_State initial_cpu = {.pc=0x50a1, .a=0x7f, .x=0x22, .y=0x68, .sp=0xb2, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x50a1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x50a2, .a=0x7f, .x=0xb2, .y=0x68, .sp=0xb2, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x50a1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x50a1, .value=0x9d, .type=IO_READ},
        {.addr=0x50a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0167) {
    const struct CPU_State initial_cpu = {.pc=0x8815, .a=0x21, .x=0x93, .y=0x9c, .sp=0x91, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x8815, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8816, .a=0x21, .x=0x91, .y=0x9c, .sp=0x91, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8815, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8815, .value=0x9d, .type=IO_READ},
        {.addr=0x8816, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0168) {
    const struct CPU_State initial_cpu = {.pc=0x2d34, .a=0xea, .x=0xa8, .y=0x7d, .sp=0xdc, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x2d34, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2d35, .a=0xea, .x=0xdc, .y=0x7d, .sp=0xdc, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x2d34, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2d34, .value=0x9d, .type=IO_READ},
        {.addr=0x2d35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0169) {
    const struct CPU_State initial_cpu = {.pc=0x2d2e, .a=0x76, .x=0xd0, .y=0xa8, .sp=0x26, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x2d2e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2d2f, .a=0x76, .x=0x26, .y=0xa8, .sp=0x26, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x2d2e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2d2e, .value=0x9d, .type=IO_READ},
        {.addr=0x2d2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_016A) {
    const struct CPU_State initial_cpu = {.pc=0x40a2, .a=0xce, .x=0xc4, .y=0x31, .sp=0xcc, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x40a2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x40a3, .a=0xce, .x=0xcc, .y=0x31, .sp=0xcc, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x40a2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x40a2, .value=0x9d, .type=IO_READ},
        {.addr=0x40a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_016B) {
    const struct CPU_State initial_cpu = {.pc=0xba91, .a=0xba, .x=0x96, .y=0xfe, .sp=0xdb, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xba91, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xba92, .a=0xba, .x=0xdb, .y=0xfe, .sp=0xdb, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xba91, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xba91, .value=0x9d, .type=IO_READ},
        {.addr=0xba92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_016C) {
    const struct CPU_State initial_cpu = {.pc=0xf8e7, .a=0xb6, .x=0xea, .y=0x62, .sp=0x7d, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xf8e7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf8e8, .a=0xb6, .x=0x7d, .y=0x62, .sp=0x7d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xf8e7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf8e7, .value=0x9d, .type=IO_READ},
        {.addr=0xf8e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_016D) {
    const struct CPU_State initial_cpu = {.pc=0xebc3, .a=0xa6, .x=0x4e, .y=0xeb, .sp=0x2d, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xebc3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xebc4, .a=0xa6, .x=0x2d, .y=0xeb, .sp=0x2d, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xebc3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xebc3, .value=0x9d, .type=IO_READ},
        {.addr=0xebc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_016E) {
    const struct CPU_State initial_cpu = {.pc=0x576f, .a=0xe4, .x=0x30, .y=0xe3, .sp=0xa3, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x576f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5770, .a=0xe4, .x=0xa3, .y=0xe3, .sp=0xa3, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x576f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x576f, .value=0x9d, .type=IO_READ},
        {.addr=0x5770, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_016F) {
    const struct CPU_State initial_cpu = {.pc=0x5346, .a=0xfb, .x=0xd0, .y=0x36, .sp=0x26, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x5346, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5347, .a=0xfb, .x=0x26, .y=0x36, .sp=0x26, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x5346, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5346, .value=0x9d, .type=IO_READ},
        {.addr=0x5347, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0170) {
    const struct CPU_State initial_cpu = {.pc=0xad8a, .a=0xba, .x=0x89, .y=0xc3, .sp=0x18, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xad8a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xad8b, .a=0xba, .x=0x18, .y=0xc3, .sp=0x18, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xad8a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xad8a, .value=0x9d, .type=IO_READ},
        {.addr=0xad8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0171) {
    const struct CPU_State initial_cpu = {.pc=0x2fea, .a=0x8e, .x=0x42, .y=0x6f, .sp=0xea, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x2fea, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2feb, .a=0x8e, .x=0xea, .y=0x6f, .sp=0xea, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x2fea, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2fea, .value=0x9d, .type=IO_READ},
        {.addr=0x2feb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0172) {
    const struct CPU_State initial_cpu = {.pc=0x3d1f, .a=0x4d, .x=0xc6, .y=0xe6, .sp=0xbc, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x3d1f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3d20, .a=0x4d, .x=0xbc, .y=0xe6, .sp=0xbc, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x3d1f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3d1f, .value=0x9d, .type=IO_READ},
        {.addr=0x3d20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0173) {
    const struct CPU_State initial_cpu = {.pc=0x56f9, .a=0xbb, .x=0xdd, .y=0x2e, .sp=0xd2, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x56f9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x56fa, .a=0xbb, .x=0xd2, .y=0x2e, .sp=0xd2, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x56f9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x56f9, .value=0x9d, .type=IO_READ},
        {.addr=0x56fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0174) {
    const struct CPU_State initial_cpu = {.pc=0xa3bd, .a=0x4d, .x=0xdd, .y=0xc4, .sp=0x19, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xa3bd, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa3be, .a=0x4d, .x=0x19, .y=0xc4, .sp=0x19, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xa3bd, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa3bd, .value=0x9d, .type=IO_READ},
        {.addr=0xa3be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0175) {
    const struct CPU_State initial_cpu = {.pc=0xb388, .a=0xe5, .x=0x05, .y=0x15, .sp=0xe8, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xb388, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb389, .a=0xe5, .x=0xe8, .y=0x15, .sp=0xe8, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xb388, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb388, .value=0x9d, .type=IO_READ},
        {.addr=0xb389, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0176) {
    const struct CPU_State initial_cpu = {.pc=0x23bc, .a=0x95, .x=0x57, .y=0xd7, .sp=0x5c, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x23bc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x23bd, .a=0x95, .x=0x5c, .y=0xd7, .sp=0x5c, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x23bc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x23bc, .value=0x9d, .type=IO_READ},
        {.addr=0x23bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0177) {
    const struct CPU_State initial_cpu = {.pc=0xbcca, .a=0x80, .x=0xd8, .y=0xa1, .sp=0x04, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xbcca, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbccb, .a=0x80, .x=0x04, .y=0xa1, .sp=0x04, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xbcca, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbcca, .value=0x9d, .type=IO_READ},
        {.addr=0xbccb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0178) {
    const struct CPU_State initial_cpu = {.pc=0xb571, .a=0xb1, .x=0x27, .y=0x39, .sp=0x75, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xb571, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb572, .a=0xb1, .x=0x75, .y=0x39, .sp=0x75, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xb571, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb571, .value=0x9d, .type=IO_READ},
        {.addr=0xb572, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0179) {
    const struct CPU_State initial_cpu = {.pc=0x9fa7, .a=0xf9, .x=0xea, .y=0x56, .sp=0x26, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x9fa7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9fa8, .a=0xf9, .x=0x26, .y=0x56, .sp=0x26, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x9fa7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9fa7, .value=0x9d, .type=IO_READ},
        {.addr=0x9fa8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_017A) {
    const struct CPU_State initial_cpu = {.pc=0x9182, .a=0x59, .x=0x80, .y=0x6b, .sp=0x50, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x9182, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9183, .a=0x59, .x=0x50, .y=0x6b, .sp=0x50, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x9182, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9182, .value=0x9d, .type=IO_READ},
        {.addr=0x9183, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_017B) {
    const struct CPU_State initial_cpu = {.pc=0x170d, .a=0xb7, .x=0x47, .y=0xec, .sp=0x8e, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x170d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x170e, .a=0xb7, .x=0x8e, .y=0xec, .sp=0x8e, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x170d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x170d, .value=0x9d, .type=IO_READ},
        {.addr=0x170e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_017C) {
    const struct CPU_State initial_cpu = {.pc=0x1994, .a=0x31, .x=0x00, .y=0x9f, .sp=0x85, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x1994, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1995, .a=0x31, .x=0x85, .y=0x9f, .sp=0x85, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x1994, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1994, .value=0x9d, .type=IO_READ},
        {.addr=0x1995, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_017D) {
    const struct CPU_State initial_cpu = {.pc=0x4156, .a=0x2d, .x=0x39, .y=0x08, .sp=0xbc, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x4156, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4157, .a=0x2d, .x=0xbc, .y=0x08, .sp=0xbc, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x4156, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4156, .value=0x9d, .type=IO_READ},
        {.addr=0x4157, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_017E) {
    const struct CPU_State initial_cpu = {.pc=0x59e3, .a=0xd6, .x=0x37, .y=0x37, .sp=0x23, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x59e3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x59e4, .a=0xd6, .x=0x23, .y=0x37, .sp=0x23, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x59e3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x59e3, .value=0x9d, .type=IO_READ},
        {.addr=0x59e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_017F) {
    const struct CPU_State initial_cpu = {.pc=0x4392, .a=0x6a, .x=0x3c, .y=0xce, .sp=0xc6, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x4392, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4393, .a=0x6a, .x=0xc6, .y=0xce, .sp=0xc6, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x4392, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4392, .value=0x9d, .type=IO_READ},
        {.addr=0x4393, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0180) {
    const struct CPU_State initial_cpu = {.pc=0xb544, .a=0x25, .x=0xfd, .y=0xf4, .sp=0x4a, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xb544, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb545, .a=0x25, .x=0x4a, .y=0xf4, .sp=0x4a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xb544, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb544, .value=0x9d, .type=IO_READ},
        {.addr=0xb545, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0181) {
    const struct CPU_State initial_cpu = {.pc=0xdb38, .a=0x06, .x=0x21, .y=0x0f, .sp=0x8d, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xdb38, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xdb39, .a=0x06, .x=0x8d, .y=0x0f, .sp=0x8d, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xdb38, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xdb38, .value=0x9d, .type=IO_READ},
        {.addr=0xdb39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0182) {
    const struct CPU_State initial_cpu = {.pc=0x4e81, .a=0x82, .x=0x65, .y=0x23, .sp=0xca, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x4e81, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4e82, .a=0x82, .x=0xca, .y=0x23, .sp=0xca, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4e81, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4e81, .value=0x9d, .type=IO_READ},
        {.addr=0x4e82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0183) {
    const struct CPU_State initial_cpu = {.pc=0x46f7, .a=0x01, .x=0x5f, .y=0x96, .sp=0x45, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x46f7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x46f8, .a=0x01, .x=0x45, .y=0x96, .sp=0x45, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x46f7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x46f7, .value=0x9d, .type=IO_READ},
        {.addr=0x46f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0184) {
    const struct CPU_State initial_cpu = {.pc=0x2685, .a=0x18, .x=0xf6, .y=0x18, .sp=0x57, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x2685, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2686, .a=0x18, .x=0x57, .y=0x18, .sp=0x57, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x2685, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2685, .value=0x9d, .type=IO_READ},
        {.addr=0x2686, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0185) {
    const struct CPU_State initial_cpu = {.pc=0xfa35, .a=0x89, .x=0x0a, .y=0xc4, .sp=0x8f, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xfa35, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xfa36, .a=0x89, .x=0x8f, .y=0xc4, .sp=0x8f, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xfa35, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfa35, .value=0x9d, .type=IO_READ},
        {.addr=0xfa36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0186) {
    const struct CPU_State initial_cpu = {.pc=0x6bf1, .a=0x81, .x=0x18, .y=0x93, .sp=0x3f, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x6bf1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6bf2, .a=0x81, .x=0x3f, .y=0x93, .sp=0x3f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x6bf1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6bf1, .value=0x9d, .type=IO_READ},
        {.addr=0x6bf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0187) {
    const struct CPU_State initial_cpu = {.pc=0xd181, .a=0xd7, .x=0x13, .y=0x59, .sp=0x76, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xd181, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd182, .a=0xd7, .x=0x76, .y=0x59, .sp=0x76, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xd181, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd181, .value=0x9d, .type=IO_READ},
        {.addr=0xd182, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0188) {
    const struct CPU_State initial_cpu = {.pc=0x7749, .a=0xb5, .x=0x15, .y=0x93, .sp=0x92, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x7749, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x774a, .a=0xb5, .x=0x92, .y=0x93, .sp=0x92, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x7749, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7749, .value=0x9d, .type=IO_READ},
        {.addr=0x774a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0189) {
    const struct CPU_State initial_cpu = {.pc=0x93be, .a=0x71, .x=0xd7, .y=0xb9, .sp=0x91, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x93be, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x93bf, .a=0x71, .x=0x91, .y=0xb9, .sp=0x91, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x93be, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x93be, .value=0x9d, .type=IO_READ},
        {.addr=0x93bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_018A) {
    const struct CPU_State initial_cpu = {.pc=0xece6, .a=0x54, .x=0x82, .y=0x8b, .sp=0x56, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xece6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xece7, .a=0x54, .x=0x56, .y=0x8b, .sp=0x56, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xece6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xece6, .value=0x9d, .type=IO_READ},
        {.addr=0xece7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_018B) {
    const struct CPU_State initial_cpu = {.pc=0x551d, .a=0x51, .x=0xd8, .y=0x6d, .sp=0xf0, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x551d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x551e, .a=0x51, .x=0xf0, .y=0x6d, .sp=0xf0, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x551d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x551d, .value=0x9d, .type=IO_READ},
        {.addr=0x551e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_018C) {
    const struct CPU_State initial_cpu = {.pc=0x1eef, .a=0x14, .x=0x4e, .y=0x5a, .sp=0x32, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x1eef, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1ef0, .a=0x14, .x=0x32, .y=0x5a, .sp=0x32, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x1eef, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1eef, .value=0x9d, .type=IO_READ},
        {.addr=0x1ef0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_018D) {
    const struct CPU_State initial_cpu = {.pc=0x4b99, .a=0x20, .x=0xa6, .y=0x10, .sp=0x15, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x4b99, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4b9a, .a=0x20, .x=0x15, .y=0x10, .sp=0x15, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x4b99, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4b99, .value=0x9d, .type=IO_READ},
        {.addr=0x4b9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_018E) {
    const struct CPU_State initial_cpu = {.pc=0x5761, .a=0x2b, .x=0x4e, .y=0x16, .sp=0xa7, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x5761, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5762, .a=0x2b, .x=0xa7, .y=0x16, .sp=0xa7, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x5761, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5761, .value=0x9d, .type=IO_READ},
        {.addr=0x5762, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_018F) {
    const struct CPU_State initial_cpu = {.pc=0x1d84, .a=0x1d, .x=0x2f, .y=0x90, .sp=0x99, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x1d84, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1d85, .a=0x1d, .x=0x99, .y=0x90, .sp=0x99, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x1d84, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1d84, .value=0x9d, .type=IO_READ},
        {.addr=0x1d85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0190) {
    const struct CPU_State initial_cpu = {.pc=0xfdce, .a=0x71, .x=0x11, .y=0xfe, .sp=0x9b, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xfdce, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xfdcf, .a=0x71, .x=0x9b, .y=0xfe, .sp=0x9b, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xfdce, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfdce, .value=0x9d, .type=IO_READ},
        {.addr=0xfdcf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0191) {
    const struct CPU_State initial_cpu = {.pc=0xafe7, .a=0xcc, .x=0x96, .y=0x08, .sp=0x80, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xafe7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xafe8, .a=0xcc, .x=0x80, .y=0x08, .sp=0x80, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xafe7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xafe7, .value=0x9d, .type=IO_READ},
        {.addr=0xafe8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0192) {
    const struct CPU_State initial_cpu = {.pc=0x7bf7, .a=0xf9, .x=0xe6, .y=0x0c, .sp=0x8a, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x7bf7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7bf8, .a=0xf9, .x=0x8a, .y=0x0c, .sp=0x8a, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x7bf7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7bf7, .value=0x9d, .type=IO_READ},
        {.addr=0x7bf8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0193) {
    const struct CPU_State initial_cpu = {.pc=0xbe85, .a=0x3d, .x=0xec, .y=0xde, .sp=0x33, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xbe85, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbe86, .a=0x3d, .x=0x33, .y=0xde, .sp=0x33, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xbe85, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbe85, .value=0x9d, .type=IO_READ},
        {.addr=0xbe86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0194) {
    const struct CPU_State initial_cpu = {.pc=0x3ae7, .a=0xa1, .x=0xa0, .y=0xc3, .sp=0x90, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x3ae7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3ae8, .a=0xa1, .x=0x90, .y=0xc3, .sp=0x90, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x3ae7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3ae7, .value=0x9d, .type=IO_READ},
        {.addr=0x3ae8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0195) {
    const struct CPU_State initial_cpu = {.pc=0xb9ae, .a=0x0f, .x=0x69, .y=0x77, .sp=0x7c, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xb9ae, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb9af, .a=0x0f, .x=0x7c, .y=0x77, .sp=0x7c, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xb9ae, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb9ae, .value=0x9d, .type=IO_READ},
        {.addr=0xb9af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0196) {
    const struct CPU_State initial_cpu = {.pc=0x35aa, .a=0x9f, .x=0xf9, .y=0x46, .sp=0xa9, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x35aa, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x35ab, .a=0x9f, .x=0xa9, .y=0x46, .sp=0xa9, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x35aa, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x35aa, .value=0x9d, .type=IO_READ},
        {.addr=0x35ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0197) {
    const struct CPU_State initial_cpu = {.pc=0xa5c8, .a=0x02, .x=0x97, .y=0x20, .sp=0xb7, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xa5c8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa5c9, .a=0x02, .x=0xb7, .y=0x20, .sp=0xb7, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xa5c8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa5c8, .value=0x9d, .type=IO_READ},
        {.addr=0xa5c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0198) {
    const struct CPU_State initial_cpu = {.pc=0xbe64, .a=0xd5, .x=0x36, .y=0xbb, .sp=0x43, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xbe64, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbe65, .a=0xd5, .x=0x43, .y=0xbb, .sp=0x43, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xbe64, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbe64, .value=0x9d, .type=IO_READ},
        {.addr=0xbe65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0199) {
    const struct CPU_State initial_cpu = {.pc=0x3483, .a=0x90, .x=0xf4, .y=0xda, .sp=0xc5, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x3483, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3484, .a=0x90, .x=0xc5, .y=0xda, .sp=0xc5, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x3483, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3483, .value=0x9d, .type=IO_READ},
        {.addr=0x3484, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_019A) {
    const struct CPU_State initial_cpu = {.pc=0x3742, .a=0x2e, .x=0x07, .y=0xc2, .sp=0x5b, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x3742, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3743, .a=0x2e, .x=0x5b, .y=0xc2, .sp=0x5b, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x3742, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3742, .value=0x9d, .type=IO_READ},
        {.addr=0x3743, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_019B) {
    const struct CPU_State initial_cpu = {.pc=0x05b7, .a=0x03, .x=0x08, .y=0xb7, .sp=0x0b, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x05b7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x05b8, .a=0x03, .x=0x0b, .y=0xb7, .sp=0x0b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x05b7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x05b7, .value=0x9d, .type=IO_READ},
        {.addr=0x05b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_019C) {
    const struct CPU_State initial_cpu = {.pc=0x692e, .a=0x4e, .x=0x60, .y=0x72, .sp=0x25, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x692e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x692f, .a=0x4e, .x=0x25, .y=0x72, .sp=0x25, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x692e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x692e, .value=0x9d, .type=IO_READ},
        {.addr=0x692f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_019D) {
    const struct CPU_State initial_cpu = {.pc=0x2fce, .a=0xe4, .x=0x50, .y=0x54, .sp=0xf5, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x2fce, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2fcf, .a=0xe4, .x=0xf5, .y=0x54, .sp=0xf5, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x2fce, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2fce, .value=0x9d, .type=IO_READ},
        {.addr=0x2fcf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_019E) {
    const struct CPU_State initial_cpu = {.pc=0xc2dd, .a=0x33, .x=0x2e, .y=0xee, .sp=0x74, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xc2dd, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc2de, .a=0x33, .x=0x74, .y=0xee, .sp=0x74, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xc2dd, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc2dd, .value=0x9d, .type=IO_READ},
        {.addr=0xc2de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_019F) {
    const struct CPU_State initial_cpu = {.pc=0xdc5a, .a=0xa6, .x=0x5b, .y=0xfe, .sp=0xc1, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xdc5a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xdc5b, .a=0xa6, .x=0xc1, .y=0xfe, .sp=0xc1, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xdc5a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xdc5a, .value=0x9d, .type=IO_READ},
        {.addr=0xdc5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x1400, .a=0xa0, .x=0x6d, .y=0xf4, .sp=0xf9, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x1400, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1401, .a=0xa0, .x=0xf9, .y=0xf4, .sp=0xf9, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x1400, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1400, .value=0x9d, .type=IO_READ},
        {.addr=0x1401, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xd0fb, .a=0xb8, .x=0x7d, .y=0x1c, .sp=0xaa, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xd0fb, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd0fc, .a=0xb8, .x=0xaa, .y=0x1c, .sp=0xaa, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd0fb, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd0fb, .value=0x9d, .type=IO_READ},
        {.addr=0xd0fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x7c6b, .a=0x07, .x=0xa7, .y=0x5d, .sp=0xcc, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x7c6b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7c6c, .a=0x07, .x=0xcc, .y=0x5d, .sp=0xcc, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x7c6b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7c6b, .value=0x9d, .type=IO_READ},
        {.addr=0x7c6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x02db, .a=0x36, .x=0x02, .y=0xf5, .sp=0x8c, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x02db, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x02dc, .a=0x36, .x=0x8c, .y=0xf5, .sp=0x8c, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x02db, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x02db, .value=0x9d, .type=IO_READ},
        {.addr=0x02dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xc905, .a=0x26, .x=0xa5, .y=0xe3, .sp=0x28, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xc905, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc906, .a=0x26, .x=0x28, .y=0xe3, .sp=0x28, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xc905, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc905, .value=0x9d, .type=IO_READ},
        {.addr=0xc906, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x6bbd, .a=0x49, .x=0x90, .y=0x8f, .sp=0xca, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x6bbd, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6bbe, .a=0x49, .x=0xca, .y=0x8f, .sp=0xca, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x6bbd, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6bbd, .value=0x9d, .type=IO_READ},
        {.addr=0x6bbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x603f, .a=0xbd, .x=0x86, .y=0xe4, .sp=0xa8, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x603f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6040, .a=0xbd, .x=0xa8, .y=0xe4, .sp=0xa8, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x603f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x603f, .value=0x9d, .type=IO_READ},
        {.addr=0x6040, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x2b98, .a=0x18, .x=0xef, .y=0x47, .sp=0x02, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x2b98, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2b99, .a=0x18, .x=0x02, .y=0x47, .sp=0x02, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x2b98, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2b98, .value=0x9d, .type=IO_READ},
        {.addr=0x2b99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x47e3, .a=0x6c, .x=0x59, .y=0xd7, .sp=0x23, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x47e3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x47e4, .a=0x6c, .x=0x23, .y=0xd7, .sp=0x23, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x47e3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x47e3, .value=0x9d, .type=IO_READ},
        {.addr=0x47e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xf1f5, .a=0xf0, .x=0x1f, .y=0x81, .sp=0x4a, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xf1f5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf1f6, .a=0xf0, .x=0x4a, .y=0x81, .sp=0x4a, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xf1f5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf1f5, .value=0x9d, .type=IO_READ},
        {.addr=0xf1f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x4739, .a=0xc5, .x=0x7c, .y=0x6e, .sp=0x47, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x4739, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x473a, .a=0xc5, .x=0x47, .y=0x6e, .sp=0x47, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4739, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4739, .value=0x9d, .type=IO_READ},
        {.addr=0x473a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x42c3, .a=0x52, .x=0x19, .y=0x5c, .sp=0x30, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x42c3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x42c4, .a=0x52, .x=0x30, .y=0x5c, .sp=0x30, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x42c3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x42c3, .value=0x9d, .type=IO_READ},
        {.addr=0x42c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x67b0, .a=0x70, .x=0x9b, .y=0xba, .sp=0xa2, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x67b0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x67b1, .a=0x70, .x=0xa2, .y=0xba, .sp=0xa2, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x67b0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x67b0, .value=0x9d, .type=IO_READ},
        {.addr=0x67b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x46c7, .a=0x72, .x=0x21, .y=0x09, .sp=0x28, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x46c7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x46c8, .a=0x72, .x=0x28, .y=0x09, .sp=0x28, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x46c7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x46c7, .value=0x9d, .type=IO_READ},
        {.addr=0x46c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x781b, .a=0x44, .x=0xb3, .y=0x14, .sp=0x7d, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x781b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x781c, .a=0x44, .x=0x7d, .y=0x14, .sp=0x7d, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x781b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x781b, .value=0x9d, .type=IO_READ},
        {.addr=0x781c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xf3a6, .a=0xfc, .x=0xff, .y=0x7f, .sp=0xdd, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xf3a6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf3a7, .a=0xfc, .x=0xdd, .y=0x7f, .sp=0xdd, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf3a6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf3a6, .value=0x9d, .type=IO_READ},
        {.addr=0xf3a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xb60c, .a=0xfb, .x=0x67, .y=0xb5, .sp=0x9a, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xb60c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb60d, .a=0xfb, .x=0x9a, .y=0xb5, .sp=0x9a, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xb60c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb60c, .value=0x9d, .type=IO_READ},
        {.addr=0xb60d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x637e, .a=0x0c, .x=0x76, .y=0x61, .sp=0x2c, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x637e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x637f, .a=0x0c, .x=0x2c, .y=0x61, .sp=0x2c, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x637e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x637e, .value=0x9d, .type=IO_READ},
        {.addr=0x637f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x2f13, .a=0xba, .x=0x05, .y=0xfe, .sp=0x10, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x2f13, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2f14, .a=0xba, .x=0x10, .y=0xfe, .sp=0x10, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x2f13, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2f13, .value=0x9d, .type=IO_READ},
        {.addr=0x2f14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x58b6, .a=0x35, .x=0x77, .y=0x78, .sp=0xa2, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x58b6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x58b7, .a=0x35, .x=0xa2, .y=0x78, .sp=0xa2, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x58b6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x58b6, .value=0x9d, .type=IO_READ},
        {.addr=0x58b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x81a4, .a=0x55, .x=0x12, .y=0x15, .sp=0x57, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x81a4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x81a5, .a=0x55, .x=0x57, .y=0x15, .sp=0x57, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x81a4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x81a4, .value=0x9d, .type=IO_READ},
        {.addr=0x81a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xd835, .a=0xdf, .x=0xa4, .y=0x4d, .sp=0xf3, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xd835, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd836, .a=0xdf, .x=0xf3, .y=0x4d, .sp=0xf3, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xd835, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd835, .value=0x9d, .type=IO_READ},
        {.addr=0xd836, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xbb08, .a=0x6b, .x=0xaa, .y=0x5e, .sp=0xb6, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xbb08, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbb09, .a=0x6b, .x=0xb6, .y=0x5e, .sp=0xb6, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xbb08, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbb08, .value=0x9d, .type=IO_READ},
        {.addr=0xbb09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xb95f, .a=0x3f, .x=0x46, .y=0x96, .sp=0x57, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xb95f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb960, .a=0x3f, .x=0x57, .y=0x96, .sp=0x57, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xb95f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb95f, .value=0x9d, .type=IO_READ},
        {.addr=0xb960, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xb513, .a=0xa8, .x=0xc9, .y=0x1e, .sp=0x4b, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xb513, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb514, .a=0xa8, .x=0x4b, .y=0x1e, .sp=0x4b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xb513, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb513, .value=0x9d, .type=IO_READ},
        {.addr=0xb514, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x1433, .a=0xb2, .x=0x09, .y=0x16, .sp=0xb2, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x1433, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1434, .a=0xb2, .x=0xb2, .y=0x16, .sp=0xb2, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x1433, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1433, .value=0x9d, .type=IO_READ},
        {.addr=0x1434, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xecf8, .a=0x08, .x=0x71, .y=0x52, .sp=0x7c, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xecf8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xecf9, .a=0x08, .x=0x7c, .y=0x52, .sp=0x7c, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xecf8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xecf8, .value=0x9d, .type=IO_READ},
        {.addr=0xecf9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x32e5, .a=0x1b, .x=0x2c, .y=0xc8, .sp=0x6c, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x32e5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x32e6, .a=0x1b, .x=0x6c, .y=0xc8, .sp=0x6c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x32e5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x32e5, .value=0x9d, .type=IO_READ},
        {.addr=0x32e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xfa7e, .a=0x51, .x=0x8b, .y=0xb1, .sp=0x53, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xfa7e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xfa7f, .a=0x51, .x=0x53, .y=0xb1, .sp=0x53, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xfa7e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfa7e, .value=0x9d, .type=IO_READ},
        {.addr=0xfa7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x8a01, .a=0x85, .x=0xe7, .y=0x43, .sp=0x9d, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x8a01, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8a02, .a=0x85, .x=0x9d, .y=0x43, .sp=0x9d, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x8a01, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8a01, .value=0x9d, .type=IO_READ},
        {.addr=0x8a02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xb5ed, .a=0x2b, .x=0xe8, .y=0x58, .sp=0x30, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xb5ed, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb5ee, .a=0x2b, .x=0x30, .y=0x58, .sp=0x30, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xb5ed, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb5ed, .value=0x9d, .type=IO_READ},
        {.addr=0xb5ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xd887, .a=0x74, .x=0xb4, .y=0x37, .sp=0xfd, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xd887, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd888, .a=0x74, .x=0xfd, .y=0x37, .sp=0xfd, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xd887, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd887, .value=0x9d, .type=IO_READ},
        {.addr=0xd888, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x50e0, .a=0x47, .x=0x37, .y=0xce, .sp=0xb7, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x50e0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x50e1, .a=0x47, .x=0xb7, .y=0xce, .sp=0xb7, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x50e0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x50e0, .value=0x9d, .type=IO_READ},
        {.addr=0x50e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x3df8, .a=0x6f, .x=0xe9, .y=0x4b, .sp=0xf1, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x3df8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3df9, .a=0x6f, .x=0xf1, .y=0x4b, .sp=0xf1, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x3df8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3df8, .value=0x9d, .type=IO_READ},
        {.addr=0x3df9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x60ca, .a=0xed, .x=0x5b, .y=0x78, .sp=0x27, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x60ca, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x60cb, .a=0xed, .x=0x27, .y=0x78, .sp=0x27, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x60ca, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x60ca, .value=0x9d, .type=IO_READ},
        {.addr=0x60cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x0c08, .a=0x1a, .x=0x8f, .y=0x71, .sp=0x49, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0c08, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0c09, .a=0x1a, .x=0x49, .y=0x71, .sp=0x49, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0c08, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0c08, .value=0x9d, .type=IO_READ},
        {.addr=0x0c09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xbe92, .a=0xd9, .x=0x06, .y=0x50, .sp=0xde, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xbe92, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbe93, .a=0xd9, .x=0xde, .y=0x50, .sp=0xde, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xbe92, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbe92, .value=0x9d, .type=IO_READ},
        {.addr=0xbe93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x78ce, .a=0x03, .x=0xc7, .y=0x60, .sp=0x77, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x78ce, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x78cf, .a=0x03, .x=0x77, .y=0x60, .sp=0x77, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x78ce, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x78ce, .value=0x9d, .type=IO_READ},
        {.addr=0x78cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x6a45, .a=0x7a, .x=0x53, .y=0x53, .sp=0xed, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x6a45, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6a46, .a=0x7a, .x=0xed, .y=0x53, .sp=0xed, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x6a45, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6a45, .value=0x9d, .type=IO_READ},
        {.addr=0x6a46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xea63, .a=0x76, .x=0xb8, .y=0x0d, .sp=0xa9, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xea63, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xea64, .a=0x76, .x=0xa9, .y=0x0d, .sp=0xa9, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xea63, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xea63, .value=0x9d, .type=IO_READ},
        {.addr=0xea64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xdb85, .a=0x60, .x=0x17, .y=0xd1, .sp=0x3d, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xdb85, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xdb86, .a=0x60, .x=0x3d, .y=0xd1, .sp=0x3d, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xdb85, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xdb85, .value=0x9d, .type=IO_READ},
        {.addr=0xdb86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xdac5, .a=0xfb, .x=0xfe, .y=0x50, .sp=0x12, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xdac5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xdac6, .a=0xfb, .x=0x12, .y=0x50, .sp=0x12, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xdac5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xdac5, .value=0x9d, .type=IO_READ},
        {.addr=0xdac6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xabf9, .a=0x36, .x=0xc7, .y=0x2c, .sp=0xba, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xabf9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xabfa, .a=0x36, .x=0xba, .y=0x2c, .sp=0xba, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xabf9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xabf9, .value=0x9d, .type=IO_READ},
        {.addr=0xabfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x5f5f, .a=0x7c, .x=0x46, .y=0xa6, .sp=0xc0, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x5f5f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5f60, .a=0x7c, .x=0xc0, .y=0xa6, .sp=0xc0, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x5f5f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5f5f, .value=0x9d, .type=IO_READ},
        {.addr=0x5f60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x84c5, .a=0x04, .x=0x13, .y=0x18, .sp=0x25, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x84c5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x84c6, .a=0x04, .x=0x25, .y=0x18, .sp=0x25, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x84c5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x84c5, .value=0x9d, .type=IO_READ},
        {.addr=0x84c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x1793, .a=0x8a, .x=0x0f, .y=0x2a, .sp=0xb8, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x1793, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1794, .a=0x8a, .x=0xb8, .y=0x2a, .sp=0xb8, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x1793, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1793, .value=0x9d, .type=IO_READ},
        {.addr=0x1794, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xa322, .a=0xf1, .x=0x72, .y=0xf0, .sp=0xd4, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xa322, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa323, .a=0xf1, .x=0xd4, .y=0xf0, .sp=0xd4, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xa322, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa322, .value=0x9d, .type=IO_READ},
        {.addr=0xa323, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xdbcf, .a=0xb5, .x=0x87, .y=0x78, .sp=0xe9, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xdbcf, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xdbd0, .a=0xb5, .x=0xe9, .y=0x78, .sp=0xe9, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xdbcf, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xdbcf, .value=0x9d, .type=IO_READ},
        {.addr=0xdbd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xd157, .a=0xe4, .x=0xfb, .y=0xef, .sp=0x88, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xd157, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd158, .a=0xe4, .x=0x88, .y=0xef, .sp=0x88, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xd157, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd157, .value=0x9d, .type=IO_READ},
        {.addr=0xd158, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x74d0, .a=0x97, .x=0x01, .y=0xd0, .sp=0x19, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x74d0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x74d1, .a=0x97, .x=0x19, .y=0xd0, .sp=0x19, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x74d0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x74d0, .value=0x9d, .type=IO_READ},
        {.addr=0x74d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x8898, .a=0x21, .x=0x2e, .y=0x00, .sp=0x80, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x8898, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8899, .a=0x21, .x=0x80, .y=0x00, .sp=0x80, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x8898, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8898, .value=0x9d, .type=IO_READ},
        {.addr=0x8899, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xa2ca, .a=0x38, .x=0xa2, .y=0xeb, .sp=0x51, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xa2ca, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa2cb, .a=0x38, .x=0x51, .y=0xeb, .sp=0x51, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xa2ca, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa2ca, .value=0x9d, .type=IO_READ},
        {.addr=0xa2cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xd2ce, .a=0xfb, .x=0x5b, .y=0xbd, .sp=0x1d, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xd2ce, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd2cf, .a=0xfb, .x=0x1d, .y=0xbd, .sp=0x1d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xd2ce, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd2ce, .value=0x9d, .type=IO_READ},
        {.addr=0xd2cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xe77c, .a=0x4b, .x=0xc3, .y=0x29, .sp=0x2b, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xe77c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe77d, .a=0x4b, .x=0x2b, .y=0x29, .sp=0x2b, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xe77c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe77c, .value=0x9d, .type=IO_READ},
        {.addr=0xe77d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xe9bf, .a=0x7b, .x=0xac, .y=0x20, .sp=0x55, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xe9bf, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe9c0, .a=0x7b, .x=0x55, .y=0x20, .sp=0x55, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xe9bf, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe9bf, .value=0x9d, .type=IO_READ},
        {.addr=0xe9c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x2577, .a=0x0f, .x=0x54, .y=0x7a, .sp=0xbd, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x2577, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2578, .a=0x0f, .x=0xbd, .y=0x7a, .sp=0xbd, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x2577, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2577, .value=0x9d, .type=IO_READ},
        {.addr=0x2578, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x4082, .a=0x27, .x=0xe2, .y=0xc8, .sp=0x4f, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x4082, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4083, .a=0x27, .x=0x4f, .y=0xc8, .sp=0x4f, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4082, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4082, .value=0x9d, .type=IO_READ},
        {.addr=0x4083, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x5f98, .a=0xb7, .x=0x31, .y=0x39, .sp=0xaf, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x5f98, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5f99, .a=0xb7, .x=0xaf, .y=0x39, .sp=0xaf, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x5f98, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5f98, .value=0x9d, .type=IO_READ},
        {.addr=0x5f99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xcaf9, .a=0x22, .x=0xa7, .y=0x28, .sp=0x46, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xcaf9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcafa, .a=0x22, .x=0x46, .y=0x28, .sp=0x46, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xcaf9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcaf9, .value=0x9d, .type=IO_READ},
        {.addr=0xcafa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x5317, .a=0x9c, .x=0x07, .y=0xb7, .sp=0xb3, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x5317, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5318, .a=0x9c, .x=0xb3, .y=0xb7, .sp=0xb3, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x5317, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5317, .value=0x9d, .type=IO_READ},
        {.addr=0x5318, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x09bd, .a=0x7b, .x=0x67, .y=0x6b, .sp=0x23, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x09bd, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x09be, .a=0x7b, .x=0x23, .y=0x6b, .sp=0x23, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x09bd, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x09bd, .value=0x9d, .type=IO_READ},
        {.addr=0x09be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x85cd, .a=0x40, .x=0x64, .y=0x05, .sp=0x9d, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x85cd, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x85ce, .a=0x40, .x=0x9d, .y=0x05, .sp=0x9d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x85cd, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x85cd, .value=0x9d, .type=IO_READ},
        {.addr=0x85ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x547d, .a=0x3f, .x=0x30, .y=0xaf, .sp=0x31, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x547d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x547e, .a=0x3f, .x=0x31, .y=0xaf, .sp=0x31, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x547d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x547d, .value=0x9d, .type=IO_READ},
        {.addr=0x547e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xbb56, .a=0xb8, .x=0x27, .y=0xd9, .sp=0x19, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xbb56, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbb57, .a=0xb8, .x=0x19, .y=0xd9, .sp=0x19, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xbb56, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbb56, .value=0x9d, .type=IO_READ},
        {.addr=0xbb57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x97b6, .a=0x84, .x=0xb4, .y=0x4a, .sp=0x97, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x97b6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x97b7, .a=0x84, .x=0x97, .y=0x4a, .sp=0x97, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x97b6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x97b6, .value=0x9d, .type=IO_READ},
        {.addr=0x97b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xe882, .a=0x4e, .x=0x2b, .y=0x97, .sp=0x6a, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xe882, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe883, .a=0x4e, .x=0x6a, .y=0x97, .sp=0x6a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xe882, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe882, .value=0x9d, .type=IO_READ},
        {.addr=0xe883, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x8b18, .a=0x33, .x=0x5b, .y=0x04, .sp=0x0a, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x8b18, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8b19, .a=0x33, .x=0x0a, .y=0x04, .sp=0x0a, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8b18, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8b18, .value=0x9d, .type=IO_READ},
        {.addr=0x8b19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x2637, .a=0x36, .x=0x47, .y=0x97, .sp=0x60, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x2637, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2638, .a=0x36, .x=0x60, .y=0x97, .sp=0x60, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x2637, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2637, .value=0x9d, .type=IO_READ},
        {.addr=0x2638, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xecd9, .a=0x35, .x=0x2c, .y=0x0a, .sp=0x77, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xecd9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xecda, .a=0x35, .x=0x77, .y=0x0a, .sp=0x77, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xecd9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xecd9, .value=0x9d, .type=IO_READ},
        {.addr=0xecda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x8917, .a=0x8c, .x=0x22, .y=0x64, .sp=0xf7, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x8917, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8918, .a=0x8c, .x=0xf7, .y=0x64, .sp=0xf7, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x8917, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8917, .value=0x9d, .type=IO_READ},
        {.addr=0x8918, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xa597, .a=0x78, .x=0xad, .y=0xb4, .sp=0xe4, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xa597, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa598, .a=0x78, .x=0xe4, .y=0xb4, .sp=0xe4, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xa597, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa597, .value=0x9d, .type=IO_READ},
        {.addr=0xa598, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xf2b7, .a=0xd7, .x=0xac, .y=0x19, .sp=0x8e, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xf2b7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf2b8, .a=0xd7, .x=0x8e, .y=0x19, .sp=0x8e, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xf2b7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf2b7, .value=0x9d, .type=IO_READ},
        {.addr=0xf2b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xfb7a, .a=0x2e, .x=0x57, .y=0xed, .sp=0xf1, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xfb7a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xfb7b, .a=0x2e, .x=0xf1, .y=0xed, .sp=0xf1, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xfb7a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfb7a, .value=0x9d, .type=IO_READ},
        {.addr=0xfb7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x968b, .a=0x0d, .x=0x13, .y=0x56, .sp=0x5f, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x968b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x968c, .a=0x0d, .x=0x5f, .y=0x56, .sp=0x5f, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x968b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x968b, .value=0x9d, .type=IO_READ},
        {.addr=0x968c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x2f2b, .a=0x1a, .x=0xe7, .y=0xf1, .sp=0xfa, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x2f2b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2f2c, .a=0x1a, .x=0xfa, .y=0xf1, .sp=0xfa, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x2f2b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2f2b, .value=0x9d, .type=IO_READ},
        {.addr=0x2f2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x5fe8, .a=0x04, .x=0xcb, .y=0x26, .sp=0x44, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x5fe8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5fe9, .a=0x04, .x=0x44, .y=0x26, .sp=0x44, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x5fe8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5fe8, .value=0x9d, .type=IO_READ},
        {.addr=0x5fe9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xf0cc, .a=0x24, .x=0x74, .y=0xa1, .sp=0x51, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xf0cc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf0cd, .a=0x24, .x=0x51, .y=0xa1, .sp=0x51, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xf0cc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf0cc, .value=0x9d, .type=IO_READ},
        {.addr=0xf0cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xb1eb, .a=0xb8, .x=0x65, .y=0xbd, .sp=0xb5, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xb1eb, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb1ec, .a=0xb8, .x=0xb5, .y=0xbd, .sp=0xb5, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xb1eb, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb1eb, .value=0x9d, .type=IO_READ},
        {.addr=0xb1ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xce30, .a=0x2a, .x=0x6d, .y=0x78, .sp=0x1c, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xce30, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xce31, .a=0x2a, .x=0x1c, .y=0x78, .sp=0x1c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xce30, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xce30, .value=0x9d, .type=IO_READ},
        {.addr=0xce31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x451c, .a=0x18, .x=0xe6, .y=0x8e, .sp=0xa9, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x451c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x451d, .a=0x18, .x=0xa9, .y=0x8e, .sp=0xa9, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x451c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x451c, .value=0x9d, .type=IO_READ},
        {.addr=0x451d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xdb41, .a=0xa2, .x=0x26, .y=0xc3, .sp=0x1b, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xdb41, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xdb42, .a=0xa2, .x=0x1b, .y=0xc3, .sp=0x1b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xdb41, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xdb41, .value=0x9d, .type=IO_READ},
        {.addr=0xdb42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xe9ee, .a=0xa0, .x=0x49, .y=0x0d, .sp=0xe0, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xe9ee, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe9ef, .a=0xa0, .x=0xe0, .y=0x0d, .sp=0xe0, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xe9ee, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe9ee, .value=0x9d, .type=IO_READ},
        {.addr=0xe9ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x360a, .a=0xac, .x=0xcb, .y=0xfe, .sp=0xd6, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x360a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x360b, .a=0xac, .x=0xd6, .y=0xfe, .sp=0xd6, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x360a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x360a, .value=0x9d, .type=IO_READ},
        {.addr=0x360b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xe1c5, .a=0x0a, .x=0x4a, .y=0x75, .sp=0x71, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xe1c5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe1c6, .a=0x0a, .x=0x71, .y=0x75, .sp=0x71, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xe1c5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe1c5, .value=0x9d, .type=IO_READ},
        {.addr=0xe1c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x702c, .a=0x81, .x=0xfa, .y=0xc6, .sp=0x0e, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x702c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x702d, .a=0x81, .x=0x0e, .y=0xc6, .sp=0x0e, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x702c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x702c, .value=0x9d, .type=IO_READ},
        {.addr=0x702d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xf0ea, .a=0xc7, .x=0xc4, .y=0x64, .sp=0xf7, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xf0ea, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf0eb, .a=0xc7, .x=0xf7, .y=0x64, .sp=0xf7, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xf0ea, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf0ea, .value=0x9d, .type=IO_READ},
        {.addr=0xf0eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x1891, .a=0xc9, .x=0x8d, .y=0x73, .sp=0xe1, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x1891, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1892, .a=0xc9, .x=0xe1, .y=0x73, .sp=0xe1, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x1891, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1891, .value=0x9d, .type=IO_READ},
        {.addr=0x1892, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x3c0d, .a=0xc7, .x=0x29, .y=0xc3, .sp=0x6e, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x3c0d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3c0e, .a=0xc7, .x=0x6e, .y=0xc3, .sp=0x6e, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x3c0d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3c0d, .value=0x9d, .type=IO_READ},
        {.addr=0x3c0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x3055, .a=0xcb, .x=0xe6, .y=0x3b, .sp=0xfe, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x3055, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3056, .a=0xcb, .x=0xfe, .y=0x3b, .sp=0xfe, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x3055, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3055, .value=0x9d, .type=IO_READ},
        {.addr=0x3056, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01F9) {
    const struct CPU_State initial_cpu = {.pc=0xdfb9, .a=0xa5, .x=0x79, .y=0x61, .sp=0x22, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xdfb9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xdfba, .a=0xa5, .x=0x22, .y=0x61, .sp=0x22, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xdfb9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xdfb9, .value=0x9d, .type=IO_READ},
        {.addr=0xdfba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x3f0e, .a=0x84, .x=0xb8, .y=0xd8, .sp=0x22, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x3f0e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3f0f, .a=0x84, .x=0x22, .y=0xd8, .sp=0x22, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x3f0e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3f0e, .value=0x9d, .type=IO_READ},
        {.addr=0x3f0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x6c6a, .a=0xa0, .x=0x2d, .y=0x8e, .sp=0x3a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x6c6a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6c6b, .a=0xa0, .x=0x3a, .y=0x8e, .sp=0x3a, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x6c6a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6c6a, .value=0x9d, .type=IO_READ},
        {.addr=0x6c6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x0ed4, .a=0xa9, .x=0xcc, .y=0x5b, .sp=0x22, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0ed4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0ed5, .a=0xa9, .x=0x22, .y=0x5b, .sp=0x22, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0ed4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0ed4, .value=0x9d, .type=IO_READ},
        {.addr=0x0ed5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xec7d, .a=0x01, .x=0x59, .y=0x1b, .sp=0xfa, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xec7d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xec7e, .a=0x01, .x=0xfa, .y=0x1b, .sp=0xfa, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xec7d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xec7d, .value=0x9d, .type=IO_READ},
        {.addr=0xec7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xb141, .a=0x65, .x=0x52, .y=0x86, .sp=0x76, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xb141, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb142, .a=0x65, .x=0x76, .y=0x86, .sp=0x76, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xb141, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb141, .value=0x9d, .type=IO_READ},
        {.addr=0xb142, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x2237, .a=0x6e, .x=0xd9, .y=0x5d, .sp=0xf9, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x2237, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2238, .a=0x6e, .x=0xf9, .y=0x5d, .sp=0xf9, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x2237, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2237, .value=0x9d, .type=IO_READ},
        {.addr=0x2238, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0200) {
    const struct CPU_State initial_cpu = {.pc=0x5dc9, .a=0x1a, .x=0x7d, .y=0x88, .sp=0x22, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x5dc9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5dca, .a=0x1a, .x=0x22, .y=0x88, .sp=0x22, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x5dc9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5dc9, .value=0x9d, .type=IO_READ},
        {.addr=0x5dca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0201) {
    const struct CPU_State initial_cpu = {.pc=0xafd7, .a=0x1a, .x=0x77, .y=0x8d, .sp=0x5b, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xafd7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xafd8, .a=0x1a, .x=0x5b, .y=0x8d, .sp=0x5b, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xafd7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xafd7, .value=0x9d, .type=IO_READ},
        {.addr=0xafd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0202) {
    const struct CPU_State initial_cpu = {.pc=0x9b0c, .a=0x52, .x=0xc0, .y=0x27, .sp=0xd8, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x9b0c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9b0d, .a=0x52, .x=0xd8, .y=0x27, .sp=0xd8, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x9b0c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9b0c, .value=0x9d, .type=IO_READ},
        {.addr=0x9b0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0203) {
    const struct CPU_State initial_cpu = {.pc=0x2991, .a=0x05, .x=0x96, .y=0x87, .sp=0x39, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x2991, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2992, .a=0x05, .x=0x39, .y=0x87, .sp=0x39, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x2991, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2991, .value=0x9d, .type=IO_READ},
        {.addr=0x2992, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0204) {
    const struct CPU_State initial_cpu = {.pc=0xebf3, .a=0x87, .x=0xb9, .y=0x33, .sp=0xa5, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xebf3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xebf4, .a=0x87, .x=0xa5, .y=0x33, .sp=0xa5, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xebf3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xebf3, .value=0x9d, .type=IO_READ},
        {.addr=0xebf4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0205) {
    const struct CPU_State initial_cpu = {.pc=0xda43, .a=0x46, .x=0x6c, .y=0x1c, .sp=0x2e, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xda43, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xda44, .a=0x46, .x=0x2e, .y=0x1c, .sp=0x2e, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xda43, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xda43, .value=0x9d, .type=IO_READ},
        {.addr=0xda44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0206) {
    const struct CPU_State initial_cpu = {.pc=0x5786, .a=0x9e, .x=0x60, .y=0x52, .sp=0xc0, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x5786, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5787, .a=0x9e, .x=0xc0, .y=0x52, .sp=0xc0, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x5786, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5786, .value=0x9d, .type=IO_READ},
        {.addr=0x5787, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0207) {
    const struct CPU_State initial_cpu = {.pc=0x4bbb, .a=0xf3, .x=0x3e, .y=0x6d, .sp=0xae, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x4bbb, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4bbc, .a=0xf3, .x=0xae, .y=0x6d, .sp=0xae, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x4bbb, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4bbb, .value=0x9d, .type=IO_READ},
        {.addr=0x4bbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0208) {
    const struct CPU_State initial_cpu = {.pc=0xb94c, .a=0x76, .x=0x14, .y=0xa9, .sp=0xf0, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xb94c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb94d, .a=0x76, .x=0xf0, .y=0xa9, .sp=0xf0, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb94c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb94c, .value=0x9d, .type=IO_READ},
        {.addr=0xb94d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0209) {
    const struct CPU_State initial_cpu = {.pc=0x5020, .a=0xaa, .x=0x4f, .y=0x35, .sp=0x4a, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x5020, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5021, .a=0xaa, .x=0x4a, .y=0x35, .sp=0x4a, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x5020, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5020, .value=0x9d, .type=IO_READ},
        {.addr=0x5021, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_020A) {
    const struct CPU_State initial_cpu = {.pc=0xfe24, .a=0xf4, .x=0x46, .y=0xb2, .sp=0x1d, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xfe24, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xfe25, .a=0xf4, .x=0x1d, .y=0xb2, .sp=0x1d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xfe24, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfe24, .value=0x9d, .type=IO_READ},
        {.addr=0xfe25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_020B) {
    const struct CPU_State initial_cpu = {.pc=0x7833, .a=0xad, .x=0x9f, .y=0x3d, .sp=0x1c, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x7833, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7834, .a=0xad, .x=0x1c, .y=0x3d, .sp=0x1c, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x7833, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7833, .value=0x9d, .type=IO_READ},
        {.addr=0x7834, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_020C) {
    const struct CPU_State initial_cpu = {.pc=0x5c57, .a=0x21, .x=0x51, .y=0x3f, .sp=0x24, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x5c57, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5c58, .a=0x21, .x=0x24, .y=0x3f, .sp=0x24, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x5c57, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5c57, .value=0x9d, .type=IO_READ},
        {.addr=0x5c58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_020D) {
    const struct CPU_State initial_cpu = {.pc=0x7cbf, .a=0x03, .x=0x05, .y=0x25, .sp=0x1c, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x7cbf, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7cc0, .a=0x03, .x=0x1c, .y=0x25, .sp=0x1c, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x7cbf, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7cbf, .value=0x9d, .type=IO_READ},
        {.addr=0x7cc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_020E) {
    const struct CPU_State initial_cpu = {.pc=0x49ef, .a=0x9f, .x=0x71, .y=0x76, .sp=0x89, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x49ef, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x49f0, .a=0x9f, .x=0x89, .y=0x76, .sp=0x89, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x49ef, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x49ef, .value=0x9d, .type=IO_READ},
        {.addr=0x49f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_020F) {
    const struct CPU_State initial_cpu = {.pc=0x2ab7, .a=0x2e, .x=0x53, .y=0x99, .sp=0xc4, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x2ab7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2ab8, .a=0x2e, .x=0xc4, .y=0x99, .sp=0xc4, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x2ab7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2ab7, .value=0x9d, .type=IO_READ},
        {.addr=0x2ab8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0210) {
    const struct CPU_State initial_cpu = {.pc=0xd651, .a=0x27, .x=0x92, .y=0x35, .sp=0x46, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xd651, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd652, .a=0x27, .x=0x46, .y=0x35, .sp=0x46, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xd651, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd651, .value=0x9d, .type=IO_READ},
        {.addr=0xd652, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0211) {
    const struct CPU_State initial_cpu = {.pc=0x6fef, .a=0x7d, .x=0xf8, .y=0x87, .sp=0x6a, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x6fef, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6ff0, .a=0x7d, .x=0x6a, .y=0x87, .sp=0x6a, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x6fef, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6fef, .value=0x9d, .type=IO_READ},
        {.addr=0x6ff0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0212) {
    const struct CPU_State initial_cpu = {.pc=0x5d8a, .a=0xae, .x=0x2f, .y=0xfd, .sp=0x85, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x5d8a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5d8b, .a=0xae, .x=0x85, .y=0xfd, .sp=0x85, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x5d8a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5d8a, .value=0x9d, .type=IO_READ},
        {.addr=0x5d8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0213) {
    const struct CPU_State initial_cpu = {.pc=0xa55a, .a=0x41, .x=0xab, .y=0x57, .sp=0x58, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xa55a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa55b, .a=0x41, .x=0x58, .y=0x57, .sp=0x58, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xa55a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa55a, .value=0x9d, .type=IO_READ},
        {.addr=0xa55b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0214) {
    const struct CPU_State initial_cpu = {.pc=0x8a2f, .a=0x58, .x=0xcc, .y=0x3c, .sp=0xdf, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x8a2f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8a30, .a=0x58, .x=0xdf, .y=0x3c, .sp=0xdf, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x8a2f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8a2f, .value=0x9d, .type=IO_READ},
        {.addr=0x8a30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0215) {
    const struct CPU_State initial_cpu = {.pc=0x3273, .a=0x83, .x=0x9d, .y=0x0e, .sp=0x71, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x3273, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3274, .a=0x83, .x=0x71, .y=0x0e, .sp=0x71, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x3273, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3273, .value=0x9d, .type=IO_READ},
        {.addr=0x3274, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0216) {
    const struct CPU_State initial_cpu = {.pc=0x13a0, .a=0xd1, .x=0xe2, .y=0xcf, .sp=0x2d, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x13a0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x13a1, .a=0xd1, .x=0x2d, .y=0xcf, .sp=0x2d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x13a0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x13a0, .value=0x9d, .type=IO_READ},
        {.addr=0x13a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0217) {
    const struct CPU_State initial_cpu = {.pc=0xed18, .a=0xb2, .x=0x2c, .y=0x1a, .sp=0x9c, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xed18, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xed19, .a=0xb2, .x=0x9c, .y=0x1a, .sp=0x9c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xed18, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xed18, .value=0x9d, .type=IO_READ},
        {.addr=0xed19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0218) {
    const struct CPU_State initial_cpu = {.pc=0xc66a, .a=0xe4, .x=0x23, .y=0x97, .sp=0xc6, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xc66a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc66b, .a=0xe4, .x=0xc6, .y=0x97, .sp=0xc6, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xc66a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc66a, .value=0x9d, .type=IO_READ},
        {.addr=0xc66b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0219) {
    const struct CPU_State initial_cpu = {.pc=0x7a72, .a=0xc1, .x=0xd0, .y=0x2b, .sp=0x39, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x7a72, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7a73, .a=0xc1, .x=0x39, .y=0x2b, .sp=0x39, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x7a72, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7a72, .value=0x9d, .type=IO_READ},
        {.addr=0x7a73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_021A) {
    const struct CPU_State initial_cpu = {.pc=0x8d92, .a=0x6b, .x=0x93, .y=0x32, .sp=0x46, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x8d92, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8d93, .a=0x6b, .x=0x46, .y=0x32, .sp=0x46, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x8d92, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8d92, .value=0x9d, .type=IO_READ},
        {.addr=0x8d93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_021B) {
    const struct CPU_State initial_cpu = {.pc=0x05e0, .a=0xa9, .x=0x88, .y=0x3b, .sp=0xcb, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x05e0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x05e1, .a=0xa9, .x=0xcb, .y=0x3b, .sp=0xcb, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x05e0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x05e0, .value=0x9d, .type=IO_READ},
        {.addr=0x05e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_021C) {
    const struct CPU_State initial_cpu = {.pc=0xe7ac, .a=0x72, .x=0x29, .y=0xd7, .sp=0x30, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xe7ac, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe7ad, .a=0x72, .x=0x30, .y=0xd7, .sp=0x30, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xe7ac, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe7ac, .value=0x9d, .type=IO_READ},
        {.addr=0xe7ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_021D) {
    const struct CPU_State initial_cpu = {.pc=0xf9e5, .a=0xeb, .x=0xe2, .y=0x0d, .sp=0x84, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xf9e5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf9e6, .a=0xeb, .x=0x84, .y=0x0d, .sp=0x84, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xf9e5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf9e5, .value=0x9d, .type=IO_READ},
        {.addr=0xf9e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_021E) {
    const struct CPU_State initial_cpu = {.pc=0x87bb, .a=0x40, .x=0xda, .y=0xdb, .sp=0xdc, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x87bb, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x87bc, .a=0x40, .x=0xdc, .y=0xdb, .sp=0xdc, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x87bb, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x87bb, .value=0x9d, .type=IO_READ},
        {.addr=0x87bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_021F) {
    const struct CPU_State initial_cpu = {.pc=0x0f17, .a=0x8b, .x=0x25, .y=0xc7, .sp=0x6b, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0f17, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0f18, .a=0x8b, .x=0x6b, .y=0xc7, .sp=0x6b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0f17, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0f17, .value=0x9d, .type=IO_READ},
        {.addr=0x0f18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0220) {
    const struct CPU_State initial_cpu = {.pc=0xc7dc, .a=0x30, .x=0x2d, .y=0xcd, .sp=0x1a, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xc7dc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc7dd, .a=0x30, .x=0x1a, .y=0xcd, .sp=0x1a, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xc7dc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc7dc, .value=0x9d, .type=IO_READ},
        {.addr=0xc7dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0221) {
    const struct CPU_State initial_cpu = {.pc=0xfece, .a=0x20, .x=0x20, .y=0xa5, .sp=0xcb, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xfece, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xfecf, .a=0x20, .x=0xcb, .y=0xa5, .sp=0xcb, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xfece, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfece, .value=0x9d, .type=IO_READ},
        {.addr=0xfecf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0222) {
    const struct CPU_State initial_cpu = {.pc=0xb3ff, .a=0x2f, .x=0x82, .y=0x77, .sp=0x40, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xb3ff, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb400, .a=0x2f, .x=0x40, .y=0x77, .sp=0x40, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xb3ff, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb3ff, .value=0x9d, .type=IO_READ},
        {.addr=0xb400, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0223) {
    const struct CPU_State initial_cpu = {.pc=0x3b62, .a=0x84, .x=0x9a, .y=0xd1, .sp=0xa9, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x3b62, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3b63, .a=0x84, .x=0xa9, .y=0xd1, .sp=0xa9, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x3b62, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3b62, .value=0x9d, .type=IO_READ},
        {.addr=0x3b63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0224) {
    const struct CPU_State initial_cpu = {.pc=0xa914, .a=0xf7, .x=0x1c, .y=0x80, .sp=0x8d, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xa914, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa915, .a=0xf7, .x=0x8d, .y=0x80, .sp=0x8d, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xa914, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa914, .value=0x9d, .type=IO_READ},
        {.addr=0xa915, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0225) {
    const struct CPU_State initial_cpu = {.pc=0xac83, .a=0xfc, .x=0x1f, .y=0x1d, .sp=0x14, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xac83, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xac84, .a=0xfc, .x=0x14, .y=0x1d, .sp=0x14, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xac83, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xac83, .value=0x9d, .type=IO_READ},
        {.addr=0xac84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0226) {
    const struct CPU_State initial_cpu = {.pc=0xaabc, .a=0x2b, .x=0xfa, .y=0xc7, .sp=0xf6, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xaabc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xaabd, .a=0x2b, .x=0xf6, .y=0xc7, .sp=0xf6, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xaabc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xaabc, .value=0x9d, .type=IO_READ},
        {.addr=0xaabd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0227) {
    const struct CPU_State initial_cpu = {.pc=0x5784, .a=0x7e, .x=0xff, .y=0x8a, .sp=0x67, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x5784, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5785, .a=0x7e, .x=0x67, .y=0x8a, .sp=0x67, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x5784, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5784, .value=0x9d, .type=IO_READ},
        {.addr=0x5785, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0228) {
    const struct CPU_State initial_cpu = {.pc=0x8435, .a=0x0c, .x=0x1c, .y=0x6c, .sp=0x34, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x8435, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8436, .a=0x0c, .x=0x34, .y=0x6c, .sp=0x34, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x8435, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8435, .value=0x9d, .type=IO_READ},
        {.addr=0x8436, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0229) {
    const struct CPU_State initial_cpu = {.pc=0x8ce1, .a=0x31, .x=0x39, .y=0x79, .sp=0xd4, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x8ce1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8ce2, .a=0x31, .x=0xd4, .y=0x79, .sp=0xd4, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x8ce1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8ce1, .value=0x9d, .type=IO_READ},
        {.addr=0x8ce2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_022A) {
    const struct CPU_State initial_cpu = {.pc=0x969d, .a=0x49, .x=0xc6, .y=0xb4, .sp=0xd7, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x969d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x969e, .a=0x49, .x=0xd7, .y=0xb4, .sp=0xd7, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x969d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x969d, .value=0x9d, .type=IO_READ},
        {.addr=0x969e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_022B) {
    const struct CPU_State initial_cpu = {.pc=0x88c5, .a=0x6a, .x=0x5a, .y=0xf8, .sp=0xa8, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x88c5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x88c6, .a=0x6a, .x=0xa8, .y=0xf8, .sp=0xa8, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x88c5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x88c5, .value=0x9d, .type=IO_READ},
        {.addr=0x88c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_022C) {
    const struct CPU_State initial_cpu = {.pc=0x4bbd, .a=0x80, .x=0x27, .y=0x84, .sp=0x26, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x4bbd, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4bbe, .a=0x80, .x=0x26, .y=0x84, .sp=0x26, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x4bbd, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4bbd, .value=0x9d, .type=IO_READ},
        {.addr=0x4bbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_022D) {
    const struct CPU_State initial_cpu = {.pc=0x6c5d, .a=0x53, .x=0x8f, .y=0xee, .sp=0xa6, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x6c5d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6c5e, .a=0x53, .x=0xa6, .y=0xee, .sp=0xa6, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x6c5d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6c5d, .value=0x9d, .type=IO_READ},
        {.addr=0x6c5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_022E) {
    const struct CPU_State initial_cpu = {.pc=0x372d, .a=0xf1, .x=0xfe, .y=0x8e, .sp=0xcf, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x372d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x372e, .a=0xf1, .x=0xcf, .y=0x8e, .sp=0xcf, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x372d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x372d, .value=0x9d, .type=IO_READ},
        {.addr=0x372e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_022F) {
    const struct CPU_State initial_cpu = {.pc=0xae63, .a=0x26, .x=0x65, .y=0x04, .sp=0x08, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xae63, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xae64, .a=0x26, .x=0x08, .y=0x04, .sp=0x08, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xae63, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xae63, .value=0x9d, .type=IO_READ},
        {.addr=0xae64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0230) {
    const struct CPU_State initial_cpu = {.pc=0xf8de, .a=0x12, .x=0x3f, .y=0xa8, .sp=0x0c, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xf8de, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf8df, .a=0x12, .x=0x0c, .y=0xa8, .sp=0x0c, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xf8de, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf8de, .value=0x9d, .type=IO_READ},
        {.addr=0xf8df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0231) {
    const struct CPU_State initial_cpu = {.pc=0x4442, .a=0x2d, .x=0x7d, .y=0x2e, .sp=0x02, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x4442, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4443, .a=0x2d, .x=0x02, .y=0x2e, .sp=0x02, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x4442, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4442, .value=0x9d, .type=IO_READ},
        {.addr=0x4443, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0232) {
    const struct CPU_State initial_cpu = {.pc=0xf937, .a=0x9d, .x=0xaf, .y=0x16, .sp=0xf7, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xf937, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf938, .a=0x9d, .x=0xf7, .y=0x16, .sp=0xf7, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xf937, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf937, .value=0x9d, .type=IO_READ},
        {.addr=0xf938, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0233) {
    const struct CPU_State initial_cpu = {.pc=0x8faf, .a=0xd6, .x=0x47, .y=0x17, .sp=0x7e, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x8faf, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8fb0, .a=0xd6, .x=0x7e, .y=0x17, .sp=0x7e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x8faf, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8faf, .value=0x9d, .type=IO_READ},
        {.addr=0x8fb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0234) {
    const struct CPU_State initial_cpu = {.pc=0x138c, .a=0x56, .x=0x75, .y=0x33, .sp=0x57, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x138c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x138d, .a=0x56, .x=0x57, .y=0x33, .sp=0x57, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x138c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x138c, .value=0x9d, .type=IO_READ},
        {.addr=0x138d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0235) {
    const struct CPU_State initial_cpu = {.pc=0xe389, .a=0xbc, .x=0x64, .y=0x33, .sp=0xc4, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xe389, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe38a, .a=0xbc, .x=0xc4, .y=0x33, .sp=0xc4, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xe389, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe389, .value=0x9d, .type=IO_READ},
        {.addr=0xe38a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0236) {
    const struct CPU_State initial_cpu = {.pc=0x96de, .a=0x5d, .x=0xd3, .y=0x8d, .sp=0x65, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x96de, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x96df, .a=0x5d, .x=0x65, .y=0x8d, .sp=0x65, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x96de, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x96de, .value=0x9d, .type=IO_READ},
        {.addr=0x96df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0237) {
    const struct CPU_State initial_cpu = {.pc=0xdcb3, .a=0x1e, .x=0x09, .y=0xf9, .sp=0x1c, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xdcb3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xdcb4, .a=0x1e, .x=0x1c, .y=0xf9, .sp=0x1c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xdcb3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xdcb3, .value=0x9d, .type=IO_READ},
        {.addr=0xdcb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0238) {
    const struct CPU_State initial_cpu = {.pc=0xe0aa, .a=0xc9, .x=0xe7, .y=0xc3, .sp=0x6a, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xe0aa, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe0ab, .a=0xc9, .x=0x6a, .y=0xc3, .sp=0x6a, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xe0aa, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe0aa, .value=0x9d, .type=IO_READ},
        {.addr=0xe0ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0239) {
    const struct CPU_State initial_cpu = {.pc=0x12a5, .a=0x71, .x=0x17, .y=0xc1, .sp=0x59, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x12a5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x12a6, .a=0x71, .x=0x59, .y=0xc1, .sp=0x59, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x12a5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x12a5, .value=0x9d, .type=IO_READ},
        {.addr=0x12a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_023A) {
    const struct CPU_State initial_cpu = {.pc=0x3c36, .a=0xa7, .x=0x38, .y=0xb1, .sp=0x99, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x3c36, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3c37, .a=0xa7, .x=0x99, .y=0xb1, .sp=0x99, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x3c36, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3c36, .value=0x9d, .type=IO_READ},
        {.addr=0x3c37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_023B) {
    const struct CPU_State initial_cpu = {.pc=0x1f95, .a=0xcf, .x=0xfd, .y=0x68, .sp=0x71, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x1f95, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1f96, .a=0xcf, .x=0x71, .y=0x68, .sp=0x71, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x1f95, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1f95, .value=0x9d, .type=IO_READ},
        {.addr=0x1f96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_023C) {
    const struct CPU_State initial_cpu = {.pc=0xe46a, .a=0xd8, .x=0x63, .y=0x2d, .sp=0x99, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xe46a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe46b, .a=0xd8, .x=0x99, .y=0x2d, .sp=0x99, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xe46a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe46a, .value=0x9d, .type=IO_READ},
        {.addr=0xe46b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_023D) {
    const struct CPU_State initial_cpu = {.pc=0xf22a, .a=0xf4, .x=0xb4, .y=0x15, .sp=0x9b, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xf22a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf22b, .a=0xf4, .x=0x9b, .y=0x15, .sp=0x9b, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xf22a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf22a, .value=0x9d, .type=IO_READ},
        {.addr=0xf22b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_023E) {
    const struct CPU_State initial_cpu = {.pc=0x4342, .a=0x1e, .x=0xd4, .y=0xc0, .sp=0x71, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x4342, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4343, .a=0x1e, .x=0x71, .y=0xc0, .sp=0x71, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x4342, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4342, .value=0x9d, .type=IO_READ},
        {.addr=0x4343, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_023F) {
    const struct CPU_State initial_cpu = {.pc=0x1e56, .a=0x6d, .x=0x21, .y=0x72, .sp=0x42, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x1e56, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1e57, .a=0x6d, .x=0x42, .y=0x72, .sp=0x42, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x1e56, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1e56, .value=0x9d, .type=IO_READ},
        {.addr=0x1e57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0240) {
    const struct CPU_State initial_cpu = {.pc=0xdd3a, .a=0xa6, .x=0x9f, .y=0x10, .sp=0xc5, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xdd3a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xdd3b, .a=0xa6, .x=0xc5, .y=0x10, .sp=0xc5, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xdd3a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xdd3a, .value=0x9d, .type=IO_READ},
        {.addr=0xdd3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0241) {
    const struct CPU_State initial_cpu = {.pc=0xa17a, .a=0xf2, .x=0x58, .y=0x6b, .sp=0xf8, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xa17a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa17b, .a=0xf2, .x=0xf8, .y=0x6b, .sp=0xf8, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xa17a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa17a, .value=0x9d, .type=IO_READ},
        {.addr=0xa17b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0242) {
    const struct CPU_State initial_cpu = {.pc=0x1a0f, .a=0x81, .x=0x08, .y=0x0d, .sp=0x85, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x1a0f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1a10, .a=0x81, .x=0x85, .y=0x0d, .sp=0x85, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x1a0f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1a0f, .value=0x9d, .type=IO_READ},
        {.addr=0x1a10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0243) {
    const struct CPU_State initial_cpu = {.pc=0x1ae3, .a=0x8e, .x=0x33, .y=0x26, .sp=0x96, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x1ae3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1ae4, .a=0x8e, .x=0x96, .y=0x26, .sp=0x96, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x1ae3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1ae3, .value=0x9d, .type=IO_READ},
        {.addr=0x1ae4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0244) {
    const struct CPU_State initial_cpu = {.pc=0x08c7, .a=0x2e, .x=0x11, .y=0x12, .sp=0x9e, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x08c7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x08c8, .a=0x2e, .x=0x9e, .y=0x12, .sp=0x9e, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x08c7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x08c7, .value=0x9d, .type=IO_READ},
        {.addr=0x08c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0245) {
    const struct CPU_State initial_cpu = {.pc=0x06fe, .a=0x7f, .x=0x9a, .y=0x3e, .sp=0xf0, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x06fe, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x06ff, .a=0x7f, .x=0xf0, .y=0x3e, .sp=0xf0, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x06fe, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x06fe, .value=0x9d, .type=IO_READ},
        {.addr=0x06ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0246) {
    const struct CPU_State initial_cpu = {.pc=0x970d, .a=0x29, .x=0xb9, .y=0x7b, .sp=0x73, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x970d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x970e, .a=0x29, .x=0x73, .y=0x7b, .sp=0x73, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x970d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x970d, .value=0x9d, .type=IO_READ},
        {.addr=0x970e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0247) {
    const struct CPU_State initial_cpu = {.pc=0x6476, .a=0x17, .x=0xd7, .y=0x36, .sp=0xa2, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x6476, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6477, .a=0x17, .x=0xa2, .y=0x36, .sp=0xa2, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x6476, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6476, .value=0x9d, .type=IO_READ},
        {.addr=0x6477, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0248) {
    const struct CPU_State initial_cpu = {.pc=0x02a1, .a=0xc3, .x=0x05, .y=0x2e, .sp=0x78, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x02a1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x02a2, .a=0xc3, .x=0x78, .y=0x2e, .sp=0x78, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x02a1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x02a1, .value=0x9d, .type=IO_READ},
        {.addr=0x02a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0249) {
    const struct CPU_State initial_cpu = {.pc=0xabc1, .a=0xf9, .x=0xfa, .y=0x46, .sp=0x20, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xabc1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xabc2, .a=0xf9, .x=0x20, .y=0x46, .sp=0x20, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xabc1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xabc1, .value=0x9d, .type=IO_READ},
        {.addr=0xabc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_024A) {
    const struct CPU_State initial_cpu = {.pc=0xd69b, .a=0x11, .x=0xf6, .y=0x34, .sp=0xbc, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xd69b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd69c, .a=0x11, .x=0xbc, .y=0x34, .sp=0xbc, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xd69b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd69b, .value=0x9d, .type=IO_READ},
        {.addr=0xd69c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_024B) {
    const struct CPU_State initial_cpu = {.pc=0xb76c, .a=0x3e, .x=0x7c, .y=0x9d, .sp=0xc6, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xb76c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb76d, .a=0x3e, .x=0xc6, .y=0x9d, .sp=0xc6, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xb76c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb76c, .value=0x9d, .type=IO_READ},
        {.addr=0xb76d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_024C) {
    const struct CPU_State initial_cpu = {.pc=0xff48, .a=0xb9, .x=0x27, .y=0x0c, .sp=0x4e, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xff48, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xff49, .a=0xb9, .x=0x4e, .y=0x0c, .sp=0x4e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xff48, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xff48, .value=0x9d, .type=IO_READ},
        {.addr=0xff49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_024D) {
    const struct CPU_State initial_cpu = {.pc=0x1e83, .a=0x84, .x=0x86, .y=0x99, .sp=0x95, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x1e83, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1e84, .a=0x84, .x=0x95, .y=0x99, .sp=0x95, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x1e83, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1e83, .value=0x9d, .type=IO_READ},
        {.addr=0x1e84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_024E) {
    const struct CPU_State initial_cpu = {.pc=0x488c, .a=0xe2, .x=0xa3, .y=0x89, .sp=0x37, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x488c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x488d, .a=0xe2, .x=0x37, .y=0x89, .sp=0x37, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x488c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x488c, .value=0x9d, .type=IO_READ},
        {.addr=0x488d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_024F) {
    const struct CPU_State initial_cpu = {.pc=0x6f9a, .a=0xf1, .x=0xa7, .y=0x99, .sp=0xa2, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x6f9a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6f9b, .a=0xf1, .x=0xa2, .y=0x99, .sp=0xa2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x6f9a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6f9a, .value=0x9d, .type=IO_READ},
        {.addr=0x6f9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0250) {
    const struct CPU_State initial_cpu = {.pc=0xc405, .a=0xd8, .x=0x35, .y=0x7d, .sp=0x71, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xc405, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc406, .a=0xd8, .x=0x71, .y=0x7d, .sp=0x71, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xc405, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc405, .value=0x9d, .type=IO_READ},
        {.addr=0xc406, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0251) {
    const struct CPU_State initial_cpu = {.pc=0xdf68, .a=0xd0, .x=0x31, .y=0xd8, .sp=0xdd, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xdf68, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xdf69, .a=0xd0, .x=0xdd, .y=0xd8, .sp=0xdd, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xdf68, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xdf68, .value=0x9d, .type=IO_READ},
        {.addr=0xdf69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0252) {
    const struct CPU_State initial_cpu = {.pc=0x121b, .a=0xa2, .x=0xa8, .y=0x8a, .sp=0x60, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x121b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x121c, .a=0xa2, .x=0x60, .y=0x8a, .sp=0x60, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x121b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x121b, .value=0x9d, .type=IO_READ},
        {.addr=0x121c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0253) {
    const struct CPU_State initial_cpu = {.pc=0xd5a0, .a=0x15, .x=0xc0, .y=0xa5, .sp=0xb9, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xd5a0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd5a1, .a=0x15, .x=0xb9, .y=0xa5, .sp=0xb9, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xd5a0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd5a0, .value=0x9d, .type=IO_READ},
        {.addr=0xd5a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0254) {
    const struct CPU_State initial_cpu = {.pc=0x008f, .a=0xe9, .x=0x92, .y=0xaa, .sp=0xf9, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0090, .a=0xe9, .x=0xf9, .y=0xaa, .sp=0xf9, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x008f, .value=0x9d, .type=IO_READ},
        {.addr=0x0090, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0255) {
    const struct CPU_State initial_cpu = {.pc=0xa8ee, .a=0x4c, .x=0xab, .y=0x5e, .sp=0xcc, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xa8ee, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa8ef, .a=0x4c, .x=0xcc, .y=0x5e, .sp=0xcc, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xa8ee, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa8ee, .value=0x9d, .type=IO_READ},
        {.addr=0xa8ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0256) {
    const struct CPU_State initial_cpu = {.pc=0xb0e4, .a=0x05, .x=0x92, .y=0x48, .sp=0x66, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xb0e4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb0e5, .a=0x05, .x=0x66, .y=0x48, .sp=0x66, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xb0e4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb0e4, .value=0x9d, .type=IO_READ},
        {.addr=0xb0e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0257) {
    const struct CPU_State initial_cpu = {.pc=0x9298, .a=0x1d, .x=0x52, .y=0x70, .sp=0x16, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x9298, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9299, .a=0x1d, .x=0x16, .y=0x70, .sp=0x16, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x9298, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9298, .value=0x9d, .type=IO_READ},
        {.addr=0x9299, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0258) {
    const struct CPU_State initial_cpu = {.pc=0x1d6c, .a=0x2e, .x=0x7d, .y=0x6b, .sp=0xe8, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x1d6c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1d6d, .a=0x2e, .x=0xe8, .y=0x6b, .sp=0xe8, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x1d6c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1d6c, .value=0x9d, .type=IO_READ},
        {.addr=0x1d6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0259) {
    const struct CPU_State initial_cpu = {.pc=0x4003, .a=0xe9, .x=0x97, .y=0x98, .sp=0x98, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x4003, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4004, .a=0xe9, .x=0x98, .y=0x98, .sp=0x98, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x4003, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4003, .value=0x9d, .type=IO_READ},
        {.addr=0x4004, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_025A) {
    const struct CPU_State initial_cpu = {.pc=0xcc1d, .a=0xf5, .x=0x66, .y=0xf4, .sp=0x16, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xcc1d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcc1e, .a=0xf5, .x=0x16, .y=0xf4, .sp=0x16, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xcc1d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcc1d, .value=0x9d, .type=IO_READ},
        {.addr=0xcc1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_025B) {
    const struct CPU_State initial_cpu = {.pc=0xcc72, .a=0x31, .x=0xb1, .y=0x68, .sp=0xe6, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xcc72, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcc73, .a=0x31, .x=0xe6, .y=0x68, .sp=0xe6, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xcc72, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcc72, .value=0x9d, .type=IO_READ},
        {.addr=0xcc73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_025C) {
    const struct CPU_State initial_cpu = {.pc=0x456d, .a=0xf6, .x=0xb8, .y=0x5d, .sp=0x01, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x456d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x456e, .a=0xf6, .x=0x01, .y=0x5d, .sp=0x01, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x456d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x456d, .value=0x9d, .type=IO_READ},
        {.addr=0x456e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_025D) {
    const struct CPU_State initial_cpu = {.pc=0xbb04, .a=0xcc, .x=0xa5, .y=0x80, .sp=0xd7, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xbb04, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbb05, .a=0xcc, .x=0xd7, .y=0x80, .sp=0xd7, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xbb04, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbb04, .value=0x9d, .type=IO_READ},
        {.addr=0xbb05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_025E) {
    const struct CPU_State initial_cpu = {.pc=0x756e, .a=0x31, .x=0x3c, .y=0xec, .sp=0xaf, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x756e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x756f, .a=0x31, .x=0xaf, .y=0xec, .sp=0xaf, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x756e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x756e, .value=0x9d, .type=IO_READ},
        {.addr=0x756f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_025F) {
    const struct CPU_State initial_cpu = {.pc=0x2aea, .a=0x3a, .x=0xdc, .y=0xe6, .sp=0xe5, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x2aea, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2aeb, .a=0x3a, .x=0xe5, .y=0xe6, .sp=0xe5, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x2aea, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2aea, .value=0x9d, .type=IO_READ},
        {.addr=0x2aeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0260) {
    const struct CPU_State initial_cpu = {.pc=0xedf0, .a=0xdc, .x=0xd7, .y=0xa6, .sp=0x66, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xedf0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xedf1, .a=0xdc, .x=0x66, .y=0xa6, .sp=0x66, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xedf0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xedf0, .value=0x9d, .type=IO_READ},
        {.addr=0xedf1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0261) {
    const struct CPU_State initial_cpu = {.pc=0x76fc, .a=0x05, .x=0xd9, .y=0xa4, .sp=0x6b, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x76fc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x76fd, .a=0x05, .x=0x6b, .y=0xa4, .sp=0x6b, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x76fc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x76fc, .value=0x9d, .type=IO_READ},
        {.addr=0x76fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0262) {
    const struct CPU_State initial_cpu = {.pc=0xfc03, .a=0x2a, .x=0xfc, .y=0x81, .sp=0x9f, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xfc03, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xfc04, .a=0x2a, .x=0x9f, .y=0x81, .sp=0x9f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xfc03, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfc03, .value=0x9d, .type=IO_READ},
        {.addr=0xfc04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0263) {
    const struct CPU_State initial_cpu = {.pc=0xd79f, .a=0xf6, .x=0x46, .y=0x0f, .sp=0x4d, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xd79f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd7a0, .a=0xf6, .x=0x4d, .y=0x0f, .sp=0x4d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xd79f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd79f, .value=0x9d, .type=IO_READ},
        {.addr=0xd7a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0264) {
    const struct CPU_State initial_cpu = {.pc=0x1686, .a=0xab, .x=0x9a, .y=0x40, .sp=0x8e, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x1686, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1687, .a=0xab, .x=0x8e, .y=0x40, .sp=0x8e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x1686, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1686, .value=0x9d, .type=IO_READ},
        {.addr=0x1687, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0265) {
    const struct CPU_State initial_cpu = {.pc=0x336d, .a=0xdb, .x=0x8a, .y=0x3f, .sp=0x26, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x336d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x336e, .a=0xdb, .x=0x26, .y=0x3f, .sp=0x26, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x336d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x336d, .value=0x9d, .type=IO_READ},
        {.addr=0x336e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0266) {
    const struct CPU_State initial_cpu = {.pc=0xe244, .a=0x0d, .x=0x81, .y=0xfb, .sp=0x60, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xe244, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe245, .a=0x0d, .x=0x60, .y=0xfb, .sp=0x60, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xe244, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe244, .value=0x9d, .type=IO_READ},
        {.addr=0xe245, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0267) {
    const struct CPU_State initial_cpu = {.pc=0xb4cd, .a=0xd2, .x=0x1a, .y=0x4f, .sp=0xd0, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xb4cd, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb4ce, .a=0xd2, .x=0xd0, .y=0x4f, .sp=0xd0, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xb4cd, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb4cd, .value=0x9d, .type=IO_READ},
        {.addr=0xb4ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0268) {
    const struct CPU_State initial_cpu = {.pc=0x0859, .a=0x48, .x=0x46, .y=0x02, .sp=0x46, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0859, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x085a, .a=0x48, .x=0x46, .y=0x02, .sp=0x46, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0859, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0859, .value=0x9d, .type=IO_READ},
        {.addr=0x085a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0269) {
    const struct CPU_State initial_cpu = {.pc=0xe2b1, .a=0xa2, .x=0x84, .y=0xd9, .sp=0xd0, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xe2b1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe2b2, .a=0xa2, .x=0xd0, .y=0xd9, .sp=0xd0, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xe2b1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe2b1, .value=0x9d, .type=IO_READ},
        {.addr=0xe2b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_026A) {
    const struct CPU_State initial_cpu = {.pc=0x240d, .a=0x92, .x=0x00, .y=0x62, .sp=0x3a, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x240d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x240e, .a=0x92, .x=0x3a, .y=0x62, .sp=0x3a, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x240d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x240d, .value=0x9d, .type=IO_READ},
        {.addr=0x240e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_026B) {
    const struct CPU_State initial_cpu = {.pc=0xb262, .a=0x66, .x=0x2a, .y=0x89, .sp=0x29, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xb262, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb263, .a=0x66, .x=0x29, .y=0x89, .sp=0x29, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xb262, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb262, .value=0x9d, .type=IO_READ},
        {.addr=0xb263, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_026C) {
    const struct CPU_State initial_cpu = {.pc=0x63b8, .a=0x4b, .x=0x81, .y=0x8e, .sp=0x47, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x63b8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x63b9, .a=0x4b, .x=0x47, .y=0x8e, .sp=0x47, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x63b8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x63b8, .value=0x9d, .type=IO_READ},
        {.addr=0x63b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_026D) {
    const struct CPU_State initial_cpu = {.pc=0x2c87, .a=0x5a, .x=0xe4, .y=0xba, .sp=0x2b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x2c87, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2c88, .a=0x5a, .x=0x2b, .y=0xba, .sp=0x2b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x2c87, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2c87, .value=0x9d, .type=IO_READ},
        {.addr=0x2c88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_026E) {
    const struct CPU_State initial_cpu = {.pc=0xbc98, .a=0x1f, .x=0x8a, .y=0x23, .sp=0xea, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xbc98, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbc99, .a=0x1f, .x=0xea, .y=0x23, .sp=0xea, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xbc98, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbc98, .value=0x9d, .type=IO_READ},
        {.addr=0xbc99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_026F) {
    const struct CPU_State initial_cpu = {.pc=0x47f4, .a=0xc8, .x=0x2e, .y=0xd7, .sp=0x9f, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x47f4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x47f5, .a=0xc8, .x=0x9f, .y=0xd7, .sp=0x9f, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x47f4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x47f4, .value=0x9d, .type=IO_READ},
        {.addr=0x47f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0270) {
    const struct CPU_State initial_cpu = {.pc=0xeba2, .a=0x9d, .x=0xd6, .y=0x73, .sp=0x23, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xeba2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xeba3, .a=0x9d, .x=0x23, .y=0x73, .sp=0x23, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xeba2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xeba2, .value=0x9d, .type=IO_READ},
        {.addr=0xeba3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0271) {
    const struct CPU_State initial_cpu = {.pc=0x231a, .a=0x3f, .x=0xae, .y=0x08, .sp=0x85, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x231a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x231b, .a=0x3f, .x=0x85, .y=0x08, .sp=0x85, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x231a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x231a, .value=0x9d, .type=IO_READ},
        {.addr=0x231b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0272) {
    const struct CPU_State initial_cpu = {.pc=0xf67b, .a=0xa0, .x=0xf0, .y=0x68, .sp=0xc7, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xf67b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf67c, .a=0xa0, .x=0xc7, .y=0x68, .sp=0xc7, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xf67b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf67b, .value=0x9d, .type=IO_READ},
        {.addr=0xf67c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0273) {
    const struct CPU_State initial_cpu = {.pc=0x9117, .a=0xe2, .x=0x41, .y=0xd1, .sp=0xa6, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x9117, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9118, .a=0xe2, .x=0xa6, .y=0xd1, .sp=0xa6, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x9117, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9117, .value=0x9d, .type=IO_READ},
        {.addr=0x9118, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0274) {
    const struct CPU_State initial_cpu = {.pc=0x87ce, .a=0xbe, .x=0xe8, .y=0xbe, .sp=0xb7, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x87ce, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x87cf, .a=0xbe, .x=0xb7, .y=0xbe, .sp=0xb7, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x87ce, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x87ce, .value=0x9d, .type=IO_READ},
        {.addr=0x87cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0275) {
    const struct CPU_State initial_cpu = {.pc=0xf7c6, .a=0xb2, .x=0x76, .y=0x25, .sp=0x0e, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xf7c6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf7c7, .a=0xb2, .x=0x0e, .y=0x25, .sp=0x0e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xf7c6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf7c6, .value=0x9d, .type=IO_READ},
        {.addr=0xf7c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0276) {
    const struct CPU_State initial_cpu = {.pc=0x082b, .a=0x4b, .x=0xeb, .y=0xe0, .sp=0x49, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x082b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x082c, .a=0x4b, .x=0x49, .y=0xe0, .sp=0x49, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x082b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x082b, .value=0x9d, .type=IO_READ},
        {.addr=0x082c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0277) {
    const struct CPU_State initial_cpu = {.pc=0x917d, .a=0x01, .x=0x91, .y=0x54, .sp=0x40, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x917d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x917e, .a=0x01, .x=0x40, .y=0x54, .sp=0x40, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x917d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x917d, .value=0x9d, .type=IO_READ},
        {.addr=0x917e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0278) {
    const struct CPU_State initial_cpu = {.pc=0xca94, .a=0xf9, .x=0x4e, .y=0x1d, .sp=0xc2, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xca94, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xca95, .a=0xf9, .x=0xc2, .y=0x1d, .sp=0xc2, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xca94, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xca94, .value=0x9d, .type=IO_READ},
        {.addr=0xca95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0279) {
    const struct CPU_State initial_cpu = {.pc=0x0d74, .a=0x5a, .x=0x73, .y=0xa1, .sp=0x11, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0d74, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0d75, .a=0x5a, .x=0x11, .y=0xa1, .sp=0x11, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0d74, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0d74, .value=0x9d, .type=IO_READ},
        {.addr=0x0d75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_027A) {
    const struct CPU_State initial_cpu = {.pc=0xb2f7, .a=0x3e, .x=0xd2, .y=0x9a, .sp=0xda, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xb2f7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb2f8, .a=0x3e, .x=0xda, .y=0x9a, .sp=0xda, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xb2f7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb2f7, .value=0x9d, .type=IO_READ},
        {.addr=0xb2f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_027B) {
    const struct CPU_State initial_cpu = {.pc=0x64a2, .a=0x6f, .x=0x07, .y=0xec, .sp=0x4d, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x64a2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x64a3, .a=0x6f, .x=0x4d, .y=0xec, .sp=0x4d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x64a2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x64a2, .value=0x9d, .type=IO_READ},
        {.addr=0x64a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_027C) {
    const struct CPU_State initial_cpu = {.pc=0x375b, .a=0x4f, .x=0x5a, .y=0xb7, .sp=0xdd, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x375b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x375c, .a=0x4f, .x=0xdd, .y=0xb7, .sp=0xdd, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x375b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x375b, .value=0x9d, .type=IO_READ},
        {.addr=0x375c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_027D) {
    const struct CPU_State initial_cpu = {.pc=0xe0f8, .a=0x32, .x=0xf8, .y=0x9f, .sp=0x95, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xe0f8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe0f9, .a=0x32, .x=0x95, .y=0x9f, .sp=0x95, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xe0f8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe0f8, .value=0x9d, .type=IO_READ},
        {.addr=0xe0f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_027E) {
    const struct CPU_State initial_cpu = {.pc=0x01b7, .a=0x4f, .x=0xd0, .y=0x1f, .sp=0x56, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x01b8, .a=0x4f, .x=0x56, .y=0x1f, .sp=0x56, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x01b7, .value=0x9d, .type=IO_READ},
        {.addr=0x01b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_027F) {
    const struct CPU_State initial_cpu = {.pc=0xcb0c, .a=0xe1, .x=0x55, .y=0xc7, .sp=0x4f, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xcb0c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcb0d, .a=0xe1, .x=0x4f, .y=0xc7, .sp=0x4f, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xcb0c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcb0c, .value=0x9d, .type=IO_READ},
        {.addr=0xcb0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0280) {
    const struct CPU_State initial_cpu = {.pc=0x471b, .a=0x67, .x=0x9b, .y=0x8f, .sp=0x5f, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x471b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x471c, .a=0x67, .x=0x5f, .y=0x8f, .sp=0x5f, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x471b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x471b, .value=0x9d, .type=IO_READ},
        {.addr=0x471c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0281) {
    const struct CPU_State initial_cpu = {.pc=0x884e, .a=0x62, .x=0x4e, .y=0x8a, .sp=0x62, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x884e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x884f, .a=0x62, .x=0x62, .y=0x8a, .sp=0x62, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x884e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x884e, .value=0x9d, .type=IO_READ},
        {.addr=0x884f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0282) {
    const struct CPU_State initial_cpu = {.pc=0x923e, .a=0xe7, .x=0x6b, .y=0x2f, .sp=0x86, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x923e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x923f, .a=0xe7, .x=0x86, .y=0x2f, .sp=0x86, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x923e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x923e, .value=0x9d, .type=IO_READ},
        {.addr=0x923f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0283) {
    const struct CPU_State initial_cpu = {.pc=0x011d, .a=0x9b, .x=0x04, .y=0xfd, .sp=0xc8, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x011e, .a=0x9b, .x=0xc8, .y=0xfd, .sp=0xc8, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x011d, .value=0x9d, .type=IO_READ},
        {.addr=0x011e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0284) {
    const struct CPU_State initial_cpu = {.pc=0x6ad6, .a=0x3f, .x=0xd9, .y=0x8d, .sp=0x97, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x6ad6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6ad7, .a=0x3f, .x=0x97, .y=0x8d, .sp=0x97, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x6ad6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6ad6, .value=0x9d, .type=IO_READ},
        {.addr=0x6ad7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0285) {
    const struct CPU_State initial_cpu = {.pc=0x20e1, .a=0x6a, .x=0x59, .y=0x2c, .sp=0x53, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x20e1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x20e2, .a=0x6a, .x=0x53, .y=0x2c, .sp=0x53, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x20e1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x20e1, .value=0x9d, .type=IO_READ},
        {.addr=0x20e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0286) {
    const struct CPU_State initial_cpu = {.pc=0x96ea, .a=0xcd, .x=0x47, .y=0x99, .sp=0x49, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x96ea, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x96eb, .a=0xcd, .x=0x49, .y=0x99, .sp=0x49, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x96ea, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x96ea, .value=0x9d, .type=IO_READ},
        {.addr=0x96eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0287) {
    const struct CPU_State initial_cpu = {.pc=0x379e, .a=0x69, .x=0x99, .y=0x19, .sp=0x1c, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x379e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x379f, .a=0x69, .x=0x1c, .y=0x19, .sp=0x1c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x379e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x379e, .value=0x9d, .type=IO_READ},
        {.addr=0x379f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0288) {
    const struct CPU_State initial_cpu = {.pc=0xb24e, .a=0x95, .x=0x89, .y=0xc4, .sp=0x4d, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xb24e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb24f, .a=0x95, .x=0x4d, .y=0xc4, .sp=0x4d, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xb24e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb24e, .value=0x9d, .type=IO_READ},
        {.addr=0xb24f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0289) {
    const struct CPU_State initial_cpu = {.pc=0x72a6, .a=0x76, .x=0x9b, .y=0x83, .sp=0xd1, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x72a6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x72a7, .a=0x76, .x=0xd1, .y=0x83, .sp=0xd1, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x72a6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x72a6, .value=0x9d, .type=IO_READ},
        {.addr=0x72a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_028A) {
    const struct CPU_State initial_cpu = {.pc=0xe2e7, .a=0x92, .x=0x95, .y=0x5c, .sp=0xab, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xe2e7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe2e8, .a=0x92, .x=0xab, .y=0x5c, .sp=0xab, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xe2e7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe2e7, .value=0x9d, .type=IO_READ},
        {.addr=0xe2e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_028B) {
    const struct CPU_State initial_cpu = {.pc=0x33ed, .a=0xcb, .x=0x06, .y=0x7a, .sp=0xb9, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x33ed, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x33ee, .a=0xcb, .x=0xb9, .y=0x7a, .sp=0xb9, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x33ed, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x33ed, .value=0x9d, .type=IO_READ},
        {.addr=0x33ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_028C) {
    const struct CPU_State initial_cpu = {.pc=0x5948, .a=0x82, .x=0x0e, .y=0x67, .sp=0xbb, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x5948, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5949, .a=0x82, .x=0xbb, .y=0x67, .sp=0xbb, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x5948, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5948, .value=0x9d, .type=IO_READ},
        {.addr=0x5949, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_028D) {
    const struct CPU_State initial_cpu = {.pc=0xc4c7, .a=0xc4, .x=0x06, .y=0x31, .sp=0xf3, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xc4c7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc4c8, .a=0xc4, .x=0xf3, .y=0x31, .sp=0xf3, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xc4c7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc4c7, .value=0x9d, .type=IO_READ},
        {.addr=0xc4c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_028E) {
    const struct CPU_State initial_cpu = {.pc=0xe629, .a=0x5a, .x=0x3a, .y=0xd8, .sp=0x2f, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xe629, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe62a, .a=0x5a, .x=0x2f, .y=0xd8, .sp=0x2f, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xe629, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe629, .value=0x9d, .type=IO_READ},
        {.addr=0xe62a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_028F) {
    const struct CPU_State initial_cpu = {.pc=0x73de, .a=0xaf, .x=0x75, .y=0xd0, .sp=0x81, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x73de, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x73df, .a=0xaf, .x=0x81, .y=0xd0, .sp=0x81, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x73de, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x73de, .value=0x9d, .type=IO_READ},
        {.addr=0x73df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0290) {
    const struct CPU_State initial_cpu = {.pc=0x6c38, .a=0xf0, .x=0x5b, .y=0xd8, .sp=0x74, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x6c38, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6c39, .a=0xf0, .x=0x74, .y=0xd8, .sp=0x74, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x6c38, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6c38, .value=0x9d, .type=IO_READ},
        {.addr=0x6c39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0291) {
    const struct CPU_State initial_cpu = {.pc=0xbd28, .a=0x1c, .x=0x36, .y=0x12, .sp=0x9d, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xbd28, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbd29, .a=0x1c, .x=0x9d, .y=0x12, .sp=0x9d, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xbd28, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbd28, .value=0x9d, .type=IO_READ},
        {.addr=0xbd29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0292) {
    const struct CPU_State initial_cpu = {.pc=0xfc8c, .a=0xd6, .x=0x4c, .y=0xd5, .sp=0xfc, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xfc8c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xfc8d, .a=0xd6, .x=0xfc, .y=0xd5, .sp=0xfc, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xfc8c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfc8c, .value=0x9d, .type=IO_READ},
        {.addr=0xfc8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0293) {
    const struct CPU_State initial_cpu = {.pc=0xf0cc, .a=0x62, .x=0xc2, .y=0x34, .sp=0xec, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xf0cc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf0cd, .a=0x62, .x=0xec, .y=0x34, .sp=0xec, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xf0cc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf0cc, .value=0x9d, .type=IO_READ},
        {.addr=0xf0cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0294) {
    const struct CPU_State initial_cpu = {.pc=0x8f67, .a=0x99, .x=0x02, .y=0x5e, .sp=0x5d, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x8f67, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8f68, .a=0x99, .x=0x5d, .y=0x5e, .sp=0x5d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8f67, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8f67, .value=0x9d, .type=IO_READ},
        {.addr=0x8f68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0295) {
    const struct CPU_State initial_cpu = {.pc=0x2eeb, .a=0x63, .x=0xee, .y=0x1f, .sp=0x1f, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x2eeb, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2eec, .a=0x63, .x=0x1f, .y=0x1f, .sp=0x1f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x2eeb, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2eeb, .value=0x9d, .type=IO_READ},
        {.addr=0x2eec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0296) {
    const struct CPU_State initial_cpu = {.pc=0xa2f2, .a=0x56, .x=0xa6, .y=0x08, .sp=0xd7, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xa2f2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa2f3, .a=0x56, .x=0xd7, .y=0x08, .sp=0xd7, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xa2f2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa2f2, .value=0x9d, .type=IO_READ},
        {.addr=0xa2f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0297) {
    const struct CPU_State initial_cpu = {.pc=0xcdbe, .a=0x36, .x=0x0c, .y=0xd3, .sp=0x32, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xcdbe, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcdbf, .a=0x36, .x=0x32, .y=0xd3, .sp=0x32, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xcdbe, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcdbe, .value=0x9d, .type=IO_READ},
        {.addr=0xcdbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0298) {
    const struct CPU_State initial_cpu = {.pc=0x7346, .a=0x2b, .x=0xfe, .y=0xe4, .sp=0xeb, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x7346, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7347, .a=0x2b, .x=0xeb, .y=0xe4, .sp=0xeb, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x7346, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7346, .value=0x9d, .type=IO_READ},
        {.addr=0x7347, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0299) {
    const struct CPU_State initial_cpu = {.pc=0x6864, .a=0xa7, .x=0x68, .y=0x8d, .sp=0x9d, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x6864, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6865, .a=0xa7, .x=0x9d, .y=0x8d, .sp=0x9d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x6864, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6864, .value=0x9d, .type=IO_READ},
        {.addr=0x6865, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_029A) {
    const struct CPU_State initial_cpu = {.pc=0xa5e3, .a=0xd5, .x=0x04, .y=0x07, .sp=0x38, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xa5e3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa5e4, .a=0xd5, .x=0x38, .y=0x07, .sp=0x38, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa5e3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa5e3, .value=0x9d, .type=IO_READ},
        {.addr=0xa5e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_029B) {
    const struct CPU_State initial_cpu = {.pc=0x06f9, .a=0x25, .x=0x4a, .y=0xa2, .sp=0xe5, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x06f9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x06fa, .a=0x25, .x=0xe5, .y=0xa2, .sp=0xe5, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x06f9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x06f9, .value=0x9d, .type=IO_READ},
        {.addr=0x06fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_029C) {
    const struct CPU_State initial_cpu = {.pc=0x7834, .a=0xf5, .x=0x28, .y=0x3b, .sp=0x61, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x7834, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7835, .a=0xf5, .x=0x61, .y=0x3b, .sp=0x61, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7834, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7834, .value=0x9d, .type=IO_READ},
        {.addr=0x7835, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_029D) {
    const struct CPU_State initial_cpu = {.pc=0xd078, .a=0x00, .x=0x42, .y=0x72, .sp=0x11, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xd078, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd079, .a=0x00, .x=0x11, .y=0x72, .sp=0x11, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xd078, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd078, .value=0x9d, .type=IO_READ},
        {.addr=0xd079, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_029E) {
    const struct CPU_State initial_cpu = {.pc=0xdc50, .a=0x36, .x=0xc1, .y=0x32, .sp=0xe2, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xdc50, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xdc51, .a=0x36, .x=0xe2, .y=0x32, .sp=0xe2, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xdc50, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xdc50, .value=0x9d, .type=IO_READ},
        {.addr=0xdc51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_029F) {
    const struct CPU_State initial_cpu = {.pc=0xc072, .a=0x66, .x=0xa9, .y=0xf4, .sp=0xa5, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xc072, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc073, .a=0x66, .x=0xa5, .y=0xf4, .sp=0xa5, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xc072, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc072, .value=0x9d, .type=IO_READ},
        {.addr=0xc073, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x86d7, .a=0xda, .x=0xee, .y=0xbc, .sp=0x68, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x86d7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x86d8, .a=0xda, .x=0x68, .y=0xbc, .sp=0x68, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x86d7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x86d7, .value=0x9d, .type=IO_READ},
        {.addr=0x86d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x0dff, .a=0xcc, .x=0xe2, .y=0xca, .sp=0x78, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0dff, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0e00, .a=0xcc, .x=0x78, .y=0xca, .sp=0x78, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0dff, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0dff, .value=0x9d, .type=IO_READ},
        {.addr=0x0e00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x6a7e, .a=0xe6, .x=0x5f, .y=0xe4, .sp=0xc3, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x6a7e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6a7f, .a=0xe6, .x=0xc3, .y=0xe4, .sp=0xc3, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x6a7e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6a7e, .value=0x9d, .type=IO_READ},
        {.addr=0x6a7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xf163, .a=0x34, .x=0xbf, .y=0xdb, .sp=0x07, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xf163, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf164, .a=0x34, .x=0x07, .y=0xdb, .sp=0x07, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf163, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf163, .value=0x9d, .type=IO_READ},
        {.addr=0xf164, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x470a, .a=0x7e, .x=0x19, .y=0x79, .sp=0xfe, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x470a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x470b, .a=0x7e, .x=0xfe, .y=0x79, .sp=0xfe, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x470a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x470a, .value=0x9d, .type=IO_READ},
        {.addr=0x470b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x7413, .a=0x6d, .x=0xb0, .y=0x2a, .sp=0x22, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x7413, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7414, .a=0x6d, .x=0x22, .y=0x2a, .sp=0x22, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x7413, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7413, .value=0x9d, .type=IO_READ},
        {.addr=0x7414, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x0ba6, .a=0x40, .x=0x8f, .y=0xde, .sp=0x9b, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0ba6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0ba7, .a=0x40, .x=0x9b, .y=0xde, .sp=0x9b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0ba6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0ba6, .value=0x9d, .type=IO_READ},
        {.addr=0x0ba7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xcb6f, .a=0xb5, .x=0xca, .y=0xcc, .sp=0x1a, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xcb6f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcb70, .a=0xb5, .x=0x1a, .y=0xcc, .sp=0x1a, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xcb6f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcb6f, .value=0x9d, .type=IO_READ},
        {.addr=0xcb70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xae30, .a=0xed, .x=0x18, .y=0xde, .sp=0x19, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xae30, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xae31, .a=0xed, .x=0x19, .y=0xde, .sp=0x19, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xae30, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xae30, .value=0x9d, .type=IO_READ},
        {.addr=0xae31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x9e71, .a=0xe8, .x=0x6d, .y=0x4d, .sp=0x4a, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x9e71, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9e72, .a=0xe8, .x=0x4a, .y=0x4d, .sp=0x4a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x9e71, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9e71, .value=0x9d, .type=IO_READ},
        {.addr=0x9e72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x9c33, .a=0x31, .x=0x15, .y=0x74, .sp=0xcf, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x9c33, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9c34, .a=0x31, .x=0xcf, .y=0x74, .sp=0xcf, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x9c33, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9c33, .value=0x9d, .type=IO_READ},
        {.addr=0x9c34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x831d, .a=0xe1, .x=0x07, .y=0x3a, .sp=0x88, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x831d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x831e, .a=0xe1, .x=0x88, .y=0x3a, .sp=0x88, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x831d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x831d, .value=0x9d, .type=IO_READ},
        {.addr=0x831e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x384e, .a=0x00, .x=0x44, .y=0x42, .sp=0x2a, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x384e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x384f, .a=0x00, .x=0x2a, .y=0x42, .sp=0x2a, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x384e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x384e, .value=0x9d, .type=IO_READ},
        {.addr=0x384f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xfe14, .a=0x20, .x=0x1e, .y=0xc8, .sp=0x40, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xfe14, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xfe15, .a=0x20, .x=0x40, .y=0xc8, .sp=0x40, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xfe14, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfe14, .value=0x9d, .type=IO_READ},
        {.addr=0xfe15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x4117, .a=0xcd, .x=0x0c, .y=0xf2, .sp=0xa6, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x4117, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4118, .a=0xcd, .x=0xa6, .y=0xf2, .sp=0xa6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4117, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4117, .value=0x9d, .type=IO_READ},
        {.addr=0x4118, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xfcee, .a=0xa4, .x=0x44, .y=0x8f, .sp=0xc8, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xfcee, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xfcef, .a=0xa4, .x=0xc8, .y=0x8f, .sp=0xc8, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xfcee, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfcee, .value=0x9d, .type=IO_READ},
        {.addr=0xfcef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x0b52, .a=0x7a, .x=0xd6, .y=0x69, .sp=0x60, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0b52, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0b53, .a=0x7a, .x=0x60, .y=0x69, .sp=0x60, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0b52, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0b52, .value=0x9d, .type=IO_READ},
        {.addr=0x0b53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x1797, .a=0x3f, .x=0x64, .y=0x31, .sp=0xec, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x1797, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1798, .a=0x3f, .x=0xec, .y=0x31, .sp=0xec, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x1797, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1797, .value=0x9d, .type=IO_READ},
        {.addr=0x1798, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xa346, .a=0xc1, .x=0x5b, .y=0xf8, .sp=0xa6, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xa346, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa347, .a=0xc1, .x=0xa6, .y=0xf8, .sp=0xa6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa346, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa346, .value=0x9d, .type=IO_READ},
        {.addr=0xa347, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x2d54, .a=0x5a, .x=0xe4, .y=0xcf, .sp=0xf3, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x2d54, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2d55, .a=0x5a, .x=0xf3, .y=0xcf, .sp=0xf3, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x2d54, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2d54, .value=0x9d, .type=IO_READ},
        {.addr=0x2d55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x87d0, .a=0x0e, .x=0x7b, .y=0x14, .sp=0xc9, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x87d0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x87d1, .a=0x0e, .x=0xc9, .y=0x14, .sp=0xc9, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x87d0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x87d0, .value=0x9d, .type=IO_READ},
        {.addr=0x87d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x5e39, .a=0x4c, .x=0x2c, .y=0x0e, .sp=0x43, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x5e39, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5e3a, .a=0x4c, .x=0x43, .y=0x0e, .sp=0x43, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x5e39, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5e39, .value=0x9d, .type=IO_READ},
        {.addr=0x5e3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x55af, .a=0xd5, .x=0x2b, .y=0x43, .sp=0x58, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x55af, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x55b0, .a=0xd5, .x=0x58, .y=0x43, .sp=0x58, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x55af, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x55af, .value=0x9d, .type=IO_READ},
        {.addr=0x55b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xf486, .a=0x69, .x=0x3b, .y=0xe6, .sp=0x84, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xf486, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf487, .a=0x69, .x=0x84, .y=0xe6, .sp=0x84, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xf486, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf486, .value=0x9d, .type=IO_READ},
        {.addr=0xf487, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xc626, .a=0x3e, .x=0x9a, .y=0x3a, .sp=0xd2, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xc626, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc627, .a=0x3e, .x=0xd2, .y=0x3a, .sp=0xd2, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc626, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc626, .value=0x9d, .type=IO_READ},
        {.addr=0xc627, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xfffe, .a=0x12, .x=0xe9, .y=0x5b, .sp=0xc3, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xfffe, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xffff, .a=0x12, .x=0xc3, .y=0x5b, .sp=0xc3, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xfffe, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfffe, .value=0x9d, .type=IO_READ},
        {.addr=0xffff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x1866, .a=0x47, .x=0xc9, .y=0x1b, .sp=0x9a, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x1866, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1867, .a=0x47, .x=0x9a, .y=0x1b, .sp=0x9a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x1866, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1866, .value=0x9d, .type=IO_READ},
        {.addr=0x1867, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x1317, .a=0x13, .x=0x05, .y=0x6c, .sp=0x75, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x1317, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1318, .a=0x13, .x=0x75, .y=0x6c, .sp=0x75, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x1317, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1317, .value=0x9d, .type=IO_READ},
        {.addr=0x1318, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x26b1, .a=0x41, .x=0xa0, .y=0x43, .sp=0xc5, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x26b1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x26b2, .a=0x41, .x=0xc5, .y=0x43, .sp=0xc5, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x26b1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x26b1, .value=0x9d, .type=IO_READ},
        {.addr=0x26b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xe841, .a=0xdc, .x=0xe9, .y=0x7f, .sp=0x92, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xe841, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe842, .a=0xdc, .x=0x92, .y=0x7f, .sp=0x92, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xe841, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe841, .value=0x9d, .type=IO_READ},
        {.addr=0xe842, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x9ee0, .a=0x73, .x=0x66, .y=0x5c, .sp=0x99, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x9ee0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9ee1, .a=0x73, .x=0x99, .y=0x5c, .sp=0x99, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x9ee0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9ee0, .value=0x9d, .type=IO_READ},
        {.addr=0x9ee1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x094c, .a=0xf4, .x=0x3d, .y=0xfa, .sp=0x22, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x094c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x094d, .a=0xf4, .x=0x22, .y=0xfa, .sp=0x22, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x094c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x094c, .value=0x9d, .type=IO_READ},
        {.addr=0x094d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x2738, .a=0x9b, .x=0xdf, .y=0x4b, .sp=0x7b, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x2738, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2739, .a=0x9b, .x=0x7b, .y=0x4b, .sp=0x7b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x2738, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2738, .value=0x9d, .type=IO_READ},
        {.addr=0x2739, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x5bca, .a=0x5c, .x=0x1c, .y=0x2d, .sp=0xc0, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x5bca, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5bcb, .a=0x5c, .x=0xc0, .y=0x2d, .sp=0xc0, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x5bca, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5bca, .value=0x9d, .type=IO_READ},
        {.addr=0x5bcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xd4c9, .a=0xb1, .x=0xf0, .y=0x97, .sp=0xe8, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xd4c9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd4ca, .a=0xb1, .x=0xe8, .y=0x97, .sp=0xe8, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xd4c9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd4c9, .value=0x9d, .type=IO_READ},
        {.addr=0xd4ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xe102, .a=0x40, .x=0x25, .y=0x3e, .sp=0xdf, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xe102, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe103, .a=0x40, .x=0xdf, .y=0x3e, .sp=0xdf, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xe102, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe102, .value=0x9d, .type=IO_READ},
        {.addr=0xe103, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x8777, .a=0x51, .x=0xfc, .y=0x66, .sp=0x1a, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x8777, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8778, .a=0x51, .x=0x1a, .y=0x66, .sp=0x1a, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x8777, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8777, .value=0x9d, .type=IO_READ},
        {.addr=0x8778, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x5aac, .a=0x27, .x=0xac, .y=0x00, .sp=0x04, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x5aac, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5aad, .a=0x27, .x=0x04, .y=0x00, .sp=0x04, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x5aac, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5aac, .value=0x9d, .type=IO_READ},
        {.addr=0x5aad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xd054, .a=0x54, .x=0x21, .y=0x01, .sp=0xd3, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xd054, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd055, .a=0x54, .x=0xd3, .y=0x01, .sp=0xd3, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xd054, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd054, .value=0x9d, .type=IO_READ},
        {.addr=0xd055, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xa619, .a=0xf8, .x=0x81, .y=0x23, .sp=0x1d, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xa619, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa61a, .a=0xf8, .x=0x1d, .y=0x23, .sp=0x1d, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xa619, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa619, .value=0x9d, .type=IO_READ},
        {.addr=0xa61a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x5bff, .a=0xeb, .x=0x13, .y=0xef, .sp=0xf6, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x5bff, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5c00, .a=0xeb, .x=0xf6, .y=0xef, .sp=0xf6, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x5bff, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5bff, .value=0x9d, .type=IO_READ},
        {.addr=0x5c00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xbac9, .a=0x34, .x=0x78, .y=0x6f, .sp=0x47, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xbac9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbaca, .a=0x34, .x=0x47, .y=0x6f, .sp=0x47, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xbac9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbac9, .value=0x9d, .type=IO_READ},
        {.addr=0xbaca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x4dcd, .a=0x03, .x=0x66, .y=0xa3, .sp=0xda, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x4dcd, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4dce, .a=0x03, .x=0xda, .y=0xa3, .sp=0xda, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x4dcd, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4dcd, .value=0x9d, .type=IO_READ},
        {.addr=0x4dce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x940a, .a=0x83, .x=0x5a, .y=0x93, .sp=0xa7, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x940a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x940b, .a=0x83, .x=0xa7, .y=0x93, .sp=0xa7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x940a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x940a, .value=0x9d, .type=IO_READ},
        {.addr=0x940b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xde60, .a=0x93, .x=0x89, .y=0x85, .sp=0xb1, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xde60, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xde61, .a=0x93, .x=0xb1, .y=0x85, .sp=0xb1, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xde60, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xde60, .value=0x9d, .type=IO_READ},
        {.addr=0xde61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x3770, .a=0x08, .x=0x80, .y=0xbf, .sp=0xfb, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x3770, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3771, .a=0x08, .x=0xfb, .y=0xbf, .sp=0xfb, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x3770, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3770, .value=0x9d, .type=IO_READ},
        {.addr=0x3771, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x746e, .a=0x1a, .x=0x00, .y=0x43, .sp=0xed, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x746e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x746f, .a=0x1a, .x=0xed, .y=0x43, .sp=0xed, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x746e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x746e, .value=0x9d, .type=IO_READ},
        {.addr=0x746f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xd6d2, .a=0xee, .x=0x6d, .y=0xb7, .sp=0xd6, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xd6d2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd6d3, .a=0xee, .x=0xd6, .y=0xb7, .sp=0xd6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xd6d2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd6d2, .value=0x9d, .type=IO_READ},
        {.addr=0xd6d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x82fc, .a=0x31, .x=0xb5, .y=0xe3, .sp=0xd9, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x82fc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x82fd, .a=0x31, .x=0xd9, .y=0xe3, .sp=0xd9, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x82fc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x82fc, .value=0x9d, .type=IO_READ},
        {.addr=0x82fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xb1e0, .a=0xa8, .x=0x94, .y=0xda, .sp=0xed, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xb1e0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb1e1, .a=0xa8, .x=0xed, .y=0xda, .sp=0xed, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xb1e0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb1e0, .value=0x9d, .type=IO_READ},
        {.addr=0xb1e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x723a, .a=0xef, .x=0xd3, .y=0xef, .sp=0xfe, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x723a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x723b, .a=0xef, .x=0xfe, .y=0xef, .sp=0xfe, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x723a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x723a, .value=0x9d, .type=IO_READ},
        {.addr=0x723b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x7261, .a=0xb0, .x=0x56, .y=0x22, .sp=0x88, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x7261, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7262, .a=0xb0, .x=0x88, .y=0x22, .sp=0x88, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x7261, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7261, .value=0x9d, .type=IO_READ},
        {.addr=0x7262, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xa973, .a=0xdb, .x=0x7f, .y=0x98, .sp=0x11, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xa973, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa974, .a=0xdb, .x=0x11, .y=0x98, .sp=0x11, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xa973, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa973, .value=0x9d, .type=IO_READ},
        {.addr=0xa974, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xb51e, .a=0x1d, .x=0x8c, .y=0x3a, .sp=0x10, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xb51e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb51f, .a=0x1d, .x=0x10, .y=0x3a, .sp=0x10, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xb51e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb51e, .value=0x9d, .type=IO_READ},
        {.addr=0xb51f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xd281, .a=0x3f, .x=0xde, .y=0xbf, .sp=0xbf, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xd281, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd282, .a=0x3f, .x=0xbf, .y=0xbf, .sp=0xbf, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xd281, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd281, .value=0x9d, .type=IO_READ},
        {.addr=0xd282, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x3f91, .a=0xbc, .x=0x7e, .y=0x5b, .sp=0xad, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x3f91, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3f92, .a=0xbc, .x=0xad, .y=0x5b, .sp=0xad, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x3f91, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3f91, .value=0x9d, .type=IO_READ},
        {.addr=0x3f92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xd2d0, .a=0x28, .x=0x55, .y=0x09, .sp=0x7d, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xd2d0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd2d1, .a=0x28, .x=0x7d, .y=0x09, .sp=0x7d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xd2d0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd2d0, .value=0x9d, .type=IO_READ},
        {.addr=0xd2d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x9595, .a=0x2e, .x=0xfa, .y=0xdc, .sp=0x90, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x9595, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9596, .a=0x2e, .x=0x90, .y=0xdc, .sp=0x90, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x9595, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9595, .value=0x9d, .type=IO_READ},
        {.addr=0x9596, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x6441, .a=0x78, .x=0x6b, .y=0xd5, .sp=0x97, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x6441, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6442, .a=0x78, .x=0x97, .y=0xd5, .sp=0x97, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x6441, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6441, .value=0x9d, .type=IO_READ},
        {.addr=0x6442, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x6e8b, .a=0xa6, .x=0x05, .y=0x3b, .sp=0x78, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x6e8b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6e8c, .a=0xa6, .x=0x78, .y=0x3b, .sp=0x78, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x6e8b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6e8b, .value=0x9d, .type=IO_READ},
        {.addr=0x6e8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x81e0, .a=0x6b, .x=0x78, .y=0x66, .sp=0xf9, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x81e0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x81e1, .a=0x6b, .x=0xf9, .y=0x66, .sp=0xf9, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x81e0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x81e0, .value=0x9d, .type=IO_READ},
        {.addr=0x81e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xb7e6, .a=0x9a, .x=0x80, .y=0x26, .sp=0xa2, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xb7e6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb7e7, .a=0x9a, .x=0xa2, .y=0x26, .sp=0xa2, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xb7e6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb7e6, .value=0x9d, .type=IO_READ},
        {.addr=0xb7e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x9400, .a=0x62, .x=0x6a, .y=0x41, .sp=0x52, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x9400, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9401, .a=0x62, .x=0x52, .y=0x41, .sp=0x52, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x9400, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9400, .value=0x9d, .type=IO_READ},
        {.addr=0x9401, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xbd3a, .a=0x3d, .x=0x00, .y=0x1e, .sp=0xdd, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xbd3a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbd3b, .a=0x3d, .x=0xdd, .y=0x1e, .sp=0xdd, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xbd3a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbd3a, .value=0x9d, .type=IO_READ},
        {.addr=0xbd3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xe380, .a=0x99, .x=0xdc, .y=0x5d, .sp=0x97, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xe380, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe381, .a=0x99, .x=0x97, .y=0x5d, .sp=0x97, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xe380, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe380, .value=0x9d, .type=IO_READ},
        {.addr=0xe381, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x917a, .a=0xbb, .x=0xd0, .y=0xe8, .sp=0xa7, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x917a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x917b, .a=0xbb, .x=0xa7, .y=0xe8, .sp=0xa7, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x917a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x917a, .value=0x9d, .type=IO_READ},
        {.addr=0x917b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x899a, .a=0x47, .x=0xb1, .y=0x71, .sp=0xc3, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x899a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x899b, .a=0x47, .x=0xc3, .y=0x71, .sp=0xc3, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x899a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x899a, .value=0x9d, .type=IO_READ},
        {.addr=0x899b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x271a, .a=0x0e, .x=0x85, .y=0xec, .sp=0x79, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x271a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x271b, .a=0x0e, .x=0x79, .y=0xec, .sp=0x79, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x271a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x271a, .value=0x9d, .type=IO_READ},
        {.addr=0x271b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x49f1, .a=0x33, .x=0x6a, .y=0x11, .sp=0x7c, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x49f1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x49f2, .a=0x33, .x=0x7c, .y=0x11, .sp=0x7c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x49f1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x49f1, .value=0x9d, .type=IO_READ},
        {.addr=0x49f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x6c7c, .a=0x9f, .x=0xa2, .y=0x97, .sp=0xbc, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x6c7c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6c7d, .a=0x9f, .x=0xbc, .y=0x97, .sp=0xbc, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x6c7c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6c7c, .value=0x9d, .type=IO_READ},
        {.addr=0x6c7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x22a2, .a=0x9b, .x=0xe0, .y=0x2a, .sp=0xd8, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x22a2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x22a3, .a=0x9b, .x=0xd8, .y=0x2a, .sp=0xd8, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x22a2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x22a2, .value=0x9d, .type=IO_READ},
        {.addr=0x22a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x3207, .a=0xc7, .x=0x6c, .y=0x68, .sp=0x3e, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x3207, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3208, .a=0xc7, .x=0x3e, .y=0x68, .sp=0x3e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x3207, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3207, .value=0x9d, .type=IO_READ},
        {.addr=0x3208, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x653d, .a=0xfb, .x=0x72, .y=0x65, .sp=0xb0, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x653d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x653e, .a=0xfb, .x=0xb0, .y=0x65, .sp=0xb0, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x653d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x653d, .value=0x9d, .type=IO_READ},
        {.addr=0x653e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xb83a, .a=0xfe, .x=0x69, .y=0xd4, .sp=0xc0, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xb83a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb83b, .a=0xfe, .x=0xc0, .y=0xd4, .sp=0xc0, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xb83a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb83a, .value=0x9d, .type=IO_READ},
        {.addr=0xb83b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x7def, .a=0x85, .x=0x59, .y=0xa9, .sp=0x70, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x7def, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7df0, .a=0x85, .x=0x70, .y=0xa9, .sp=0x70, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x7def, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7def, .value=0x9d, .type=IO_READ},
        {.addr=0x7df0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x2515, .a=0x96, .x=0xe1, .y=0xdb, .sp=0x4a, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x2515, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2516, .a=0x96, .x=0x4a, .y=0xdb, .sp=0x4a, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x2515, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2515, .value=0x9d, .type=IO_READ},
        {.addr=0x2516, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x60b0, .a=0x6e, .x=0x4c, .y=0xa1, .sp=0x78, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x60b0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x60b1, .a=0x6e, .x=0x78, .y=0xa1, .sp=0x78, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x60b0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x60b0, .value=0x9d, .type=IO_READ},
        {.addr=0x60b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xc878, .a=0xba, .x=0xe8, .y=0x45, .sp=0x0a, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xc878, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc879, .a=0xba, .x=0x0a, .y=0x45, .sp=0x0a, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xc878, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc878, .value=0x9d, .type=IO_READ},
        {.addr=0xc879, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x77d2, .a=0x34, .x=0x22, .y=0x2d, .sp=0xbf, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x77d2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x77d3, .a=0x34, .x=0xbf, .y=0x2d, .sp=0xbf, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x77d2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x77d2, .value=0x9d, .type=IO_READ},
        {.addr=0x77d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x7859, .a=0x86, .x=0x59, .y=0x30, .sp=0xdc, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x7859, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x785a, .a=0x86, .x=0xdc, .y=0x30, .sp=0xdc, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x7859, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7859, .value=0x9d, .type=IO_READ},
        {.addr=0x785a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xdec9, .a=0xaf, .x=0xc1, .y=0xb2, .sp=0xd8, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xdec9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xdeca, .a=0xaf, .x=0xd8, .y=0xb2, .sp=0xd8, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xdec9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xdec9, .value=0x9d, .type=IO_READ},
        {.addr=0xdeca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x5a33, .a=0x35, .x=0xa9, .y=0xb1, .sp=0x83, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x5a33, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5a34, .a=0x35, .x=0x83, .y=0xb1, .sp=0x83, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x5a33, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5a33, .value=0x9d, .type=IO_READ},
        {.addr=0x5a34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xcae5, .a=0x63, .x=0x8a, .y=0x97, .sp=0x02, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xcae5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcae6, .a=0x63, .x=0x02, .y=0x97, .sp=0x02, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xcae5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcae5, .value=0x9d, .type=IO_READ},
        {.addr=0xcae6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xc494, .a=0xc6, .x=0xfd, .y=0xf6, .sp=0xcd, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xc494, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc495, .a=0xc6, .x=0xcd, .y=0xf6, .sp=0xcd, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xc494, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc494, .value=0x9d, .type=IO_READ},
        {.addr=0xc495, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x4247, .a=0xa0, .x=0x30, .y=0x1f, .sp=0x5f, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x4247, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4248, .a=0xa0, .x=0x5f, .y=0x1f, .sp=0x5f, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x4247, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4247, .value=0x9d, .type=IO_READ},
        {.addr=0x4248, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xb108, .a=0x18, .x=0xb7, .y=0x76, .sp=0xdf, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xb108, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb109, .a=0x18, .x=0xdf, .y=0x76, .sp=0xdf, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xb108, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb108, .value=0x9d, .type=IO_READ},
        {.addr=0xb109, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xadee, .a=0xd5, .x=0x7f, .y=0x4b, .sp=0xf4, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xadee, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xadef, .a=0xd5, .x=0xf4, .y=0x4b, .sp=0xf4, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xadee, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xadee, .value=0x9d, .type=IO_READ},
        {.addr=0xadef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x5023, .a=0xae, .x=0x27, .y=0x43, .sp=0xdb, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x5023, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5024, .a=0xae, .x=0xdb, .y=0x43, .sp=0xdb, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x5023, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5023, .value=0x9d, .type=IO_READ},
        {.addr=0x5024, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xf88d, .a=0xd4, .x=0xa5, .y=0x80, .sp=0x9b, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xf88d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf88e, .a=0xd4, .x=0x9b, .y=0x80, .sp=0x9b, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xf88d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf88d, .value=0x9d, .type=IO_READ},
        {.addr=0xf88e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x1290, .a=0x40, .x=0xc8, .y=0x02, .sp=0x42, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x1290, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1291, .a=0x40, .x=0x42, .y=0x02, .sp=0x42, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x1290, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1290, .value=0x9d, .type=IO_READ},
        {.addr=0x1291, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x2c33, .a=0xb9, .x=0x6e, .y=0x24, .sp=0x44, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x2c33, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2c34, .a=0xb9, .x=0x44, .y=0x24, .sp=0x44, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x2c33, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2c33, .value=0x9d, .type=IO_READ},
        {.addr=0x2c34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x209f, .a=0x81, .x=0xb7, .y=0xb6, .sp=0x58, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x209f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x20a0, .a=0x81, .x=0x58, .y=0xb6, .sp=0x58, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x209f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x209f, .value=0x9d, .type=IO_READ},
        {.addr=0x20a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xe6ad, .a=0xb2, .x=0x84, .y=0x2d, .sp=0xc0, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xe6ad, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe6ae, .a=0xb2, .x=0xc0, .y=0x2d, .sp=0xc0, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xe6ad, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe6ad, .value=0x9d, .type=IO_READ},
        {.addr=0xe6ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x907a, .a=0x53, .x=0x18, .y=0xca, .sp=0xfb, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x907a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x907b, .a=0x53, .x=0xfb, .y=0xca, .sp=0xfb, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x907a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x907a, .value=0x9d, .type=IO_READ},
        {.addr=0x907b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xb1fc, .a=0xed, .x=0x4b, .y=0xfa, .sp=0x43, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xb1fc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb1fd, .a=0xed, .x=0x43, .y=0xfa, .sp=0x43, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xb1fc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb1fc, .value=0x9d, .type=IO_READ},
        {.addr=0xb1fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x4e78, .a=0x22, .x=0x4b, .y=0x6e, .sp=0x2c, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x4e78, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4e79, .a=0x22, .x=0x2c, .y=0x6e, .sp=0x2c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x4e78, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4e78, .value=0x9d, .type=IO_READ},
        {.addr=0x4e79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0300) {
    const struct CPU_State initial_cpu = {.pc=0xdc8e, .a=0x33, .x=0x73, .y=0x96, .sp=0x2e, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xdc8e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xdc8f, .a=0x33, .x=0x2e, .y=0x96, .sp=0x2e, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xdc8e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xdc8e, .value=0x9d, .type=IO_READ},
        {.addr=0xdc8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0301) {
    const struct CPU_State initial_cpu = {.pc=0xa219, .a=0x09, .x=0x4d, .y=0x73, .sp=0xbb, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xa219, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa21a, .a=0x09, .x=0xbb, .y=0x73, .sp=0xbb, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xa219, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa219, .value=0x9d, .type=IO_READ},
        {.addr=0xa21a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0302) {
    const struct CPU_State initial_cpu = {.pc=0x57be, .a=0x4d, .x=0x77, .y=0x3d, .sp=0xf9, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x57be, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x57bf, .a=0x4d, .x=0xf9, .y=0x3d, .sp=0xf9, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x57be, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x57be, .value=0x9d, .type=IO_READ},
        {.addr=0x57bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0303) {
    const struct CPU_State initial_cpu = {.pc=0xefbf, .a=0x20, .x=0xaa, .y=0x77, .sp=0x81, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xefbf, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xefc0, .a=0x20, .x=0x81, .y=0x77, .sp=0x81, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xefbf, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xefbf, .value=0x9d, .type=IO_READ},
        {.addr=0xefc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0304) {
    const struct CPU_State initial_cpu = {.pc=0xabbe, .a=0xb4, .x=0x28, .y=0x9e, .sp=0x59, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xabbe, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xabbf, .a=0xb4, .x=0x59, .y=0x9e, .sp=0x59, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xabbe, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xabbe, .value=0x9d, .type=IO_READ},
        {.addr=0xabbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0305) {
    const struct CPU_State initial_cpu = {.pc=0x0e6a, .a=0xf9, .x=0x67, .y=0x5c, .sp=0xd9, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0e6a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0e6b, .a=0xf9, .x=0xd9, .y=0x5c, .sp=0xd9, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0e6a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0e6a, .value=0x9d, .type=IO_READ},
        {.addr=0x0e6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0306) {
    const struct CPU_State initial_cpu = {.pc=0x1d15, .a=0x6f, .x=0x86, .y=0xdc, .sp=0x7e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x1d15, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1d16, .a=0x6f, .x=0x7e, .y=0xdc, .sp=0x7e, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x1d15, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1d15, .value=0x9d, .type=IO_READ},
        {.addr=0x1d16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0307) {
    const struct CPU_State initial_cpu = {.pc=0x424d, .a=0xdd, .x=0x2d, .y=0xac, .sp=0xd5, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x424d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x424e, .a=0xdd, .x=0xd5, .y=0xac, .sp=0xd5, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x424d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x424d, .value=0x9d, .type=IO_READ},
        {.addr=0x424e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0308) {
    const struct CPU_State initial_cpu = {.pc=0xaa92, .a=0xd3, .x=0xea, .y=0x1e, .sp=0xfb, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xaa92, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xaa93, .a=0xd3, .x=0xfb, .y=0x1e, .sp=0xfb, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xaa92, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xaa92, .value=0x9d, .type=IO_READ},
        {.addr=0xaa93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0309) {
    const struct CPU_State initial_cpu = {.pc=0x70d5, .a=0x63, .x=0xce, .y=0x79, .sp=0x92, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x70d5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x70d6, .a=0x63, .x=0x92, .y=0x79, .sp=0x92, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x70d5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x70d5, .value=0x9d, .type=IO_READ},
        {.addr=0x70d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_030A) {
    const struct CPU_State initial_cpu = {.pc=0xb813, .a=0x68, .x=0x4a, .y=0x1d, .sp=0xcf, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xb813, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb814, .a=0x68, .x=0xcf, .y=0x1d, .sp=0xcf, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xb813, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb813, .value=0x9d, .type=IO_READ},
        {.addr=0xb814, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_030B) {
    const struct CPU_State initial_cpu = {.pc=0xa2e0, .a=0xa4, .x=0x7d, .y=0x84, .sp=0x5b, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xa2e0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa2e1, .a=0xa4, .x=0x5b, .y=0x84, .sp=0x5b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xa2e0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa2e0, .value=0x9d, .type=IO_READ},
        {.addr=0xa2e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_030C) {
    const struct CPU_State initial_cpu = {.pc=0x1315, .a=0x33, .x=0x19, .y=0x33, .sp=0xbb, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x1315, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1316, .a=0x33, .x=0xbb, .y=0x33, .sp=0xbb, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x1315, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1315, .value=0x9d, .type=IO_READ},
        {.addr=0x1316, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_030D) {
    const struct CPU_State initial_cpu = {.pc=0x1e3a, .a=0x29, .x=0x7e, .y=0xac, .sp=0xe6, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x1e3a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1e3b, .a=0x29, .x=0xe6, .y=0xac, .sp=0xe6, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x1e3a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1e3a, .value=0x9d, .type=IO_READ},
        {.addr=0x1e3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_030E) {
    const struct CPU_State initial_cpu = {.pc=0xb25e, .a=0xa6, .x=0x94, .y=0xc2, .sp=0x51, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xb25e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb25f, .a=0xa6, .x=0x51, .y=0xc2, .sp=0x51, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xb25e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb25e, .value=0x9d, .type=IO_READ},
        {.addr=0xb25f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_030F) {
    const struct CPU_State initial_cpu = {.pc=0x1b35, .a=0x2b, .x=0x90, .y=0xb9, .sp=0x9c, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x1b35, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1b36, .a=0x2b, .x=0x9c, .y=0xb9, .sp=0x9c, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x1b35, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1b35, .value=0x9d, .type=IO_READ},
        {.addr=0x1b36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0310) {
    const struct CPU_State initial_cpu = {.pc=0x2f78, .a=0xf4, .x=0x25, .y=0x92, .sp=0x00, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x2f78, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2f79, .a=0xf4, .x=0x00, .y=0x92, .sp=0x00, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x2f78, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2f78, .value=0x9d, .type=IO_READ},
        {.addr=0x2f79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0311) {
    const struct CPU_State initial_cpu = {.pc=0xda3c, .a=0xba, .x=0x6b, .y=0xee, .sp=0x2f, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xda3c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xda3d, .a=0xba, .x=0x2f, .y=0xee, .sp=0x2f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xda3c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xda3c, .value=0x9d, .type=IO_READ},
        {.addr=0xda3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0312) {
    const struct CPU_State initial_cpu = {.pc=0xb7ec, .a=0x2e, .x=0x0f, .y=0x15, .sp=0x5c, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xb7ec, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb7ed, .a=0x2e, .x=0x5c, .y=0x15, .sp=0x5c, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xb7ec, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb7ec, .value=0x9d, .type=IO_READ},
        {.addr=0xb7ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0313) {
    const struct CPU_State initial_cpu = {.pc=0x8ce7, .a=0xa6, .x=0x61, .y=0x5c, .sp=0x58, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x8ce7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8ce8, .a=0xa6, .x=0x58, .y=0x5c, .sp=0x58, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x8ce7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8ce7, .value=0x9d, .type=IO_READ},
        {.addr=0x8ce8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0314) {
    const struct CPU_State initial_cpu = {.pc=0xf34c, .a=0x01, .x=0x34, .y=0xb9, .sp=0xc6, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xf34c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf34d, .a=0x01, .x=0xc6, .y=0xb9, .sp=0xc6, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xf34c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf34c, .value=0x9d, .type=IO_READ},
        {.addr=0xf34d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0315) {
    const struct CPU_State initial_cpu = {.pc=0x791b, .a=0x56, .x=0x52, .y=0xfe, .sp=0xcb, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x791b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x791c, .a=0x56, .x=0xcb, .y=0xfe, .sp=0xcb, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x791b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x791b, .value=0x9d, .type=IO_READ},
        {.addr=0x791c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0316) {
    const struct CPU_State initial_cpu = {.pc=0x0ce2, .a=0x1b, .x=0xaf, .y=0x01, .sp=0xb2, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0ce2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0ce3, .a=0x1b, .x=0xb2, .y=0x01, .sp=0xb2, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0ce2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0ce2, .value=0x9d, .type=IO_READ},
        {.addr=0x0ce3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0317) {
    const struct CPU_State initial_cpu = {.pc=0x7933, .a=0x16, .x=0x95, .y=0x35, .sp=0x36, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x7933, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7934, .a=0x16, .x=0x36, .y=0x35, .sp=0x36, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x7933, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7933, .value=0x9d, .type=IO_READ},
        {.addr=0x7934, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0318) {
    const struct CPU_State initial_cpu = {.pc=0xb19b, .a=0x52, .x=0xde, .y=0x9a, .sp=0xa4, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xb19b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb19c, .a=0x52, .x=0xa4, .y=0x9a, .sp=0xa4, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xb19b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb19b, .value=0x9d, .type=IO_READ},
        {.addr=0xb19c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0319) {
    const struct CPU_State initial_cpu = {.pc=0x392e, .a=0x14, .x=0x88, .y=0x58, .sp=0x64, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x392e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x392f, .a=0x14, .x=0x64, .y=0x58, .sp=0x64, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x392e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x392e, .value=0x9d, .type=IO_READ},
        {.addr=0x392f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_031A) {
    const struct CPU_State initial_cpu = {.pc=0x430d, .a=0xa3, .x=0x4e, .y=0x54, .sp=0xb7, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x430d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x430e, .a=0xa3, .x=0xb7, .y=0x54, .sp=0xb7, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x430d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x430d, .value=0x9d, .type=IO_READ},
        {.addr=0x430e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_031B) {
    const struct CPU_State initial_cpu = {.pc=0x9862, .a=0xa7, .x=0x7d, .y=0x1f, .sp=0x37, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x9862, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9863, .a=0xa7, .x=0x37, .y=0x1f, .sp=0x37, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x9862, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9862, .value=0x9d, .type=IO_READ},
        {.addr=0x9863, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_031C) {
    const struct CPU_State initial_cpu = {.pc=0x35dc, .a=0x98, .x=0xe8, .y=0xe0, .sp=0x58, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x35dc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x35dd, .a=0x98, .x=0x58, .y=0xe0, .sp=0x58, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x35dc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x35dc, .value=0x9d, .type=IO_READ},
        {.addr=0x35dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_031D) {
    const struct CPU_State initial_cpu = {.pc=0x022b, .a=0x5b, .x=0x75, .y=0x01, .sp=0x9e, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x022b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x022c, .a=0x5b, .x=0x9e, .y=0x01, .sp=0x9e, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x022b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x022b, .value=0x9d, .type=IO_READ},
        {.addr=0x022c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_031E) {
    const struct CPU_State initial_cpu = {.pc=0xf48c, .a=0x55, .x=0x01, .y=0xc8, .sp=0xb1, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xf48c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf48d, .a=0x55, .x=0xb1, .y=0xc8, .sp=0xb1, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xf48c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf48c, .value=0x9d, .type=IO_READ},
        {.addr=0xf48d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_031F) {
    const struct CPU_State initial_cpu = {.pc=0xe4ac, .a=0xb7, .x=0x33, .y=0xad, .sp=0x67, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xe4ac, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe4ad, .a=0xb7, .x=0x67, .y=0xad, .sp=0x67, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xe4ac, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe4ac, .value=0x9d, .type=IO_READ},
        {.addr=0xe4ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0320) {
    const struct CPU_State initial_cpu = {.pc=0x3343, .a=0x60, .x=0x1d, .y=0x69, .sp=0x6f, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x3343, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3344, .a=0x60, .x=0x6f, .y=0x69, .sp=0x6f, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x3343, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3343, .value=0x9d, .type=IO_READ},
        {.addr=0x3344, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0321) {
    const struct CPU_State initial_cpu = {.pc=0xd184, .a=0xf1, .x=0x0f, .y=0xff, .sp=0xc4, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xd184, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd185, .a=0xf1, .x=0xc4, .y=0xff, .sp=0xc4, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xd184, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd184, .value=0x9d, .type=IO_READ},
        {.addr=0xd185, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0322) {
    const struct CPU_State initial_cpu = {.pc=0x6db6, .a=0x98, .x=0xce, .y=0xca, .sp=0x45, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x6db6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6db7, .a=0x98, .x=0x45, .y=0xca, .sp=0x45, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x6db6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6db6, .value=0x9d, .type=IO_READ},
        {.addr=0x6db7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0323) {
    const struct CPU_State initial_cpu = {.pc=0x805e, .a=0x71, .x=0x9c, .y=0x80, .sp=0xa3, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x805e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x805f, .a=0x71, .x=0xa3, .y=0x80, .sp=0xa3, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x805e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x805e, .value=0x9d, .type=IO_READ},
        {.addr=0x805f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0324) {
    const struct CPU_State initial_cpu = {.pc=0xc9f6, .a=0x9c, .x=0xb8, .y=0xcf, .sp=0x12, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xc9f6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc9f7, .a=0x9c, .x=0x12, .y=0xcf, .sp=0x12, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc9f6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc9f6, .value=0x9d, .type=IO_READ},
        {.addr=0xc9f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0325) {
    const struct CPU_State initial_cpu = {.pc=0xf55f, .a=0xbf, .x=0x6b, .y=0x42, .sp=0x5b, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xf55f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf560, .a=0xbf, .x=0x5b, .y=0x42, .sp=0x5b, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xf55f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf55f, .value=0x9d, .type=IO_READ},
        {.addr=0xf560, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0326) {
    const struct CPU_State initial_cpu = {.pc=0x0e67, .a=0x47, .x=0xdc, .y=0x76, .sp=0x35, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0e67, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0e68, .a=0x47, .x=0x35, .y=0x76, .sp=0x35, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0e67, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0e67, .value=0x9d, .type=IO_READ},
        {.addr=0x0e68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0327) {
    const struct CPU_State initial_cpu = {.pc=0x7ad1, .a=0xc4, .x=0x15, .y=0xbf, .sp=0x1d, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x7ad1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7ad2, .a=0xc4, .x=0x1d, .y=0xbf, .sp=0x1d, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x7ad1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7ad1, .value=0x9d, .type=IO_READ},
        {.addr=0x7ad2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0328) {
    const struct CPU_State initial_cpu = {.pc=0xff0b, .a=0xe8, .x=0x11, .y=0x8c, .sp=0x80, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xff0b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xff0c, .a=0xe8, .x=0x80, .y=0x8c, .sp=0x80, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xff0b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xff0b, .value=0x9d, .type=IO_READ},
        {.addr=0xff0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0329) {
    const struct CPU_State initial_cpu = {.pc=0x63fd, .a=0x07, .x=0x5d, .y=0xc3, .sp=0x4c, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x63fd, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x63fe, .a=0x07, .x=0x4c, .y=0xc3, .sp=0x4c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x63fd, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x63fd, .value=0x9d, .type=IO_READ},
        {.addr=0x63fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_032A) {
    const struct CPU_State initial_cpu = {.pc=0x5a6a, .a=0xac, .x=0x18, .y=0x14, .sp=0xe5, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x5a6a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5a6b, .a=0xac, .x=0xe5, .y=0x14, .sp=0xe5, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x5a6a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5a6a, .value=0x9d, .type=IO_READ},
        {.addr=0x5a6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_032B) {
    const struct CPU_State initial_cpu = {.pc=0x5d34, .a=0x24, .x=0x63, .y=0x2a, .sp=0xce, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x5d34, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5d35, .a=0x24, .x=0xce, .y=0x2a, .sp=0xce, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x5d34, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5d34, .value=0x9d, .type=IO_READ},
        {.addr=0x5d35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_032C) {
    const struct CPU_State initial_cpu = {.pc=0x58d2, .a=0x45, .x=0xa6, .y=0x30, .sp=0x2c, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x58d2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x58d3, .a=0x45, .x=0x2c, .y=0x30, .sp=0x2c, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x58d2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x58d2, .value=0x9d, .type=IO_READ},
        {.addr=0x58d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_032D) {
    const struct CPU_State initial_cpu = {.pc=0x3d55, .a=0xf8, .x=0x3b, .y=0xc1, .sp=0xb4, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x3d55, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3d56, .a=0xf8, .x=0xb4, .y=0xc1, .sp=0xb4, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x3d55, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3d55, .value=0x9d, .type=IO_READ},
        {.addr=0x3d56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_032E) {
    const struct CPU_State initial_cpu = {.pc=0x9186, .a=0x09, .x=0xb2, .y=0x87, .sp=0xe8, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x9186, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9187, .a=0x09, .x=0xe8, .y=0x87, .sp=0xe8, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x9186, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9186, .value=0x9d, .type=IO_READ},
        {.addr=0x9187, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_032F) {
    const struct CPU_State initial_cpu = {.pc=0x5be6, .a=0xa0, .x=0xe5, .y=0x0a, .sp=0x87, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x5be6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5be7, .a=0xa0, .x=0x87, .y=0x0a, .sp=0x87, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x5be6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5be6, .value=0x9d, .type=IO_READ},
        {.addr=0x5be7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0330) {
    const struct CPU_State initial_cpu = {.pc=0x019f, .a=0xdf, .x=0x2c, .y=0xec, .sp=0x37, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x01a0, .a=0xdf, .x=0x37, .y=0xec, .sp=0x37, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x019f, .value=0x9d, .type=IO_READ},
        {.addr=0x01a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0331) {
    const struct CPU_State initial_cpu = {.pc=0x8613, .a=0xb0, .x=0x55, .y=0x02, .sp=0x6d, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x8613, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8614, .a=0xb0, .x=0x6d, .y=0x02, .sp=0x6d, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x8613, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8613, .value=0x9d, .type=IO_READ},
        {.addr=0x8614, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0332) {
    const struct CPU_State initial_cpu = {.pc=0x8cd8, .a=0x81, .x=0x52, .y=0x0e, .sp=0x3e, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x8cd8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8cd9, .a=0x81, .x=0x3e, .y=0x0e, .sp=0x3e, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x8cd8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8cd8, .value=0x9d, .type=IO_READ},
        {.addr=0x8cd9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0333) {
    const struct CPU_State initial_cpu = {.pc=0xb508, .a=0x27, .x=0x16, .y=0x54, .sp=0xc6, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xb508, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb509, .a=0x27, .x=0xc6, .y=0x54, .sp=0xc6, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xb508, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb508, .value=0x9d, .type=IO_READ},
        {.addr=0xb509, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0334) {
    const struct CPU_State initial_cpu = {.pc=0x9508, .a=0x21, .x=0x76, .y=0xe3, .sp=0x44, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x9508, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9509, .a=0x21, .x=0x44, .y=0xe3, .sp=0x44, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x9508, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9508, .value=0x9d, .type=IO_READ},
        {.addr=0x9509, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0335) {
    const struct CPU_State initial_cpu = {.pc=0x10b0, .a=0x6a, .x=0xf3, .y=0xcf, .sp=0x36, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x10b0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x10b1, .a=0x6a, .x=0x36, .y=0xcf, .sp=0x36, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x10b0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x10b0, .value=0x9d, .type=IO_READ},
        {.addr=0x10b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0336) {
    const struct CPU_State initial_cpu = {.pc=0x0f18, .a=0xdb, .x=0xce, .y=0xb4, .sp=0xe2, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0f18, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0f19, .a=0xdb, .x=0xe2, .y=0xb4, .sp=0xe2, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0f18, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0f18, .value=0x9d, .type=IO_READ},
        {.addr=0x0f19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0337) {
    const struct CPU_State initial_cpu = {.pc=0xffab, .a=0x3b, .x=0x10, .y=0x93, .sp=0xfd, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xffab, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xffac, .a=0x3b, .x=0xfd, .y=0x93, .sp=0xfd, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xffab, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xffab, .value=0x9d, .type=IO_READ},
        {.addr=0xffac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0338) {
    const struct CPU_State initial_cpu = {.pc=0xe14a, .a=0x6c, .x=0x6d, .y=0x19, .sp=0x4e, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xe14a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe14b, .a=0x6c, .x=0x4e, .y=0x19, .sp=0x4e, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xe14a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe14a, .value=0x9d, .type=IO_READ},
        {.addr=0xe14b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0339) {
    const struct CPU_State initial_cpu = {.pc=0x1f7b, .a=0x5e, .x=0x65, .y=0x4e, .sp=0x64, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x1f7b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1f7c, .a=0x5e, .x=0x64, .y=0x4e, .sp=0x64, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x1f7b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1f7b, .value=0x9d, .type=IO_READ},
        {.addr=0x1f7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_033A) {
    const struct CPU_State initial_cpu = {.pc=0x2cbb, .a=0x52, .x=0x30, .y=0x04, .sp=0x94, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x2cbb, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2cbc, .a=0x52, .x=0x94, .y=0x04, .sp=0x94, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x2cbb, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2cbb, .value=0x9d, .type=IO_READ},
        {.addr=0x2cbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_033B) {
    const struct CPU_State initial_cpu = {.pc=0x1d0a, .a=0x41, .x=0x94, .y=0xb8, .sp=0xee, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x1d0a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1d0b, .a=0x41, .x=0xee, .y=0xb8, .sp=0xee, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x1d0a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1d0a, .value=0x9d, .type=IO_READ},
        {.addr=0x1d0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_033C) {
    const struct CPU_State initial_cpu = {.pc=0x36b1, .a=0x5f, .x=0xc0, .y=0xa6, .sp=0xfb, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x36b1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x36b2, .a=0x5f, .x=0xfb, .y=0xa6, .sp=0xfb, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x36b1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x36b1, .value=0x9d, .type=IO_READ},
        {.addr=0x36b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_033D) {
    const struct CPU_State initial_cpu = {.pc=0xf269, .a=0x1e, .x=0x85, .y=0xd0, .sp=0x57, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xf269, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf26a, .a=0x1e, .x=0x57, .y=0xd0, .sp=0x57, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf269, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf269, .value=0x9d, .type=IO_READ},
        {.addr=0xf26a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_033E) {
    const struct CPU_State initial_cpu = {.pc=0x892a, .a=0xa9, .x=0x4d, .y=0x6d, .sp=0x2b, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x892a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x892b, .a=0xa9, .x=0x2b, .y=0x6d, .sp=0x2b, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x892a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x892a, .value=0x9d, .type=IO_READ},
        {.addr=0x892b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_033F) {
    const struct CPU_State initial_cpu = {.pc=0x1bf4, .a=0xca, .x=0x33, .y=0xb9, .sp=0xb1, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x1bf4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1bf5, .a=0xca, .x=0xb1, .y=0xb9, .sp=0xb1, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x1bf4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1bf4, .value=0x9d, .type=IO_READ},
        {.addr=0x1bf5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0340) {
    const struct CPU_State initial_cpu = {.pc=0x6920, .a=0xc4, .x=0xea, .y=0xce, .sp=0xea, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x6920, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6921, .a=0xc4, .x=0xea, .y=0xce, .sp=0xea, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x6920, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6920, .value=0x9d, .type=IO_READ},
        {.addr=0x6921, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0341) {
    const struct CPU_State initial_cpu = {.pc=0x543a, .a=0x96, .x=0xa5, .y=0xe7, .sp=0xb9, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x543a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x543b, .a=0x96, .x=0xb9, .y=0xe7, .sp=0xb9, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x543a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x543a, .value=0x9d, .type=IO_READ},
        {.addr=0x543b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0342) {
    const struct CPU_State initial_cpu = {.pc=0x7cd4, .a=0x1a, .x=0xb4, .y=0x5b, .sp=0xc4, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x7cd4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7cd5, .a=0x1a, .x=0xc4, .y=0x5b, .sp=0xc4, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x7cd4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7cd4, .value=0x9d, .type=IO_READ},
        {.addr=0x7cd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0343) {
    const struct CPU_State initial_cpu = {.pc=0x0e3b, .a=0xa1, .x=0xb2, .y=0x2e, .sp=0xf0, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0e3b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0e3c, .a=0xa1, .x=0xf0, .y=0x2e, .sp=0xf0, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0e3b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0e3b, .value=0x9d, .type=IO_READ},
        {.addr=0x0e3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0344) {
    const struct CPU_State initial_cpu = {.pc=0x94ba, .a=0xee, .x=0xd4, .y=0x01, .sp=0x81, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x94ba, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x94bb, .a=0xee, .x=0x81, .y=0x01, .sp=0x81, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x94ba, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x94ba, .value=0x9d, .type=IO_READ},
        {.addr=0x94bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0345) {
    const struct CPU_State initial_cpu = {.pc=0xc4ac, .a=0x3e, .x=0x61, .y=0xce, .sp=0x46, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xc4ac, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc4ad, .a=0x3e, .x=0x46, .y=0xce, .sp=0x46, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xc4ac, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc4ac, .value=0x9d, .type=IO_READ},
        {.addr=0xc4ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0346) {
    const struct CPU_State initial_cpu = {.pc=0x8d2b, .a=0x15, .x=0xef, .y=0xcd, .sp=0xc5, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x8d2b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8d2c, .a=0x15, .x=0xc5, .y=0xcd, .sp=0xc5, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x8d2b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8d2b, .value=0x9d, .type=IO_READ},
        {.addr=0x8d2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0347) {
    const struct CPU_State initial_cpu = {.pc=0x98a6, .a=0x8a, .x=0x15, .y=0x17, .sp=0xe8, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x98a6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x98a7, .a=0x8a, .x=0xe8, .y=0x17, .sp=0xe8, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x98a6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x98a6, .value=0x9d, .type=IO_READ},
        {.addr=0x98a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0348) {
    const struct CPU_State initial_cpu = {.pc=0xc37d, .a=0xc9, .x=0xaa, .y=0xe2, .sp=0xba, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xc37d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc37e, .a=0xc9, .x=0xba, .y=0xe2, .sp=0xba, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xc37d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc37d, .value=0x9d, .type=IO_READ},
        {.addr=0xc37e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0349) {
    const struct CPU_State initial_cpu = {.pc=0x5436, .a=0x7a, .x=0x58, .y=0xf6, .sp=0x58, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x5436, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5437, .a=0x7a, .x=0x58, .y=0xf6, .sp=0x58, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x5436, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5436, .value=0x9d, .type=IO_READ},
        {.addr=0x5437, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_034A) {
    const struct CPU_State initial_cpu = {.pc=0x8f7b, .a=0x28, .x=0x38, .y=0xbe, .sp=0xf0, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x8f7b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8f7c, .a=0x28, .x=0xf0, .y=0xbe, .sp=0xf0, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x8f7b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8f7b, .value=0x9d, .type=IO_READ},
        {.addr=0x8f7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_034B) {
    const struct CPU_State initial_cpu = {.pc=0xca4c, .a=0x58, .x=0x88, .y=0x2f, .sp=0x02, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xca4c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xca4d, .a=0x58, .x=0x02, .y=0x2f, .sp=0x02, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xca4c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xca4c, .value=0x9d, .type=IO_READ},
        {.addr=0xca4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_034C) {
    const struct CPU_State initial_cpu = {.pc=0xfb3e, .a=0xe2, .x=0x9e, .y=0xb9, .sp=0x3c, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xfb3e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xfb3f, .a=0xe2, .x=0x3c, .y=0xb9, .sp=0x3c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xfb3e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfb3e, .value=0x9d, .type=IO_READ},
        {.addr=0xfb3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_034D) {
    const struct CPU_State initial_cpu = {.pc=0x0a11, .a=0xe1, .x=0x23, .y=0x38, .sp=0xdb, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0a11, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0a12, .a=0xe1, .x=0xdb, .y=0x38, .sp=0xdb, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0a11, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0a11, .value=0x9d, .type=IO_READ},
        {.addr=0x0a12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_034E) {
    const struct CPU_State initial_cpu = {.pc=0x9700, .a=0xb4, .x=0x58, .y=0xb3, .sp=0xc1, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x9700, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9701, .a=0xb4, .x=0xc1, .y=0xb3, .sp=0xc1, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9700, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9700, .value=0x9d, .type=IO_READ},
        {.addr=0x9701, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_034F) {
    const struct CPU_State initial_cpu = {.pc=0x278e, .a=0x29, .x=0xef, .y=0x48, .sp=0x28, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x278e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x278f, .a=0x29, .x=0x28, .y=0x48, .sp=0x28, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x278e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x278e, .value=0x9d, .type=IO_READ},
        {.addr=0x278f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0350) {
    const struct CPU_State initial_cpu = {.pc=0x38c0, .a=0x39, .x=0x71, .y=0xfb, .sp=0x97, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x38c0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x38c1, .a=0x39, .x=0x97, .y=0xfb, .sp=0x97, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x38c0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x38c0, .value=0x9d, .type=IO_READ},
        {.addr=0x38c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0351) {
    const struct CPU_State initial_cpu = {.pc=0xeec7, .a=0x86, .x=0xcf, .y=0xb3, .sp=0x05, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xeec7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xeec8, .a=0x86, .x=0x05, .y=0xb3, .sp=0x05, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xeec7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xeec7, .value=0x9d, .type=IO_READ},
        {.addr=0xeec8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0352) {
    const struct CPU_State initial_cpu = {.pc=0x65e4, .a=0x3b, .x=0x08, .y=0x3d, .sp=0x0e, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x65e4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x65e5, .a=0x3b, .x=0x0e, .y=0x3d, .sp=0x0e, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x65e4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x65e4, .value=0x9d, .type=IO_READ},
        {.addr=0x65e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0353) {
    const struct CPU_State initial_cpu = {.pc=0x2ab3, .a=0xec, .x=0x02, .y=0x80, .sp=0xcf, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x2ab3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2ab4, .a=0xec, .x=0xcf, .y=0x80, .sp=0xcf, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x2ab3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2ab3, .value=0x9d, .type=IO_READ},
        {.addr=0x2ab4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0354) {
    const struct CPU_State initial_cpu = {.pc=0xccda, .a=0xfc, .x=0x6a, .y=0xbc, .sp=0xa2, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xccda, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xccdb, .a=0xfc, .x=0xa2, .y=0xbc, .sp=0xa2, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xccda, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xccda, .value=0x9d, .type=IO_READ},
        {.addr=0xccdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0355) {
    const struct CPU_State initial_cpu = {.pc=0x605c, .a=0x11, .x=0x73, .y=0x94, .sp=0xfa, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x605c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x605d, .a=0x11, .x=0xfa, .y=0x94, .sp=0xfa, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x605c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x605c, .value=0x9d, .type=IO_READ},
        {.addr=0x605d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0356) {
    const struct CPU_State initial_cpu = {.pc=0x449f, .a=0x28, .x=0x22, .y=0x10, .sp=0x5c, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x449f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x44a0, .a=0x28, .x=0x5c, .y=0x10, .sp=0x5c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x449f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x449f, .value=0x9d, .type=IO_READ},
        {.addr=0x44a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0357) {
    const struct CPU_State initial_cpu = {.pc=0x39bc, .a=0x76, .x=0xc9, .y=0x78, .sp=0xfb, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x39bc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x39bd, .a=0x76, .x=0xfb, .y=0x78, .sp=0xfb, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x39bc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x39bc, .value=0x9d, .type=IO_READ},
        {.addr=0x39bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0358) {
    const struct CPU_State initial_cpu = {.pc=0x2f8d, .a=0xad, .x=0x87, .y=0xd0, .sp=0xc5, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x2f8d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2f8e, .a=0xad, .x=0xc5, .y=0xd0, .sp=0xc5, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x2f8d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2f8d, .value=0x9d, .type=IO_READ},
        {.addr=0x2f8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0359) {
    const struct CPU_State initial_cpu = {.pc=0xfdeb, .a=0xd1, .x=0x4e, .y=0x40, .sp=0x69, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xfdeb, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xfdec, .a=0xd1, .x=0x69, .y=0x40, .sp=0x69, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xfdeb, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfdeb, .value=0x9d, .type=IO_READ},
        {.addr=0xfdec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_035A) {
    const struct CPU_State initial_cpu = {.pc=0x7c07, .a=0x62, .x=0x84, .y=0x29, .sp=0xc4, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x7c07, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7c08, .a=0x62, .x=0xc4, .y=0x29, .sp=0xc4, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x7c07, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7c07, .value=0x9d, .type=IO_READ},
        {.addr=0x7c08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_035B) {
    const struct CPU_State initial_cpu = {.pc=0x1504, .a=0x20, .x=0xb4, .y=0xe3, .sp=0x34, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x1504, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1505, .a=0x20, .x=0x34, .y=0xe3, .sp=0x34, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x1504, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1504, .value=0x9d, .type=IO_READ},
        {.addr=0x1505, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_035C) {
    const struct CPU_State initial_cpu = {.pc=0x9fe5, .a=0xfa, .x=0x68, .y=0x97, .sp=0x9d, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x9fe5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9fe6, .a=0xfa, .x=0x9d, .y=0x97, .sp=0x9d, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x9fe5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9fe5, .value=0x9d, .type=IO_READ},
        {.addr=0x9fe6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_035D) {
    const struct CPU_State initial_cpu = {.pc=0xd304, .a=0xd7, .x=0x1e, .y=0x33, .sp=0xb0, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xd304, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd305, .a=0xd7, .x=0xb0, .y=0x33, .sp=0xb0, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xd304, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd304, .value=0x9d, .type=IO_READ},
        {.addr=0xd305, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_035E) {
    const struct CPU_State initial_cpu = {.pc=0xc630, .a=0x8f, .x=0x0e, .y=0x14, .sp=0xed, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xc630, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc631, .a=0x8f, .x=0xed, .y=0x14, .sp=0xed, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xc630, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc630, .value=0x9d, .type=IO_READ},
        {.addr=0xc631, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_035F) {
    const struct CPU_State initial_cpu = {.pc=0xe2d0, .a=0x19, .x=0xa7, .y=0x7d, .sp=0xc7, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xe2d0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe2d1, .a=0x19, .x=0xc7, .y=0x7d, .sp=0xc7, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xe2d0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe2d0, .value=0x9d, .type=IO_READ},
        {.addr=0xe2d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0360) {
    const struct CPU_State initial_cpu = {.pc=0xb4d4, .a=0xeb, .x=0xe9, .y=0x31, .sp=0xc2, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xb4d4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb4d5, .a=0xeb, .x=0xc2, .y=0x31, .sp=0xc2, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xb4d4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb4d4, .value=0x9d, .type=IO_READ},
        {.addr=0xb4d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0361) {
    const struct CPU_State initial_cpu = {.pc=0x3257, .a=0x9d, .x=0x2a, .y=0xb4, .sp=0x88, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x3257, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3258, .a=0x9d, .x=0x88, .y=0xb4, .sp=0x88, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x3257, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3257, .value=0x9d, .type=IO_READ},
        {.addr=0x3258, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0362) {
    const struct CPU_State initial_cpu = {.pc=0x1d2d, .a=0x8b, .x=0xbe, .y=0x92, .sp=0x25, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x1d2d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1d2e, .a=0x8b, .x=0x25, .y=0x92, .sp=0x25, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x1d2d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1d2d, .value=0x9d, .type=IO_READ},
        {.addr=0x1d2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0363) {
    const struct CPU_State initial_cpu = {.pc=0x36df, .a=0x6e, .x=0xfb, .y=0xda, .sp=0x83, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x36df, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x36e0, .a=0x6e, .x=0x83, .y=0xda, .sp=0x83, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x36df, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x36df, .value=0x9d, .type=IO_READ},
        {.addr=0x36e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0364) {
    const struct CPU_State initial_cpu = {.pc=0x4c0b, .a=0xb2, .x=0xc2, .y=0x12, .sp=0x58, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x4c0b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4c0c, .a=0xb2, .x=0x58, .y=0x12, .sp=0x58, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x4c0b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4c0b, .value=0x9d, .type=IO_READ},
        {.addr=0x4c0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0365) {
    const struct CPU_State initial_cpu = {.pc=0xaf86, .a=0x13, .x=0x2b, .y=0xfc, .sp=0xe8, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xaf86, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xaf87, .a=0x13, .x=0xe8, .y=0xfc, .sp=0xe8, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xaf86, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xaf86, .value=0x9d, .type=IO_READ},
        {.addr=0xaf87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0366) {
    const struct CPU_State initial_cpu = {.pc=0x32c2, .a=0xa5, .x=0x7a, .y=0xb3, .sp=0x96, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x32c2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x32c3, .a=0xa5, .x=0x96, .y=0xb3, .sp=0x96, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x32c2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x32c2, .value=0x9d, .type=IO_READ},
        {.addr=0x32c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0367) {
    const struct CPU_State initial_cpu = {.pc=0x2108, .a=0xe7, .x=0xf9, .y=0x71, .sp=0xdb, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x2108, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2109, .a=0xe7, .x=0xdb, .y=0x71, .sp=0xdb, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x2108, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2108, .value=0x9d, .type=IO_READ},
        {.addr=0x2109, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0368) {
    const struct CPU_State initial_cpu = {.pc=0xe018, .a=0xf9, .x=0x85, .y=0x44, .sp=0x8b, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xe018, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe019, .a=0xf9, .x=0x8b, .y=0x44, .sp=0x8b, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xe018, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe018, .value=0x9d, .type=IO_READ},
        {.addr=0xe019, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0369) {
    const struct CPU_State initial_cpu = {.pc=0x147e, .a=0x97, .x=0x20, .y=0xb3, .sp=0xc7, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x147e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x147f, .a=0x97, .x=0xc7, .y=0xb3, .sp=0xc7, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x147e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x147e, .value=0x9d, .type=IO_READ},
        {.addr=0x147f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_036A) {
    const struct CPU_State initial_cpu = {.pc=0x6e32, .a=0x41, .x=0x33, .y=0x77, .sp=0xff, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x6e32, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6e33, .a=0x41, .x=0xff, .y=0x77, .sp=0xff, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x6e32, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6e32, .value=0x9d, .type=IO_READ},
        {.addr=0x6e33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_036B) {
    const struct CPU_State initial_cpu = {.pc=0x38ac, .a=0xc6, .x=0x79, .y=0x40, .sp=0xa7, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x38ac, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x38ad, .a=0xc6, .x=0xa7, .y=0x40, .sp=0xa7, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x38ac, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x38ac, .value=0x9d, .type=IO_READ},
        {.addr=0x38ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_036C) {
    const struct CPU_State initial_cpu = {.pc=0xa27a, .a=0xf2, .x=0xe3, .y=0xd0, .sp=0x87, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xa27a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa27b, .a=0xf2, .x=0x87, .y=0xd0, .sp=0x87, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xa27a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa27a, .value=0x9d, .type=IO_READ},
        {.addr=0xa27b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_036D) {
    const struct CPU_State initial_cpu = {.pc=0x2d28, .a=0x6f, .x=0xea, .y=0xb3, .sp=0x31, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x2d28, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2d29, .a=0x6f, .x=0x31, .y=0xb3, .sp=0x31, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x2d28, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2d28, .value=0x9d, .type=IO_READ},
        {.addr=0x2d29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_036E) {
    const struct CPU_State initial_cpu = {.pc=0xcdb5, .a=0x25, .x=0xc4, .y=0xb2, .sp=0x58, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xcdb5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcdb6, .a=0x25, .x=0x58, .y=0xb2, .sp=0x58, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xcdb5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcdb5, .value=0x9d, .type=IO_READ},
        {.addr=0xcdb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_036F) {
    const struct CPU_State initial_cpu = {.pc=0x88ef, .a=0x6b, .x=0x07, .y=0xe5, .sp=0x45, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x88ef, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x88f0, .a=0x6b, .x=0x45, .y=0xe5, .sp=0x45, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x88ef, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x88ef, .value=0x9d, .type=IO_READ},
        {.addr=0x88f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0370) {
    const struct CPU_State initial_cpu = {.pc=0x8a95, .a=0x84, .x=0xcd, .y=0x02, .sp=0x7b, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x8a95, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8a96, .a=0x84, .x=0x7b, .y=0x02, .sp=0x7b, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x8a95, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8a95, .value=0x9d, .type=IO_READ},
        {.addr=0x8a96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0371) {
    const struct CPU_State initial_cpu = {.pc=0xfdea, .a=0xa6, .x=0xcb, .y=0x8c, .sp=0xb0, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xfdea, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xfdeb, .a=0xa6, .x=0xb0, .y=0x8c, .sp=0xb0, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xfdea, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xfdea, .value=0x9d, .type=IO_READ},
        {.addr=0xfdeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0372) {
    const struct CPU_State initial_cpu = {.pc=0xbaa1, .a=0x12, .x=0x51, .y=0xd8, .sp=0x41, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xbaa1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbaa2, .a=0x12, .x=0x41, .y=0xd8, .sp=0x41, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xbaa1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbaa1, .value=0x9d, .type=IO_READ},
        {.addr=0xbaa2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0373) {
    const struct CPU_State initial_cpu = {.pc=0x5f79, .a=0xf6, .x=0xca, .y=0x21, .sp=0x91, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x5f79, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5f7a, .a=0xf6, .x=0x91, .y=0x21, .sp=0x91, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x5f79, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5f79, .value=0x9d, .type=IO_READ},
        {.addr=0x5f7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0374) {
    const struct CPU_State initial_cpu = {.pc=0xbdd9, .a=0x86, .x=0xba, .y=0x93, .sp=0x9a, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xbdd9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbdda, .a=0x86, .x=0x9a, .y=0x93, .sp=0x9a, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xbdd9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbdd9, .value=0x9d, .type=IO_READ},
        {.addr=0xbdda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0375) {
    const struct CPU_State initial_cpu = {.pc=0x2cdf, .a=0x94, .x=0x5a, .y=0x8a, .sp=0x5e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x2cdf, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2ce0, .a=0x94, .x=0x5e, .y=0x8a, .sp=0x5e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x2cdf, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2cdf, .value=0x9d, .type=IO_READ},
        {.addr=0x2ce0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0376) {
    const struct CPU_State initial_cpu = {.pc=0x1c52, .a=0xcd, .x=0x29, .y=0xab, .sp=0xc9, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x1c52, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1c53, .a=0xcd, .x=0xc9, .y=0xab, .sp=0xc9, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x1c52, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1c52, .value=0x9d, .type=IO_READ},
        {.addr=0x1c53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0377) {
    const struct CPU_State initial_cpu = {.pc=0x73d5, .a=0xf5, .x=0xe8, .y=0x5f, .sp=0x6e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x73d5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x73d6, .a=0xf5, .x=0x6e, .y=0x5f, .sp=0x6e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x73d5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x73d5, .value=0x9d, .type=IO_READ},
        {.addr=0x73d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0378) {
    const struct CPU_State initial_cpu = {.pc=0x1f6c, .a=0x5b, .x=0x77, .y=0xb5, .sp=0x35, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x1f6c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1f6d, .a=0x5b, .x=0x35, .y=0xb5, .sp=0x35, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x1f6c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1f6c, .value=0x9d, .type=IO_READ},
        {.addr=0x1f6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0379) {
    const struct CPU_State initial_cpu = {.pc=0xd9db, .a=0x2b, .x=0x6d, .y=0xad, .sp=0xd3, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xd9db, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd9dc, .a=0x2b, .x=0xd3, .y=0xad, .sp=0xd3, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xd9db, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd9db, .value=0x9d, .type=IO_READ},
        {.addr=0xd9dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_037A) {
    const struct CPU_State initial_cpu = {.pc=0x85c1, .a=0x97, .x=0x5c, .y=0x53, .sp=0x8e, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x85c1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x85c2, .a=0x97, .x=0x8e, .y=0x53, .sp=0x8e, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x85c1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x85c1, .value=0x9d, .type=IO_READ},
        {.addr=0x85c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_037B) {
    const struct CPU_State initial_cpu = {.pc=0x9f0c, .a=0x40, .x=0x08, .y=0x20, .sp=0x31, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x9f0c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9f0d, .a=0x40, .x=0x31, .y=0x20, .sp=0x31, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x9f0c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9f0c, .value=0x9d, .type=IO_READ},
        {.addr=0x9f0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_037C) {
    const struct CPU_State initial_cpu = {.pc=0xe2e8, .a=0x44, .x=0xb2, .y=0x3f, .sp=0xf8, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xe2e8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe2e9, .a=0x44, .x=0xf8, .y=0x3f, .sp=0xf8, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xe2e8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe2e8, .value=0x9d, .type=IO_READ},
        {.addr=0xe2e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_037D) {
    const struct CPU_State initial_cpu = {.pc=0xbea5, .a=0x58, .x=0xe8, .y=0xf7, .sp=0x72, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xbea5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbea6, .a=0x58, .x=0x72, .y=0xf7, .sp=0x72, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xbea5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbea5, .value=0x9d, .type=IO_READ},
        {.addr=0xbea6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_037E) {
    const struct CPU_State initial_cpu = {.pc=0xa7a4, .a=0x0b, .x=0x90, .y=0xea, .sp=0x26, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xa7a4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa7a5, .a=0x0b, .x=0x26, .y=0xea, .sp=0x26, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xa7a4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa7a4, .value=0x9d, .type=IO_READ},
        {.addr=0xa7a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_037F) {
    const struct CPU_State initial_cpu = {.pc=0xefa4, .a=0xf4, .x=0xcd, .y=0x36, .sp=0x29, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xefa4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xefa5, .a=0xf4, .x=0x29, .y=0x36, .sp=0x29, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xefa4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xefa4, .value=0x9d, .type=IO_READ},
        {.addr=0xefa5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0380) {
    const struct CPU_State initial_cpu = {.pc=0x9594, .a=0xbc, .x=0xb8, .y=0x3b, .sp=0x1f, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x9594, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9595, .a=0xbc, .x=0x1f, .y=0x3b, .sp=0x1f, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x9594, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9594, .value=0x9d, .type=IO_READ},
        {.addr=0x9595, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0381) {
    const struct CPU_State initial_cpu = {.pc=0x5f2c, .a=0x7e, .x=0x7d, .y=0xc1, .sp=0x9c, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x5f2c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5f2d, .a=0x7e, .x=0x9c, .y=0xc1, .sp=0x9c, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x5f2c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5f2c, .value=0x9d, .type=IO_READ},
        {.addr=0x5f2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0382) {
    const struct CPU_State initial_cpu = {.pc=0xcfae, .a=0xa2, .x=0x38, .y=0x71, .sp=0xa0, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xcfae, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcfaf, .a=0xa2, .x=0xa0, .y=0x71, .sp=0xa0, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xcfae, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcfae, .value=0x9d, .type=IO_READ},
        {.addr=0xcfaf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0383) {
    const struct CPU_State initial_cpu = {.pc=0xec44, .a=0xa2, .x=0x34, .y=0x2e, .sp=0xb3, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xec44, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xec45, .a=0xa2, .x=0xb3, .y=0x2e, .sp=0xb3, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xec44, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xec44, .value=0x9d, .type=IO_READ},
        {.addr=0xec45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0384) {
    const struct CPU_State initial_cpu = {.pc=0xb58a, .a=0x96, .x=0x28, .y=0xfa, .sp=0x06, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xb58a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb58b, .a=0x96, .x=0x06, .y=0xfa, .sp=0x06, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xb58a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb58a, .value=0x9d, .type=IO_READ},
        {.addr=0xb58b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0385) {
    const struct CPU_State initial_cpu = {.pc=0x5b68, .a=0xd2, .x=0x2b, .y=0xee, .sp=0xc1, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x5b68, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5b69, .a=0xd2, .x=0xc1, .y=0xee, .sp=0xc1, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x5b68, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5b68, .value=0x9d, .type=IO_READ},
        {.addr=0x5b69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0386) {
    const struct CPU_State initial_cpu = {.pc=0x0573, .a=0xb6, .x=0xf1, .y=0x39, .sp=0x09, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0573, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0574, .a=0xb6, .x=0x09, .y=0x39, .sp=0x09, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0573, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0573, .value=0x9d, .type=IO_READ},
        {.addr=0x0574, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0387) {
    const struct CPU_State initial_cpu = {.pc=0x1160, .a=0x7e, .x=0x82, .y=0xeb, .sp=0x94, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x1160, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1161, .a=0x7e, .x=0x94, .y=0xeb, .sp=0x94, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x1160, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1160, .value=0x9d, .type=IO_READ},
        {.addr=0x1161, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0388) {
    const struct CPU_State initial_cpu = {.pc=0xf36f, .a=0x5e, .x=0xbe, .y=0xaf, .sp=0x6e, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xf36f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf370, .a=0x5e, .x=0x6e, .y=0xaf, .sp=0x6e, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xf36f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf36f, .value=0x9d, .type=IO_READ},
        {.addr=0xf370, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0389) {
    const struct CPU_State initial_cpu = {.pc=0x5112, .a=0x36, .x=0xc7, .y=0xc6, .sp=0x59, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x5112, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5113, .a=0x36, .x=0x59, .y=0xc6, .sp=0x59, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x5112, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5112, .value=0x9d, .type=IO_READ},
        {.addr=0x5113, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_038A) {
    const struct CPU_State initial_cpu = {.pc=0x5030, .a=0x8e, .x=0xf7, .y=0xf1, .sp=0x4a, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x5030, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5031, .a=0x8e, .x=0x4a, .y=0xf1, .sp=0x4a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x5030, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5030, .value=0x9d, .type=IO_READ},
        {.addr=0x5031, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_038B) {
    const struct CPU_State initial_cpu = {.pc=0xd896, .a=0x1f, .x=0x87, .y=0xc3, .sp=0xb1, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xd896, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd897, .a=0x1f, .x=0xb1, .y=0xc3, .sp=0xb1, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xd896, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd896, .value=0x9d, .type=IO_READ},
        {.addr=0xd897, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_038C) {
    const struct CPU_State initial_cpu = {.pc=0x0154, .a=0x59, .x=0xb4, .y=0xb4, .sp=0xfd, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0155, .a=0x59, .x=0xfd, .y=0xb4, .sp=0xfd, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0154, .value=0x9d, .type=IO_READ},
        {.addr=0x0155, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_038D) {
    const struct CPU_State initial_cpu = {.pc=0x27e0, .a=0xa9, .x=0x8b, .y=0x83, .sp=0x00, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x27e0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x27e1, .a=0xa9, .x=0x00, .y=0x83, .sp=0x00, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x27e0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x27e0, .value=0x9d, .type=IO_READ},
        {.addr=0x27e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_038E) {
    const struct CPU_State initial_cpu = {.pc=0xad5d, .a=0xf6, .x=0xe2, .y=0xb3, .sp=0x7d, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xad5d, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xad5e, .a=0xf6, .x=0x7d, .y=0xb3, .sp=0x7d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xad5d, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xad5d, .value=0x9d, .type=IO_READ},
        {.addr=0xad5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_038F) {
    const struct CPU_State initial_cpu = {.pc=0x993c, .a=0xc9, .x=0x4e, .y=0xa8, .sp=0xde, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x993c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x993d, .a=0xc9, .x=0xde, .y=0xa8, .sp=0xde, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x993c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x993c, .value=0x9d, .type=IO_READ},
        {.addr=0x993d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0390) {
    const struct CPU_State initial_cpu = {.pc=0xd3dd, .a=0xf5, .x=0x5e, .y=0x90, .sp=0x02, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xd3dd, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd3de, .a=0xf5, .x=0x02, .y=0x90, .sp=0x02, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xd3dd, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd3dd, .value=0x9d, .type=IO_READ},
        {.addr=0xd3de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0391) {
    const struct CPU_State initial_cpu = {.pc=0x12e1, .a=0xd6, .x=0x1e, .y=0x85, .sp=0x9b, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x12e1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x12e2, .a=0xd6, .x=0x9b, .y=0x85, .sp=0x9b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x12e1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x12e1, .value=0x9d, .type=IO_READ},
        {.addr=0x12e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0392) {
    const struct CPU_State initial_cpu = {.pc=0xd70e, .a=0xdb, .x=0x85, .y=0xc6, .sp=0x38, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xd70e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd70f, .a=0xdb, .x=0x38, .y=0xc6, .sp=0x38, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xd70e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd70e, .value=0x9d, .type=IO_READ},
        {.addr=0xd70f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0393) {
    const struct CPU_State initial_cpu = {.pc=0x7efc, .a=0xaf, .x=0xdc, .y=0xb0, .sp=0x44, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x7efc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7efd, .a=0xaf, .x=0x44, .y=0xb0, .sp=0x44, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x7efc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7efc, .value=0x9d, .type=IO_READ},
        {.addr=0x7efd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0394) {
    const struct CPU_State initial_cpu = {.pc=0x3b9c, .a=0x97, .x=0x25, .y=0xa8, .sp=0x34, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x3b9c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3b9d, .a=0x97, .x=0x34, .y=0xa8, .sp=0x34, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x3b9c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3b9c, .value=0x9d, .type=IO_READ},
        {.addr=0x3b9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0395) {
    const struct CPU_State initial_cpu = {.pc=0x7472, .a=0x8f, .x=0x53, .y=0xcb, .sp=0x88, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x7472, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7473, .a=0x8f, .x=0x88, .y=0xcb, .sp=0x88, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x7472, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7472, .value=0x9d, .type=IO_READ},
        {.addr=0x7473, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0396) {
    const struct CPU_State initial_cpu = {.pc=0x8f43, .a=0x03, .x=0x57, .y=0x6a, .sp=0xd2, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x8f43, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8f44, .a=0x03, .x=0xd2, .y=0x6a, .sp=0xd2, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x8f43, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8f43, .value=0x9d, .type=IO_READ},
        {.addr=0x8f44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0397) {
    const struct CPU_State initial_cpu = {.pc=0x0e7b, .a=0x68, .x=0x69, .y=0x9f, .sp=0xc5, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0e7b, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0e7c, .a=0x68, .x=0xc5, .y=0x9f, .sp=0xc5, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0e7b, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0e7b, .value=0x9d, .type=IO_READ},
        {.addr=0x0e7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0398) {
    const struct CPU_State initial_cpu = {.pc=0x8d04, .a=0x4c, .x=0xce, .y=0xac, .sp=0xf1, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x8d04, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8d05, .a=0x4c, .x=0xf1, .y=0xac, .sp=0xf1, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x8d04, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8d04, .value=0x9d, .type=IO_READ},
        {.addr=0x8d05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_0399) {
    const struct CPU_State initial_cpu = {.pc=0x670a, .a=0x22, .x=0x3b, .y=0x6c, .sp=0x7f, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x670a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x670b, .a=0x22, .x=0x7f, .y=0x6c, .sp=0x7f, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x670a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x670a, .value=0x9d, .type=IO_READ},
        {.addr=0x670b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_039A) {
    const struct CPU_State initial_cpu = {.pc=0xb24c, .a=0x12, .x=0xe1, .y=0x79, .sp=0xdb, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xb24c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb24d, .a=0x12, .x=0xdb, .y=0x79, .sp=0xdb, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xb24c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb24c, .value=0x9d, .type=IO_READ},
        {.addr=0xb24d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_039B) {
    const struct CPU_State initial_cpu = {.pc=0xf5f0, .a=0xba, .x=0xb6, .y=0x4d, .sp=0x74, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xf5f0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf5f1, .a=0xba, .x=0x74, .y=0x4d, .sp=0x74, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xf5f0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf5f0, .value=0x9d, .type=IO_READ},
        {.addr=0xf5f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_039C) {
    const struct CPU_State initial_cpu = {.pc=0xe9d0, .a=0xad, .x=0xe7, .y=0x7f, .sp=0x40, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xe9d0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe9d1, .a=0xad, .x=0x40, .y=0x7f, .sp=0x40, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xe9d0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe9d0, .value=0x9d, .type=IO_READ},
        {.addr=0xe9d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_039D) {
    const struct CPU_State initial_cpu = {.pc=0x9efe, .a=0x74, .x=0xa3, .y=0xa0, .sp=0xb3, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x9efe, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9eff, .a=0x74, .x=0xb3, .y=0xa0, .sp=0xb3, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9efe, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9efe, .value=0x9d, .type=IO_READ},
        {.addr=0x9eff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_039E) {
    const struct CPU_State initial_cpu = {.pc=0xcf1a, .a=0x8e, .x=0x10, .y=0xe9, .sp=0x5a, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xcf1a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcf1b, .a=0x8e, .x=0x5a, .y=0xe9, .sp=0x5a, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xcf1a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcf1a, .value=0x9d, .type=IO_READ},
        {.addr=0xcf1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_039F) {
    const struct CPU_State initial_cpu = {.pc=0x0681, .a=0x91, .x=0x8c, .y=0x37, .sp=0x7d, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0681, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0682, .a=0x91, .x=0x7d, .y=0x37, .sp=0x7d, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0681, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0681, .value=0x9d, .type=IO_READ},
        {.addr=0x0682, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xcecd, .a=0x28, .x=0xa6, .y=0xf1, .sp=0xbe, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xcecd, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcece, .a=0x28, .x=0xbe, .y=0xf1, .sp=0xbe, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xcecd, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcecd, .value=0x9d, .type=IO_READ},
        {.addr=0xcece, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x49e1, .a=0x4e, .x=0x28, .y=0x72, .sp=0x31, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x49e1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x49e2, .a=0x4e, .x=0x31, .y=0x72, .sp=0x31, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x49e1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x49e1, .value=0x9d, .type=IO_READ},
        {.addr=0x49e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xf34c, .a=0xc4, .x=0x12, .y=0x08, .sp=0x9b, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xf34c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf34d, .a=0xc4, .x=0x9b, .y=0x08, .sp=0x9b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xf34c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf34c, .value=0x9d, .type=IO_READ},
        {.addr=0xf34d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x4383, .a=0xd2, .x=0xea, .y=0x96, .sp=0xb5, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x4383, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4384, .a=0xd2, .x=0xb5, .y=0x96, .sp=0xb5, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x4383, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4383, .value=0x9d, .type=IO_READ},
        {.addr=0x4384, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x4004, .a=0x18, .x=0x81, .y=0x01, .sp=0xba, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x4004, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4005, .a=0x18, .x=0xba, .y=0x01, .sp=0xba, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x4004, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4004, .value=0x9d, .type=IO_READ},
        {.addr=0x4005, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x84ee, .a=0x30, .x=0x54, .y=0x7b, .sp=0xad, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x84ee, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x84ef, .a=0x30, .x=0xad, .y=0x7b, .sp=0xad, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x84ee, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x84ee, .value=0x9d, .type=IO_READ},
        {.addr=0x84ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x2112, .a=0xd0, .x=0xa5, .y=0xd7, .sp=0xc3, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x2112, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2113, .a=0xd0, .x=0xc3, .y=0xd7, .sp=0xc3, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x2112, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2112, .value=0x9d, .type=IO_READ},
        {.addr=0x2113, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xb3ec, .a=0x1c, .x=0x48, .y=0x24, .sp=0xc8, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xb3ec, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb3ed, .a=0x1c, .x=0xc8, .y=0x24, .sp=0xc8, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xb3ec, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb3ec, .value=0x9d, .type=IO_READ},
        {.addr=0xb3ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xd178, .a=0x00, .x=0x16, .y=0x77, .sp=0x62, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xd178, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd179, .a=0x00, .x=0x62, .y=0x77, .sp=0x62, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xd178, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd178, .value=0x9d, .type=IO_READ},
        {.addr=0xd179, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xd756, .a=0x38, .x=0xc2, .y=0x0e, .sp=0xa0, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xd756, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xd757, .a=0x38, .x=0xa0, .y=0x0e, .sp=0xa0, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd756, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xd756, .value=0x9d, .type=IO_READ},
        {.addr=0xd757, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x5733, .a=0xda, .x=0x3c, .y=0x3d, .sp=0xa5, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x5733, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5734, .a=0xda, .x=0xa5, .y=0x3d, .sp=0xa5, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x5733, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5733, .value=0x9d, .type=IO_READ},
        {.addr=0x5734, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xa5bc, .a=0x48, .x=0x37, .y=0xd3, .sp=0xad, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xa5bc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa5bd, .a=0x48, .x=0xad, .y=0xd3, .sp=0xad, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xa5bc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa5bc, .value=0x9d, .type=IO_READ},
        {.addr=0xa5bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xc5c4, .a=0x0a, .x=0xe0, .y=0x72, .sp=0x8d, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xc5c4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc5c5, .a=0x0a, .x=0x8d, .y=0x72, .sp=0x8d, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xc5c4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc5c4, .value=0x9d, .type=IO_READ},
        {.addr=0xc5c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x21c2, .a=0xb8, .x=0xec, .y=0xd2, .sp=0xbc, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x21c2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x21c3, .a=0xb8, .x=0xbc, .y=0xd2, .sp=0xbc, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x21c2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x21c2, .value=0x9d, .type=IO_READ},
        {.addr=0x21c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x6a89, .a=0x17, .x=0x35, .y=0x18, .sp=0xdf, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x6a89, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6a8a, .a=0x17, .x=0xdf, .y=0x18, .sp=0xdf, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x6a89, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x6a89, .value=0x9d, .type=IO_READ},
        {.addr=0x6a8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x8f11, .a=0x2c, .x=0x4b, .y=0x45, .sp=0xb4, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x8f11, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8f12, .a=0x2c, .x=0xb4, .y=0x45, .sp=0xb4, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x8f11, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8f11, .value=0x9d, .type=IO_READ},
        {.addr=0x8f12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x9c30, .a=0x2e, .x=0xe6, .y=0x6b, .sp=0xa3, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x9c30, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9c31, .a=0x2e, .x=0xa3, .y=0x6b, .sp=0xa3, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x9c30, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9c30, .value=0x9d, .type=IO_READ},
        {.addr=0x9c31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x7df9, .a=0xf9, .x=0xb7, .y=0x36, .sp=0xa2, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x7df9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7dfa, .a=0xf9, .x=0xa2, .y=0x36, .sp=0xa2, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x7df9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7df9, .value=0x9d, .type=IO_READ},
        {.addr=0x7dfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xa492, .a=0xbe, .x=0xbc, .y=0xbc, .sp=0x60, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xa492, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa493, .a=0xbe, .x=0x60, .y=0xbc, .sp=0x60, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa492, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa492, .value=0x9d, .type=IO_READ},
        {.addr=0xa493, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x9609, .a=0xe2, .x=0xf9, .y=0xb9, .sp=0x16, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x9609, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x960a, .a=0xe2, .x=0x16, .y=0xb9, .sp=0x16, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9609, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9609, .value=0x9d, .type=IO_READ},
        {.addr=0x960a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x2b3f, .a=0x10, .x=0x3c, .y=0xc7, .sp=0xa5, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x2b3f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x2b40, .a=0x10, .x=0xa5, .y=0xc7, .sp=0xa5, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x2b3f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x2b3f, .value=0x9d, .type=IO_READ},
        {.addr=0x2b40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xcfca, .a=0xd3, .x=0x3a, .y=0xcc, .sp=0xd6, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xcfca, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcfcb, .a=0xd3, .x=0xd6, .y=0xcc, .sp=0xd6, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xcfca, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcfca, .value=0x9d, .type=IO_READ},
        {.addr=0xcfcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xa43a, .a=0x75, .x=0xbc, .y=0x52, .sp=0xc6, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xa43a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa43b, .a=0x75, .x=0xc6, .y=0x52, .sp=0xc6, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xa43a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa43a, .value=0x9d, .type=IO_READ},
        {.addr=0xa43b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x7355, .a=0x06, .x=0x15, .y=0xf5, .sp=0x87, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x7355, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7356, .a=0x06, .x=0x87, .y=0xf5, .sp=0x87, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x7355, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7355, .value=0x9d, .type=IO_READ},
        {.addr=0x7356, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x3e53, .a=0x86, .x=0x98, .y=0x0e, .sp=0x24, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x3e53, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3e54, .a=0x86, .x=0x24, .y=0x0e, .sp=0x24, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x3e53, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3e53, .value=0x9d, .type=IO_READ},
        {.addr=0x3e54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x5eb1, .a=0xd0, .x=0x6c, .y=0x39, .sp=0x63, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x5eb1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5eb2, .a=0xd0, .x=0x63, .y=0x39, .sp=0x63, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x5eb1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5eb1, .value=0x9d, .type=IO_READ},
        {.addr=0x5eb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x3063, .a=0xc5, .x=0x25, .y=0x80, .sp=0xb7, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x3063, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3064, .a=0xc5, .x=0xb7, .y=0x80, .sp=0xb7, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x3063, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x3063, .value=0x9d, .type=IO_READ},
        {.addr=0x3064, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xf427, .a=0xdb, .x=0xd5, .y=0x4a, .sp=0x5a, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xf427, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf428, .a=0xdb, .x=0x5a, .y=0x4a, .sp=0x5a, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xf427, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf427, .value=0x9d, .type=IO_READ},
        {.addr=0xf428, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x51a3, .a=0x37, .x=0x89, .y=0x0c, .sp=0xe6, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x51a3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x51a4, .a=0x37, .x=0xe6, .y=0x0c, .sp=0xe6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x51a3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x51a3, .value=0x9d, .type=IO_READ},
        {.addr=0x51a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x106e, .a=0x71, .x=0xea, .y=0x1f, .sp=0xd1, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x106e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x106f, .a=0x71, .x=0xd1, .y=0x1f, .sp=0xd1, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x106e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x106e, .value=0x9d, .type=IO_READ},
        {.addr=0x106f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xe6a5, .a=0x57, .x=0xd0, .y=0x49, .sp=0x33, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xe6a5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe6a6, .a=0x57, .x=0x33, .y=0x49, .sp=0x33, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xe6a5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe6a5, .value=0x9d, .type=IO_READ},
        {.addr=0xe6a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x24cc, .a=0xc7, .x=0x0e, .y=0x52, .sp=0xb8, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x24cc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x24cd, .a=0xc7, .x=0xb8, .y=0x52, .sp=0xb8, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x24cc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x24cc, .value=0x9d, .type=IO_READ},
        {.addr=0x24cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x5b2a, .a=0xe1, .x=0x28, .y=0xc9, .sp=0x8c, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x5b2a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5b2b, .a=0xe1, .x=0x8c, .y=0xc9, .sp=0x8c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x5b2a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5b2a, .value=0x9d, .type=IO_READ},
        {.addr=0x5b2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x0151, .a=0xcf, .x=0xe9, .y=0xf4, .sp=0x81, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0152, .a=0xcf, .x=0x81, .y=0xf4, .sp=0x81, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0151, .value=0x9d, .type=IO_READ},
        {.addr=0x0152, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x13d5, .a=0x52, .x=0xae, .y=0x8d, .sp=0xe0, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x13d5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x13d6, .a=0x52, .x=0xe0, .y=0x8d, .sp=0xe0, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x13d5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x13d5, .value=0x9d, .type=IO_READ},
        {.addr=0x13d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x0550, .a=0x77, .x=0x9f, .y=0xec, .sp=0xf0, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0550, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0551, .a=0x77, .x=0xf0, .y=0xec, .sp=0xf0, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0550, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0550, .value=0x9d, .type=IO_READ},
        {.addr=0x0551, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x57e5, .a=0xda, .x=0x3e, .y=0x00, .sp=0xfa, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x57e5, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x57e6, .a=0xda, .x=0xfa, .y=0x00, .sp=0xfa, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x57e5, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x57e5, .value=0x9d, .type=IO_READ},
        {.addr=0x57e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xcefc, .a=0x31, .x=0x3a, .y=0xee, .sp=0x15, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xcefc, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xcefd, .a=0x31, .x=0x15, .y=0xee, .sp=0x15, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xcefc, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xcefc, .value=0x9d, .type=IO_READ},
        {.addr=0xcefd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x63b1, .a=0x7d, .x=0x7f, .y=0x97, .sp=0x93, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x63b1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x63b2, .a=0x7d, .x=0x93, .y=0x97, .sp=0x93, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x63b1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x63b1, .value=0x9d, .type=IO_READ},
        {.addr=0x63b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xceb1, .a=0xb7, .x=0x1d, .y=0xb1, .sp=0x86, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xceb1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xceb2, .a=0xb7, .x=0x86, .y=0xb1, .sp=0x86, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xceb1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xceb1, .value=0x9d, .type=IO_READ},
        {.addr=0xceb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x1d44, .a=0xc3, .x=0x0e, .y=0x43, .sp=0xbb, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x1d44, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1d45, .a=0xc3, .x=0xbb, .y=0x43, .sp=0xbb, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x1d44, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1d44, .value=0x9d, .type=IO_READ},
        {.addr=0x1d45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x1f26, .a=0x2b, .x=0x23, .y=0x5c, .sp=0xec, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x1f26, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1f27, .a=0x2b, .x=0xec, .y=0x5c, .sp=0xec, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x1f26, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1f26, .value=0x9d, .type=IO_READ},
        {.addr=0x1f27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x1080, .a=0x59, .x=0x2f, .y=0x76, .sp=0x46, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x1080, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1081, .a=0x59, .x=0x46, .y=0x76, .sp=0x46, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x1080, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1080, .value=0x9d, .type=IO_READ},
        {.addr=0x1081, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x0970, .a=0xd2, .x=0xd4, .y=0x1f, .sp=0x7e, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0970, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0971, .a=0xd2, .x=0x7e, .y=0x1f, .sp=0x7e, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0970, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0970, .value=0x9d, .type=IO_READ},
        {.addr=0x0971, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x7246, .a=0xcf, .x=0xc0, .y=0x1d, .sp=0xdd, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x7246, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7247, .a=0xcf, .x=0xdd, .y=0x1d, .sp=0xdd, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x7246, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7246, .value=0x9d, .type=IO_READ},
        {.addr=0x7247, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xbe9f, .a=0x58, .x=0xb5, .y=0x0f, .sp=0x14, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xbe9f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbea0, .a=0x58, .x=0x14, .y=0x0f, .sp=0x14, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xbe9f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbe9f, .value=0x9d, .type=IO_READ},
        {.addr=0xbea0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xf3cb, .a=0xd6, .x=0x6c, .y=0x3c, .sp=0xac, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xf3cb, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xf3cc, .a=0xd6, .x=0xac, .y=0x3c, .sp=0xac, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xf3cb, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xf3cb, .value=0x9d, .type=IO_READ},
        {.addr=0xf3cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x5263, .a=0xb1, .x=0x31, .y=0x5a, .sp=0xe0, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x5263, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5264, .a=0xb1, .x=0xe0, .y=0x5a, .sp=0xe0, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x5263, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5263, .value=0x9d, .type=IO_READ},
        {.addr=0x5264, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xa9b3, .a=0xeb, .x=0x7c, .y=0x5b, .sp=0xd6, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xa9b3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa9b4, .a=0xeb, .x=0xd6, .y=0x5b, .sp=0xd6, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xa9b3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa9b3, .value=0x9d, .type=IO_READ},
        {.addr=0xa9b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x0069, .a=0x0e, .x=0xaf, .y=0x2b, .sp=0x33, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x006a, .a=0x0e, .x=0x33, .y=0x2b, .sp=0x33, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0069, .value=0x9d, .type=IO_READ},
        {.addr=0x006a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x21e6, .a=0x05, .x=0x65, .y=0x87, .sp=0x57, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x21e6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x21e7, .a=0x05, .x=0x57, .y=0x87, .sp=0x57, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x21e6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x21e6, .value=0x9d, .type=IO_READ},
        {.addr=0x21e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x0d69, .a=0x70, .x=0x98, .y=0xab, .sp=0x16, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0d69, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0d6a, .a=0x70, .x=0x16, .y=0xab, .sp=0x16, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0d69, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0d69, .value=0x9d, .type=IO_READ},
        {.addr=0x0d6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xc2f8, .a=0xe5, .x=0xe0, .y=0xf4, .sp=0xd5, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xc2f8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xc2f9, .a=0xe5, .x=0xd5, .y=0xf4, .sp=0xd5, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xc2f8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xc2f8, .value=0x9d, .type=IO_READ},
        {.addr=0xc2f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x1d85, .a=0x6f, .x=0x8f, .y=0x7c, .sp=0xd3, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x1d85, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1d86, .a=0x6f, .x=0xd3, .y=0x7c, .sp=0xd3, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x1d85, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1d85, .value=0x9d, .type=IO_READ},
        {.addr=0x1d86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x8cb2, .a=0x71, .x=0x05, .y=0x34, .sp=0x68, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x8cb2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8cb3, .a=0x71, .x=0x68, .y=0x34, .sp=0x68, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x8cb2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8cb2, .value=0x9d, .type=IO_READ},
        {.addr=0x8cb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x5672, .a=0xd1, .x=0x52, .y=0x9f, .sp=0x3a, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x5672, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5673, .a=0xd1, .x=0x3a, .y=0x9f, .sp=0x3a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x5672, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5672, .value=0x9d, .type=IO_READ},
        {.addr=0x5673, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x9ffa, .a=0x15, .x=0x7c, .y=0x5c, .sp=0x32, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x9ffa, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9ffb, .a=0x15, .x=0x32, .y=0x5c, .sp=0x32, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x9ffa, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9ffa, .value=0x9d, .type=IO_READ},
        {.addr=0x9ffb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x7096, .a=0xa6, .x=0xbf, .y=0x0a, .sp=0x13, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x7096, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7097, .a=0xa6, .x=0x13, .y=0x0a, .sp=0x13, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7096, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7096, .value=0x9d, .type=IO_READ},
        {.addr=0x7097, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xce67, .a=0x30, .x=0xdd, .y=0x7a, .sp=0x70, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xce67, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xce68, .a=0x30, .x=0x70, .y=0x7a, .sp=0x70, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xce67, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xce67, .value=0x9d, .type=IO_READ},
        {.addr=0xce68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xabc8, .a=0x8a, .x=0x78, .y=0x37, .sp=0xb7, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xabc8, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xabc9, .a=0x8a, .x=0xb7, .y=0x37, .sp=0xb7, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xabc8, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xabc8, .value=0x9d, .type=IO_READ},
        {.addr=0xabc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x4ca0, .a=0xd1, .x=0x9a, .y=0x11, .sp=0x6e, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x4ca0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4ca1, .a=0xd1, .x=0x6e, .y=0x11, .sp=0x6e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x4ca0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4ca0, .value=0x9d, .type=IO_READ},
        {.addr=0x4ca1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xe519, .a=0xf5, .x=0x21, .y=0xcf, .sp=0xe4, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xe519, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xe51a, .a=0xf5, .x=0xe4, .y=0xcf, .sp=0xe4, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xe519, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xe519, .value=0x9d, .type=IO_READ},
        {.addr=0xe51a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x75c7, .a=0x81, .x=0xb4, .y=0x2b, .sp=0x51, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x75c7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x75c8, .a=0x81, .x=0x51, .y=0x2b, .sp=0x51, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x75c7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x75c7, .value=0x9d, .type=IO_READ},
        {.addr=0x75c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x0ca7, .a=0xa3, .x=0x9f, .y=0x96, .sp=0xb8, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0ca7, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x0ca8, .a=0xa3, .x=0xb8, .y=0x96, .sp=0xb8, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0ca7, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0ca7, .value=0x9d, .type=IO_READ},
        {.addr=0x0ca8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x5a9c, .a=0xbf, .x=0xe2, .y=0xb4, .sp=0x75, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x5a9c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5a9d, .a=0xbf, .x=0x75, .y=0xb4, .sp=0x75, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x5a9c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5a9c, .value=0x9d, .type=IO_READ},
        {.addr=0x5a9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x298e, .a=0x3d, .x=0x4f, .y=0xcb, .sp=0x2a, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x298e, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x298f, .a=0x3d, .x=0x2a, .y=0xcb, .sp=0x2a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x298e, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x298e, .value=0x9d, .type=IO_READ},
        {.addr=0x298f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xbb49, .a=0xa4, .x=0x30, .y=0xd0, .sp=0xf4, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xbb49, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbb4a, .a=0xa4, .x=0xf4, .y=0xd0, .sp=0xf4, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xbb49, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbb49, .value=0x9d, .type=IO_READ},
        {.addr=0xbb4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xbce2, .a=0x5b, .x=0x7b, .y=0xff, .sp=0x86, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xbce2, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbce3, .a=0x5b, .x=0x86, .y=0xff, .sp=0x86, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xbce2, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbce2, .value=0x9d, .type=IO_READ},
        {.addr=0xbce3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xbe6a, .a=0x64, .x=0x20, .y=0xae, .sp=0xa9, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xbe6a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xbe6b, .a=0x64, .x=0xa9, .y=0xae, .sp=0xa9, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xbe6a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xbe6a, .value=0x9d, .type=IO_READ},
        {.addr=0xbe6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x8d83, .a=0x17, .x=0x26, .y=0x26, .sp=0xd7, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x8d83, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x8d84, .a=0x17, .x=0xd7, .y=0x26, .sp=0xd7, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x8d83, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x8d83, .value=0x9d, .type=IO_READ},
        {.addr=0x8d84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xea87, .a=0x7e, .x=0xa3, .y=0x51, .sp=0xa8, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xea87, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xea88, .a=0x7e, .x=0xa8, .y=0x51, .sp=0xa8, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xea87, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xea87, .value=0x9d, .type=IO_READ},
        {.addr=0xea88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9D, _9D_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xb9d3, .a=0xe0, .x=0x7a, .y=0x49, .sp=0xae, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xb9d3, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xb9d4, .a=0xe0, .x=0xae, .y=0x49, .sp=0xae, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xb9d3, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xb9d3, .value=0x9d, .type=IO_READ},
        {.addr=0xb9d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9D 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
